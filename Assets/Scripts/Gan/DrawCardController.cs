using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class DrawCardController : MonoBehaviour
{
    public int maximumCardNumber = 8;
    public static DrawCardController instance;

    public Image parentPanel;
    [SerializeField] CardController cardPrefab;
    public List<int> cardIDList = new List<int>();

    public RuntimeAnimatorController[] outlineAnimators;
    void Awake()
    {
        instance = this;
        if (!PlayerPrefs.HasKey("MinDrawCard"))
        {
            PlayerPrefs.SetInt("MinDrawCard", 1);
            PlayerPrefs.SetInt("MaxDrawCard", 4);
        }
        //もしチュートリアルなら処理を実行
        if (!PlayerPrefs.HasKey("Tutorial"))
        {
            //敵のHPダウン
            DrawCard(9); ;
            //複製カード
            DrawCard(1);
            return;
        }
        //iPhoneかAndroidなら処理を実行
#if UNITY_IOS || UNITY_ANDROID
        //もしCurrentStageCardがないならドローして、あるならそのカードを引く
        if (!PlayerPrefs.HasKey("CurrentStageCard"))
        {
            for (int i = 0; i < Random.Range(PlayerPrefs.GetInt("MinDrawCard"), PlayerPrefs.GetInt("MaxDrawCard")); i++)
            {
                DrawCard();
            }
        }
        else
        {
            for (int i = 0; i < PlayerPrefs.GetInt("CurrentStageCard"); i++)
            {
                DrawCard(PlayerPrefs.GetInt($"Card{i}"));
            }
        }
#endif

#if UNITY_EDITOR
        for (int i = 0; i < maximumCardNumber; i++)
        {
            DrawCard();
        }
#endif
    }

    void Update()
    {
        if (Input.GetKeyDown(KeyCode.F))
        {
            ReDrawCardList(10);
        }
    }

    public void GameReset()
    {
        PlayerPrefs.DeleteKey("CurrentStageCard");
        cardIDList.Clear();
        foreach (Transform child in parentPanel.transform)
        {
            Destroy(child.gameObject);
        }
        for (int i = 0; i < Random.Range(PlayerPrefs.GetInt("MinDrawCard"), PlayerPrefs.GetInt("MaxDrawCard")); i++)
        {
            DrawCard();
        }
    }

    public void ReDrawCardList(int num = 0)
    {
        if (num == 0) num = parentPanel.transform.childCount;
        PlayerPrefs.DeleteKey("CurrentStageCard");
        cardIDList.Clear();
        foreach (Transform child in parentPanel.transform)
        {
            Destroy(child.gameObject);
        }
        for (int i = 0; i < num; i++)
        {
            DrawCard();
        }
    }

    public void DrawCard(int? cardID = null)
    {
        if (parentPanel.transform.childCount >= maximumCardNumber) return;
        int tiar = GameManager.instance.CalculateTiar();

        // カードIDが指定されていない場合、ランダムにカードを選択
        if (cardID == null)
        {
            CardEntity[] cardEntities = Resources.LoadAll<CardEntity>("CardEntityList");
            CardController card;
            CardModel cardModel;

            do
            {
                // ランダムにカードを選ぶ
                cardID = Random.Range(1, cardEntities.Length + 1);
                card = Instantiate(cardPrefab, parentPanel.transform);
                card.name = $"Card_{cardID}";
                card.Init(cardID.Value);
                cardModel = card.model;

                // カードのtiarが条件を満たさない場合は破棄して再試行
                if (cardModel.tiar != tiar)
                {
                    Destroy(card.gameObject);
                }
            }
            while (cardModel.tiar != tiar);

            // 条件を満たしたカードをリストに追加
            cardIDList.Add(cardID.Value);

            // ランクに応じてアウトライン変更
            TiarSelectOutline(card, cardModel);
        }
        else
        {
            // カードIDが指定されている場合、そのカードを生成
            CardController card = Instantiate(cardPrefab, parentPanel.transform);
            card.name = $"Card_{cardID}";
            card.Init(cardID.Value);
            cardIDList.Add(cardID.Value);
            CardModel cardModel = card.model;

            // ランクに応じてアウトライン変更
            TiarSelectOutline(card, cardModel);
        }
    }

    //ランクに応じてアウトライン変更
    public void TiarSelectOutline(CardController card, CardModel cardModel)
    {
        Animator anim = card.gameObject.GetComponentInChildren<Animator>();
        switch (cardModel.tiar)
        {
            case 1:
                anim.runtimeAnimatorController = outlineAnimators[0];
                break;
            case 2:
                anim.runtimeAnimatorController = outlineAnimators[1];
                break;
            case 3:
                anim.runtimeAnimatorController = outlineAnimators[2];
                break;
            case 4:
                anim.runtimeAnimatorController = outlineAnimators[3];
                break;
            case 5:
                anim.runtimeAnimatorController = outlineAnimators[4];
                break;
            case 6:
                anim.runtimeAnimatorController = outlineAnimators[5];
                break;

        }
    }
}