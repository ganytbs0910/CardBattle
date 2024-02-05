using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class ShopUI : MonoBehaviour
{
    [SerializeField] private Transform itemsParentPanel;
    [SerializeField] private Transform payPanel;
    [SerializeField] private Button payButton;
    [SerializeField] private CardController cardPrefab;
    CardEntity[] cardEntities;
    int cardID;

    private struct CardUI
    {
        public GameObject cardObject;
        public Button payButton;
        public int cardID;
        public int price;
    }

    private List<CardUI> cardUIList = new List<CardUI>();

    void Start()
    {
        cardEntities = Resources.LoadAll<CardEntity>("CardEntityList");
        SetCardToShop();
    }

    public void SetCardToShop()
    {
        ClearShop();

        for (int i = 0; i < 3; i++)
        {
            int tiar = GameManager.instance.CalculateTiar();
            CardController card;
            CardModel cardModel;
            do
            {
                cardID = Random.Range(1, cardEntities.Length + 1);
                card = Instantiate(cardPrefab, itemsParentPanel.transform);
                //cardのToggleの機能を廃止
                card.GetComponent<Toggle>().enabled = false;
                card.name = $"Card_{cardID}";
                card.Init(cardID);
                cardModel = card.model;

                if (cardModel.tiar != tiar)
                {
                    Destroy(card.gameObject);
                }
            }
            while (cardModel.tiar != tiar);

            GameObject payButtonClone = Instantiate(payButton.gameObject, payPanel.transform);
            int price = tiar * 30;
            payButtonClone.transform.GetChild(0).GetComponent<TMP_Text>().text = (price).ToString();

            Button button = payButtonClone.GetComponent<Button>();

            cardUIList.Add(new CardUI { cardObject = card.gameObject, payButton = button, cardID = cardID, price = price });

            DrawCardController.instance.TiarSelectOutline(card, cardModel);
        }
        BuyButtonAddListener();
    }

    void ClearShop()
    {
        foreach (var cardUI in cardUIList)
        {
            if (cardUI.cardObject != null) Destroy(cardUI.cardObject);
            if (cardUI.payButton != null) Destroy(cardUI.payButton.gameObject);
        }
        cardUIList.Clear();
    }

    void BuyButtonAddListener()
    {
        for (int i = 0; i < cardUIList.Count; i++)
        {
            int index = i; // インデックスの値を保持する
            cardUIList[index].payButton.onClick.RemoveAllListeners();
            cardUIList[index].payButton.onClick.AddListener(() => PurchaseItem(index));
        }
    }

    void PurchaseItem(int index)
    {
        if (PlayerPrefs.GetInt("Coin") < cardUIList[index].price) UIManager.instance.HeroMessageDetail("コインが足りません"); return;
        if (DrawCardController.instance.parentPanel.transform.childCount == DrawCardController.instance.maximumCardNumber) UIManager.instance.HeroMessageDetail("カードが満タンだ"); return;
        if (index < 0 || index >= cardUIList.Count) return;

        var cardUI = cardUIList[index];
        UIManager.instance.cardListPanel.gameObject.SetActive(true);
        PlayerPrefs.SetInt("Coin", PlayerPrefs.GetInt("Coin") - cardUI.price);
        DrawCardController.instance.DrawCard(cardUI.cardID);
        GoblinShop.instance.BuyCardGoblinEffect();
        UIManager.instance.AnimateButtonScaleFalse(cardUI.cardObject);
        cardUI.cardObject.SetActive(false);
        cardUI.payButton.gameObject.SetActive(false);
        UIManager.instance.cardListPanel.gameObject.SetActive(false);
    }
}
