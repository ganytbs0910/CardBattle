using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Weapon", menuName = "Weapon/Make New Weapon",order = 0)]

public class Weapon : ScriptableObject
{

    [SerializeField] AnimatorOverrideController animatorOverride; //animatorの登録
    [SerializeField] AnimatorOverrideController subAnimatorOverride = null; //サブアニメーターの登録

    [SerializeField] GameObject weaponPrefab = null; //武器の登録
    [SerializeField] float weaponRange;
    [SerializeField] int attackPoint;
    [SerializeField] int defendPoint;
    BoxCollider weaponCollider;
    [SerializeField] bool isRightHanded = true;
    [SerializeField] bool TwoHandedWeapon;
    [SerializeField] bool isShield;
    [SerializeField] Projectile projectile = null;

    const string rightWeaponName = "rightWeapon";
    const string leftWeaponName = "leftWeapon";

    public void Spawn(Transform rightHand, Transform leftHand, Animator animator)
    {
        if (weaponPrefab != null)
        {
            DestroyOldWeapon(rightHand, leftHand);//古い武器を削除する

            Transform handTransform = GetTransform(rightHand, leftHand ,animator);
            //手の位置を取得する。

            // 右手に装備しようとしているが、右手が既に埋まっている場合は左手に装備
            bool shouldFlip = isRightHanded && !IsRightHandEmpty(rightHand);

            GameObject weapon = Instantiate(weaponPrefab, handTransform);
            //手の位置に武器を生成する

            weaponCollider = weapon.GetComponent<BoxCollider>();

            // 正しい武器の名前を設定
            if (shouldFlip)
            {
                weapon.name = leftWeaponName; // 左手に装備するので名前をleftWeaponに
            }
            else
            {
                weapon.name = isRightHanded ? rightWeaponName : leftWeaponName;
            }

            // 武器の反転が必要な場合、スケールを反転
            if (shouldFlip)
            {
                // 武器をZ軸で-180度回転させる
                weapon.transform.localRotation = Quaternion.Euler(0, -90, -180);
            }
        }
    }

    //装備する手を取得する
    private Transform GetTransform(Transform rightHand, Transform leftHand ,Animator animator)
    {
        // 両手に装備する武器で、かつプロジェクタイルがある場合、常に左手を使用
        if (TwoHandedWeapon && projectile != null)
        {
            if (animatorOverride != null)
            {
                animator.runtimeAnimatorController = animatorOverride;
            }
            return leftHand;
        }
        // 両手に装備する通常の武器の場合、常に右手を使用
        else if (TwoHandedWeapon)
        {
            if (animatorOverride != null)
            {
                animator.runtimeAnimatorController = animatorOverride;
            }
            return rightHand;
        }

        // 右手に装備しようとしているが、右手が既に埋まっている場合は左手に装備
        if (isRightHanded && !IsRightHandEmpty(rightHand))
        {
            if (subAnimatorOverride != null)
            {
                animator.runtimeAnimatorController = subAnimatorOverride;
            }
            return leftHand; //右手を取得
        }
        else 
        {
            if (animatorOverride != null)
            {
                animator.runtimeAnimatorController = animatorOverride;
            }
            return isRightHanded ? rightHand : leftHand;
        }
    }

    // 古い武器を削除する
    private void DestroyOldWeapon(Transform rightHand, Transform leftHand)
    {
        // 両手に装備する武器の場合
        if (TwoHandedWeapon)
        {
            // 右手のすべての武器を削除
            DestroyAllWeaponsInHand(rightHand);
            // 左手のデフォルトのオブジェクト（NoWeapon_l）も削除
            DestroyWeaponInHand(leftHand, "NoWeapon_l");
        }
        // 右手に装備しようとしているが、右手が既に埋まっている場合、左手の武器を削除
        if (isRightHanded && !IsRightHandEmpty(rightHand))
        {
            DestroyWeaponInHand(leftHand, leftWeaponName);
            DestroyWeaponInHand(leftHand, "NoWeapon_l");
        }
        else // 右手が空の場合、通常通り処理
        {
            if (TwoHandedWeapon || isRightHanded) // 両手に装備または右手に装備
            {
                DestroyWeaponInHand(rightHand, rightWeaponName);
                // 右手に装備する場合、右手のデフォルトのオブジェクト（NoWeapon_r）を削除
                DestroyWeaponInHand(rightHand, "NoWeapon_r");
            }

            if (TwoHandedWeapon || !isRightHanded) // 両手に装備または左手に装備
            {
                DestroyWeaponInHand(leftHand, leftWeaponName);
                // 左手に装備する場合、左手のデフォルトのオブジェクト（NoWeapon_l）も削除
                DestroyWeaponInHand(leftHand, "NoWeapon_l");
            }
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

    private void DestroyAllWeaponsInHand(Transform hand)
    {
        foreach (Transform child in hand)
        {
            if (child.name == rightWeaponName || child.name == leftWeaponName || child.name == "NoWeapon_r" || child.name == "NoWeapon_l")
            {
                Destroy(child.gameObject);
            }
        }
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
        if (weaponCollider == null)
        { return null; }
        return weaponCollider;
    }

    public float GetRange()
    {
        return weaponRange;
    }    

    // 左手が空かどうかを確認する
    public bool IsLeftHandEmpty(Transform leftHand)
    {
        return leftHand.Find(leftWeaponName) == null;
    }

    // 右手が空かどうかを確認する
    public bool IsRightHandEmpty(Transform rightHand)
    {
        return rightHand.Find(rightWeaponName) == null;
    }

    public bool HasProjectile()
    {
        return projectile != null;
    }

    public void LaunchProjectile(Transform rightHand, Transform leftHand,Animator animator)
    { 
        Projectile projectileInstance =Instantiate(projectile, GetTransform(rightHand,leftHand,animator).position,Quaternion.identity);
        projectileInstance.damage = attackPoint;
    }
}
