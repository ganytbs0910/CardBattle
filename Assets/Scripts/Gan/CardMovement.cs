using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using DG.Tweening;

public class CardMovement : MonoBehaviour, IDragHandler, IBeginDragHandler, IEndDragHandler
{
    [SerializeField] private Toggle toggle;
    public Transform cardParent;
    bool rayTarget = false;

    private void Start()
    {
        toggle.group = GetComponentInParent<ToggleGroup>();
        toggle.onValueChanged.AddListener(OnToggleChanged);
    }

    void Update()
    {
        if (rayTarget)
        {
            //触れている画面にRayを飛ばす
            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
            RaycastHit hit = new RaycastHit();
            if (Physics.Raycast(ray, out hit))
            {
                //のちにRayが触れた範囲にサークルをつける
                Debug.DrawLine(ray.origin, hit.point, Color.red);
            }
        }
    }

    public void OnBeginDrag(PointerEventData eventData) // ドラッグを始めるときに行う処理
    {
        cardParent = transform.parent;
        transform.SetParent(cardParent.parent, false);
        GetComponent<CanvasGroup>().blocksRaycasts = false; // blocksRaycastsをオフにする
    }
    public void OnDrag(PointerEventData eventData) // ドラッグした時に起こす処理
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
            transform.DOScale(1.2f, 0.1f);
            rayTarget = true;
        }
        else
        {
            // サイズを元に戻す
            transform.DOScale(1f, 0.1f);
            rayTarget = false;
        }
    }
}