using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.AI;
using DG.Tweening;
using TMPro;
public class PlayerController : MonoBehaviour
{
    [Header("Playerのステータス")]
    public int maxHp = 100;
    public int maxMp = 100;
    public int attack;
    public int throwAttack = 0;
    public float addHealthRate = 1;
    public float addAttackRate = 1;
    public float addDefenceRate = 1;

    int cloneHpRate = 2;
    int cloneAttackRate = 2;
    int cloneDefenceRate = 2;
    [SerializeField] private float attackInterval;//攻撃間隔
    [SerializeField] private int defense;
    public float moveSpeed; //agentSpeed
    [SerializeField] private int Agility;//回比率

    //通常変数
    int hp;
    int mp;
    float lastAttackTime = 0f; //最後に攻撃した時間

    [Header("Playerの状態")]
    public bool IsDead = false;
    public bool isAttacking = false;//攻撃中かどうかの判定
    public bool CantMove = false;//移動できない状態の判定
    public bool isDropRateUp = false;
    public bool battleStartHeal = false;
    public Weapon defaultWeapon = null;
    //武器の装備箇所
    [SerializeField] Transform rightHandTransform = null;
    [SerializeField] Transform leftHandTransform = null;
    //防具の装備箇所
    [SerializeField] Transform headTransform = null; //アタマ防具
    [SerializeField] Transform backPackTransform = null;　//バックパック
    [SerializeField] Transform bodyTransform = null;　//鎧、マント

    public Transform enemyTarget; // 敵の位置
    public NavMeshAgent agent; // NavMesh Agent
    public float StopDistance;//NavMeshAgent
    private Animator animator;

    //public Collider weaponCollider;//武器の当たり判定
    public PlayerUIManager playerUIManager;

    Rigidbody rb;

    public GameObject playerPrefab;

    private Vector3 initialPosition;

    public Weapon currentWeapon = null;

    [SerializeField] Armor currentArmor = null;
    [SerializeField] Armor currentHead = null;
    [SerializeField] Armor currentBackpack = null;
    BoxCollider weaponCollider;
    bool isHealingSword = false;

    //public GameObject NoWeapon_r;
    //public GameObject NoWeapon_l;

    //public GameObject[] NoWeapons;
    public Collider[] playerColliders;
    public BoxCollider noWeaponCols;


    public bool enemyChase = true;

    public TextMeshProUGUI missText; //インスペクターで固定する

    public ParticleSystem increaseEffect;

    void Start()
    {
        if (!PlayerPrefs.HasKey("HP"))
        {
            maxHp = (int)(maxHp * addHealthRate);
            hp = maxHp;
            mp = maxMp;
        }
        else
        {
            hp = PlayerPrefs.GetInt("HP");
            mp = PlayerPrefs.GetInt("MP");
        }
        UpdateStats();

        agent = GetComponent<NavMeshAgent>(); // NavMesh Agentの取得
        moveSpeed = agent.speed;
        // Animatorコンポーネントを取得
        animator = GetComponent<Animator>();
        rb = GetComponent<Rigidbody>();
        DisableColliderWeapon();//武器の当たり判定無効化

        playerUIManager.Init(this);//スライダーの初期化
        initialPosition = transform.position;

        EquipWeapon(defaultWeapon);

        //コレクションの効果を反映
        for (int i = 1; i < UIManager.instance.collectionContent.transform.childCount; i++)
        {
            //カードを所持していたら...以下の処理を行う
            if (PlayerPrefs.HasKey($"Collection{i}"))
            {
                //コレクションの効果を反映
                CollectionEffect(i);
            }
        }
        SaveStatus();
        LoadStatus();
    }

    public void SaveStatus()
    {
        PlayerPrefs.SetInt("HP", hp);
        PlayerPrefs.SetInt("MP", mp);
        PlayerPrefs.SetInt("Attack", attack);
        PlayerPrefs.SetInt("Defense", defense);
        PlayerPrefs.SetInt("Agility", Agility);
        PlayerPrefs.SetInt("MaxHP", maxHp);
        PlayerPrefs.SetInt("MaxMP", maxMp);
    }

