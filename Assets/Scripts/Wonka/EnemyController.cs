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
    [SerializeField] private int attack;
    [SerializeField] private float attackInterval;
    [SerializeField] private int defense;
    [SerializeField] private int speed;

    float lastAttackTime = 0f; //最後に攻撃した時間
    public int maxHp = 100;

    public bool IsDead;
    public bool isAttacking = false;//攻撃中かどうかの判定
    public bool CantMove = false;//移動できない状態の判定

    public Transform playerTarget; // 敵の位置
    private NavMeshAgent agent; // NavMesh Agent
    private Animator animator;

    public Collider weaponCollider;//武器の当たり判定
    public EnemyUIManager enemyUIManager;

    void Start()
    {
        agent = GetComponent<NavMeshAgent>(); // NavMesh Agentの取得              
        animator = GetComponent<Animator>();// Animatorコンポーネントを取得
        DisableColliderWeapon();//武器の当たり判定無効化

        enemyUIManager.Init(this);
    }

    void Update()
    {
        //死亡中はリターン
        if (IsDead)
        {
            print("エネミーが死亡しました");
            return;
        }

        transform.LookAt(playerTarget);//常に敵のほうを向く


        if (GameManager.instance.battleState == true || Input.GetKeyDown(KeyCode.Space))
        {
            float distance = Vector3.Distance(transform.position, playerTarget.position);

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
        print(gameObject.name + "の" + weaponCollider.gameObject.name + "を無効化します");
    }

    public void EnableColliderWeapon()
    {
        weaponCollider.enabled = true;
        print(gameObject.name + "の" + weaponCollider.gameObject.name + "を有効化します");
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
            print("死亡アニメに移行します");
        }

        enemyUIManager.UpdateHP(hp);//HPSliderの更新

        print(gameObject.name + "の残りHP= : " + hp);
    }

    public void OnTriggerEnter(Collider other)
    {
        WeaponDamage weapon = other.GetComponent<WeaponDamage>();
        if (weapon != null)
        {
            //ダメージを与えるものにぶつかったら
            print(other.name + "が" + gameObject.name + "に" + weapon.damage + "のダメージを与えた");

            GetHit();//ノックバック

            Damage(weapon.damage);//ダメージを与える
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
        //// ディレイののち、オブジェクトを2秒かけて縮小
        transform.DOScale(Vector3.zero, 2.0f).SetDelay(2.0f).OnComplete(() => gameObject.SetActive(false));
    }

    // 勝利アニメーションをトリガーするメソッド
    public void Victory()
    {
        if (!IsDead && GameManager.instance.battleState == true)
        {
            print("勝利した");
            GameManager.instance.battleState = false;

            // 2秒後に実行される処理
            DOVirtual.DelayedCall(2.0f, () =>
            {
                animator.SetTrigger("Victory");
                transform.LookAt(Camera.main.transform);

            });
        }
    }

    public void GetCardEffect(int effectNumber)
    {
        switch (effectNumber)
        {
            case 1:

                break;
            case 2:

                break;
            case 3:

                break;
        }
    }

    /// <summary>
    /// カードのエフェクト一覧
    /// </summary>

    public bool EquippedSword()
    {
        return true;
    }

    public bool EquippedShield()
    {
        return true;
    }
}

