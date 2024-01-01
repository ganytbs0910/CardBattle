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
    [SerializeField] private RectTransform collectionContent;
    [SerializeField] private GameObject coinPanel;
    [SerializeField] private GameObject startCheckButton;
    [SerializeField] private GameObject loadPanel;
    [SerializeField] private GameObject winPanel;
    [SerializeField] private GameObject losePanel;
    [SerializeField] private int loadTime = 1;
    [SerializeField] private Button battleStartButton;
    [SerializeField] private TMP_Text stageText;
    [SerializeField] private TMP_Text inforText;
    [SerializeField] private TMP_Text canUseText;
    [SerializeField] private TMP_Text RemainingBossText;
    public int i = 0;
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


        CollectionCardUpdate();
        UpdateCoinText();

        //stageTextを更新
        stageText.text = $"Level : {GameManager.instance.stageHierarchy}";
        RemainingBossText.text = $"ボスまで残り:{10 - GameManager.instance.stageHierarchy}階層";
    }

    public void MoveUI()
    {
        startCheckButton.SetActive(false);
        inforText.gameObject.SetActive(false);
        camera.transform.DORotate(new Vector3(camera.transform.eulerAngles.x - 10, camera.transform.eulerAngles.y, camera.transform.eulerAngles.z), 1.0f);
        difficultyPanel.DOAnchorPosY(difficultyPanel.anchoredPosition.y + 500, 0.8f);
        cardListPanel.DOAnchorPosY(cardListPanel.anchoredPosition.y - 100, 1.0f);
        battleStartButton.gameObject.SetActive(true);
    }

    public void Loading(int stageHierarchy)
    {
        StartCoroutine(LoadingCoroutine(stageHierarchy));
    }

    IEnumerator LoadingCoroutine(int stageHierarchy)
    {
        yield return new WaitForSeconds(3.5f);
        loadPanel.SetActive(true);
        //loadPanelの子オブジェクトのTMPTextを取得し、1秒かけて現在のy座標を+100して、1秒かけて元の位置に戻す処理を一度だけ行う
        loadPanel.transform.GetChild(0).GetComponent<TMP_Text>().rectTransform.DOAnchorPosY(100, 1.0f).OnComplete(() => loadPanel.transform.GetChild(0).GetComponent<TMP_Text>().rectTransform.DOAnchorPosY(0, 1.0f));
        yield return new WaitForSeconds(1.5f);
        //全てを初期化
        loadPanel.SetActive(false);
        stageText.text = $"Level : {stageHierarchy}";
        winPanel.SetActive(false);
        losePanel.SetActive(false);
        startCheckButton.SetActive(true);
        inforText.gameObject.SetActive(true);
        // カメラの角度を調整
        Vector3 currentCameraRotation = camera.transform.eulerAngles;
        camera.transform.eulerAngles = new Vector3(currentCameraRotation.x + 10, currentCameraRotation.y, currentCameraRotation.z);

        // UIパネルの位置を調整
        Vector2 difficultyPanelPosition = difficultyPanel.anchoredPosition;
        difficultyPanel.anchoredPosition = new Vector2(difficultyPanelPosition.x, difficultyPanelPosition.y - 500);

        Vector2 cardListPanelPosition = cardListPanel.anchoredPosition;
        cardListPanel.anchoredPosition = new Vector2(cardListPanelPosition.x, cardListPanelPosition.y + 100);


        battleStartButton.gameObject.SetActive(false);
        GameManager.instance.battleState = false;
        loadPanel.SetActive(true);
        //loadPanelの子オブジェクトのTMPTextを取得し、1秒かけて現在のy座標を+100して、1秒かけて元の位置に戻す処理を一度だけ行う
        loadPanel.transform.GetChild(0).GetComponent<TMP_Text>().rectTransform.DOAnchorPosY(100, 1.0f).OnComplete(() => loadPanel.transform.GetChild(0).GetComponent<TMP_Text>().rectTransform.DOAnchorPosY(0, 1.0f));
        //cardListPanelの子オブジェクトにあるCardMovementのcardMoveをtrueにする
        /*
        for (int i = 0; i < cardListPanel.transform.childCount; i++)
        {
            cardListPanel.transform.GetChild(i).GetComponent<CardMovement>().cardMove = true;
        }
        */
        int stage = 10 - GameManager.instance.stageHierarchy;
        if (stage == 0)
        {
            RemainingBossText.text = $"ボス戦 !!";
        }
        else
        {
            RemainingBossText.text = $"ボスまで残り:{stage}階層";
        }
        yield return new WaitForSeconds(1);
        loadPanel.SetActive(false);

        GameManager.instance.battleState = false;
        //GameManager.instance.RemoveAllEnemies();// 現在の敵リストからすべての要素を削除
        yield return new WaitForSeconds(0.1f);
        GameManager.instance.SpawnEnemies();//敵をスポーンさせる
        yield return new WaitForSeconds(0.1f);
        GameManager.instance.CreateCharacterList();//リストを更新
        yield return new WaitForSeconds(0.1f);
        GameManager.instance.ResetCharacters();//位置とアニメをリセット
        yield return new WaitForSeconds(0.1f);
        GameManager.instance.UpdateAllNavmeshTargets();//Navmeshの更新

    }

    //ボタンで使用
    public void BattleStart()
    {
        GameManager.instance.battleState = true;
        /*
        for (int i = 0; i < cardListPanel.transform.childCount; i++)
        {
            cardListPanel.transform.GetChild(i).GetComponent<CardMovement>().cardMove = false;
        }
        */
    }

    public void WinPanel()
    {
        winPanel.SetActive(true);
        Loading(GameManager.instance.stageHierarchy);
    }

    public void LosePanel()
    {
        losePanel.SetActive(true);
    }

    public void GiveUpButton()
    {
        GameManager.instance.battleState = false;
        losePanel.SetActive(true);
        PlayerPrefs.DeleteAll();
        PlayerPrefs.SetInt("StageHierarchy", 1);
        Loading(1);
    }

    public void RevivalButton()
    {
        GameManager.instance.battleState = true;
        losePanel.SetActive(false);
        //敵とキャラクターとカードをリセット

    }

    public void ErrorCardTarget()
    {
        //透明度を1にする
        canUseText.DOFade(1, 0);
        //y座標を-50する
        canUseText.rectTransform.DOAnchorPosY(0, 0);

        canUseText.text = "Can't use this target...";
        //DOTweenで1秒かけて透明度を0にする
        canUseText.DOFade(0, 1.0f);
        //DOTweenで1秒かけて現在のcanUseTextのy座標を+50の位置に移動する
        canUseText.rectTransform.DOAnchorPosY(50, 1.0f);
    }

    //コレクションが集まったら呼び出してほしい
    public void CollectionCardUpdate()
    {
        //コレクションのカードを更新
        for (int i = 0; i < collectionContent.transform.childCount; i++)
        {
            //カードを所持していたら...以下の処理を行う
            if (PlayerPrefs.HasKey($"Collection{i}"))
            {
                //子オブジェクトのDetailPanelを取得
                GameObject detailPanel = collectionContent.transform.GetChild(i).GetChild(0).gameObject;
                TMP_Text itemName = detailPanel.transform.GetChild(0).GetComponent<TMP_Text>();
                Image itemIcon = detailPanel.transform.GetChild(2).GetComponent<Image>();
                TMP_Text itemInformation = detailPanel.transform.GetChild(3).GetComponent<TMP_Text>();
                CollectionEntity collectionEntity = Resources.Load<CollectionEntity>("CollectionEntity/Collection " + (i + 1));
                //コレクションの情報を反映
                itemName.text = collectionEntity.name;
                itemInformation.text = collectionEntity.information;
                itemIcon.sprite = collectionEntity.icon;
            }
        }
    }

    public void UpdateCoinText()
    {
        coinPanel.transform.GetChild(0).GetComponent<TMP_Text>().text = PlayerPrefs.GetInt("Coin").ToString();
    }
}
