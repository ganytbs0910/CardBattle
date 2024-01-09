using UnityEngine;

[CreateAssetMenu(fileName = "CollectionEntity", menuName = "Create CollectionEntity")]
public class CollectionEntity : ScriptableObject
{
    public int collectionID;
    public string nameJP; // 日本語の名前
    public string nameEN; // 英語の名前
    public string informationJP; // 日本語の情報
    public string informationEN; // 英語の情報
    public Sprite icon;
}