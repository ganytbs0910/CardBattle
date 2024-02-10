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

    public List<int> priceList = new List<int>();
    public List<int> cardIDList = new List<int>();
    public List<GameObject> cardObjectList = new List<GameObject>();
    public List<Button> payButtonList = new List<Button>();

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

            priceList.Add(price);
            cardIDList.Add(cardID);
            cardObjectList.Add(card.gameObject);
            payButtonList.Add(button);

            DrawCardController.instance.TiarSelectOutline(card, cardModel);
        }
        BuyButtonAddListener();
    }

    void ClearShop()
    {
        for (int i = 0; i < cardObjectList.Count; i++)
        {
            Destroy(cardObjectList[i]);
            Destroy(payButtonList[i].gameObject);
        }
        cardObjectList.Clear();
        payButtonList.Clear();
        priceList.Clear();
        cardIDList.Clear();
    }

    void BuyButtonAddListener()
    {
        for (int i = 0; i < cardIDList.Count; i++)
        {
            int index = i; // インデックスの値を保持する
            payButtonList[index].onClick.RemoveAllListeners();
            payButtonList[index].onClick.AddListener(() => PurchaseItem(index));
        }
    }

    void PurchaseItem(int index)
    {
        if (PlayerPrefs.GetInt("Coin") < priceList[index])
        {
            UIManager.instance.HeroMessageDetail("コインが足りません");
            return;
        }
        if (DrawCardController.instance.parentPanel.transform.childCount >= DrawCardController.instance.maximumCardNumber)
        {
            UIManager.instance.HeroMessageDetail("カードが満タンだ");
            return;
        }
        PlayerPrefs.SetInt("Coin", PlayerPrefs.GetInt("Coin") - priceList[index]);
        //エラー元
        DrawCardController.instance.DrawCard(cardIDList[index]);
        GoblinShop.instance.BuyCardGoblinEffect();
        UIManager.instance.AnimateButtonScaleFalse(cardObjectList[index]);
        cardObjectList[index].SetActive(false);
        payButtonList[index].gameObject.SetActive(false);

    }
}
