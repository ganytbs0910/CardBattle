using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour
{
    [Header("Playerのステータス")]
    [SerializeField] private int hp;
    [SerializeField] private int attack;
    [SerializeField] private float attackInterval;
    [SerializeField] private int defense;
    [SerializeField] private int speed;

    private Animator animator;

    public static PlayerController instance;

    void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }
    }

    void Start()
    {
        // Animatorコンポーネントを取得
        animator = GetComponent<Animator>();
    }

    // 各アニメーション状態をトリガーするメソッド
    public void Move()
    {
        animator.SetTrigger("Move");
    }

    public void Idle()
    {
        animator.SetTrigger("Idle");
    }

    public void Attack()
    {
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