    void LoadStatus()
    {
        hp = PlayerPrefs.GetInt("HP");
        playerUIManager.UpdateHP(maxHp, hp);
        mp = PlayerPrefs.GetInt("MP");
        playerUIManager.UpdateMP(maxMp, mp);
        attack = PlayerPrefs.GetInt("Attack");
        defense = PlayerPrefs.GetInt("Defense");
        Agility = PlayerPrefs.GetInt("Agility");
        maxHp = PlayerPrefs.GetInt("MaxHP");
        maxMp = PlayerPrefs.GetInt("MaxMP");
    }

    void Update()
    {
        //死亡中とバトル状態じゃないときはリターン
        if (IsDead || GameManager.instance.battleState == false)
        {
            //print("プレイヤーが死亡しました");
            return;
        }

        // 現在のターゲットが死んでいれば新しいターゲットを探す
        if (enemyTarget != null)
        {
            EnemyController targetEnemy = enemyTarget.GetComponent<EnemyController>();
            if (targetEnemy != null && targetEnemy.IsDead)
            {
                //print("エネミーを倒したので次のターゲットを探します");
                FindClosestEnemy(transform);
            }
        }

        transform.LookAt(enemyTarget);//常に敵のほうを向く
        if (GameManager.instance.battleState == true || Input.GetKeyDown(KeyCode.Space))
        {
            //接近攻撃の場合はPlayerとEnemyが触れたときに攻撃する
            if (!enemyChase)
            {
                //print("攻撃範囲内");
                if (CanAttack()) //攻撃可能
                {
                    //print("攻撃");
                    Attack(); // 攻撃
                    if (!isHealingSword) return;
                    //回復の剣の効果
                    if (Random.Range(0, 100) < 10)
                    {
                        HPHeal(5);
                    }
                }
                else//攻撃までのインターバル中
                {
                    //print("防御");
                    Defend(); // 防御
                }
                agent.isStopped = true;
            }
            else
            {
                //print("範囲外");
                agent.SetDestination(enemyTarget.position); // 敵に向かって移動開始
                Move(); // 移動アニメ
                agent.isStopped = false; // 移動を再開
            }
        }
    }

    //武器をプレイヤーの手に装備させる
    public void EquipWeapon(Weapon weapon)
    {
        if (weapon == null) return;
        //playerCollidersの要素全てをenabledをfalseにする
        for (int i = 0; i < playerColliders.Length; i++)
        {
            playerColliders[i].enabled = false;
        }
        //今装備している武器の種類によって当たり判定を変える
        currentWeapon = weapon;
        switch (currentWeapon.weaponType)
        {
            case Weapon.WeaponType.NoWeapon:
                playerColliders[0].enabled = true;
                break;
            case Weapon.WeaponType.OneHandSword:
                playerColliders[0].enabled = true;
                break;
            case Weapon.WeaponType.TwoHandSword:
                playerColliders[0].enabled = true;
                break;
            case Weapon.WeaponType.Shield:
                playerColliders[0].enabled = true;
                break;
            case Weapon.WeaponType.Spear:
                playerColliders[0].enabled = true;
                break;
            case Weapon.WeaponType.Arrow:
                playerColliders[1].enabled = true;
                break;
            case Weapon.WeaponType.Wand:
                playerColliders[1].enabled = true;
                break;
        }

        //武器を生成
        weapon.Spawn(rightHandTransform, leftHandTransform, animator);

        //武器のコライダーを取得
        weaponCollider = currentWeapon.GetCollider();

        //武器による距離を調整
        StopDistance = weapon.GetRange();
        agent.stoppingDistance = StopDistance;

        print(weapon + "を装備しました");

        UpdateStats();
    }

    public void EquipArmor(Armor armor)
    {
        if (armor == null)
        {
            return;
        }

        //防具を生成
        armor.Spawn(headTransform, bodyTransform, backPackTransform);


        switch (armor.armorType)
        {
            case Armor.ArmorType.Head: currentHead = armor; break;
            case Armor.ArmorType.Body: currentArmor = armor; break;
            case Armor.ArmorType.BackPack: currentBackpack = armor; break;
        }

        UpdateStats();

        print("防具を装備した");
    }

