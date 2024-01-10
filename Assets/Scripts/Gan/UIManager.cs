using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using DG.Tweening;
using TMPro;


public class UIManager : MonoBehaviour
{
    //ローカライズ
    public enum Language
    {
        Japanese,
        English
    }
    public Language language = Language.Japanese;

    public static UIManager instance;
    [SerializeField] private Camera camera;
    [SerializeField] private RectTransform difficultyPanel;
    [SerializeField] private RectTransform cardListPanel;
    [SerializeField] private RectTransform collectionContent;
    [SerializeField] private RectTransform collectionButton;
    [SerializeField] private GameObject adsButton;
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
    [SerializeField] private TMP_Text tutorialText;
    [SerializeField] private TMP_Text collectionTitleText;
    [SerializeField] private TMP_Text giveUpText;
    [SerializeField] private TMP_Text languageText;
    [SerializeField] private TMP_Text howToPlayText;
    [SerializeField] private TMP_Text reviewText;
    [SerializeField] private TMP_Text reStoreText;

    [SerializeField] private Image dropImage;
    public int i = 0;
    void Awake()
    {
        if (instance == null)
            instance = this;
    }

    void Start()
    {
        //ローカライズ
        ChangeLanguage(PlayerPrefs.GetString("Language"));
        LocalizeText();

        TutorialTextDetail("カードを選択してください");
        if (PlayerPrefs.HasKey("RemoveAds"))
        {
            adsButton.SetActive(false);
        }

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
        StageTextDetail($"階層 : {GameManager.instance.stageHierarchy}");
        RemainingBossTextDetail($"ボスまで残り:{10 - GameManager.instance.stageHierarchy}階層");
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
        TutorialTextDetail("カードを用いて最深部を目指そう！");
        yield return new WaitForSeconds(3.5f);
        loadPanel.SetActive(true);
        //loadPanelの子オブジェクトのTMPTextを取得し、1秒かけて現在のy座標を+100して、1秒かけて元の位置に戻す処理を一度だけ行う
        loadPanel.transform.GetChild(0).GetComponent<TMP_Text>().rectTransform.DOAnchorPosY(100, 1.0f).OnComplete(() => loadPanel.transform.GetChild(0).GetComponent<TMP_Text>().rectTransform.DOAnchorPosY(0, 1.0f));
        yield return new WaitForSeconds(1.5f);
        //全てを初期化
        loadPanel.SetActive(false);
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
        int stage = 10 - GameManager.instance.stageHierarchy;
        if (stage == 0)
        {
            RemainingBossTextDetail("ボス戦 !!");
        }
        else
        {
            RemainingBossTextDetail($"ボスまで残り:{stage}階層");
        }
        StageTextDetail($"階層 : {GameManager.instance.stageHierarchy}");

        yield return new WaitForSeconds(0.1f);
        GameManager.instance.SpawnEnemies();//敵をスポーンさせる
        GameManager.instance.SpawnItems();
        yield return new WaitForSeconds(0.1f);
        GameManager.instance.CreateCharacterList();//リストを更新
        yield return new WaitForSeconds(0.1f);
        GameManager.instance.ResetCharacters();//位置とアニメをリセット
        yield return new WaitForSeconds(0.1f);
        GameManager.instance.UpdateAllNavmeshTargets();//Navmeshの更新

        yield return new WaitForSeconds(1);
        loadPanel.SetActive(false);
        PlayerPrefs.SetInt("StageHierarchy", GameManager.instance.stageHierarchy);
        GameManager.instance.battleState = false;
        PlayerPrefs.SetInt("Tutorial", 1);
        TutorialTextDetail("");
    }

