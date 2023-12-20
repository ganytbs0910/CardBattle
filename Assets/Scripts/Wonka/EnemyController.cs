using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

//Distance 7以下⇒Runに移行
//Ditstance 2以下⇒Attack移行
public class EnemyController : MonoBehaviour
{ 
    [Header("Playerのステータス")]
    [SerializeField] private int hp;
    [SerializeField] private int attack;
    [SerializeField] private float attackInterval;
    [SerializeField] private int defense;
    [SerializeField] private int speed;

    public Transform playerTarget; // 敵の位置
    private NavMeshAgent agent; // NavMesh Agent
    private Animator animator;
    private bool isAttacking = false;
    public bool CantMove = false;

    public static EnemyController instance;

    void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }
    }

    void Start()
    {
        agent = GetComponent<NavMeshAgent>(); // NavMesh Agentの取得
                                              // Animatorコンポーネントを取得
        animator = GetComponent<Animator>();
    }

    void Update()
    {
        if (GameManager.instance.BattleState == true || Input.GetKeyDown(KeyCode.Space)) // バトル開始
        {
            agent.SetDestination(playerTarget.position); // 敵に向かって移動開始
            Move();//移動アニメ
            print("移動開始");
        }

        //敵と自分の距離＝攻撃範囲
        float distance = Vector3.Distance(transform.position, playerTarget.position);
        if (distance <= agent.stoppingDistance) // 攻撃範囲<=停止位置敵=敵が攻撃範囲内にいる
        {
            Attack(); // 攻撃
            print("攻撃開始");
        }
    }

    // 各アニメーション状態をトリガーするメソッド
    public void Move()
    {
        if (CantMove == false)
        {
            animator.SetTrigger("Move");
            print("Moveアニメーション実行");
        }
        else
        {
            print("PlayerAttackBehaviorにより移動不可能");
        }
    }

    public void Idle()
    {
        animator.SetTrigger("Idle");
    }

    public void Attack()
    {
        if (isAttacking)
        {
            // すでに攻撃中の場合、何もしない
            return;
        }

        isAttacking = true;

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
        print("Attackアニメーション実行");
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
    }

    public void Victory()
    {
        animator.SetTrigger("Victory");
    }
}

