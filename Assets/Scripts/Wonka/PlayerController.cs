using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class PlayerController : MonoBehaviour
{
    [Header("Playerのステータス")]
    [SerializeField] private int hp;
    [SerializeField] private int attack;
    [SerializeField] private float attackInterval;
    [SerializeField] private int defense;
    [SerializeField] private int speed;

    float lastAttackTime = 0f; //最後に攻撃した時間
    public int maxHp = 100;

    public bool isDie = false;
    public bool isAttacking = false;//攻撃中かどうかの判定
    public bool CantMove = false;//移動できない状態の判定

    public Transform enemyTarget; // 敵の位置
    private NavMeshAgent agent; // NavMesh Agent
    private Animator animator;


    public Collider weaponCollider;//武器の当たり判定
    public PlayerUIManager playerUIManager;


    void Start()
    {
        hp = maxHp;
        agent = GetComponent<NavMeshAgent>(); // NavMesh Agentの取得
        // Animatorコンポーネントを取得
        animator = GetComponent<Animator>();
        DisableColliderWeapon();//武器の当たり判定無効化

        playerUIManager.Init(this);//スライダーの初期化
    }


    void Update()
    {
        //死亡中はリターン
        if (isDie)
        {
            print("プレイヤーが死亡しました");
            return;
        }

        if (GameManager.instance.BattleState == true || Input.GetKeyDown(KeyCode.Space))
        {
            float distance = Vector3.Distance(transform.position, enemyTarget.position);

            if (distance <= agent.stoppingDistance)
            {
                print("攻撃範囲内");
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
                animator.SetTrigger("Attack04");
                break;
        }
        print("Attackアニメーション実行");
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

        playerUIManager.UpdateHP(hp);//HPSliderの更新

        print(gameObject.name + "の残りHP= : " + hp);
    }


    public void OnTriggerEnter(Collider other)
    {
        if (isDie)
        {
            //HPが0なら無効
            return;
        }

        WeaponDamage weapon = other.GetComponent<WeaponDamage>();
        if (weapon != null)
        {
            //ダメージを与えるものにぶつかったら
            print(other.name + "が" + gameObject.name + "に" + weapon.damage + "のダメージを与えた");

            GetHit();//ノックバック
            Damage(weapon.damage);//ダメージを与える
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
        print(gameObject.name + "の" + weaponCollider.gameObject.name + "を無効化します");
    }

    public void EnableColliderWeapon()
    {
        weaponCollider.enabled = true;
        print(gameObject.name + "の" + weaponCollider.gameObject.name + "を有効化します");
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
        isDie = true;
    }

    public void Victory()
    {
        animator.SetTrigger("Victory");
    }
}
