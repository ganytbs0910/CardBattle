using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using DG.Tweening;


public class ToggleAnimation : MonoBehaviour
{
    Toggle toggle;
    void Start()
    {
        toggle = GetComponent<Toggle>();
        toggle.onValueChanged.AddListener(OnToggleChanged);
        OnToggleChanged(toggle.isOn);
    }

    void Update()
    {

    }

    void OnToggleChanged(bool isOn)
    {
        if (isOn)
        {
            //サイズをyだけ1.1倍にして色を白にする
            transform.DOScale(new Vector3(1f, 1.3f, 1f), 0.2f);
            GetComponent<Image>().DOColor(Color.white, 0.2f);
            //このオブジェクトの子オブジェクトのImageを取得してサイズを1.1倍にする
            foreach (Transform child in transform)
            {
                child.DOScale(new Vector3(1.1f, 1.1f, 1.1f), 0.2f);
            }
        }
        else
        {
            //元に戻す
            transform.DOScale(new Vector3(1f, 1f, 1f), 0.2f);
            GetComponent<Image>().DOColor(Color.gray, 0.2f);
            //このオブジェクトの子オブジェクトのImageを取得して元通りにする
            foreach (Transform child in transform)
            {
                child.DOScale(new Vector3(1.1f, 1.1f, 1.1f), 0.2f);
            }
        }
    }
}
