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
    public BoxCollider noWeaponCols;

    public bool enemyChase = true;

    public TextMeshProUGUI missText; //インスペクターで固定する

    public ParticleSystem increaseEffect;

    void Start()
    {
        UpdateStats();

        hp = maxHp;
        mp = maxMp;

        agent = GetComponent<NavMeshAgent>(); // NavMesh Agentの取得
        moveSpeed = agent.speed;
        // Animatorコンポーネントを取得
        animator = GetComponent<Animator>();
        rb = GetComponent<Rigidbody>();
        DisableColliderWeapon();//武器の当たり判定無効化

        playerUIManager.Init(this);//スライダーの初期化
        initialPosition = transform.position;

        EquipWeapon(defaultWeapon);

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
            float distance = Vector3.Distance(transform.position, enemyTarget.position);
            agent.isStopped = false; // 移動を再開

            if (!enemyChase)
            {
                //print("攻撃範囲内");
                if (CanAttack()) //攻撃可能
                {
                    print("攻撃");
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
                agent.speed = moveSpeed;
                //print("範囲外");
                agent.SetDestination(enemyTarget.position); // 敵に向かって移動開始
                Move(); // 移動アニメ
            }
        }
    }

    //武器をプレイヤーの手に装備させる
    public void EquipWeapon(Weapon weapon)
    {
        if (weapon == null)
        {
            return;
        }
        currentWeapon = weapon;

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
        //初期値に戻す
        ResetStatus();

        //武器と防具量を加算
        AddWeaponState();
        AddArmorState();
    }


    private void AddWeaponState()
    {
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

    void ResetStatus()
    {
        maxHp = 100;
        maxMp = 100;
        attack = 0;
        defense = 0;
        Agility = 0;//回避率
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
        transform.position = initialPosition;
        animator.SetTrigger("Idle");
        // その他のリセット処理（必要に応じて）

        // 敵グループの平均位置に向く
        Vector3 averageEnemyPosition = GetAveragePositionOfEnemies();
        LookTowards(averageEnemyPosition);
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
        print(gameObject.name + "の新しいターゲットを更新しました");
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

        print("攻撃アニメ");
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
            playerUIManager.UpdateMP(mp);//HPSliderの更新
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
        sumDamage = damage - defense;
        hp -= sumDamage;
        if (hp <= 0)
        {
            hp = 0;
            Die();
            //print("死亡アニメに移行します");
        }
        playerUIManager.UpdateHP(hp);//HPSliderの更新
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
                print(other.name + "が" + gameObject.name + "に" + enemyWeapon.SumDamage() + "ダメージを与えた");

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
            case 21: GameManager.instance.GetCoin(); break;
            //武器を装備する
            case 22: break;
            case 23: break;
            case 24: break;
            case 25: break;
            case 26: break;
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
            Instantiate(increaseEffect, particlePosition, Quaternion.identity) ;
            
            //clonePlayerの名前をShadowPlayerにする
            clonePlayer.name = "ShadowPlayer";
            clonePlayer.GetComponent<PlayerController>().hp /= 2;
            clonePlayer.GetComponent<PlayerController>().mp /= 2;
            clonePlayer.GetComponent<PlayerController>().attack /= 2;
            clonePlayer.GetComponent<PlayerController>().defense /= 2;
            Renderer[] renderers = clonePlayer.GetComponentsInChildren<Renderer>();

            foreach (Renderer renderer in renderers)
            {
                renderer.material.color = Color.gray;
            }
        }
        GameManager.instance.CreateCharacterList();

        print("プレイヤーの人数が" + number + "増えました");
    }
    void AttackUp(float value)
    {
        attack = Mathf.RoundToInt(attack * value);
        print("攻撃力が" + value + "増えました");

    }
    void DefenceUp(float value)
    {
        defense = Mathf.RoundToInt(defense * value);
        print("防御力が" + value + "増えました");

    }

    void HPHeal(int value)
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
        playerUIManager.UpdateHP(hp);
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
        playerUIManager.UpdateMP(mp);

        print("プレイヤーのMPが" + value + "回復しました");
    }

    /// <summary>
    /// コレクションの効果一覧
    /// </summary>
    public void StatusImprovementPendant()
    {
        //全てのパラメーターが10%アップ
        maxHp = Mathf.RoundToInt(maxHp * 1.1f);
        maxMp = Mathf.RoundToInt(maxMp * 1.1f);
        attack = Mathf.RoundToInt(attack * 1.1f);
        defense = Mathf.RoundToInt(defense * 1.1f);
        Agility = Mathf.RoundToInt(Agility * 1.1f);

        print("プレイヤーのすべてのパラメーターが上昇しました");
    }

    public void HealingSwordTechnique()
    {
        //攻撃時に10%の確率で回復
        isHealingSword = true;
        print("回復の剣の効果が適用");
    }

    public void TreasureOfAcceleration()
    {
        //攻撃のインターバルと移動速度が10%アップ
        attackInterval *= 0.9f;
        moveSpeed *= 1.1f;
    }

    public void StoneOfAwakening()
    {

    }

    public void SwordOfDevelopment()
    {

    }
}
