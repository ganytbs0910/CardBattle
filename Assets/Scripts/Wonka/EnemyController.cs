using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.AI;
using DG.Tweening;

//Distance 7以下⇒Runに移行
//Ditstance 2以下⇒Attack移行
public class EnemyController : MonoBehaviour
{
    [Header("Enemyのステータス")]
    public int id;
    public int maxHp = 100;
    public int attack;
    public float attackInterval;
    public int defense;
    public int speed;
    public Weapon weapon = null;


    //通常変数
    float lastAttackTime = 0f; //最後に攻撃した時間
    int hp;
    public bool IsDead;
    public bool isAttacking = false;//攻撃中かどうかの判定
    public bool CantMove = false;//移動できない状態の判定

    bool poison;
    bool paralyze;
    bool sleep;
    bool freeze;
    public Transform playerTarget; // 敵の位置
    public NavMeshAgent agent; // NavMesh Agent
    private Animator animator;

    public Collider weaponCollider;//武器の当たり判定
    public EnemyUIManager enemyUIManager;

    private Vector3 initialPosition;

    [SerializeField] GameObject coinEffectPrefab;
    [SerializeField] private Sprite dropItemPrefab;

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
                //print("プレイヤーを倒したので次のターゲットを探します");
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
                    Attack();
                }
                else//攻撃までのインターバル中
                {
                    //print("防御");
                    Defend();
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
                    closestPlayer = player;　//一番近いプレイヤーを登録
                }
            }
        }
        if (closestPlayer != null)
        {
            //ターゲットを設定
            UpdateNavMeshTarget(closestPlayer.transform);
        }
        else
        {
            UpdateNavMeshTarget(null); // ターゲットが見つからない場合は null を設定
        }
    }


    //位置とアニメを初期状態にリセットする
    public void ResetToInitialPosition()
    {
        //初期位置に移動させる
        transform.position = initialPosition;

        // プレイヤーグループの平均位置に敵を向かせる
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
        //print(gameObject.name + "の新しいターゲットを更新しました");
    }

    bool CanAttack() //インターバルの設定
    {
        return Time.time - lastAttackTime >= attackInterval;
    }

    public void OnTriggerEnter(Collider other)
    {
        //print(other.name);
        if (other.CompareTag("Weapon_Player"))
        {
            PlayerWeapon playerWeapon = other.GetComponent<PlayerWeapon>();
            if (playerWeapon != null)
            {
                //ダメージを与えるものにぶつかったら
                //print(other.name + "が" + gameObject.name + "に" + playerWeapon.SumDamage() + "ダメージを与えた");

                Damage(playerWeapon.SumDamage()); //ダメージを与える
            }
        }

        if (other.CompareTag("Projectile_Player"))
        {
            Projectile projectile = other.GetComponent<Projectile>();
            if (projectile != null)
            {
                Damage(projectile.damage);
            }
        }

        if (other.CompareTag("Bomb"))
        {
            BombController bomb = other.GetComponent<BombController>();
            if (bomb != null)
            {
                //ダメージを与えるものにぶつかったら
                //print(other.name + "が" + gameObject.name + "に" + bomb.Attack + "のダメージを与えた");

                Damage(bomb.Attack);//ダメージを与える
            }
        }
    }

    //攻撃
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

        animator.SetTrigger("Attack");
        animator.SetInteger("AttackType", Random.Range(1, 3));

        //int attackNumber = Random.Range(1, 3); // 1から2の間のランダムな数を生成

        //// 生成された数に応じて異なる攻撃アニメーションをトリガー
        //switch (attackNumber)
        //{
        //    case 1:
        //        animator.SetTrigger("Attack01");
        //        break;
        //    case 2:
        //        animator.SetTrigger("Attack02");
        //        break;
        //}
        //print("Attackアニメーション実行");
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
        else
        {
            GetHit();//ノックバック
        }

        enemyUIManager.UpdateHP(hp);//HPSliderの更新

        //print(gameObject.name + "の残りHP= : " + hp);
    }


    //防御
    public void Defend()
    {
        animator.SetTrigger("Defend");
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


    //ノックバック
    public void GetHit()
    {
        animator.SetTrigger("GetHit");
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

        if (coinEffectPrefab != null)
        {
            // コインエフェクトのインスタンス化
            Instantiate(coinEffectPrefab, transform.position, Quaternion.identity);
        }

        //コインを入手
        GameManager.instance.GetCoin();

        // GameManager のプレイヤーリストから自身を除外
        GameManager.instance.RemoveEnemyFromList(this);

        //// ディレイののち、オブジェクトを2秒かけて縮小
        transform.DOScale(Vector3.zero, 2.0f).SetDelay(2.0f).OnComplete(() => Destroy(gameObject));

        //ゲームの勝敗をチェックする
        GameManager.instance.CheckBattleStatus();
        //ドロップ確率
        int dropNumber = Random.Range(1, 101);
        if (dropNumber != 1) return;
        switch (this.gameObject.name)
        {
            case "8.Enemy_Skeleton":
                PlayerPrefs.SetInt($"Collection0", 1);
                ItemDrop();
                break;
            case "Boss2(Clone)":
                PlayerPrefs.SetInt($"Collection1", 1);
                ItemDrop();
                break;
            case "Boss3(Clone)":
                PlayerPrefs.SetInt($"Collection2", 1);
                ItemDrop();
                break;
            case "Boss4(Clone)":
                PlayerPrefs.SetInt($"Collection3", 1);
                ItemDrop();
                break;
            default:
                break;
        }
        UIManager.instance.CollectionCardUpdate();
    }

    void ItemDrop()
    {
        Vector3 worldPosition = this.gameObject.transform.position;
        //メインカメラから見た位置にする
        Vector3 screenPosition = Camera.main.WorldToScreenPoint(worldPosition);
        UIManager.instance.ItemDropEffect(dropItemPrefab, screenPosition);
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

    //アニメイベントでも使用中
    public void DisableColliderWeapon()
    {
        weaponCollider.enabled = false;
        //print(gameObject.name + "の" + weaponCollider.gameObject.name + "を無効化します");
    }

    //アニメイベントで使用中
    public void EnableColliderWeapon()
    {
        weaponCollider.enabled = true;
        //print(gameObject.name + "の" + weaponCollider.gameObject.name + "を有効化します");
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
                //敵がターゲット 敵の体力-10％
                DecreaseHealth(0.1f);
                break;
            case 9:
                //敵がターゲット 敵の体力-20％
                DecreaseHealth(0.2f);
                break;
            case 10:
                //敵がターゲット 敵の体力-30％
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
            case 17://敵を毒状態にする
                Poison();
                break;
            case 18://敵をマヒ状態にする
                Paralyze();
                break;
            case 19://敵を眠り状態にする
                Sleep();
                break;
            case 20://敵をフリーズ状態にする
                Freeze();
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
        //hpをvalue%分減らす
        hp -= (int)(hp * value);
        enemyUIManager.UpdateHP(hp);//HPSliderの更新
        print("敵に" + hp * value + "ダメージを与えました");
    }

    //
    void LookTowards(Vector3 position)
    {
        Vector3 direction = position - transform.position;
        direction.y = 0; // Y軸の回転は無視
        transform.rotation = Quaternion.LookRotation(direction);
    }

    //プレイヤーたちの平均の位置を取得
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

    void Poison()
    {
        poison = true;
        Renderer[] renderers = GetComponentsInChildren<Renderer>();
        //このゲームオブジェクトの全子オブジェクトを取得して、そのRendererの色を紫色にする
        foreach (Renderer renderer in renderers)
        {
            renderer.material.color = Color.magenta;
        }
    }
    void Paralyze()
    {
        paralyze = true;
        Renderer[] renderers = GetComponentsInChildren<Renderer>();
        //このゲームオブジェクトの全子オブジェクトを取得して、そのRendererの色を黄色にする
        foreach (Renderer renderer in renderers)
        {
            renderer.material.color = Color.yellow;
        }
    }
    void Sleep()
    {
        sleep = true;
        Renderer[] renderers = GetComponentsInChildren<Renderer>();
        //このゲームオブジェクトの全子オブジェクトを取得して、そのRendererの色を青色にする
        foreach (Renderer renderer in renderers)
        {
            renderer.material.color = Color.blue;
        }
    }
    void Freeze()
    {
        freeze = true;
        Renderer[] renderers = GetComponentsInChildren<Renderer>();
        //このゲームオブジェクトの全子オブジェクトを取得して、そのRendererの色を水色にする
        foreach (Renderer renderer in renderers)
        {
            renderer.material.color = Color.cyan;
        }
    }
}

