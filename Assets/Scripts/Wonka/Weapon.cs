using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Weapon", menuName = "Weapon/Make New Weapon", order = 0)]

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
    [SerializeField] private bool twoHandedWeapon;
    [SerializeField] bool isShield;
    [SerializeField] Projectile projectile = null;

    const string rightWeaponName = "rightWeapon";
    const string leftWeaponName = "leftWeapon";

    PlayerController playerController;

    public enum WeaponType
    {
        NoWeapon, OneHandSword, TwoHandSword, Shield, Spear, Arrow, Wand
    }

    public WeaponType weaponType;

    public void Spawn(Transform rightHand, Transform leftHand, Animator animator)
    {
        if (!weaponPrefab) return;

        DestroyOldWeapon(rightHand, leftHand);

        Transform handTransform = GetTransform(rightHand, leftHand, animator);
        GameObject weapon = Instantiate(weaponPrefab, handTransform.position, handTransform.rotation, handTransform);
        weapon.transform.localPosition = Vector3.zero;
        weapon.name = GetWeaponName();

        ApplyAnimatorController(animator, handTransform, rightHand, leftHand); // 修正したメソッド呼び出し
    }

    //装備する手を取得する
    private Transform GetTransform(Transform rightHand, Transform leftHand, Animator animator)
    {
        if (twoHandedWeapon) return projectile != null ? leftHand : rightHand;
        return isRightHanded && !IsRightHandEmpty(rightHand) ? leftHand : (isRightHanded ? rightHand : leftHand);
    }
    private void DestroyOldWeapon(Transform rightHand, Transform leftHand)
    {
        DestroyAllWeaponsInHand(rightHand);
        DestroyAllWeaponsInHand(leftHand);
    }


    private void DestroyWeaponInHand(Transform hand, string weaponName)
    {
        Transform oldWeapon = hand.Find(weaponName);
        if (oldWeapon) Destroy(oldWeapon.gameObject);
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

    private string GetWeaponName()
    {
        if (twoHandedWeapon) return rightWeaponName;
        if (isShield) return leftWeaponName;
        return isRightHanded ? rightWeaponName : leftWeaponName;
    }

    private void ApplyAnimatorController(Animator animator, Transform handTransform, Transform rightHand, Transform leftHand)
    {
        // handTransformがrightHandに等しいかどうかを確認して適切なAnimatorOverrideControllerを適用
        AnimatorOverrideController controller = handTransform == rightHand ? animatorOverride : subAnimatorOverride;
        if (controller) animator.runtimeAnimatorController = controller;
    }

    public bool IsRightHandEmpty(Transform rightHand)
    {
        return rightHand.Find(rightWeaponName) == null;
    }

    public int GetATKPoint()
    {
        return attackPoint;
    }

    public int GetDEFPoint()
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

    public bool HasProjectile()
    {
        return projectile != null;
    }

    public void LaunchProjectile(Transform rightHand, Transform leftHand, Animator animator)
    {
        Projectile projectileInstance = Instantiate(projectile, GetTransform(rightHand, leftHand, animator).position, Quaternion.identity);
        if (playerController != null)
        {
            //PlayerControllerの攻撃値をダメージに代入
            projectileInstance.damage = playerController.attack;
        }

    }
}
