using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ThrowController : MonoBehaviour
{
    public GameObject prefabBullet;

    public float ShootPower;

    public bool Throwing;

    // Update is called once per frame
    void Update()
    {
        //マウスが離されたら
        if (Input.GetMouseButtonUp(0)&& Throwing == true)
        {
            //マウスの場所へレイを飛ばす
            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);

            //光線の方向(ベクトル)を取得する
            Vector3 dir = ray.direction;

            //prefabBulletを生成する。
            GameObject bullet = Instantiate(prefabBullet);

            //カメラの位置に弾丸を移動
            bullet.transform.position = transform.position;

            //弾丸を放つ
            bullet.GetComponent<BombController>().Shoot(dir.normalized * ShootPower);
            //正規化（Normalization）はベクトルの長さ（大きさ）を1にする処理

            Throwing = false;
        }
    }
}
