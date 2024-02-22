using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class CardModel
{
    public int cardID;
    public string name;
    public string nameJP;
    public string nameEN;
    public string information;
    public int tiar;
    public Sprite icon;
    public Action<CardModel> effect; // 効果を保存するための変数
    public CardEntity.TargetType targetType;

    public Weapon weapon = null;
    public Armor armor = null;

    public ParticleSystem particle = null;
    public CardEntity.ParticlePosition particlePosition;


    public CardModel(int cardID)
    {
        CardEntity cardEntity = Resources.Load<CardEntity>("CardEntityList/Card " + cardID);
        if (cardEntity != null)
        {
            cardEntity.InitEffect(); // 効果を初期化

            this.cardID = cardEntity.cardID;
            name = cardEntity.name;
            nameJP = cardEntity.nameJP;
            nameEN = cardEntity.nameEN;
            information = cardEntity.information;
            tiar = cardEntity.tiar;
            icon = cardEntity.icon;
            effect = cardEntity.effect;
            targetType = cardEntity.targetType;

            this.weapon = cardEntity.weapon;
            this.armor = cardEntity.armor;
            this.particle = cardEntity.particle;
            this.particlePosition = cardEntity.particlePosition;
        }
    }

    // カードの効果を実行するメソッド
    public void ActivateEffect()
    {
        if (effect != null) effect(this);
    }
}