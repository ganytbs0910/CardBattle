using System;
using UnityEngine;

[CreateAssetMenu(fileName = "Weapon", menuName = "Weapon/Make New Weapon", order = 0)]
public class Weapon : ScriptableObject
{
    [SerializeField] AnimatorOverrideController animatorOverride;
    [SerializeField] AnimatorOverrideController subAnimatorOverride = null;
    [SerializeField] GameObject weaponPrefab = null;
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

    public enum WeaponType { NoWeapon, OneHandSword, TwoHandSword, Shield, Spear, Arrow, Wand }
    public WeaponType weaponType;

    public void Spawn(Transform rightHand, Transform leftHand, Animator animator)
    {
        if (weaponPrefab != null)
        {
            DestroyAllWeaponsInHand(rightHand);
            DestroyAllWeaponsInHand(leftHand);

            Transform handTransform = GetTransform(rightHand, leftHand, animator);
            GameObject weapon = Instantiate(weaponPrefab, handTransform.position, handTransform.rotation, handTransform);
            weapon.transform.localPosition = Vector3.zero;
            weaponCollider = weapon.GetComponent<BoxCollider>();

            SetWeaponName(weapon);
        }
    }

    private Transform GetTransform(Transform rightHand, Transform leftHand, Animator animator)
    {
        Transform targetHand = isRightHanded ? rightHand : leftHand;

        if (TwoHandedWeapon)
        {
            targetHand = rightHand;
            animator.runtimeAnimatorController = animatorOverride;
        }
        else if (isShield)
        {
            targetHand = leftHand;
            animator.runtimeAnimatorController = subAnimatorOverride ?? animatorOverride;
        }
        else if (!IsRightHandEmpty(rightHand) && !isShield)
        {
            targetHand = leftHand;
            animator.runtimeAnimatorController = subAnimatorOverride ?? animatorOverride;
        }
        else
        {
            animator.runtimeAnimatorController = animatorOverride;
        }

        return targetHand;
    }

    private void SetWeaponName(GameObject weapon)
    {
        if (TwoHandedWeapon || isRightHanded)
        {
            weapon.name = rightWeaponName;
        }
        else if (isShield)
        {
            weapon.name = leftWeaponName;
        }
        else
        {
            weapon.name = isRightHanded ? rightWeaponName : leftWeaponName;
        }
    }

    private void DestroyAllWeaponsInHand(Transform hand)
    {
        foreach (Transform child in hand)
        {
            if (child.name == rightWeaponName || child.name == leftWeaponName || child.name.StartsWith("NoWeapon"))
            {
                Destroy(child.gameObject);
            }
        }
    }

    public bool IsLeftHandEmpty(Transform leftHand)
    {
        return leftHand.Find(leftWeaponName) == null;
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
        return weaponCollider == null ? null : weaponCollider;
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
        // Add projectile launch logic here
    }
}
