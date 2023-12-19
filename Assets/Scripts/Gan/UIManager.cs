using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using DG.Tweening;
using TMPro;

public class UIManager : MonoBehaviour
{
    [SerializeField] private TMP_Text inforText;
    void Start()
    {
        // テキストの拡大と透明化アニメーション
        Sequence mySequence = DOTween.Sequence();
        mySequence.Append(inforText.rectTransform.DOScale(1.15f, 1.0f));
        mySequence.Join(inforText.DOFade(0.2f, 1.0f));

        // 元のサイズと不透明度に戻すアニメーション
        mySequence.Append(inforText.rectTransform.DOScale(1.0f, 1.0f));
        mySequence.Join(inforText.DOFade(1.0f, 1.0f));

        // 無限ループに設定
        mySequence.SetLoops(-1);
    }

    void Update()
    {
    }


}