using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using MoreMountains.Feedbacks;

public class BreaksOnTouch : MonoBehaviour
{
    public GameObject EffectOnTouch;
    public float EffectScale;
    private Vector3 Scale;

    public GameObject CoinEffect = null;
    public MMFeedbacks ShakeFeedback;

    public enum ItemType
    {
        //GiftBox,
        Chest,
        Jug,
        //Pumpkin,
        //Diamond,
        //Mashroom,
    }

    public ItemType itemType;

    void OnMouseDown()
    {
        Scale = gameObject.GetComponent<Transform>().localScale * EffectScale;
        EffectOnTouch.transform.localScale = new Vector3(Scale.x, Scale.y, Scale.z);
        Instantiate(EffectOnTouch, transform.position, Quaternion.identity);
        ItemEffect();
        ShakeFeedback?.PlayFeedbacks();
        Destroy(gameObject);
    }

    public void ItemEffect()
    {
        switch (itemType)
        {
            //case ItemType.GiftBox:
            //    RandomDropItem();
            //    break;
            case ItemType.Chest:
                RandomDropItem();
                AudioManager.instance.PlaySE(AudioManager.SE.BreakBox);
                print("チェストを破壊しました");
                break;
            case ItemType.Jug:
                DropCoin();
                AudioManager.instance.PlaySE(AudioManager.SE.BreakGlass);
                print("ジャグを破壊しました");
                break;
            //case ItemType.Pumpkin:
            //    ParalysisEffect();
            //    break;
            //case ItemType.Diamond:
            //    AddMPEffect();
            //    break;
            //case ItemType.Mashroom:
            //    PoisonEffect();
                //break;

        }
    }

    public void RandomDropItem()
    {
        int randomIndex = Random.Range(0, 2);
        switch (randomIndex)
        {
            case 0:
                DropCoin();
                break;
            case 1:
                DropCard();
                break;
        }
    }

    private void NoDrop()
    {
        print("何もドロップしなかった");
    }

    public void DropCoin()
    {
        Instantiate(CoinEffect, transform.position, Quaternion.identity);
        UIManager.instance.UpdateCoinText(3);
    }

    public void DropCard()
    {
        DrawCardController.instance.DrawCard();
        //カードを一枚手札に加える
    }

    public void ParalysisEffect()
    {
        print("麻痺の範囲攻撃");
    }

    public void PoisonEffect()
    {
        print("毒の範囲攻撃");
    }

    public void AddMPEffect()
    {
        print("MPの回復");

    }
}
