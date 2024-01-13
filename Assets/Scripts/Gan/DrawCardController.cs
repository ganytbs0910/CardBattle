using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class DrawCardController : MonoBehaviour
{
    public static DrawCardController instance;

    public Image parentPanel;
    [SerializeField] CardController cardPrefab;
    public List<int> cardIDList = new List<int>();
    int MaxCard = 8;

    public RuntimeAnimatorController[] outlineAnimators;
    void Awake()
    {
        instance = this;

        //iPhoneかAndroidなら処理を実行
#if UNITY_IOS || UNITY_ANDROID
        //もしCurrentStageCardがないならドローして、あるならそのカードを引く
        if (!PlayerPrefs.HasKey("CurrentStageCard"))
        {
            for (int i = 0; i < Random.Range(5, MaxCard + 1); i++)
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
        for (int i = 0; i < Random.Range(5, MaxCard + 1); i++)
        {
            DrawCard();
        }
#endif


        //テスト用
        //parentPanelの子要素を全削除
        /*
        foreach (Transform child in parentPanel.transform)
        {
            Destroy(child.gameObject);
        }
        TestDrawCard(Random.Range(76, 81));
        */
    }

    void Update()
    {

    }

    public void DrawCard(int? cardID = null)
    {
        int tiar = CalculateTiar();
        if (parentPanel.transform.childCount > 7) return;

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

    public void TestDrawCard(int? cardID = null)
    {
        int tiar = CalculateTiar();
        if (parentPanel.transform.childCount > 7) return;

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

    //階層ごとのカードの確率
    int CalculateTiar()
    {
        int stageHierarchy = GameManager.instance.stageHierarchy;
        // 確率を格納する配列
        float[] probabilities;

        // Stageに応じた確率を設定
        if (stageHierarchy <= 10)
        {
            // Stage 1~10の確率
            probabilities = new float[] { 0.6f, 0.2f, 0.18f, 0.1f, 0.05f, 0.02f };
        }
        else if (stageHierarchy <= 20)
        {
            // Stage 11~20の確率
            probabilities = new float[] { 0.4f, 0.2f, 0.2f, 0.1f, 0.05f, 0.05f };
        }
        else if (stageHierarchy <= 30)
        {
            // Stage 21~30までの確率
            probabilities = new float[] { 0.2f, 0.2f, 0.2f, 0.2f, 0.1f, 0.1f };
        }
        else if (stageHierarchy <= 40)
        {
            // Stage 31~40までの確率
            probabilities = new float[] { 0.1f, 0.15f, 0.2f, 0.25f, 0.1f, 0.2f };
        }
        else
        {
            // デフォルトの確率（必要に応じて設定）
            probabilities = new float[] { 0.1f, 0.2f, 0.3f, 0.2f, 0.1f, 0.1f };
        }

        // 乱数を生成してtiarを決定
        float randomValue = UnityEngine.Random.value;
        float cumulativeProbability = 0.0f;
        for (int tiar = 1; tiar <= probabilities.Length; tiar++)
        {
            cumulativeProbability += probabilities[tiar - 1];
            if (randomValue < cumulativeProbability)
            {
                return tiar;
            }
        }

        return 1; // 万が一、どの条件にも当てはまらない場合は最低値を返す
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