using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

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
        hpSlider.value = hp;
    }
}
