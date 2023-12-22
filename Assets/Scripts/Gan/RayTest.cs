using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class RayTest : MonoBehaviour
{
    private GraphicRaycaster graphicRaycaster;
    private PointerEventData pointerEventData;
    private EventSystem eventSystem;

    void Start()
    {
        // CanvasのGraphicRaycasterを取得
        graphicRaycaster = GetComponent<GraphicRaycaster>();
        // イベントシステムの参照を取得
        eventSystem = GetComponent<EventSystem>();
    }

    void Update()
    {
        if (Input.GetMouseButtonDown(0))
        {
            pointerEventData = new PointerEventData(eventSystem);
            pointerEventData.position = Input.mousePosition;

            List<RaycastResult> results = new List<RaycastResult>();
            graphicRaycaster.Raycast(pointerEventData, results);

            foreach (RaycastResult result in results)
            {
                if (result.gameObject.GetComponent<Image>() != null)
                {
                    Debug.Log("Hit UI Object: " + result.gameObject.name);
                    // ここで画像の名前を取得
                    break; // 最初にヒットしたオブジェクトのみを処理
                }
            }
        }
    }
}
