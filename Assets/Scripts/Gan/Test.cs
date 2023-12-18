using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Test : MonoBehaviour
{
    public Canvas parentCanvas;
    [SerializeField] CardController cardPrefab;
    [SerializeField] List<int> cardIDList = new List<int>();
    void Start()
    {
        DrawCard();
    }

    // Update is called once per frame
    void Update()
    {

    }

    public void DrawCard(int? cardID = null)
    {
        //もしカードにIDがないならランダムでカードを引く
        if (!cardID.HasValue)
        {
            cardID = Random.Range(1, Resources.LoadAll<CardEntity>("CardEntityList").Length + 1);
        }
        CardController card = Instantiate(cardPrefab, parentCanvas.transform);
        card.Init(cardID.Value);
        cardIDList.Add(cardID.Value);
        CardModel cardModel = card.model;
        Debug.Log($"カードの情報...{cardModel.information}");
    }
}