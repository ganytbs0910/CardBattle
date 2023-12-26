using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyWeapon : MonoBehaviour
{
    EnemyController enemy;

    //プレイヤーの基礎攻撃力＋武器ダメージを返す
    private void Start()
    {
        enemy = GetComponentInParent<EnemyController>();
    }

    public int SumDamage()
    {
        int weaponDamage = enemy.attack + (int)enemy.weapon.GetAttackPoint();

        return weaponDamage;
    }
}