    private void UpdateStats()
    {
        //前回の装備のステータスを引く
        if (currentWeapon != null)
        {
            attack -= currentWeapon.GetATKPoint();
            defense -= currentWeapon.GetDEFPoint();
        }
        //武器と防具量を加算
        AddWeaponState();
        AddArmorState();
    }


    private void AddWeaponState()
    {
        //装備の攻撃を追加
        if (currentWeapon == null)
        {
            attack += 5;//素手の攻撃力
            return;
        }

        int weaponATK = currentWeapon.GetATKPoint();
        int weaponDEF = currentWeapon.GetDEFPoint();
        print("攻撃力" + weaponATK);
        print("防御力" + weaponDEF);

        attack += weaponATK;
        defense += weaponDEF;
    }

    private void AddArmorState()
    {
        int armorATK = 0;
        int armorDEF = 0;
        int armorAGI = 0;
        int armorMAXHP = 0;
        int armorMAXMP = 0;

        if (currentArmor != null)
        {
            armorATK += currentArmor.GetATKPoint();
            armorDEF += currentArmor.GetDEFPoint();
            armorAGI += currentArmor.GetAGIPoint();
            armorMAXHP += currentArmor.GetAddMAXHP();
            armorMAXMP += currentArmor.GetAddMAXMP();
        }

        if (currentHead != null)
        {
            armorATK += currentHead.GetATKPoint();
            armorDEF += currentHead.GetDEFPoint();
            armorAGI += currentHead.GetAGIPoint();
            armorMAXHP += currentHead.GetAddMAXHP();
            armorMAXMP += currentHead.GetAddMAXMP();
        }

        if (currentBackpack != null)
        {
            armorATK += currentBackpack.GetATKPoint();
            armorDEF += currentBackpack.GetDEFPoint();
            armorAGI += currentBackpack.GetAGIPoint();
            armorMAXHP += currentBackpack.GetAddMAXHP();
            armorMAXMP += currentBackpack.GetAddMAXMP();
        }


        attack += armorATK;
        defense += armorDEF;
        Agility += armorAGI;
        maxHp += armorMAXHP;
        maxMp += armorMAXMP;
    }

    /// <summary>
    /// 現在の位置から最も近くにいるプレイヤーを探す
    /// </summary>
    /// <param name="enemyTransform">現在位置を登録</param>
    public void FindClosestEnemy(Transform playerTransform)
    {
        EnemyController closestEnemy = null;
        float closestDistanceSqr = Mathf.Infinity;

        foreach (var enemy in GameManager.instance.enemies)
        {
            if (!enemy.IsDead)//死んでいなければ
            {
                float distanceSqr = (enemy.transform.position - playerTransform.position).sqrMagnitude;
                if (distanceSqr < closestDistanceSqr)
                {
                    closestDistanceSqr = distanceSqr;
                    closestEnemy = enemy;
                    //print("一番近い敵を発見しました");
                }
            }
        }

        if (closestEnemy != null)
        {
            UpdateNavMeshTarget(closestEnemy.transform);
        }
        else
        {
            UpdateNavMeshTarget(null); // ターゲットが見つからない場合は null を設定
        }
    }

    //位置とアニメを初期状態にリセットする
    public void ResetToInitialPosition()
    {
        enemyChase = true;
        transform.position = initialPosition;
        animator.SetTrigger("Idle");
        // その他のリセット処理（必要に応じて）

        // 敵グループの平均位置に向く
        Vector3 averageEnemyPosition = GetAveragePositionOfEnemies();
        LookTowards(averageEnemyPosition);
        SaveStatus();
    }

    // NavMeshAgentのターゲットを更新するメソッド
    public void UpdateNavMeshTarget(Transform newTarget)
    {
        if (newTarget == null)
        {
            return;
        }
        enemyTarget = newTarget;
        if (agent != null) //ヌルリファ対策
        {
            agent.isStopped = true; // 移動を停止
            agent.SetDestination(enemyTarget.position);
        }
        //print(gameObject.name + "の新しいターゲットを更新しました");
    }


