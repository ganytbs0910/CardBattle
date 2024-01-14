using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using MoreMountains.Feedbacks;

public class BombController : MonoBehaviour
{
    public MMFeedbacks ShakeFeedback;

    public int Attack;

    Animator animator;
    private void Start()
    {
        animator = GetComponent<Animator>();
        //プレイヤーのボム攻撃をプラスする
        PlayerController playerController = GameObject.Find("Player").GetComponent<PlayerController>();
        playerController.throwAttack += Attack;
    }


    /// <summary>
    /// 爆弾を放つ
    /// </summary>
    /// <param name="dir">弾丸の方向</param>
    public void Shoot(Vector3 dir)
    {
        GetComponent<Rigidbody>().AddForce(dir);
        //指定した向きに対して力を加える
    }

    private void OnCollisionEnter(Collision collision)
    {
        animator.SetTrigger("Attack");
    }

    public void Shake()
    {
        ShakeFeedback?.PlayFeedbacks();
    }

    public void Destroy()
    {
        Destroy(this.gameObject);
    }
}