    //ボタンで使用
    public void BattleStart()
    {
        GameManager.instance.battleState = true;
        UIManager.instance.TutorialTextDetail("戦闘は自動で行われます");
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
                switch (language)
                {
                    case Language.Japanese:
                        itemName.text = collectionEntity.nameJP;
                        itemInformation.text = collectionEntity.informationJP;
                        break;
                    case Language.English:
                        itemName.text = collectionEntity.nameEN;
                        itemInformation.text = collectionEntity.informationEN;
                        break;
                }
                itemIcon.sprite = collectionEntity.icon;
            }
        }
    }

    public void UpdateCoinText()
    {
        coinPanel.transform.GetChild(0).GetComponent<TMP_Text>().text = PlayerPrefs.GetInt("Coin").ToString();
    }

    public void ItemDropEffect(Sprite itemPrefab, Vector3 dropPosition)
    {
        //このオブジェクトの子オブジェクトとして複製
        Image dropImageItem = Instantiate(dropImage, dropPosition, Quaternion.identity, transform);
        dropImageItem.sprite = itemPrefab;
        //このdropImageItemをcollectionButtonの位置まで1.5秒かけて移動させ、だんだん小さくする
        dropImageItem.rectTransform.DOMove(collectionButton.position, 1.5f).OnComplete(() => Destroy(dropImageItem.gameObject));
        dropImageItem.rectTransform.DOScale(0.5f, 1.5f);
    }











    //以下ローカライズ
    void LocalizeUpdate()
    {
        TutorialTextDetail(tutorialText.text);
        StageTextDetail(stageText.text);
        RemainingBossTextDetail(RemainingBossText.text);
        LocalizeText();
    }
    public void ChangeLanguage(string language)
    {
        if (!PlayerPrefs.HasKey("Language"))
        {
            //端末の設定の言語に
            switch (Application.systemLanguage)
            {
                case SystemLanguage.Japanese:
                    this.language = Language.Japanese;
                    PlayerPrefs.SetString("Language", "Japanese");
                    break;
                case SystemLanguage.English:
                    this.language = Language.English;
                    PlayerPrefs.SetString("Language", "English");
                    break;
            }
        }
        switch (language)
        {
            case "Japanese":
                this.language = Language.Japanese;
                PlayerPrefs.SetString("Language", "Japanese");
                break;
            case "English":
                this.language = Language.English;
                PlayerPrefs.SetString("Language", "English");
                break;
        }
        LocalizeUpdate();
    }

    //チュートリアル用
    public void TutorialTextDetail(string detail)
    {
        if (!PlayerPrefs.HasKey("Tutorial"))
        {
            switch (detail)
            {
                case "カードを選択してください":
                    switch (language)
                    {
                        case Language.Japanese:
                            detail = "カードを選択してください";
                            break;
                        case Language.English:
                            detail = "Please select a card";
                            break;
                    }
                    break;
                case "自身を選択してください":
                    switch (language)
                    {
                        case Language.Japanese:
                            detail = "自身を選択してください";
                            break;
                        case Language.English:
                            detail = "Please select yourself";
                            break;
                    }
                    break;
                case "敵を選択してください":
                    switch (language)
                    {
                        case Language.Japanese:
                            detail = "敵を選択してください";
                            break;
                        case Language.English:
                            detail = "Please select an enemy";
                            break;
                    }
                    break;
                case "バトルを開始してください！":
                    switch (language)
                    {
                        case Language.Japanese:
                            detail = "バトルを開始してください！";
                            break;
                        case Language.English:
                            detail = "Please start the battle!";
                            break;
                    }
                    break;
                case "戦闘は自動で行われます":
                    switch (language)
                    {
                        case Language.Japanese:
                            detail = "戦闘は自動で行われます";
                            break;
                        case Language.English:
                            detail = "Battle is automatic";
                            break;
                    }
                    break;
                case "カードを用いて最深部を目指そう！":
                    switch (language)
                    {
                        case Language.Japanese:
                            detail = "カードを用いて最深部を目指そう！";
                            break;
                        case Language.English:
                            detail = "Let's aim for the deepest part using the card!";
                            break;
                    }
                    break;
            }
            tutorialText.text = detail;
        }
    }

    public void StageTextDetail(string detail)
    {
        if (detail.StartsWith("階層 :") || detail.StartsWith("Stage :"))
        {
            int stage = GameManager.instance.stageHierarchy;
            switch (language)
            {
                case Language.Japanese:
                    detail = $"階層 : {stage}";
                    break;
                case Language.English:
                    detail = $"Stage : {stage}";
                    break;
            }
        }
        stageText.text = detail;
    }

    public void RemainingBossTextDetail(string detail)
    {
        if (detail == "ボス戦 !!" || detail == "Boss Battle !!")
        {
            switch (language)
            {
                case Language.Japanese:
                    detail = "ボス戦 !!";
                    break;
                case Language.English:
                    detail = "Boss Battle !!";
                    break;
            }
        }
        else if (detail.StartsWith("ボスまで残り:") || detail.StartsWith("Remaining to Boss:"))
        {
            int remainingFloors = 10 - GameManager.instance.stageHierarchy;
            switch (language)
            {
                case Language.Japanese:
                    detail = $"ボスまで残り:{remainingFloors}階層";
                    break;
                case Language.English:
                    detail = $"Remaining to Boss:{remainingFloors} floors";
                    break;
            }
        }

        RemainingBossText.text = detail;
    }

    //変更のないテキストのローカライズ
    public void LocalizeText()
    {
        switch (language)
        {
            case Language.Japanese:
                collectionTitleText.text = "所持中のアイテム";
                inforText.text = "タップしてスタート";
                giveUpText.text = "冒険を諦める";
                languageText.text = "言語設定";
                howToPlayText.text = "遊び方";
                reviewText.text = "レビューを書く";
                reStoreText.text = "購入を復元";
                break;
            case Language.English:
                collectionTitleText.text = "Items in possession";
                inforText.text = "Tap to start";
                giveUpText.text = "Give up adventure";
                languageText.text = "Language setting";
                howToPlayText.text = "How to play";
                reviewText.text = "Write a review";
                reStoreText.text = "Restore purchase";
                break;
        }
    }
}