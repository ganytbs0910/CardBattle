using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using DG.Tweening;

public class CardMovement : MonoBehaviour, IDragHandler, IBeginDragHandler, IEndDragHandler
{
    [SerializeField] private GameObject targetMarker;
    [SerializeField] private float rayWidth = 1.5f;
    public float rayDistance = 100f;
    [SerializeField] private Toggle toggle;
    public Transform cardParent;
    bool rayTarget = false;
    public bool colorChange = false;
    private RaycastHit lastRaycastHit; // 最後のRayの衝突情報を保存
    GameObject targetObject;


    private void Start()
    {
        toggle.group = GetComponentInParent<ToggleGroup>();
        toggle.onValueChanged.AddListener(OnToggleChanged);
        targetMarker = GameObject.Find("TargetMarker");
    }

    void Update()
    {
        if (!colorChange)
        {
            if (targetObject != null)
            {
                Renderer[] renderers = targetObject.GetComponentsInChildren<Renderer>();
                foreach (Renderer renderer in renderers)
                {
                    renderer.material.color = Color.white;
                }
            }

        }
        if (rayTarget && Input.GetMouseButton(0)) // rayTargetがtrueで、かつ画面がタッチされている場合
        {
            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
            RaycastHit hit;
            if (Physics.Raycast(ray, out hit, rayDistance))
            {
                targetMarker.SetActive(true);
                targetMarker.transform.position = hit.point;
                Quaternion markerRotation = Quaternion.LookRotation(hit.normal);
                targetMarker.transform.rotation = Quaternion.Euler(0, markerRotation.eulerAngles.y, markerRotation.eulerAngles.z);

                lastRaycastHit = hit; // 最後のRayの衝突情報を保存
                colorChange = false; // ここで初期化
                Collider[] colliders = Physics.OverlapSphere(lastRaycastHit.point, rayWidth);
                foreach (Collider collider in colliders)
                {
                    if (collider.gameObject.tag == "Player")
                    {
                        colorChange = true;
                        targetObject = collider.gameObject;
                        // Playerタグのオブジェクトとその子オブジェクトのRendererを取得し、色を赤に設定
                        Renderer[] renderers = targetObject.GetComponentsInChildren<Renderer>();
                        foreach (Renderer renderer in renderers)
                        {
                            renderer.material.color = Color.red;
                        }
                    }
                }
            }
        }

        if (Input.GetMouseButtonUp(0)) // 画面から手が離されたとき
        {
            if (lastRaycastHit.collider != null) // 最後のRayの衝突情報がある場合
            {
                Collider[] colliders = Physics.OverlapSphere(lastRaycastHit.point, 300);
                foreach (Collider collider in colliders)
                {
                    if (collider.gameObject.tag == "Player")
                    {
                        // Playerタグのオブジェクトとその子オブジェクトのRendererを取得し、色を赤に設定
                        Renderer[] renderers = collider.gameObject.GetComponentsInChildren<Renderer>();
                        foreach (Renderer renderer in renderers)
                        {
                            renderer.material.color = Color.white;
                        }
                    }
                    else if (collider.gameObject.tag == "Enemy")
                    {
                        //Debug.Log("Enemyを発見");
                    }
                    targetMarker.SetActive(false);
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