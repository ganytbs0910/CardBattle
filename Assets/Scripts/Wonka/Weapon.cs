using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Weapon", menuName = "Weapon/Make New Weapon",order = 0)]

public class Weapon : ScriptableObject
{
    [SerializeField] AnimatorOverrideController animatorOverride = null; //animatorの登録
    [SerializeField] GameObject weaponPrefab = null; //武器の登録
    [SerializeField] int attackPoint;
    [SerializeField] int defendPoint;
    BoxCollider weaponCollider;
    [SerializeField] bool isRightHanded = true;
    [SerializeField] bool TwoHandedWeapon;

    const string rightWeaponName = "rightWeapon";
    const string leftWeaponName = "leftWeapon";

    public void Spawn(Transform rightHand, Transform leftHand,Animator animator)
    {
        if (weaponPrefab != null)
        {
            DestroyOldWeapon(rightHand, leftHand);//古い武器を削除する

            Transform handTransform = GetTransform(rightHand, leftHand);
            //手の位置を取得する。

            GameObject weapon =Instantiate(weaponPrefab, handTransform);
            //手の位置に武器を生成する

            weaponCollider = weapon.GetComponent<BoxCollider>();

            if (isRightHanded == true)
            {
                weapon.name = rightWeaponName;
            }
            else
            {
                weapon.name = leftWeaponName;
            }
  
        }
        if (animatorOverride != null)
        {
            animator.runtimeAnimatorController = animatorOverride;
            //現在のアニメーターにoverrideを上書きする   
        }
    }

    // 古い武器を削除する
    private void DestroyOldWeapon(Transform rightHand, Transform leftHand)
    {
        if (TwoHandedWeapon || isRightHanded) // 両手に装備または右手に装備
        {
            DestroyWeaponInHand(rightHand, rightWeaponName);
        }

        if (TwoHandedWeapon || !isRightHanded) // 両手に装備または左手に装備
        {
            DestroyWeaponInHand(leftHand, leftWeaponName);
        }
    }

    // 指定された手から武器を削除する
    private void DestroyWeaponInHand(Transform hand, string weaponName)
    {
        Transform oldWeapon = hand.Find(weaponName);
        if (oldWeapon != null) // 古い武器が存在する場合は削除
        {
            Destroy(oldWeapon.gameObject);
        }
    }

    //装備する手を取得する
    private Transform GetTransform(Transform rightHand, Transform leftHand)
    {
        Transform handTransform;
        if (isRightHanded)//右手の場合
        {
            handTransform = rightHand; //右手を取得
        }
        else //左手の場合
        {
            handTransform = leftHand;　//左手を取得
        } 
        return handTransform;
    }

    public float GetAttackPoint()
    {
        return attackPoint;
    }

    public float GetDefendPoint()
    {
        return defendPoint;
    }

    public BoxCollider GetCollider()
    {
        
        return weaponCollider;
    }
}
