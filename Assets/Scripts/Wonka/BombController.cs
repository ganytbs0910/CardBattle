using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using MoreMountains.Feedbacks;
using DG.Tweening;

public class BombController : MonoBehaviour
{
    public MMFeedbacks ShakeFeedback;

    public int Attack;
    public float BombRadius = 2f;

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
        SphereCollider sphereCollider = GetComponent<SphereCollider>();
        if (sphereCollider != null)
        {
            DOTween.To(() => sphereCollider.radius, x => sphereCollider.radius = x, BombRadius, 0.4f);
        }
        ShakeFeedback?.PlayFeedbacks();

        AudioManager.instance.PlaySE(AudioManager.SE.BombExprosion);
    }

    public void Destroy()
    {
        Destroy(this.gameObject);
    }
}
