using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

[CreateAssetMenu(fileName = "CardEntity", menuName = "Create CardEntity")]

public class CardEntity : ScriptableObject
{
    public int cardID;
    public new string name;
    [TextArea(1, 3)]
    public string information;
    public Sprite icon;
    public Action<CardModel> effect;
    public enum TargetType
    {
        Player,
        Enemy,
        All
    }
    public TargetType targetType;
    public void InitEffect()
    {

    }
}