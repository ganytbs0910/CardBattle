using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class GachaController : MonoBehaviour
{
    public Image parentPanel;
    [SerializeField] CardController cardPrefab;
    [SerializeField] List<int> cardIDList = new List<int>();
    void Start()
    {
        int num = Random.Range(1, 6);
        for (int i = 0; i < num; i++)
        {
            DrawCard();
        }
    }

    void Update()
    {

    }

    public void DrawCard(int? cardID = null)
    {
        if (parentPanel.transform.childCount > 8) return;
        //もしカードにIDがないならランダムでカードを引く
        if (!cardID.HasValue)
        {
            cardID = Random.Range(1, Resources.LoadAll<CardEntity>("CardEntityList").Length + 1);
        }
        CardController card = Instantiate(cardPrefab, parentPanel.transform);
        card.Init(cardID.Value);
        cardIDList.Add(cardID.Value);
        CardModel cardModel = card.model;
    }
}