using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using DG.Tweening;
using TMPro;
using System;

public class CardMovement : MonoBehaviour
{
    public Toggle toggle;
    CardController cardController;
    CardModel cardModel;

    public int cardID;
    public string name;
    public int tiar;
    public CardEntity.TargetType targetType;

    public Weapon weapon;
    public Armor armor;
    public ParticleSystem particle;

    public CardEntity.ParticlePosition particlePosition;


    private void Start()
    {
        toggle.group = GetComponentInParent<ToggleGroup>();
        toggle.onValueChanged.AddListener(OnToggleChanged);

        //プレイヤーに使えるか
        cardController = GetComponent<CardController>();
        cardModel = cardController.model;
        cardID = cardModel.cardID;
        name = cardModel.name;
        tiar = cardModel.tiar;
        targetType = cardModel.targetType;

        weapon = cardModel.weapon;
        armor = cardModel.armor;
        particle = cardModel.particle;

        particlePosition = cardModel.particlePosition;
    }

    void Update()
    {

    }

    private void OnToggleChanged(bool isOn)
    {
        if (isOn)
        {
            // サイズを1.2倍に拡大
            transform.DOScale(1.2f, 0.1f);
        }
        else
        {
            // サイズを元に戻す
            transform.DOScale(1f, 0.1f);
        }
    }
}