﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;
using DG.Tweening;

public class PlayerController : MonoBehaviour
{
    [Header("Playerのステータス")]
    [SerializeField] private int hp;
    [SerializeField] private int mp;
    public int attack;
    [SerializeField] private float attackInterval;
    [SerializeField] private int defense;
    [SerializeField] private int speed;

    float lastAttackTime = 0f; //最後に攻撃した時間
    public int maxHp = 100;
    public int maxMp = 100;

    public bool IsDead = false;
    public bool isAttacking = false;//攻撃中かどうかの判定
    public bool CantMove = false;//移動できない状態の判定
    bool isEqipmentWeapon = false;//武器を装備しているかどうか
    bool isEqipmentArmor = false;//防具を装備しているかどうか

    public Transform enemyTarget; // 敵の位置
    private NavMeshAgent agent; // NavMesh Agent
    private Animator animator;


    public Collider weaponCollider;//武器の当たり判定
    public PlayerUIManager playerUIManager;

    Rigidbody rb;

    public GameObject playerPrefab;

    private Vector3 initialPosition;

    void Start()
    {
        hp = maxHp;
        mp = maxMp;
        agent = GetComponent<NavMeshAgent>(); // NavMesh Agentの取得
        // Animatorコンポーネントを取得
        animator = GetComponent<Animator>();
        rb = GetComponent<Rigidbody>();
        DisableColliderWeapon();//武器の当たり判定無効化

        playerUIManager.Init(this);//スライダーの初期化
        initialPosition = transform.position;
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
                print("エネミーを倒したので次のターゲットを探します");
                FindClosestEnemy(transform);
            }
        }

        transform.LookAt(enemyTarget);//常に敵のほうを向く

        if (GameManager.instance.battleState == true || Input.GetKeyDown(KeyCode.Space))
        {
            float distance = Vector3.Distance(transform.position, enemyTarget.position);
            agent.isStopped = false; // 移動を再開

            if (distance <= agent.stoppingDistance)
            {
                //print("攻撃範囲内");
                if (CanAttack())　//攻撃可能
                {
                    //print("攻撃");
                    Attack(); // 攻撃
                }
                else//攻撃までのインターバル中
                {
                    //print("防御");
                    Deffend(); // 防御
                }
            }
            else
            {
                //print("範囲外");
                agent.SetDestination(enemyTarget.position); // 敵に向かって移動開始
                Move(); // 移動アニメ
            }
        }
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
                    print("一番近い敵を発見しました");
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
        print(gameObject.name+"の新しいターゲットを更新しました");
    }


    public void ResetState()
    {
        //状態を初期化
        animator.SetTrigger("Idle_Battle_SwordAndShield");
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

        int attackNumber = Random.Range(1, 5); // 1から4の間のランダムな数を生成

        // 生成された数に応じて異なる攻撃アニメーションをトリガー
        switch (attackNumber)
        {
            case 1:
                animator.SetTrigger("Attack01");
                break;
            case 2:
                animator.SetTrigger("Attack02");
                break;
            case 3:
                animator.SetTrigger("Attack03");
                break;
            case 4:
                SkillAttack(20);//消費MPをいれて。
                break;
        }
        //print("Attackアニメーション実行");
    }

    /// <summary>
    /// スキルによる攻撃
    /// </summary>
    /// <param name="UseMp">消費MPをいれてください</param>
    public void SkillAttack(int UseMp)
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
        hp -= damage;
        if (hp <= 0)
        {
            hp = 0;
            Die();
            //print("死亡アニメに移行します");
        }

        playerUIManager.UpdateHP(hp);//HPSliderの更新

        //print(gameObject.name + "の残りHP= : " + hp);
    }


    public void OnTriggerEnter(Collider other)
    {
        if (IsDead)
        {
            //HPが0なら無効
            return;
        }

        if (other.CompareTag("Enemy"))
        {
            EnemyController enemy = other.GetComponent<EnemyController>();
            if (enemy != null)
            {
                //ダメージを与えるものにぶつかったら
                print(other.name + "が" + gameObject.name + "に" + enemy + "のダメージを与えた");

                GetHit();//ノックバック

                Damage(enemy.attack);//ダメージを与える
            }
        }
    }

    // アニメーションイベントまたはその他の方法で攻撃状態をリセットする
    public void ResetAttackState()
    {
        isAttacking = false;
    }

    public void DisableColliderWeapon()
    {
        weaponCollider.enabled = false;
        //print(gameObject.name + "の" + weaponCollider.gameObject.name + "を無効化します");
    }

    public void EnableColliderWeapon()
    {
        weaponCollider.enabled = true;
        //print(gameObject.name + "の" + weaponCollider.gameObject.name + "を有効化します");
    }

    // 各アニメーション状態をトリガーするメソッド
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

    public void Deffend()
    {
        animator.SetTrigger("Deffend");
    }

    public void Idle()
    {
        animator.SetTrigger("Idle");
    }

    public void GetHit()
    {
        animator.SetTrigger("GetHit");
    }

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

        //GameManager.instance.CheckCharacterList();
        GameManager.instance.CheckGameStatus();
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

    public void GetCardEffect(int effectNumber, int? targetNumber = null)
    {
        if (!targetNumber.HasValue)
        {
            targetNumber = 1;
        }
        switch (effectNumber)
        {
            case 1:
                IncreasePlayers(1);
                break;
            case 2:
                IncreasePlayers(2);
                break;
            case 3:
                IncreasePlayers(3);
                break;
            case 4:
                IncreasePlayers(4);
                break;
            case 5:
                IncreasePlayers(5);
                break;
            case 6:
                IncreasePlayers(targetNumber.Value * 2);
                break;
            case 7:
                IncreasePlayers(targetNumber.Value * 3);
                break;
            case 8:
                //敵がターゲット
                break;
            case 9:
                //敵がターゲット
                break;
            case 10:
                //敵がターゲット
                break;
            case 11:
                AttackUp(1.1f);
                break;
            case 12:
                AttackUp(1.2f);
                break;
            case 13:
                AttackUp(1.3f);
                break;
            case 14:
                DefenceUp(1.1f);
                break;
            case 15:
                DefenceUp(1.2f);
                break;
            case 16:
                DefenceUp(1.3f);
                break;
            case 17:
                //敵がターゲット
                break;
            case 18:
                //敵がターゲット
                break;
            case 19:
                //敵がターゲット
                break;
            case 20:
                //敵がターゲット
                break;
            case 21:
                GetCoin();
                break;
            case 22:
                EquipmentWeapon();
                break;
            case 23:
                EquipmentArmor();
                break;
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
            Instantiate(playerPrefab, new Vector3(this.gameObject.transform.position.x + x, this.gameObject.transform.position.y, this.gameObject.transform.position.z + z), Quaternion.identity);

        }
        GameManager.instance.CheckCharacterList();
    }
    void AttackUp(float value)
    {
        attack = Mathf.RoundToInt(attack * value);
    }
    void DefenceUp(float value)
    {
        defense = Mathf.RoundToInt(defense * value);
    }
    void GetCoin()
    {
        //コインをnumber枚取得する
        float randomNum = Random.Range(0.8f, 2f);
        GameManager.instance.coin += Mathf.RoundToInt(GameManager.instance.stageHierarchy * randomNum);
    }
    void EquipmentWeapon()
    {
        //武器を装備する
        AttackUp(1.3f);
        isEqipmentWeapon = true;
    }
    void EquipmentArmor()
    {
        //防具を装備する
        DefenceUp(1.3f);
        isEqipmentArmor = true;
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
}
