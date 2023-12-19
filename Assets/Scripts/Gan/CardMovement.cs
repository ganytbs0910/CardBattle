using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using DG.Tweening;

public class CardMovement : MonoBehaviour, IDragHandler, IBeginDragHandler, IEndDragHandler
{
    [SerializeField] private Toggle toggle;
    public Transform cardParent;
    public bool isDrag = false;

    void Start()
    {
        //この親オブジェクトのToggleGroupの中にToggleを入れる
        toggle.group = GetComponentInParent<ToggleGroup>();

        toggle.onValueChanged.AddListener(OnToggleChanged);
        // DOTweenアニメーションの追加
        transform.DORotate(new Vector3(0f, 360f, 0f), 1f, RotateMode.FastBeyond360)
            .SetEase(Ease.Linear); // 1秒で360度回転
    }

    public void OnBeginDrag(PointerEventData eventData) // ドラッグを始めるときに行う処理
    {
        if (!isDrag) return;
        // Toggleのチェックマークをオンにする
        toggle.isOn = true;
        cardParent = transform.parent;
        Transform newParent = cardParent.parent.parent; // さらに一つ上の階層を親オブジェクトに設定
        if (newParent != null) // 新しい親が存在するか確認
        {
            transform.SetParent(newParent, false);
        }
        GetComponent<CanvasGroup>().blocksRaycasts = false; // blocksRaycastsをオフにする
    }

    public void OnDrag(PointerEventData eventData) // ドラッグしてる時に起こす処理
    {
        transform.position = eventData.position;
    }

    public void OnEndDrag(PointerEventData eventData) // カードを離したときに行う処理
    {
        transform.SetParent(cardParent, false);
        GetComponent<CanvasGroup>().blocksRaycasts = true; // blocksRaycastsをオンにする
    }

    private void OnToggleChanged(bool isOn)
    {
        if (isOn)
        {
            // サイズを1.2倍に拡大
            transform.DOScale(1.1f, 0.1f);

            // その他の処理
            CardController cardController = GetComponent<CardController>();
            CardModel cardModel = cardController.model;
        }
        else
        {
            // サイズを元に戻す
            transform.DOScale(1f, 0.1f);
        }
    }
}