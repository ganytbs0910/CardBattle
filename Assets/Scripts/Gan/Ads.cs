using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Ads : MonoBehaviour
{
    public GameObject RestoreButton;//inspectorでリストアボタンをセットする

    void Awake()
    {
#if UNITY_IOS //リストアボタンを表示
        RestoreButton.transform.localScale = new Vector3(1f,1f,1f);
#elif UNITY_ANDROID //リストボタンを非表示
        RestoreButton.transform.localScale = new Vector3(0f,0f,0f);
#endif
    }
    void Start()
    {

    }

    void Update()
    {

    }
    public void RemoveAds()
    {
        Debug.Log("広告を削除しました");
    }

}
