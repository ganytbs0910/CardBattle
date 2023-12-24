using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;
using DG.Tweening;

//Distance 7以下⇒Runに移行
//Ditstance 2以下⇒Attack移行
public class EnemyController : MonoBehaviour
{
    [Header("Enemyのステータス")]
    [SerializeField] private int hp;
    public int attack;
    [SerializeField] private float attackInterval;
    [SerializeField] private int defense;
    [SerializeField] private int speed;

    float lastAttackTime = 0f; //最後に攻撃した時間
    public int maxHp = 100;

    public bool IsDead;
    public bool isAttacking = false;//攻撃中かどうかの判定
    public bool CantMove = false;//移動できない状態の判定

    bool poison;
    bool paralyze;
    bool sleep;
    bool freeze;
    public Transform playerTarget; // 敵の位置
    private NavMeshAgent agent; // NavMesh Agent
    private Animator animator;

    public Collider weaponCollider;//武器の当たり判定
    public EnemyUIManager enemyUIManager;

    private Vector3 initialPosition;

    void Start()
    {
        hp = maxHp;
        agent = GetComponent<NavMeshAgent>(); // NavMesh Agentの取得              
        animator = GetComponent<Animator>();// Animatorコンポーネントを取得
        DisableColliderWeapon();//武器の当たり判定無効化

        enemyUIManager.Init(this);

        initialPosition = transform.position;
    }

