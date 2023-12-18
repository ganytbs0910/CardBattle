using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class CardModel
{
    public int cardID;
    public string name;
    public string information;
    public Sprite icon;
    public Action<CardModel> effect; // 効果を保存するための変数

    public CardModel(int cardID)
    {
        CardEntity cardEntity = Resources.Load<CardEntity>("CardEntityList/Card " + cardID);
        if (cardEntity != null)
        {
            cardEntity.InitEffect(); // 効果を初期化

            this.cardID = cardEntity.cardID;
            name = cardEntity.name;
            information = cardEntity.information;
            icon = cardEntity.icon;
            effect = cardEntity.effect;
        }
    }

    // カードの効果を実行するメソッド
    public void ActivateEffect()
    {
        if (effect != null) effect(this);
    }
}