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
    public int attack = 5;
    public float attackInterval = 1;//攻撃間隔
    public int throwAttack = 0;
    public int defense = 1;
    public int Agility = 5;//回比率
    public float moveSpeed = 3.5f;
    public float addHealthRate = 1;
    public float addAttackRate = 1;
    public float addDefenseRate = 1;

    int cloneHpRate = 2;
    int cloneAttackRate = 2;
    int cloneDefenseRateUp = 2;

    //通常変数
    int hp;
    int mp;
    float lastAttackTime = 0f; //最後に攻撃した時間

    [Header("Playerの状態")]
    public bool IsDead = false;
    public bool isAttacking = false;//攻撃中かどうかの判定
    public bool CantMove = true;//移動できない状態の判定
    public bool isDropRateUp = false;
    public bool battleStartHeal = false;
    public Weapon defaultWeapon = null;
    bool canGetHitAnim = true;
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

    public Collider weaponCollider;//武器の当たり判定
    public PlayerUIManager playerUIManager;

    Rigidbody rb;

    public GameObject playerPrefab;

    private Vector3 initialPosition;

    public Weapon currentWeapon = null;
    [SerializeField] private GameObject weaponRightPrefab;
    [SerializeField] private Weapon weaponRight;
    [SerializeField] private List<GameObject> allArmorList = new List<GameObject>();

    [SerializeField] Armor currentHead = null;
    [SerializeField] Armor currentArmor = null;
    [SerializeField] Armor currentBackpack = null;
    //BoxCollider weaponCollider;
    bool isHealingSword = false;

    //public GameObject NoWeapon_r;
    //public GameObject NoWeapon_l;

    //public GameObject[] NoWeapons;
    public Collider[] playerColliders;
    public BoxCollider noWeaponCols;


    public bool enemyChase = true;

    public TextMeshProUGUI missText; //インスペクターで固定する

    public ParticleSystem increaseEffect;

    [Header("Playerの装備を初期に戻すための")]
    [SerializeField] private RuntimeAnimatorController noWeaponAnim;

    [SerializeField] private Weapon noWeaponScriptableObject;
    [SerializeField] private Transform weaponPos;
    [SerializeField] private GameObject noWeaponObject;


    void Start()
    {
        agent = GetComponent<NavMeshAgent>(); // NavMesh Agentの取得
        moveSpeed = 3.5f;
        // Animatorコンポーネントを取得
        animator = GetComponent<Animator>();
        rb = GetComponent<Rigidbody>();
        DisableColliderWeapon();//武器の当たり判定無効化

        playerUIManager.Init(this);//スライダーの初期化
        initialPosition = transform.position;
        if (defaultWeapon != null)
        {
            EquipWeapon(defaultWeapon);
        }
        //Clone用に初期状態を設定
        isAttacking = false;
        CantMove = false;

        LoadStatus();

        //1秒後に
        DOVirtual.DelayedCall(0.5f, () =>
        {
            if (PlayerPrefs.HasKey("Weapon"))
            {
                Weapon[] weapon = Resources.LoadAll<Weapon>("Weapon");
                foreach (var item in weapon)
                {
                    if (item.name == PlayerPrefs.GetString("Weapon"))
                    {
                        EquipWeapon(item);
                    }
                }
            }
            if (PlayerPrefs.HasKey("Armor"))
            {
                EquipArmor(Resources.Load<Armor>($"Armor/{PlayerPrefs.GetString("Armor")}"));
            }
            if (PlayerPrefs.HasKey("Head"))
            {
                EquipArmor(Resources.Load<Armor>($"Armor/{PlayerPrefs.GetString("Head")}"));
            }
            if (PlayerPrefs.HasKey("BackPack"))
            {
                EquipArmor(Resources.Load<Armor>($"Armor/{PlayerPrefs.GetString("BackPack")}"));
            }
            UIManager.instance.StatusCheckUpdate(maxHp, attack, addAttackRate, defense, addDefenseRate, Agility, moveSpeed, currentWeapon, currentHead, currentArmor, currentBackpack);
        });
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
                if (CanAttack()) //攻撃可能
                {
                    Attack();
                    if (!isHealingSword) return;
                    //回復の剣の効果
                    if (Random.Range(0, 100) < 10)
                    {
                        HPHeal(1);
                    }
                }
                else//攻撃までのインターバル中
                {
                    Defend(); // 防御
                }
                if (agent.isActiveAndEnabled && agent.isOnNavMesh)
                {
                    agent.isStopped = true;
                }
            }
            else
            {
                CantMove = false;
                agent.SetDestination(enemyTarget.position); // 敵に向かって移動開始
                Move(); // 移動アニメ
                if (agent.isActiveAndEnabled && agent.isOnNavMesh)
                {
                    agent.isStopped = false; // 移動を再開
                }
            }
        }
    }

    void CollectionFirstEffect()
    {
        // コレクションの効果を反映
        for (int i = 1; i < UIManager.instance.collectionContent.transform.childCount; i++)
        {
            // カードを所持していたら...以下の処理を行う
            if (PlayerPrefs.HasKey($"Collection{i}"))
            {
                switch (i)
                {
                    case 1: HealthUp(10); Debug.Log("HP+10"); break;
                    case 2: AttackUp(1); Debug.Log("Attack+1"); break;
                    case 3: DefenseUp(1); Debug.Log("Defence+1"); break;
                    case 4: BombDamageUp(10); Debug.Log("ボムダメージ+10"); break;
                    case 5: CoinDropUp(1); Debug.Log("コインドロップ+1"); break;
                    case 6: AvoidanceUp(2); Debug.Log("回避率2%UP"); break;
                    case 7: CollectionDropRateUp(3); Debug.Log("コレクションのドロップ率改善"); break;
                    case 8: HealthRateUp(0.2f); Debug.Log("HP1.1倍"); break;
                    case 9: AttackRateUp(0.2f); Debug.Log("攻撃1.1倍"); break;
                    case 10: DefenseRateUp(0.2f); Debug.Log("防御1.1倍"); break;
                    case 11: MoveSpeedUp(1); Debug.Log("移動速度+1"); break;
                    case 12: HealthUp(40); Debug.Log("HP+40"); break;
                    case 13: AttackUp(4); Debug.Log("Attack+4"); break;
                    case 14: DefenseUp(3); Debug.Log("Defence+3"); break;
                    case 15: StartCoinHave(300); Debug.Log("スタート時にコイン300所持"); break;
                    case 16: AttackIntervalUp(0.1f); Debug.Log("攻撃のインターバル短縮"); break;
                    case 17: CloneHPUp(3); Debug.Log("分身のHP改善"); break;
                    case 18: CloneAttackUp(3); Debug.Log("分身の攻撃力改善"); break;
                    case 19: CloneDefenseUp(3); Debug.Log("分身の防御力改善"); break;
                    case 20: AllStatusUp(5); Debug.Log("全てのステータス+5"); break;
                    case 21: battleStartHeal = true; Debug.Log("戦闘開始時にHP回復"); break;
                    case 22: AttackHealAdd(); Debug.Log("攻撃に回復効果付与"); break;
                    case 23: MinDrawCardNumberAdd(1); Debug.Log("カードの最低ドロー枚数+1"); break;
                    case 24: MaxDrawCardNumberAdd(1); Debug.Log("カードの最大ドロー枚数+1"); break;
                }
            }
        }
    }



    public void GameReset()
    {
        if (this.gameObject != null)
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
            //transform.DOScale(Vector3.zero, 2.0f).SetDelay(2.0f).OnComplete(() => Destroy(gameObject));

            maxHp = 100;
            PlayerPrefs.SetInt("MaxHP", maxHp);
            hp = maxHp;
            PlayerPrefs.SetInt("HP", hp);
            playerUIManager.UpdateHP(maxHp, hp);//HPSliderの更新
            maxMp = 100;
            PlayerPrefs.SetInt("MaxMP", maxMp);
            mp = maxMp;
            PlayerPrefs.SetInt("MP", mp);
            playerUIManager.UpdateMP(maxMp, mp);//MPSliderの更新
            attack = 5;
            PlayerPrefs.SetInt("Attack", attack);
            attackInterval = 1;
            throwAttack = 0;
            defense = 1;
            PlayerPrefs.SetInt("Defense", defense);
            Agility = 5;
            PlayerPrefs.SetInt("Agility", Agility);
            moveSpeed = 3.5f;
            addHealthRate = 1;
            addAttackRate = 1;
            addDefenseRate = 1;
            cloneHpRate = 2;
            cloneAttackRate = 2;
            cloneDefenseRateUp = 2;
            lastAttackTime = 0f;
            IsDead = false;
            isAttacking = false;
            CantMove = true;
            isDropRateUp = false;
            battleStartHeal = false;
            defaultWeapon = null;
            currentWeapon = null;
            currentHead = null;
            currentArmor = null;
            currentBackpack = null;
            PlayerPrefs.SetString("Weapon", "NoWeapon");
            PlayerPrefs.DeleteKey("Head");
            PlayerPrefs.DeleteKey("Armor");
            for (int i = 0; i < allArmorList.Count; i++)
            {
                if (i == 2)
                {
                    allArmorList[i].SetActive(true);
                }
                else
                {
                    allArmorList[i].SetActive(false);
                }
            }
            PlayerPrefs.DeleteKey("BackPack");
            //このゲームオブジェクトの子オブジェクト全て取得
            Transform[] allChildren = this.GetComponentsInChildren<Transform>();
            // 全ての子オブジェクトをループしてheadArmorという名前のオブジェクトを探す
            foreach (Transform child in allChildren)
            {
                if (child.name == "rightWeapon")
                {
                    Destroy(child.gameObject);
                }
                if (child.name == "leftWeapon")
                {
                    Destroy(child.gameObject);
                }
                if (child.name == "headArmor")
                {
                    Destroy(child.gameObject);
                }
                if (child.name == "backPackArmor")
                {
                    Destroy(child.gameObject);
                }
            }
            //武器をなくしてNoWeaponを再現
            animator.runtimeAnimatorController = noWeaponAnim;
            currentWeapon = noWeaponScriptableObject;
            Instantiate(noWeaponObject, weaponPos);

            isHealingSword = false;
            enemyChase = true;
            EquipWeapon(defaultWeapon);
            GameManager.instance.battleState = false;
            agent.enabled = true;
            //プレイヤーを移動させないように
            playerColliders[0].enabled = true;
            PlayerPrefs.Save();
            CollectionFirstEffect();
            UIManager.instance.StatusCheckUpdate(maxHp, attack, addAttackRate, defense, addDefenseRate, Agility, moveSpeed, currentWeapon, currentHead, currentArmor, currentBackpack);
        }

    }
    public void SaveEquipment()
    {
        if (currentWeapon != null)
        {
            PlayerPrefs.SetString("Weapon", currentWeapon.name);
        }
        if (currentArmor != null)
        {
            PlayerPrefs.SetString("Armor", currentArmor.name);
        }
        if (currentHead != null)
        {
            PlayerPrefs.SetString("Head", currentHead.name);
        }
        if (currentBackpack != null)
        {
            PlayerPrefs.SetString("BackPack", currentBackpack.name);
        }
        PlayerPrefs.Save();
    }
    public void SaveStatus()
    {
        PlayerPrefs.SetInt("HP", hp);
        PlayerPrefs.SetInt("MP", mp);
        PlayerPrefs.SetInt("Attack", attack);
        PlayerPrefs.SetInt("Defense", defense);
        PlayerPrefs.SetInt("Agility", Agility);
        PlayerPrefs.SetFloat("MoveSpeed", moveSpeed);

        PlayerPrefs.SetInt("MaxHP", maxHp);
        PlayerPrefs.SetInt("MaxMP", maxMp);
        PlayerPrefs.Save();
    }

    void LoadStatus()
    {
        maxHp = PlayerPrefs.GetInt("MaxHP");
        maxMp = PlayerPrefs.GetInt("MaxMP");
        hp = PlayerPrefs.GetInt("HP");
        playerUIManager.UpdateHP(maxHp, hp);
        mp = PlayerPrefs.GetInt("MP");
        //playerUIManager.UpdateMP(maxMp, mp);
        attack = PlayerPrefs.GetInt("Attack");
        defense = PlayerPrefs.GetInt("Defense");
        Agility = PlayerPrefs.GetInt("Agility");
        moveSpeed = PlayerPrefs.GetFloat("MoveSpeed");
        if (!PlayerPrefs.HasKey("MaxHP"))
        {
            maxHp = 100;
        }
        if (!PlayerPrefs.HasKey("MaxMP"))
        {
            maxMp = 100;
        }
        if (!PlayerPrefs.HasKey("HP"))
        {
            hp = maxHp;
        }
        if (!PlayerPrefs.HasKey("MP"))
        {
            mp = maxMp;
        }
        if (!PlayerPrefs.HasKey("Attack"))
        {
            attack = 5;
        }
        if (!PlayerPrefs.HasKey("Defense"))
        {
            defense = 1;
        }
        if (!PlayerPrefs.HasKey("Agility"))
        {
            Agility = 5;
        }
        playerUIManager.UpdateHP(maxHp, hp);//HPSliderの更新
    }

    //武器をプレイヤーの手に装備させる
    public void EquipWeapon(Weapon weapon)
    {
        if (weapon == null) return;
        CantMove = false;
        isAttacking = false;
        enemyChase = true;
        //前回の装備のステータスを引く
        if (currentWeapon != null)
        {
            //maxHp -= currentWeapon.GetAddMAXHP();
            //maxMp -= currentWeapon.GetAddMAXMP();
            attack -= currentWeapon.GetATKPoint();
            defense -= currentWeapon.GetDEFPoint();
            //Agility -= currentWeapon.GetAGIPoint();
        }

        //playerCollidersの要素全てをenabledをfalseにする
        for (int i = 0; i < playerColliders.Length; i++)
        {
            playerColliders[i].enabled = false;
        }
        //今装備している武器の種類によって当たり判定を変える
        currentWeapon = weapon;
        switch (currentWeapon.weaponType)
        {
            case Weapon.WeaponType.Arrow:
                playerColliders[1].enabled = true;
                break;
            case Weapon.WeaponType.Wand:
                playerColliders[1].enabled = true;
                break;
            default:
                playerColliders[0].enabled = true;
                break;
        }

        //武器を生成
        weapon.Spawn(rightHandTransform, leftHandTransform, animator);

        //武器のコライダーを取得
        weaponCollider = currentWeapon.GetCollider();

        //武器による距離を調整
        StopDistance = weapon.GetRange();
        agent.stoppingDistance = StopDistance;

        //装備のバフを追加
        if (currentWeapon == null)
        {
            return;
        }

        attack += currentWeapon.GetATKPoint();
        defense += currentWeapon.GetDEFPoint();
        UIManager.instance.StatusCheckUpdate(maxHp, attack, addAttackRate, defense, addDefenseRate, Agility, moveSpeed, currentWeapon, currentHead, currentArmor, currentBackpack);
    }

    public void EquipArmor(Armor armor)
    {
        if (armor == null) return;
        switch (armor.armorType)
        {
            case Armor.ArmorType.Head:
                if (currentHead != null)
                {
                    maxHp -= currentHead.GetAddMAXHP();
                    maxMp -= currentHead.GetAddMAXMP();
                    attack -= currentHead.GetATKPoint();
                    defense -= currentHead.GetDEFPoint();
                    Agility -= currentHead.GetAGIPoint();
                }
                currentHead = armor;
                break;
            case Armor.ArmorType.Body:
                if (currentArmor != null)
                {
                    maxHp -= currentArmor.GetAddMAXHP();
                    maxMp -= currentArmor.GetAddMAXMP();
                    attack -= currentArmor.GetATKPoint();
                    defense -= currentArmor.GetDEFPoint();
                    Agility -= currentArmor.GetAGIPoint();
                }
                currentArmor = armor;
                break;
            case Armor.ArmorType.BackPack:
                if (currentBackpack != null)
                {
                    maxHp -= currentBackpack.GetAddMAXHP();
                    maxMp -= currentBackpack.GetAddMAXMP();
                    attack -= currentBackpack.GetATKPoint();
                    defense -= currentBackpack.GetDEFPoint();
                    Agility -= currentBackpack.GetAGIPoint();
                }
                currentBackpack = armor;
                break;
        }

        //防具を生成
        armor.Spawn(headTransform, bodyTransform, backPackTransform);

        //防具のバフ
        switch (armor.armorType)
        {
            case Armor.ArmorType.Head:
                if (currentHead != null)
                {
                    maxHp += currentHead.GetAddMAXHP();
                    maxMp += currentHead.GetAddMAXMP();
                    attack += currentHead.GetATKPoint();
                    defense += currentHead.GetDEFPoint();
                    Agility += currentHead.GetAGIPoint();
                }
                break;
            case Armor.ArmorType.Body:
                if (currentArmor != null)
                {
                    maxHp += currentArmor.GetAddMAXHP();
                    maxMp += currentArmor.GetAddMAXMP();
                    attack += currentArmor.GetATKPoint();
                    defense += currentArmor.GetDEFPoint();
                    Agility += currentArmor.GetAGIPoint();
                }
                break;
            case Armor.ArmorType.BackPack:
                if (currentBackpack != null)
                {
                    maxHp += currentBackpack.GetAddMAXHP();
                    maxMp += currentBackpack.GetAddMAXMP();
                    attack += currentBackpack.GetATKPoint();
                    defense += currentBackpack.GetDEFPoint();
                    Agility += currentBackpack.GetAGIPoint();
                }
                break;
        }
        UIManager.instance.StatusCheckUpdate(maxHp, attack, addAttackRate, defense, addDefenseRate, Agility, moveSpeed, currentWeapon, currentHead, currentArmor, currentBackpack);
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
        enemyChase = true;

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
        //もし呪文攻撃なら
        if (currentWeapon.HasProjectile())
        {
            currentWeapon.LaunchProjectile(rightHandTransform, leftHandTransform, animator);
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

    /// <param name="damage">各武器のインスペクター参照</param>
    void Damage(int damage)
    {
        int sumDamage;
        //damegeが0.9~1.2倍になる（不要なら外す）
        damage = (int)(damage * Random.Range(0.9f, 1.2f));
        sumDamage = damage - (int)(defense * addDefenseRate);
        Debug.Log("元々のダメージ" + damage + "最終のプレイヤーへのダメージ：" + sumDamage);
        if (sumDamage <= 0)
        {
            sumDamage = 0;
        }
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

    private void OnTriggerStay(Collider other)
    {
        if (enemyTarget != null && other.gameObject == enemyTarget.gameObject)
        {
            enemyChase = false;
            if (agent.isActiveAndEnabled && agent.isOnNavMesh)
            {
                agent.isStopped = true;
            }
        }
    }

    public void OnTriggerEnter(Collider other)
    {
        if (enemyTarget != null && other.gameObject == enemyTarget.gameObject)
        {
            enemyChase = true;
            agent.isStopped = false;
            isAttacking = false;
            CantMove = false;
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
                GetHit();//ノックバック

                //回避率のチェック
                if (Random.Range(0, 100) < Agility)
                {
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
            if (weaponCollider != null)
            {
                weaponCollider.enabled = false;
            }
        }

        //if (currentWeapon == null) return;
        //weaponCollider = currentWeapon.GetCollider();
        //weaponCollider.enabled = false;
    }

    //アニメイベントで使用します
    public void EnableColliderWeapon()
    {
        if (currentWeapon != null)
        {
            if (noWeaponCols != null)
            {
                noWeaponCols.enabled = true;

            }
            weaponCollider = currentWeapon.GetCollider();
            if (weaponCollider != null)
            {
                weaponCollider.enabled = true;
            }
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
        if (canGetHitAnim)
        {
            animator.SetTrigger("GetHit");
            animator.SetInteger("GetHitType", Random.Range(1, 4));
            canGetHitAnim = false;
        }
        DOVirtual.DelayedCall(2f, () => canGetHitAnim = true);
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
        //もし死んだのが本体の場合
        if (gameObject.name != "Player") return;
        UIManager.instance.GiveUpButton();
    }

    public void GiveUpAnime()
    {
        AllResetAnime();
        //animator.SetTrigger("Die");
    }

    public void AllResetAnime()
    {
        animator.ResetTrigger("Idle");
        animator.ResetTrigger("Move");
        animator.ResetTrigger("Attack");
        animator.ResetTrigger("Defend");
        animator.ResetTrigger("GetHit");
    }

    public void Victory()
    {
        if (gameObject.name != "Player") return;
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
            case 11: AttackRateUp(0.1f); break;
            //攻撃力UP+20%
            case 12: AttackRateUp(0.2f); break;
            //攻撃力UP+30%
            case 13: AttackRateUp(0.3f); break;
            //防御力UP+10%
            case 14: DefenseRateUp(0.1f); break;
            //防御力UP+20%
            case 15: DefenseRateUp(0.2f); break;
            //防御力UP+30% 
            case 16: DefenseRateUp(0.3f); break;
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
            //範囲内のプレイヤーのHPを10%回復
            case 27: HPHeal(25); break;
            //範囲内のプレイヤーのHPを20%回復
            case 28: HPHeal(35); break;
            //範囲内のプレイヤーのHPを30%回復
            case 29: HPHeal(45); break;
            //範囲内のプレイヤーのHPを40%回復
            case 30: HPHeal(60); break;
            //範囲内のプレイヤーのMPを50%回復
            case 31: HPHeal(70); break;
            //範囲内のプレイヤーのMPを60%回復
            case 32: HPHeal(80); break;
            //プレイヤーの移動速度を0.1上昇
            case 33: MoveSpeedUp(0.1f); break;
            //プレイヤーの移動速度を0.3上昇
            case 34: MoveSpeedUp(0.3f); break;
            //カードを全て一新する
            case 35: ResetCards(); break;
            //カードを2枚引く
            case 36: TwoDrowCard(); break;
            //プレイヤーの位置を移動させる
            case 37: Warp(); break;
            //攻撃2UP
            case 91: AttackUp(2); break;
            case 92: AttackUp(4); break;
            case 93: AttackUp(6); break;
            case 94: HealthUp(5); break;
            case 95: HealthUp(10); break;
            case 96: HealthUp(15); break;
            case 97: DefenseUp(1); break;
            case 98: DefenseUp(2); break;
            case 99: DefenseUp(3); break;
            case 100:
                {
                    TwoDrowCard();
                    DrawCardController.instance.DrawCard();
                }
                break;
        }
        UIManager.instance.StatusCheckUpdate(maxHp, attack, addAttackRate, defense, addDefenseRate, Agility, moveSpeed, currentWeapon, currentHead, currentArmor, currentBackpack);
    }

    /// <summary>
    /// カードのエフェクト一覧
    /// </summary>
    void IncreasePlayers(int number)
    {
        if (this.gameObject.name != "Player") return;
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
            clonePlayer.GetComponent<PlayerController>().defense /= cloneDefenseRateUp;
            Renderer[] renderers = clonePlayer.GetComponentsInChildren<Renderer>();

            foreach (Renderer renderer in renderers)
            {
                //renderer.material.color = Color.gray;
                renderer.material.color = new Color(0.05f, 0.05f, 0.05f, 1);

            }
        }
        GameManager.instance.CreateCharacterList();

        AudioManager.instance.PlaySE(AudioManager.SE.PlayerIncrease);
    }
    //体力増加
    void HealthUp(int value)
    {
        maxHp += value;
        hp += value;
        AudioManager.instance.PlaySE(AudioManager.SE.PowerUp);
    }
    void AttackUp(int value)
    {
        attack += value;
        AudioManager.instance.PlaySE(AudioManager.SE.PowerUp);
    }
    void DefenseUp(int value)
    {
        defense += value;
        AudioManager.instance.PlaySE(AudioManager.SE.PowerUp);
    }

    /// <param name="value">最大HPのvalue%回復する</param >
    public void HPHeal(int value)
    {
        //現在のHPを最大HPのvalue%回復し、体力が100%を超えないようにする
        hp += Mathf.RoundToInt(maxHp * value * 0.01f);
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

        AudioManager.instance.PlaySE(AudioManager.SE.Regeneration);

    }

    void MPHeal(int value)
    {
        //現在のHPをvalue%回復し、体力が100%を超えないようにする
        mp += Mathf.RoundToInt(maxMp * value);
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

        AudioManager.instance.PlaySE(AudioManager.SE.Regeneration);
    }

    void ResetCards()
    {
        DrawCardController.instance.ReDrawCardList();
        AudioManager.instance.PlaySE(AudioManager.SE.PowerUp);
    }

    void MoveSpeedUp(float value)
    {
        moveSpeed += value;
        AudioManager.instance.PlaySE(AudioManager.SE.PowerUp);
    }

    /// <summary>
    /// コレクションの効果一覧
    /// </summary>

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

        AudioManager.instance.PlaySE(AudioManager.SE.PowerUp);
    }

    //コレクションのドロップ率増加
    void CollectionDropRateUp(int value)
    {
        isDropRateUp = true;
    }

    //体力の倍率上昇
    void HealthRateUp(float value)
    {
        addHealthRate += value;
        AudioManager.instance.PlaySE(AudioManager.SE.PowerUp);
    }

    //攻撃の倍率上昇
    void AttackRateUp(float value)
    {
        addAttackRate += value;
        AudioManager.instance.PlaySE(AudioManager.SE.PowerUp);
    }

    //防御の倍率上昇
    void DefenseRateUp(float value)
    {
        addDefenseRate += value;
        AudioManager.instance.PlaySE(AudioManager.SE.PowerUp);
    }

    void MoveSpeedUp(int value)
    {
        moveSpeed += value;
        AudioManager.instance.PlaySE(AudioManager.SE.PowerUp);
    }

    //コインを100所持してスタート
    void StartCoinHave(int value)
    {
        if (PlayerPrefs.GetInt("StartCoin") <= 100)
        {
            PlayerPrefs.SetInt("StartCoin", value);
        }
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

    void CloneDefenseUp(int value)
    {
        cloneDefenseRateUp = value;
    }

    void AllStatusUp(int value)
    {
        HealthUp(value);
        AttackUp(value);
        DefenseUp(value);

        AudioManager.instance.PlaySE(AudioManager.SE.PowerUp);
    }

    //階層が始まるとHPが3回復
    public void StartHierarchyHeal(int value)
    {
        if (battleStartHeal)
        {
            hp += value;
            if (hp > maxHp)
            {
                hp = maxHp;
            }
        }
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
    void TwoDrowCard()
    {
        DrawCardController.instance.DrawCard();
        DrawCardController.instance.DrawCard();
    }
    void Warp()
    {
        transform.position = new Vector3(Random.Range(-3, 3), 0, Random.Range(-3, 10));
    }
}
