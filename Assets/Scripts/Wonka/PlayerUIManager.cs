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

    public TextMeshProUGUI missText; //インスペクターで固定する

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

        mpSlider.maxValue = playerController.maxMp;
        mpSlider.value = playerController.maxMp;
    }

    /// <summary>
    /// PlayerControllerから呼ばれる
    /// </summary>
    /// <param name="hp">現在のHPをいれる</param>
    public void UpdateHP(int hp)
    {
        hpSlider.DOValue(hp, 0.2f);
        //一つ目に最終的な値、二つ目に時間を入れる。
    }

    public void UpdateMP(int mp)
    {
        mpSlider.DOValue(mp, 0.2f);
        //一つ目に最終的な値、二つ目に時間を入れる。
    }

    void ShowMissText()
    {
        missText.transform.position = Camera.main.WorldToScreenPoint(transform.position + Vector3.up * 2); // 敵の頭上に配置
        missText.gameObject.SetActive(true);
        missText.alpha = 1; // テキストの透明度を最大に設定

        // フェードアウトのアニメーションを設定
        missText.DOFade(0, 2f).OnComplete(() => missText.gameObject.SetActive(false));
    }
}
