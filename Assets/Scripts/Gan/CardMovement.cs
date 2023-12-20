using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using DG.Tweening;

public class CardMovement : MonoBehaviour, IDragHandler, IBeginDragHandler, IEndDragHandler
{
    [SerializeField] private GameObject targetMarker; // 衝突点に表示するマーカー
    [SerializeField] private float rayWidth = 1.5f; // レイの幅
    public float rayDistance = 100f; // レイの射程距離
    [SerializeField] private Toggle toggle;
    public Transform cardParent;
    bool rayTarget = false;

    private void Start()
    {
        toggle.group = GetComponentInParent<ToggleGroup>();
        toggle.onValueChanged.AddListener(OnToggleChanged);
        targetMarker = GameObject.Find("TargetMarker");
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
                //Rayが触れているオブジェクトの名前を表示
                Debug.Log(hit.collider.gameObject.name);

                //射程距離内にある場合はマーカーを表示
                targetMarker.SetActive(true);
                targetMarker.transform.position = hit.point;
                Quaternion markerRotation = Quaternion.LookRotation(hit.normal);
                targetMarker.transform.rotation = Quaternion.Euler(0, markerRotation.eulerAngles.y, markerRotation.eulerAngles.z);

                //Rayの幅を変更
                //Rayの当たっている箇所に半径rayWidthの当たり判定を作成
                Collider[] colliders = Physics.OverlapSphere(hit.point, rayWidth);
                foreach (Collider collider in colliders)
                {
                    //当たり判定の中にPlayerタグがあれば"プレイヤー発見"というログを出す
                    if (collider.gameObject.tag == "Player")
                    {
                        //対象のオブジェクトの色を白くする
                    }
                    //Enemyタグがあれば”敵発見”というログを出す
                    if (collider.gameObject.tag == "Enemy")
                    {
                        //対象のオブジェクトの色を白くする
                    }
                }
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