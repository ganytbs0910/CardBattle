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

    // 購入されたアイテムのリファレンスを保持するためのリスト
    public List<GameObject> createdCards = new List<GameObject>();
    public List<GameObject> createdButtons = new List<GameObject>();

    void Start()
    {
        cardEntities = Resources.LoadAll<CardEntity>("CardEntityList");
        SetCardToShop();
    }

    void Update()
    {

    }

    // カードをショップに並べる
    public void SetCardToShop()
    {
        for (int i = 0; i < 3; i++)
        {
            int tiar = GameManager.instance.CalculateTiar();
            CardController card;
            CardModel cardModel;
            do
            {
                int cardID = Random.Range(1, cardEntities.Length + 1);
                card = Instantiate(cardPrefab, itemsParentPanel.transform);
                card.name = $"Card_{cardID}";
                card.Init(cardID);
                cardModel = card.model;

                // カードのtiarが条件を満たさない場合は破棄して再試行
                if (cardModel.tiar != tiar)
                {
                    Destroy(card.gameObject);
                }
            }
            while (cardModel.tiar != tiar);

            // カードのリファレンスをリストに追加
            //cardのToggleをオフにする
            card.GetComponent<Toggle>().isOn = false;
            createdCards.Add(card.gameObject);


            // 支払いボタンを複製して設定
            GameObject payButtonClone = Instantiate(payButton.gameObject, payPanel.transform);
            payButtonClone.transform.GetChild(0).GetComponent<TMP_Text>().text = (tiar * 100).ToString();
            createdButtons.Add(payButtonClone); // ボタンのリファレンスをリストに追加

            // ボタンにクリックイベントリスナーを設定
            Button button = payButtonClone.GetComponent<Button>();
            int itemID = i;
            int price = tiar * 100;
            button.onClick.AddListener(() => PurchaseItem(itemID, price));

            // ランクに応じてアウトライン変更
            DrawCardController.instance.TiarSelectOutline(card, cardModel);
        }
    }

    // アイテムを購入するメソッド
    void PurchaseItem(int itemID, int price)
    {
        //if (PlayerPrefs.GetInt("Coin") < price) Debug.Log("コインが足りません"); return;
        // ここでアイテムの購入処理を行う
        if (DrawCardController.instance.parentPanel.transform.childCount - 1 < DrawCardController.instance.maximumCardNumber)
        {
            // アイテムを購入したらコインを減らす
            PlayerPrefs.SetInt("Coin", PlayerPrefs.GetInt("Coin") - price);
            //なんでこれが呼ばれないの...........???????!?!?!?!?!?!?!?!
            DrawCardController.instance.DrawCard(itemID);
            // 購入したアイテムを削除
            RemovePurchasedItem(itemID);
        }
        else
        {
            Debug.Log("カードがいっぱいです");
        }
    }

    // 購入されたアイテムの削除
    void RemovePurchasedItem(int itemID)
    {
        if (itemID < createdCards.Count)
        {
            Destroy(createdCards[itemID]);
            createdCards.RemoveAt(itemID);
        }

        if (itemID < createdButtons.Count)
        {
            Destroy(createdButtons[itemID]);
            createdButtons.RemoveAt(itemID);
        }
    }
}
