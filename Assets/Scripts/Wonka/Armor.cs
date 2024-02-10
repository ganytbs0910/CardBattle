using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Armor", menuName = "Armor/Make New Armor", order = 0)]

public class Armor : ScriptableObject
{
    public enum ArmorType
    {
        Head,
        Body,
        BackPack,
    }

    public ArmorType armorType = ArmorType.Head;

    [SerializeField] GameObject armorPrefab = null; //武器の登録
    [SerializeField] string armorName = null;
    [SerializeField] int ATKPoint;
    [SerializeField] int DEFPoint;
    [SerializeField] int AGIPoint;
    [SerializeField] int MAXHPAdd;
    [SerializeField] int MAXMPAdd;

    const string headArmorName = "headArmor";
    const string bodyArmorName = "bodyArmor";
    const string cloakArmorName = "cloakArmor";
    const string backPackArmorName = "backPackArmor";

    public void Spawn(Transform head, Transform body, Transform backpack)
    {
        if (armorPrefab != null)
        {
            DestroyOldArmor(head, body, backpack);//古い武器を削除する

            Transform armorTransform = GetTransform(head, body, backpack);
            //装備位置を取得する。

            GameObject armorInstantiate;

            //名前を付ける
            switch (armorType)
            {
                case ArmorType.Head:
                    armorInstantiate = Instantiate(armorPrefab, armorTransform);
                    armorInstantiate.name = headArmorName;
                    break;
                case ArmorType.Body:
                    ActivateArmor(body);
                    //armorInstantiate.name = bodyArmorName;
                    break;
                case ArmorType.BackPack:
                    armorInstantiate = Instantiate(armorPrefab, armorTransform);
                    armorInstantiate.name = backPackArmorName;
                    break;
            }

            //手の位置に武器を生成する
        }
    }

    public void ActivateArmor(Transform body)
    {
        foreach (Transform child in body)
        {
            if (child.name == armorName && child.CompareTag("Armor"))
            {
                child.gameObject.SetActive(true);
            }
            else if (child.CompareTag("Armor"))
            {
                child.gameObject.SetActive(false);
            }
        }
    }

    //装備する手を取得する
    private Transform GetTransform(Transform head, Transform body, Transform backpack)
    {
        switch (armorType)
        {
            case ArmorType.Head:
                return head;

            case ArmorType.Body:
                return body;

            case ArmorType.BackPack:
                return backpack;
            default:
                return null;
        }
    }

    // 古い武器を削除する
    private void DestroyOldArmor(Transform head, Transform body, Transform backpack)
    {
        switch (armorType)
        {
            case ArmorType.Head:
                if (!IsHeadEmpty(head))
                    DestroyArmorInCharacter(head, "headArmor");
                break;
            case ArmorType.Body:
                if (!IsBodyEmpty(body))
                    DestroyArmorInCharacter(body, "bodyArmor");
                break;
            case ArmorType.BackPack:
                if (!IsBackPackEmpty(backpack))
                    DestroyArmorInCharacter(backpack, "backPackArmor");
                break;
        }
    }

    // 指定された箇所の直下にあるアーマーを削除する
    private void DestroyArmorInCharacter(Transform parts, string armorName)
    {
        Transform oldArmor = parts.Find(armorName);
        if (oldArmor != null) // 古い武器が存在する場合は削除
        {
            //setactiveをfalseにする
            oldArmor.gameObject.SetActive(false);
        }
    }

    public int GetATKPoint()
    {
        return ATKPoint;
    }

    public int GetDEFPoint()
    {
        return DEFPoint;
    }

    public int GetAGIPoint()
    {
        return AGIPoint;
    }

    public int GetAddMAXHP()
    {
        return MAXHPAdd;
    }

    public int GetAddMAXMP()
    {
        return MAXMPAdd;
    }


    // Headが空かどうかを確認する
    public bool IsHeadEmpty(Transform head)
    {
        return head.Find(headArmorName) == null;
    }

    // Bodyが空かどうかを確認する
    public bool IsBodyEmpty(Transform body)
    {
        return body.Find(bodyArmorName) == null;
    }

    // Cloakが空かどうかを確認する
    public bool IsCloakEmpty(Transform body)
    {
        return body.Find(cloakArmorName) == null;
    }

    // Backpackが空かどうかを確認する
    public bool IsBackPackEmpty(Transform backpack)
    {
        return backpack.Find(backPackArmorName) == null;
    }
}