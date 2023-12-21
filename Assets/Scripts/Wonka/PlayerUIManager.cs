﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using DG.Tweening;
public class PlayerUIManager : MonoBehaviour
{
    public Slider hpSlider;

    private void Update()
    {
        //このスクリプトのオブジェクトをカメラのほうに向け続ける
        transform.LookAt(Camera.main.transform);
    }

    /// <summary>
    /// スライダーを初期化する
    /// </summary>
    /// <param name="enemyController">敵のスクリプトを渡してください</param>
    public void Init(PlayerController playerController)
    {
        hpSlider.maxValue = playerController.maxHp;
        hpSlider.value = playerController.maxHp;
    }

    /// <summary>
    /// PlayerControllerから呼ばれる
    /// </summary>
    /// <param name="hp">現在のHPをいれる</param>
    public void UpdateHP(int hp)
    {
        hpSlider.DOValue(hp, 0.5f);
        //一つ目に最終的な値、二つ目に時間を入れる。
    }
}
