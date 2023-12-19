using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class CardView : MonoBehaviour
{
    //[SerializeField] TMP_Text nameText, informationText;
    [SerializeField] Image iconImage;

    public void Show(CardModel cardModel) // cardModelのデータ取得と反映
    {
        //nameText.text = cardModel.name;
        //  informationText.text = $"{cardModel.information}";
        iconImage.sprite = cardModel.icon;
    }
}