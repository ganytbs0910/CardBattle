using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// フィールドにアタッチするクラス
public class DropPlace : MonoBehaviour, IDropHandler
{
    public void OnDrop(PointerEventData eventData) // ドロップされた時に行う処理
    {
        CardMovement card = eventData.pointerDrag.GetComponent<CardMovement>();
        if (card != null) // もしカードがあれば、
        {
            card.cardParent = this.transform; // カードの親要素を自分（アタッチされてるオブジェクト）にする
        }
    }
}