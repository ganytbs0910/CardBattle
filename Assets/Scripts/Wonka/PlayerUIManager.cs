using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using DG.Tweening;
using TMPro;

public class PlayerUIManager : MonoBehaviour
{
    public Slider hpSlider;
    public Slider mpSlider;

    private void Update()
    {
        //このスクリプトのオブジェクトをカメラのほうに向け続ける
        // Camera.mainがアクティブな場合のみ実行
        if (Camera.main != null && Camera.main.gameObject.activeInHierarchy)
        {
            transform.LookAt(Camera.main.transform);
        }
    }

    /// <summary>
    /// スライダーを初期化する
    /// </summary>
    /// <param name="enemyController">敵のスクリプトを渡してください</param>
    public void Init(PlayerController playerController)
    {
        hpSlider.maxValue = playerController.maxHp;
        hpSlider.value = playerController.maxHp;

        mpSlider.maxValue = playerController.maxMp;
        mpSlider.value = playerController.maxMp;
    }

    /// <summary>
    /// PlayerControllerから呼ばれる
    /// </summary>
    /// <param name="hp">現在のHPをいれる</param>
    public void UpdateHP(int maxHp, int hp)
    {
        hpSlider.maxValue = maxHp;
        hpSlider.DOValue(hp, 0.2f);
    }

    public void UpdateMP(int maxMp, int mp)
    {
        mpSlider.maxValue = maxMp;
        mpSlider.DOValue(mp, 0.2f);
    }
}