    bool CanAttack() //インターバル
    {
        return Time.time - lastAttackTime >= attackInterval;
    }


    public void Attack()
    {
        if (isAttacking)
        {
            // すでに攻撃中の場合、何もしない
            return;
        }

        // 現在の時刻と最後の攻撃時刻の差が攻撃インターバル以上かどうかを確認
        if (!CanAttack())
        {
            // インターバル時間が経過していない場合、攻撃しない
            return;
        }

        isAttacking = true;

        lastAttackTime = Time.time; // 攻撃時刻を更新

        animator.SetTrigger("Attack");
        animator.SetInteger("AttackType", Random.Range(1, 5));

        //print("攻撃アニメ");
    }

    public void Shoot()
    {
        if (currentWeapon == null) return;
        if (currentWeapon.HasProjectile())
        {
            currentWeapon.LaunchProjectile(rightHandTransform, leftHandTransform, animator);
            print("矢を撃ちました");
        }
    }

    /// <summary>
    /// スキルによる攻撃
    /// </summary>
    /// <param name="UseMp">消費MPをいれてください</param>
    public void Combo(int UseMp)
    {
        if (mp >= UseMp)
        {
            mp -= UseMp;
            playerUIManager.UpdateMP(maxMp, mp);//HPSliderの更新
            animator.SetTrigger("Attack04");
            //print(gameObject.name + "の残りMP= : " + mp);
        }
        else
        {
            //print(gameObject.name + "の残りMPが足りないので通常攻撃発動");
            animator.SetTrigger("Attack01");
        }
    }

    /// <summary>
    /// ダメージを与える関数
    /// </summary>
    /// <param name="damage">各武器のインスペクター参照</param>
    void Damage(int damage)
    {

        int sumDamage;
        sumDamage = damage - (int)(defense * addDefenceRate);
        hp -= sumDamage;
        if (hp <= 0)
        {
            hp = 0;
            Die();
            //print("死亡アニメに移行します");
        }
        playerUIManager.UpdateHP(maxHp, hp);//HPSliderの更新
                                            //print(gameObject.name + "の残りHP= : " + hp);
    }

    ////プレイヤーの基礎攻撃力＋武器ダメージを返す
    //public int SumDamage()
    //{
    //    int weaponDamage = attack + (int)defaultWeapon.GetAttackPoint();

    //    return weaponDamage;
    //}


    public void OnTriggerEnter(Collider other)
    {
        //もしenemyTargetのオブジェクトに触れたら
        if (other.gameObject == enemyTarget.gameObject)
        {
            enemyChase = false;
        }

        if (IsDead)
        {
            //HPが0なら無効
            return;
        }

        if (other.CompareTag("Weapon_Enemy"))
        {
            EnemyWeapon enemyWeapon = other.GetComponent<EnemyWeapon>();
            if (enemyWeapon != null)
            {
                //ダメージを与えるものにぶつかったら
                //print(other.name + "が" + gameObject.name + "に" + enemyWeapon.SumDamage() + "ダメージを与えた");

                GetHit();//ノックバック

                //回避率のチェック
                if (Random.Range(0, 100) < Agility)
                {
                    Debug.Log("攻撃を回避");
                    ShowMissText();
                    return;//攻撃を回避
                }
                Damage(enemyWeapon.SumDamage()); //ダメージを与える
            }
        }
    }

