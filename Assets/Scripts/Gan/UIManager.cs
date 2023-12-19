using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using DG.Tweening;
using TMPro;

public class UIManager : MonoBehaviour
{
    public static UIManager instance;
    [SerializeField] private Camera camera;
    [SerializeField] private RectTransform togglesPanel;
    [SerializeField] private RectTransform difficultyPanel;
    [SerializeField] private GameObject startCheckButton;
    [SerializeField] private GameObject loadPanel;
    [SerializeField] private GameObject winPanel;
    [SerializeField] private GameObject losePanel;
    [SerializeField] private int loadTime;

    [SerializeField] private TMP_Text stageText;
    [SerializeField] private TMP_Text inforText;



    void Awake()
    {
        if (instance == null)
            instance = this;
    }

    void Start()
    {
        // テキストの拡大と透明化アニメーション
        Sequence mySequence = DOTween.Sequence();
        mySequence.Append(inforText.rectTransform.DOScale(1.15f, 1.0f));
        mySequence.Join(inforText.DOFade(0.2f, 1.0f));

        // 元のサイズと不透明度に戻すアニメーション
        mySequence.Append(inforText.rectTransform.DOScale(1.0f, 1.0f));
        mySequence.Join(inforText.DOFade(1.0f, 1.0f));

        // 無限ループに設定
        mySequence.SetLoops(-1);
    }

    void Update()
    {

    }

    void Loading()
    {
        loadPanel.SetActive(true);
        //loadPanelの子オブジェクトのTMPTextを取得し、1秒かけて現在のy座標を+100して、1秒かけて元の位置に戻す
        loadPanel.transform.GetChild(0).GetComponent<TMP_Text>().rectTransform.DOAnchorPosY(loadPanel.transform.GetChild(0).GetComponent<TMP_Text>().rectTransform.anchoredPosition.y + 100, loadTime / 2).SetLoops(-loadTime / 2, LoopType.Yoyo);
    }

    public void StageUpdate(int stageLevel)
    {
        stageText.text = $"Level : {stageLevel}";
    }

    public void BattleStart()
    {

        startCheckButton.SetActive(false);
        inforText.gameObject.SetActive(false);
        //1秒かけてカメラの角度のx座標を現在の位置-10する
        camera.transform.DORotate(new Vector3(camera.transform.eulerAngles.x - 10, camera.transform.eulerAngles.y, camera.transform.eulerAngles.z), 1.0f);
        //1秒かけてtogglePanelのy座標を現在の位置-250する
        togglesPanel.DOAnchorPosY(togglesPanel.anchoredPosition.y - 250, 1.0f);
        //0.8秒かけてdifficultyPanelのy座標を現在の位置+250する
        difficultyPanel.DOAnchorPosY(difficultyPanel.anchoredPosition.y + 500, 0.8f);
    }

    public void BattleEnd()
    {
        startCheckButton.SetActive(true);
        inforText.gameObject.SetActive(true);
    }

    public void Win()
    {
        winPanel.SetActive(true);
    }

    public void Lose()
    {
        losePanel.SetActive(true);
    }
}