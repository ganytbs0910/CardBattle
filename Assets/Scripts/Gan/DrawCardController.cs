using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class DrawCardController : MonoBehaviour
{
    public Image parentPanel;
    [SerializeField] CardController cardPrefab;
    public List<int> cardIDList = new List<int>();

    public RuntimeAnimatorController[] outlineAnimators;
    void Awake()
    {
        //もしCurrentStageCardがないならドローして、あるならそのカードを引く
        if (!PlayerPrefs.HasKey("CurrentStageCard"))
        {
            for (int i = 0; i < Random.Range(4, 8); i++)
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
    }

    void Update()
    {

    }

    public void DrawCard(int? cardID = null)
    {
        if (parentPanel.transform.childCount > 7) return;
        //もしカードにIDがないならランダムでカードを引く
        if (cardID == null)
        {
            cardID = Random.Range(1, Resources.LoadAll<CardEntity>("CardEntityList").Length + 1);
            CardController card = Instantiate(cardPrefab, parentPanel.transform);
            //名前を変更
            card.name = $"Card_{cardID}";
            card.Init(cardID.Value);
            cardIDList.Add(cardID.Value);
            CardModel cardModel = card.model;

            //ランクに応じてアウトライン変更
            TiarSelectOutline(card, cardModel);
        }
        else
        {
            CardController card = Instantiate(cardPrefab, parentPanel.transform);
            //名前を変更
            card.name = $"Card_{cardID}";
            card.Init(cardID.Value);
            cardIDList.Add(cardID.Value);
            CardModel cardModel = card.model;

            //ランクに応じてアウトライン変更
            TiarSelectOutline(card,cardModel);
        }
    }

    //ランクに応じてアウトライン変更
    public void TiarSelectOutline(CardController card,CardModel cardModel)
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