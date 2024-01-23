using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Projectile : MonoBehaviour
{
    public Transform enemyTarget; // 敵の位置
    [SerializeField] float speed = 1;
    [SerializeField] GameObject hitEffect = null;
    [SerializeField] GameObject MuzzleEffect = null;
    public int damage;
    // Update is called once per frame

    private void Start()
    {
        //damage = 
        if (MuzzleEffect != null)
        {
            Instantiate(MuzzleEffect, transform.position, transform.rotation);
        }
    }
    void Update()
    {
        //ProjectTileから最も近い距離にいる敵を探す
        FindClosestEnemy(transform);

        //ターゲットが見つからなければリターン
        if (enemyTarget == null)
        {
            Destroy(this);
            return;
        }

        transform.LookAt(GetAimLocation());//ターゲットをみる
        transform.Translate(Vector3.forward * speed * Time.deltaTime);//まっすぐ進む
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Enemy"))
        {
            print("着弾した");
            Destroy(gameObject);

            if (hitEffect != null)
            {
                Instantiate(hitEffect, GetAimLocation(), transform.rotation);
            }
        }

    }

    //着弾場所の取得
    public Vector3 GetAimLocation()
    {
        CapsuleCollider targetCapsule = enemyTarget.GetComponent<CapsuleCollider>();

        if (targetCapsule == null)
        {
            return enemyTarget.position; //カプセルコライダーがない場合は通常位置
        }
        //ターゲットの位置のカプセルコライダーの中央少し上に着弾
        return enemyTarget.position + Vector3.up * targetCapsule.height / 2;
    }


    /// <summary>
    /// 現在の位置から最も近くにいるプレイヤーを探す
    /// </summary>
    /// <param name="enemyTransform">Projectileの現在位置を登録</param>
    public void FindClosestEnemy(Transform projectileTransform)
    {
        EnemyController closestEnemy = null;
        float closestDistanceSqr = Mathf.Infinity;

        foreach (var enemy in GameManager.instance.enemies)
        {
            if (!enemy.IsDead)//死んでいなければ
            {
                float distanceSqr = (enemy.transform.position - projectileTransform.position).sqrMagnitude;
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
            enemyTarget = closestEnemy.transform;
        }
        else
        {
            enemyTarget = null;
        }
    }
}
