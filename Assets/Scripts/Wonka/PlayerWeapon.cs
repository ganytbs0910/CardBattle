using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerWeapon : MonoBehaviour
{
    PlayerController player;

    //プレイヤーの基礎攻撃力＋武器ダメージを返す
    private void Start()
    {
        player = GetComponentInParent<PlayerController>();
    }
    public int SumDamage()
    {
        if (player.currentWeapon == null) return player.attack;

        int weaponDamage = player.attack + (int)player.currentWeapon.GetAttackPoint();

        return weaponDamage;
    }
}
