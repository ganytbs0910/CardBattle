using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System.Linq;


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
            PlayerPrefs.SetInt("MinDrawCard", 2);
            PlayerPrefs.SetInt("MaxDrawCard", 4);
            PlayerPrefs.Save();
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
            int count = Random.Range(PlayerPrefs.GetInt("MinDrawCard"), PlayerPrefs.GetInt("MaxDrawCard") + 1);
            for (int i = 0; i < count; i++)
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
        if (Input.GetKeyDown(KeyCode.A))
        {
            ReDrawCardList(8);
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
        //parentPanelの子オブジェクトを一括で全て削除
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
        if (this.gameObject != null)
        {
            UIManager.instance.battlePanel.SetActive(true);
            UIManager.instance.cardListPanel.gameObject.SetActive(true);
            if (parentPanel.transform.childCount >= maximumCardNumber)
            {
                foreach (Transform child in parentPanel.transform)
                {
                    Debug.Log(child.name);
                }
                Debug.Log("カードが満タンだ");
                return;
            }
            int tiar = GameManager.instance.CalculateTiar();
            // 全てのCardEntityオブジェクトをロード
            CardEntity[] allCardEntities = Resources.LoadAll<CardEntity>("CardEntityList");
            // tiar値に一致するCardEntityのみをフィルタリング
            var filteredCardEntities = allCardEntities.Where(card => card.tiar == tiar).ToArray();

            CardController card;
            CardModel cardModel;

            // カードIDが指定されていない場合、フィルタリングされたリストからランダムに選択
            if (cardID == null)
            {
                if (filteredCardEntities.Length > 0)
                {
                    int randomIndex = Random.Range(0, filteredCardEntities.Length);
                    cardID = filteredCardEntities[randomIndex].cardID; // 仮定: CardEntityにはユニークなIDがある
                    card = Instantiate(cardPrefab, parentPanel.transform);
                    card.name = $"Card_{cardID}";
                    card.Init(cardID.Value);
                    cardModel = card.model;
                    cardIDList.Add(cardID.Value);
                    TiarSelectOutline(card, cardModel);
                }
                else
                {
                    Debug.Log("条件に合うカードがありません。");
                    return;
                }
            }
            else
            {
                // カードIDが指定されている場合、そのカードを生成
                card = Instantiate(cardPrefab, parentPanel.transform);
                card.name = $"Card_{cardID}";
                card.Init(cardID.Value);
                cardIDList.Add(cardID.Value);
                cardModel = card.model;
                TiarSelectOutline(card, cardModel);
            }
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