    //回避したときにミスを表記する
    public void ShowMissText()
    {
        //missText.transform.position = Camera.main.WorldToScreenPoint(transform.position + Vector3.up * 2); // 敵の頭上に配置
        missText.gameObject.SetActive(true);
        missText.alpha = 1; // テキストの透明度を最大に設定

        // フェードアウトのアニメーションを設定
        missText.DOFade(0, 2f).OnComplete(() => missText.gameObject.SetActive(false));
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject == enemyTarget.gameObject)
        {
            enemyChase = true;
        }
    }

    //アニメイベントで使用します
    public void DisableColliderWeapon()
    {
        if (currentWeapon == null)
        {
            noWeaponCols.enabled = false;

        }
        else
        {
            weaponCollider = currentWeapon.GetCollider();
            weaponCollider.enabled = false;
        }

        //if (currentWeapon == null) return;
        //weaponCollider = currentWeapon.GetCollider();
        //weaponCollider.enabled = false;
    }

    //アニメイベントで使用します
    public void EnableColliderWeapon()
    {
        if (currentWeapon == null)
        {
            noWeaponCols.enabled = true;
        }
        else
        {
            weaponCollider = currentWeapon.GetCollider();
            weaponCollider.enabled = true;
        }

        //if (currentWeapon == null) return;
        //weaponCollider = currentWeapon.GetCollider();
        //weaponCollider.enabled = true;
    }

    //移動
    public void Move()
    {
        if (CantMove == false)
        {
            animator.SetTrigger("Move");
            //print("Moveアニメーション実行");
        }
        else
        {
            //print("PlayerAttackBehaviorにより移動不可能");
        }
    }

    //防御
    public void Defend()
    {
        animator.SetTrigger("Defend");
    }

    //ノックバック
    public void GetHit()
    {
        animator.SetTrigger("GetHit");
        animator.SetInteger("GetHitType", Random.Range(1, 4));
    }

    //死亡
    public void Die()
    {
        animator.SetTrigger("Die");
        IsDead = true;
        //このゲームオブジェクトについている当たり判定が消える
        GetComponent<Collider>().enabled = false;
        //剣の当たり判定も消す
        DisableColliderWeapon();

        // GameManager のプレイヤーリストから自身を除外
        GameManager.instance.RemovePlayerFromList(this);

        //// ディレイののち、オブジェクトを2秒かけて縮小
        transform.DOScale(Vector3.zero, 2.0f).SetDelay(2.0f).OnComplete(() => Destroy(gameObject));

        //ゲームの勝敗をチェックする
        GameManager.instance.CheckBattleStatus();
    }

    public void Victory()
    {
        if (!IsDead && GameManager.instance.battleState == true)
        {
            //print("勝利した");
            GameManager.instance.battleState = false;

            // 2秒後に実行される処理
            DOVirtual.DelayedCall(2.0f, () =>
            {
                animator.SetTrigger("Victory");
                transform.LookAt(Camera.main.transform);

            });
        }
    }

    public void Drink()
    {
        animator.SetTrigger("Drink");
    }

    void LookTowards(Vector3 position)
    {
        Vector3 direction = position - transform.position;
        direction.y = 0; // Y軸の回転は無視
        transform.rotation = Quaternion.LookRotation(direction);
    }

    Vector3 GetAveragePositionOfEnemies()
    {
        var enemies = FindObjectsOfType<EnemyController>();
        Vector3 sum = Vector3.zero;
        foreach (var enemy in enemies)
        {
            sum += enemy.transform.position;
        }
        return enemies.Length > 0 ? sum / enemies.Length : Vector3.zero;
    }

    public void GetCardEffect(int effectNumber, int? targetNumber = null)
    {
        if (!targetNumber.HasValue)
        {
            targetNumber = 1;
        }
        switch (effectNumber)
        {
            //プレイヤーの数＋1
            case 1: IncreasePlayers(1); break;
            //プレイヤーの数＋2
            case 2: IncreasePlayers(2); break;
            //プレイヤーの数＋3
            case 3: IncreasePlayers(3); break;
            //プレイヤーの数＋4
            case 4: IncreasePlayers(4); break;
            //プレイヤーの数＋5
            case 5: IncreasePlayers(5); break;
            //プレイヤーの数 * 2
            case 6: IncreasePlayers(targetNumber.Value * 2); break;
            //プレイヤーの数 * 3
            case 7: IncreasePlayers(targetNumber.Value * 3); break;
            //敵がターゲット
            case 8: break;
            case 9: break;
            case 10: break;
            //攻撃力UP+10%
            case 11: AttackUp(1.1f); break;
            //攻撃力UP+20%
            case 12: AttackUp(1.2f); break;
            //攻撃力UP+30%
            case 13: AttackUp(1.3f); break;
            //防御力UP+10%
            case 14: DefenceUp(1.1f); break;
            //防御力UP+20%
            case 15: DefenceUp(1.2f); break;
            //防御力UP+30% 
            case 16: DefenceUp(1.3f); break;
            //敵がターゲット
            case 17: break;
            case 18: break;
            case 19: break;
            case 20: break;
            //コインを取得する
            case 21: UIManager.instance.UpdateCoinText(); break;
            //武器を装備する
            case 22: break;
            case 23: break;
            case 24: break;//小型爆弾
            case 25: break;//中型爆弾
            case 26: break;//大型爆弾
                           //範囲内のプレイヤーの体力を20%回復
            case 27: HPHeal(20); break;
            //範囲内のプレイヤーの体力を50%回復
            case 28: HPHeal(50); break;
            //範囲内のプレイヤーの体力を20%回復
            case 29: MPHeal(20); break;
            //範囲内のプレイヤーの体力を20%回復
            case 30: MPHeal(20); break;
        }
    }

    /// <summary>
    /// カードのエフェクト一覧
    /// </summary>
    void IncreasePlayers(int number)
    {
        //このゲームオブジェクトの近くにnumberの数だけプレイヤーを生成する
        for (int i = 0; i < number; i++)
        {
            float x = Random.Range(-1f, 1f);
            float z = Random.Range(-1f, 1f);

            Vector3 position = new Vector3(this.gameObject.transform.position.x + x, this.gameObject.transform.position.y, this.gameObject.transform.position.z + z);

            GameObject clonePlayer = Instantiate(playerPrefab, position, Quaternion.identity);

            CapsuleCollider capsule = clonePlayer.GetComponent<CapsuleCollider>();
            Vector3 particlePosition = capsule.bounds.center;
            Instantiate(increaseEffect, particlePosition, Quaternion.identity);

            //clonePlayerの名前をShadowPlayerにする
            clonePlayer.name = "ShadowPlayer";
            clonePlayer.GetComponent<PlayerController>().hp /= cloneHpRate;
            clonePlayer.GetComponent<PlayerController>().attack /= cloneAttackRate;
            clonePlayer.GetComponent<PlayerController>().defense /= cloneDefenceRate;
            Renderer[] renderers = clonePlayer.GetComponentsInChildren<Renderer>();

            foreach (Renderer renderer in renderers)
            {
                renderer.material.color = Color.gray;
            }
        }
        GameManager.instance.CreateCharacterList();

        print("プレイヤーの人数が" + number + "増えました");
    }
    //体力増加
    void HealthUp(int value)
    {
        maxHp += value;
    }
    void AttackUp(float value)
    {
        attack = Mathf.RoundToInt(attack * value);
    }
    void DefenceUp(float value)
    {
        defense = Mathf.RoundToInt(defense * value);
    }

    public void HPHeal(int value)
    {
        //現在のHPをvalue%回復し、体力が100%を超えないようにする
        hp += Mathf.RoundToInt(hp * value);
        if (hp > maxHp)
        {
            hp = maxHp;
        }

        //回復アニメ
        if (isHealingSword != true)
        {
            animator.SetTrigger("Drink");
        }
        //Sliderを修正
        playerUIManager.UpdateHP(maxHp, hp);
        print("プレイヤーのHPが" + value + "回復しました");

    }

    void MPHeal(int value)
    {
        //現在のHPをvalue%回復し、体力が100%を超えないようにする
        mp += Mathf.RoundToInt(mp * value);
        if (mp > maxHp)
        {
            mp = maxHp;
        }

        //回復アニメ
        if (isHealingSword != true)
        {
            animator.SetTrigger("Drink");
        }
        //Sliderを修正
        playerUIManager.UpdateMP(maxMp, mp);

        print("プレイヤーのMPが" + value + "回復しました");
    }

    /// <summary>
    /// コレクションの効果一覧
    /// </summary>

    public void CollectionEffect(int num)
    {
        switch (num)
        {
            //HP+5
            case 1: HealthUp(5); break;
            //Attack+1
            case 2: AttackUp(1); break;
            //Defence+1
            case 3: DefenceUp(1); break;
            //ボムダメージ+10
            case 4: BombDamageUp(10); break;
            //コインドロップ+1
            case 5: CoinDropUp(1); break;
            //回避率2%UP
            case 6: AvoidanceUp(2); break;
            //コレクションのドロップ率が1/100→1/(100-value)に
            case 7: CollectionDropRateUp(1); break;
            //HP1.1倍
            case 8: HealthRateUp(1.1f); break;
            //攻撃1.1倍
            case 9: AttackRateUp(1.1f); break;
            //防御1.1倍
            case 10: DefenceRate(1.1f); break;
            //移動速度+1
            case 11: MoveSpeedUp(1); break;
            //HP+25
            case 12: HealthUp(25); break;
            //Attack+3
            case 13: AttackUp(3); break;
            //Defence+3
            case 14: DefenceUp(3); break;
            //コインを100所持した状態でスタート
            case 15: StartCoinHave(100); break;
            //攻撃のインターバルが短縮
            case 16: AttackIntervalUp(0.1f); break;
            //分身のHPが1/2→1/3
            case 17: CloneHPUp(3); break;
            //分身の攻撃力が1/2→1/3
            case 18: CloneAttackUp(3); break;
            //分身の防御力が1/2→1/3
            case 19: CloneDefenceUp(3); break;
            //全てのステータス+5
            case 20: AllStatusUp(5); break;
            //階層が始まるとHP回復+3
            case 21: StartHierarchyHeal(3); break;
            //攻撃に回復効果が付与
            case 22: AttackHealAdd(); break;
            //カードの最低ドロー枚数が+1
            case 23: MinDrawCardNumberAdd(1); break;
            //カードの最大ドロー枚数が+1
            case 24: MaxDrawCardNumberAdd(1); break;
        }
    }
    //爆弾威力増加
    void BombDamageUp(int value)
    {
        throwAttack += value;
    }

    //コインのドロップ量増加
    void CoinDropUp(int value)
    {
        PlayerPrefs.SetInt("DropCoin", value);
    }

    //回避率増加
    void AvoidanceUp(int value)
    {
        Agility += value;
    }

    //コレクションのドロップ率増加
    void CollectionDropRateUp(int value)
    {
        isDropRateUp = true;
    }

    //体力の倍率上昇
    void HealthRateUp(float value)
    {
        addHealthRate = value;
    }

    //攻撃の倍率上昇
    void AttackRateUp(float value)
    {
        addAttackRate = value;
    }

    //防御の倍率上昇
    void DefenceRate(float value)
    {
        addDefenceRate = value;
    }

    void MoveSpeedUp(int value)
    {
        moveSpeed += value;
    }

    //コインを100所持してスタート
    void StartCoinHave(int value)
    {
        if (GameManager.instance.stageHierarchy != 1) return;
        PlayerPrefs.SetInt("StartCoin", value);
    }

    void AttackIntervalUp(float value)
    {
        attackInterval -= value;
    }


    void CloneHPUp(int value)
    {
        cloneHpRate = value;
    }

    void CloneAttackUp(int value)
    {
        cloneAttackRate = value;
    }

    void CloneDefenceUp(int value)
    {
        cloneDefenceRate = value;
    }

    void AllStatusUp(int value)
    {
        HealthUp(value);
        AttackUp(value);
        DefenceUp(value);
    }

    //階層が始まるとHPが3回復
    void StartHierarchyHeal(int value)
    {
        battleStartHeal = true;
    }

    //攻撃に回復効果が付与
    void AttackHealAdd()
    {
        isHealingSword = true;
    }

    void MinDrawCardNumberAdd(int value)
    {
        PlayerPrefs.SetInt("MinDrawCard", value);
    }

    void MaxDrawCardNumberAdd(int value)
    {
        PlayerPrefs.SetInt("MaxDrawCard", value);
    }
}
