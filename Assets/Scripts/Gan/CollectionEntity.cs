using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;


[CreateAssetMenu(fileName = "CollectionEntity", menuName = "Create ColliectionEntity")]

public class CollectionEntity : ScriptableObject
{
    public int collectionID;
    public new string name;
    public string information;
    public Sprite icon;
}
