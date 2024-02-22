using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class ShopUI : MonoBehaviour
{
    [SerializeField] private TMP_Text cardInformationText;
    [SerializeField] private Transform itemsParentPanel;
    [SerializeField] private Transform payPanel;
    [SerializeField] private Button payButton;
    [SerializeField] private CardController cardPrefab;
    CardEntity[] cardEntities;
    int cardID;
    int previousHirarchy;

    public List<int> priceList = new List<int>();
    public List<int> cardIDList = new List<int>();
    public List<GameObject> cardObjectList = new List<GameObject>();
    public List<Button> payButtonList = new List<Button>();

    void Awake()
    {
        cardEntities = Resources.LoadAll<CardEntity>("CardEntityList");
        SetCardToShop();
        previousHirarchy = GameManager.instance.stageHierarchy;
    }

    void OnEnable()
    {
        if (previousHirarchy != GameManager.instance.stageHierarchy)
        {
            SetCardToShop();
            previousHirarchy = GameManager.instance.stageHierarchy;
        }
    }

    public void SetCardToShop(int cardNum = 0, int cardTiar = 0)
    {
        ClearShop();
        if (cardNum == 0)
        {
            for (int i = 0; i < 3; i++)
            {
                int tiar = GameManager.instance.CalculateTiar();
                PlayerPrefs.SetInt($"ShopCardTiar{i}", tiar);
                CardController card;
                CardModel cardModel;
                do
                {
                    cardID = Random.Range(1, cardEntities.Length + 1);
                    PlayerPrefs.SetInt($"ShopCardID{i}", cardID);
                    card = Instantiate(cardPrefab, itemsParentPanel.transform);

                    card.name = $"Card_{cardID}";
                    card.Init(cardID);
                    cardModel = card.model;

                    //このオブジェクトの親オブジェクトにあるToggleGroupeに加える
                    Toggle toggle = card.GetComponent<Toggle>();
                    toggle.group = itemsParentPanel.GetComponent<ToggleGroup>();
                    // ToggleのisOnプロパティが変更された時に呼ばれるリスナーを追加
                    toggle.onValueChanged.AddListener((isOn) =>
                    {
                        //カードの効果を表示
                        if (PlayerPrefs.GetString("Language") == "Japanese")
                        {
                            cardInformationText.text = cardModel.nameJP;
                        }
                        else
                        {
                            cardInformationText.text = cardModel.nameEN;
                        }
                    });

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
        else
        {

        }
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
        UIManager.instance.UpdateCoinText(-priceList[index]);
        UIManager.instance.battlePanel.SetActive(true);
        UIManager.instance.cardListPanel.gameObject.SetActive(true);
        DrawCardController.instance.DrawCard(cardIDList[index]);
        GoblinShop.instance.BuyCardGoblinEffect();
        UIManager.instance.AnimateButtonScaleFalse(cardObjectList[index]);
        cardObjectList[index].SetActive(false);
        payButtonList[index].gameObject.SetActive(false);
        UIManager.instance.battlePanel.SetActive(false);
        UIManager.instance.cardListPanel.gameObject.SetActive(false);
    }
}
