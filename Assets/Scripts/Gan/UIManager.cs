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
    [SerializeField] private RectTransform difficultyPanel;
    [SerializeField] private RectTransform cardListPanel;
    [SerializeField] private GameObject startCheckButton;
    [SerializeField] private GameObject loadPanel;
    [SerializeField] private GameObject winPanel;
    [SerializeField] private GameObject losePanel;
    [SerializeField] private int loadTime;
    [SerializeField] private Button battleStartButton;
    [SerializeField] private TMP_Text stageText;
    [SerializeField] private TMP_Text inforText;
    [SerializeField] private TMP_Text canUseText;



    void Awake()
    {
        if (instance == null)
            instance = this;
    }

    void Start()
    {
        battleStartButton.gameObject.SetActive(false);
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

    public void MoveUI()
    {
        startCheckButton.SetActive(false);
        inforText.gameObject.SetActive(false);
        //1秒かけてカメラの角度のx座標を現在の位置-10する
        camera.transform.DORotate(new Vector3(camera.transform.eulerAngles.x - 10, camera.transform.eulerAngles.y, camera.transform.eulerAngles.z), 1.0f);
        //1秒かけてdifficultyPanelのy座標を現在の位置+250する
        difficultyPanel.DOAnchorPosY(difficultyPanel.anchoredPosition.y + 500, 0.8f);
        //1秒かけてcardListPanelのy座標を現在の位置-250する
        cardListPanel.DOAnchorPosY(cardListPanel.anchoredPosition.y - 350, 1.0f);
        battleStartButton.gameObject.SetActive(true);
    }

    public void BattleStart()
    {
        GameManager.instance.battleState = true;
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

    public void ErrorCardTarget()
    {
        //透明度を1にする
        canUseText.DOFade(1, 0);
        //y座標を元の位置に戻す
        canUseText.rectTransform.DOAnchorPosY(canUseText.rectTransform.anchoredPosition.y - 50, 0);

        canUseText.text = "Can't use this target...";
        //DOTweenで1秒かけて透明度を0にする
        canUseText.DOFade(0, 1.0f);
        //DOTweenで1秒かけてyに50移動する
        canUseText.rectTransform.DOAnchorPosY(canUseText.rectTransform.anchoredPosition.y + 50, 1.0f);
    }
}