    void Update()
    {
        //死亡中はリターン
        if (IsDead)
        {
            //print("エネミーが死亡しました");
            return;
        }

        // 現在のターゲットが死んでいれば新しいターゲットを探す
        if (playerTarget != null)
        {
            PlayerController targetEnemy = playerTarget.GetComponent<PlayerController>();
            if (targetEnemy != null && targetEnemy.IsDead)
            {
                print("プレイヤーを倒したので次のターゲットを探します");
                FindClosestPlayer(transform);
            }
        }

        transform.LookAt(playerTarget);//常に敵のほうを向く


        if (GameManager.instance.battleState == true || Input.GetKeyDown(KeyCode.Space))
        {
            float distance = Vector3.Distance(transform.position, playerTarget.position);
            agent.isStopped = false;
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
                agent.SetDestination(playerTarget.position); // 敵に向かって移動開始
                Move(); // 移動アニメ
            }
        }
    }


    /// <summary>
    /// 現在の位置から最も近くにいるプレイヤーを探す
    /// </summary>
    /// <param name="enemyTransform">現在位置を登録</param>
    public void FindClosestPlayer(Transform enemyTransform)
    {
        PlayerController closestPlayer = null;
        float closestDistanceSqr = Mathf.Infinity;

        foreach (var player in GameManager.instance.players)
        {
            if (!player.IsDead)//死んでいなければ
            {
                float distanceSqr = (player.transform.position - enemyTransform.position).sqrMagnitude;
                if (distanceSqr < closestDistanceSqr)
                {
                    closestDistanceSqr = distanceSqr;
                    closestPlayer = player;
                }
            }
        }
        if (closestPlayer != null)
        {
            UpdateNavMeshTarget(closestPlayer.transform) ;
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
        //animator.SetTrigger("Idle");
        // その他のリセット処理（必要に応じて）

        // プレイヤーグループの平均位置に向く
        Vector3 averagePlayerPosition = GetAveragePositionOfPlayers();
        LookTowards(averagePlayerPosition);
    }

    // NavMeshAgentのターゲットを更新するメソッド
    public void UpdateNavMeshTarget(Transform newTarget)
    {
        if (newTarget == null)
        {
            return;
        }
        playerTarget = newTarget;
        if (agent != null) //ヌルリファ対策
        {
            agent.isStopped = true; // 移動を停止
            agent.SetDestination(playerTarget.position);
        }
        print(gameObject.name + "の新しいターゲットを更新しました");
    }


    bool CanAttack()　//インターバル
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
        if (Time.time - lastAttackTime < attackInterval)
        {
            // インターバル時間が経過していない場合、攻撃しない
            return;
        }

        isAttacking = true;

        lastAttackTime = Time.time; // 攻撃時刻を更新

        int attackNumber = Random.Range(1, 3); // 1から2の間のランダムな数を生成

        // 生成された数に応じて異なる攻撃アニメーションをトリガー
        switch (attackNumber)
        {
            case 1:
                animator.SetTrigger("Attack01");
                break;
            case 2:
                animator.SetTrigger("Attack02");
                break;
        }
        //print("Attackアニメーション実行");
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

        enemyUIManager.UpdateHP(hp);//HPSliderの更新

        //print(gameObject.name + "の残りHP= : " + hp);
    }

    public void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            PlayerController player = other.GetComponent<PlayerController>();
            if (player != null)
            {
                //ダメージを与えるものにぶつかったら
                print(other.name + "が" + gameObject.name + "に" + player + "のダメージを与えた");

                GetHit();//ノックバック

                Damage(player.attack);//ダメージを与える
            }
        }

        if (other.CompareTag("Bomb"))
        {
            BombController bomb = other.GetComponent<BombController>();
            if (bomb != null)
            {
                //ダメージを与えるものにぶつかったら
                print(other.name + "が" + gameObject.name + "に" + bomb.Attack + "のダメージを与えた");

                GetHit();//ノックバック

                Damage(bomb.Attack);//ダメージを与える
            }
        }
    }

    public void Deffend()
    {
        animator.SetTrigger("Deffend");
    }

    // 各アニメーション状態をトリガーするメソッド
    public void Move()
    {
        if (CantMove == false)
        {
            animator.SetTrigger("Move");
            //print("EnemyMoveアニメーション実行");
        }
        else
        {
            //print("EnemyAttackBehaviorにより移動不可能");
        }
    }

    public void Idle()
    {
        animator.SetTrigger("Idle");
    }

    // アニメーションイベントまたはその他の方法で攻撃状態をリセットする
    public void ResetAttackState()
    {
        isAttacking = false;
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
        GameManager.instance.RemoveEnemyFromList(this);
        //Debug.LogError("Enemy removed from list: " + gameObject.name);

        //GameManager.instance.CheckCharacterList();
        GameManager.instance.CheckGameStatus();

        //// ディレイののち、オブジェクトを2秒かけて縮小
        transform.DOScale(Vector3.zero, 2.0f).SetDelay(2.0f).OnComplete(() => Destroy(gameObject));

    }

    // 勝利アニメーションをトリガーするメソッド
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

    void CheckAbnormalCondition()
    {

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
                //プレイヤーがターゲット
                break;
            case 2:
                //プレイヤーがターゲット
                break;
            case 3:
                //プレイヤーがターゲット
                break;
            case 4:
                //プレイヤーがターゲット
                break;
            case 5:
                //プレイヤーがターゲット
                break;
            case 6:
                //プレイヤーがターゲット
                break;
            case 7:
                //プレイヤーがターゲット
                break;
            case 8:
                //敵がターゲット
                DecreaseHealth(0.1f);
                break;
            case 9:
                //敵がターゲット
                DecreaseHealth(0.2f);
                break;
            case 10:
                //敵がターゲット
                DecreaseHealth(0.3f);
                break;
            case 11:
                //プレイヤーがターゲット
                break;
            case 12:
                //プレイヤーがターゲット
                break;
            case 13:
                //プレイヤーがターゲット
                break;
            case 14:
                //プレイヤーがターゲット
                break;
            case 15:
                //プレイヤーがターゲット
                break;
            case 16:
                //プレイヤーがターゲット
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
                //プレイヤーがターゲット
                break;
            case 22:
                //プレイヤーがターゲット
                break;
            case 23:
                //プレイヤーがターゲット
                break;
        }
    }

    /// <summary>
    /// カードのエフェクト一覧
    /// </summary>
    void DecreaseHealth(float value)
    {
        hp = (int)(hp * (1 - value));
    }

    void LookTowards(Vector3 position)
    {
        Vector3 direction = position - transform.position;
        direction.y = 0; // Y軸の回転は無視
        transform.rotation = Quaternion.LookRotation(direction);
    }

    Vector3 GetAveragePositionOfPlayers()
    {
        var players = FindObjectsOfType<PlayerController>();
        Vector3 sum = Vector3.zero;
        foreach (var player in players)
        {
            sum += player.transform.position;
        }
        return players.Length > 0 ? sum / players.Length : Vector3.zero;
    }
}

