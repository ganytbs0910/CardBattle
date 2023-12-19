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
    }

    void Update()
    {

    }

    void OnToggleChanged(bool isOn)
    {
        if (isOn)
        {
            //サイズを1.1倍にして色を白にする
            transform.DOScale(1.1f, 0.2f);
            GetComponent<Image>().DOColor(Color.white, 0.2f);
        }
        else
        {
            //元に戻す
            transform.DOScale(1f, 0.2f);
            GetComponent<Image>().DOColor(Color.gray, 0.2f);
        }
    }
}
