using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class DropPlace : MonoBehaviour, IDropHandler
{
    public void OnDrop(PointerEventData eventData)
    {
        CardMovement card = eventData.pointerDrag.GetComponent<CardMovement>();
        if (card != null)
        {
            int newIndex = transform.childCount; // 新しい位置を取得
            card.cardParent = this.transform;
            card.transform.SetSiblingIndex(newIndex); // 新しい位置にカードを挿入
        }
    }
}
