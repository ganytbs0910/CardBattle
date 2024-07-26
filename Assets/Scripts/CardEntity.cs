﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

[CreateAssetMenu(fileName = "CardEntity", menuName = "Create CardEntity")]

public class CardEntity : ScriptableObject
{

    public int cardID;
    public new string name;
    public string nameJP;
    public string nameEN;
    [TextArea(1, 3)]
    public string information;
    [Range(1, 6)]
    public int tiar = 1;
    public Sprite icon;
    public Action<CardModel> effect;

    public Weapon weapon = null;
    public Armor armor = null;

    public enum TargetType
    {
        Player,
        Enemy,
        All
    }
    public TargetType targetType;

    public ParticleSystem particle = null;

    public enum ParticlePosition
    {
        Top,
        Center,
        Bottom,
    }
    public ParticlePosition particlePosition;



    public void InitEffect()
    {

    }
}