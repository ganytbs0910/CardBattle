using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class ScreenRay : MonoBehaviour
{
    [SerializeField] private GameObject targetMarker;
    [SerializeField] private GameObject cardListPanel;
    [SerializeField] private GameObject chooseCard;
    [SerializeField] private List<GameObject> targetObjects = new List<GameObject>();
    [SerializeField] private int cardID;
    [SerializeField] private float rayWidth = 1.5f;
    public float rayDistance = 100f;
    public bool cardMove = true;
    public bool baseColor = true;
    [SerializeField] private bool colorChangeIgnore = false;
    [SerializeField] private bool oneRayUpIgnore = false;
    [SerializeField] private bool rayTarget = false;
    private RaycastHit lastRaycastHit; // 最後のRayの衝突情報を保存
    CardEntity.TargetType targetType;


    private void Start()
    {

    }

    void Update()
    {
        if (Input.GetKey(KeyCode.Escape))
        {
            ToggleCheck();
        }
        if (!baseColor && colorChangeIgnore)
        {
            ResetTargetColors(); // すべてのターゲットの色をリセット
            baseColor = true;
        }

        if (Input.GetMouseButton(0) || Input.GetMouseButton(1)) // タップまたは長押しを検知
        {
            RayCastUI();   // UI要素に対するRaycast
        }

        if (Input.GetMouseButtonUp(0))
        {
            if (oneRayUpIgnore)
            {
                oneRayUpIgnore = false;
                return;
            }
            if (cardID == 0)
            {
                Debug.Log("カードを選択してください");
                return;
            }
            targetMarker.SetActive(false);
            Collider[] colliders = Physics.OverlapSphere(lastRaycastHit.point, rayWidth);
            foreach (Collider collider in colliders)
            {
                //もしPlayerタグを持っているオブジェクトに当たったら
                if (collider.gameObject.tag == "Player")
                {
                    if (targetType == CardEntity.TargetType.Player)
                    {
                        collider.gameObject.GetComponent<PlayerController>().GetCardEffect(cardID);
                    }
                    else
                    {
                        Debug.Log("Playerに使えないカードです");
                    }
                }
                else if (collider.gameObject.tag == "Enemy")
                {
                    if (targetType == CardEntity.TargetType.Enemy)
                    {
                        collider.gameObject.GetComponent<EnemyController>().GetCardEffect(cardID);
                    }
                    else
                    {
                        Debug.Log("Enemyに使えないカードです");
                    }
                }
                else
                {
                    if (targetType == CardEntity.TargetType.All)
                    {
                        Debug.Log("Allに使えるカードです");
                        collider.gameObject.GetComponent<PlayerController>().GetCardEffect(cardID);
                    }
                }
                Destroy(chooseCard);
                cardID = 0;
                StartCoroutine(ToggleCheck());
            }
            ResetTargetColors();
        }
    }

    void RayCastUI()
    {
        PointerEventData pointData = new PointerEventData(EventSystem.current);
        List<RaycastResult> results = new List<RaycastResult>();
        pointData.position = Input.mousePosition;
        EventSystem.current.RaycastAll(pointData, results);

        foreach (RaycastResult result in results)
        {
            if (result.gameObject.tag == "Card")
            {
                oneRayUpIgnore = true;
                targetMarker.SetActive(false);
                targetMarker.transform.position = result.gameObject.transform.position;
                chooseCard = result.gameObject;
                result.gameObject.GetComponent<CardMovement>().toggle.isOn = true;
                cardID = result.gameObject.GetComponent<CardMovement>().cardID;
                targetType = result.gameObject.GetComponent<CardMovement>().targetType;
                return;
            }
        }

        Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
        RaycastHit hit;
        if (Physics.Raycast(ray, out hit, rayDistance))
        {
            targetMarker.SetActive(true);
            targetMarker.transform.position = hit.point;
            Quaternion markerRotation = Quaternion.LookRotation(hit.normal);
            targetMarker.transform.rotation = Quaternion.Euler(0, markerRotation.eulerAngles.y, markerRotation.eulerAngles.z);
            lastRaycastHit = hit; // 最後のRayの衝突情報を保存
            targetObjects.Clear();
            baseColor = true;
            Collider[] colliders = Physics.OverlapSphere(lastRaycastHit.point, rayWidth);
            foreach (Collider collider in colliders)
            {
                //もしPlayerタグを持っているオブジェクトに当たったら
                if (collider.gameObject.tag == "Player" && cardID != 0 && targetType == CardEntity.TargetType.Player)
                {
                    targetObjects.Add(collider.gameObject);
                    SetColor(Color.red, collider.gameObject);
                    baseColor = false;
                    colorChangeIgnore = true;
                }
                else if (collider.gameObject.tag == "Enemy" && cardID != 0 && targetType == CardEntity.TargetType.Enemy)
                {
                    targetObjects.Add(collider.gameObject);
                    SetColor(Color.red, collider.gameObject);
                    baseColor = false;
                    colorChangeIgnore = true;
                }
                else
                {
                    colorChangeIgnore = false;
                }
            }
            //rayの当たった最終地点を取得
            lastRaycastHit = hit;
        }
    }

    // すべてのターゲットオブジェクトの色をリセットするメソッド
    void ResetTargetColors()
    {
        foreach (GameObject target in targetObjects)
        {
            SetColor(Color.white, target);
        }
        targetObjects.Clear(); // ターゲットリストをクリア
    }

    void SetColor(Color color, GameObject target)
    {
        //色を白に戻す
        Renderer[] renderers = target.GetComponentsInChildren<Renderer>();
        foreach (Renderer renderer in renderers)
        {
            renderer.material.color = color;
        }
    }

    IEnumerator ToggleCheck()
    {
        yield return null;
        //cardListPanelの子要素をすべて取得してToggleのIsOnのオブジェクトからCardIDを取得する
        for (int i = 0; i < cardListPanel.transform.childCount; i++)
        {
            if (cardListPanel.transform.GetChild(i).GetComponent<Toggle>().isOn)
            {
                oneRayUpIgnore = false;
                chooseCard = cardListPanel.transform.GetChild(i).gameObject;
                cardID = cardListPanel.transform.GetChild(i).GetComponent<CardMovement>().cardID;
                targetType = cardListPanel.transform.GetChild(i).GetComponent<CardMovement>().targetType;
            }
        }
    }
}