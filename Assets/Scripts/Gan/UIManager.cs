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
    public RectTransform cardListPanel;
    public RectTransform collectionContent;
    [SerializeField] private RectTransform heroMessageButton;
    [SerializeField] private RectTransform settingButton;
    //[SerializeField] private RectTransform collectionButton;
    public GameObject adsButton;
    [SerializeField] private GameObject coinPanel;
    [SerializeField] private GameObject startCheckButton;
    [SerializeField] private GameObject loadPanel;
    [SerializeField] private GameObject winPanel;
    [SerializeField] private GameObject losePanel;
    [SerializeField] private GameObject Hukidashi;
    [SerializeField] private int loadTime = 1;

    [SerializeField] private RectTransform battleStartButton;
    [SerializeField] private RectTransform[] PortalChangeButton;

    [SerializeField] private TMP_Text stageText;
    [SerializeField] private TMP_Text heroMessageText;
    [SerializeField] private TMP_Text canUseText;
    [SerializeField] private TMP_Text RemainingBossText;
    [SerializeField] private TMP_Text tutorialText;

    [Header("ローカライズ用のテキスト")]
    [SerializeField] private TMP_Text startText;
    [SerializeField] private TMP_Text shopText;
    [SerializeField] private TMP_Text dungeonText;
    [SerializeField] private TMP_Text collectionTitleText;
    [SerializeField] private TMP_Text settingText;
    [SerializeField] private TMP_Text collectionsText;
    [SerializeField] private TMP_Text playingManualText;
    [SerializeField] private TMP_Text reviewText;
    [SerializeField] private TMP_Text giveUpText;
    [SerializeField] private TMP_Text reStoreText;
    [SerializeField] private TMP_Text SETTINGSText;
    [SerializeField] private TMP_Text masterText;
    [SerializeField] private TMP_Text musicText;
    [SerializeField] private TMP_Text seText;
    [SerializeField] private TMP_Text voiceText;

    [SerializeField] private Image dropImage;

    [Header("オプションの言語設定")]
    [SerializeField] Image languageImage;
    [SerializeField] TextMeshProUGUI currentLanguage;
    [SerializeField] Sprite japaneseIcon;
    [SerializeField] Sprite americanIcon;
    public int i = 0;

    [Header("文字送りテキスト")]
    public float delay = 0.05f;

    public GameObject[] LobbyButtons;
    [SerializeField] private PortalController portalController;

    [Header("チュートリアル用")]
    [SerializeField] private Image arrowImage;


    void Awake()
    {
        if (instance == null)
            instance = this;
    }

    void Start()
    {
        if (PlayerPrefs.HasKey("RemoveAds"))
        {
            adsButton.SetActive(false);
        }
        //ローカライズ
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
        LocalizeUpdate();

        if (PlayerPrefs.HasKey("RemoveAds"))
        {
            adsButton.SetActive(false);
        }

        //battleStartButton.gameObject.SetActive(false);
        //テキストの拡大と透明化アニメーション
        Sequence mySequence = DOTween.Sequence();
        mySequence.Append(battleStartButton.DOScale(1.15f, 1.0f));
        //mySequence.Join(battleStartButton.DOFade(0.2f, 1.0f));

        // 元のサイズと不透明度に戻すアニメーション
        mySequence.Append(battleStartButton.DOScale(1.0f, 1.0f));
        //mySequence.Join(battleStartButton.DOFade(1.0f, 1.0f));

        // 無限ループに設定
        mySequence.SetLoops(-1);

        AnimeScaleLoopButton(PortalChangeButton);


        CollectionCardUpdate();
        UpdateCoinText();

        //stageTextを更新
        StageTextDetail($"ダンジョン : {GameManager.instance.stageHierarchy}階");
        //RemainingBossTextDetail($"ボスまで残り:{10 - GameManager.instance.stageHierarchy}階層");
    }

    public void AnimeScaleLoopButton(RectTransform[] Button)
    {
        foreach (RectTransform button in Button)
        {
            //battleStartButton.gameObject.SetActive(false);
            //テキストの拡大と透明化アニメーション
            Sequence mySequence = DOTween.Sequence();
            mySequence.Append(button.DOScale(1.15f, 1.0f));

            // 元のサイズと不透明度に戻すアニメーション
            mySequence.Append(button.DOScale(1.0f, 1.0f));

            // 無限ループに設定
            mySequence.SetLoops(-1);
        }
    }

    bool toggle;
    //ロビーの出し入れ
    public void LobbyToggle(GameObject ui)
    {
        toggle = !toggle;
        if (toggle)
        {
            ShowLobbyMenu(ui);
        }
        else
        {
            CloseLobbyMenu(ui);
        }

    }

    //右上の三本線ボタンを押したとき
    public void ShowLobbyMenu(GameObject ui)
    {
        AudioManager.instance.PlaySE(AudioManager.SE.ButtonClick);

        ui.SetActive(true);
        RectTransform rect = ui.GetComponent<RectTransform>();
        // X位置を1秒かけて0にアニメーション
        rect.DOAnchorPosX(0, 0.5f);
    }

    //ロビーの×ボタンを押したとき
    public void CloseLobbyMenu(GameObject ui)
    {
        AudioManager.instance.PlaySE(AudioManager.SE.BackButton);

        RectTransform rect = ui.GetComponent<RectTransform>();
        // X位置を1秒かけて0にアニメーション
        rect.DOAnchorPosX(170, 0.5f).OnComplete(() =>
        {
            ui.SetActive(false);
        });
    }

    public void LobbyButtonActive()
    {
        LobbyButtonAllActive();

        switch (GameManager.instance.currentLocation)
        {
            case GameManager.Location.PortalWorld:
                LobbyButtons[0].SetActive(false);
                LobbyButtons[1].SetActive(false);
                LobbyButtons[5].SetActive(false);
                break;
            case GameManager.Location.GoblinShop:
                LobbyButtons[0].SetActive(false);
                LobbyButtons[3].SetActive(false);
                LobbyButtons[5].SetActive(false);
                break;
            case GameManager.Location.Dungeon:
                LobbyButtons[1].SetActive(false);
                break;
            case GameManager.Location.NormalBattle:
                LobbyButtons[0].SetActive(false);
                LobbyButtons[1].SetActive(false);
                break;
            case GameManager.Location.BossBattle:
                LobbyButtons[0].SetActive(false);
                LobbyButtons[1].SetActive(false);
                break;
        }
    }

    public void LobbyButtonAllActive()
    {
        foreach (GameObject buttons in LobbyButtons)
        {
            buttons.SetActive(true);
        }
    }



    //ボタンクリック時のアニメーション
    public void AnimateButtonScale(GameObject button)
    {
        RectTransform rectTransform = button.GetComponent<RectTransform>();
        // スケールを0.9にアニメーション
        rectTransform.DOScale(0.8f, 0.1f)
            .OnComplete(() =>
            {
                // スケールを1にアニメーション
                rectTransform.DOScale(1f, 0.1f);
            });
    }

    //消失するアニメボタン
    public void AnimateButtonScaleFalse(GameObject button)
    {
        RectTransform rectTransform = button.GetComponent<RectTransform>();
        //少し膨らませる
        rectTransform.DOScale(1.5f, 0.2f).OnComplete(() =>
        {
            //スケールを０に。
            rectTransform.DOScale(0f, 0.2f).OnComplete(() =>
            {
                button.SetActive(false);
                rectTransform.DOScale(1f, 0f);//元の大きさに
            });
        });
    }


    public void ShowUI(GameObject ui)
    {
        AudioManager.instance.PlaySE(AudioManager.SE.ButtonClick);

        Image dimed = ui.GetComponent<Image>();
        if (dimed != null) dimed.DOFade(0, 0f);//BGの透過
        //DOTweenで中央からやや大きくし通常サイズにさせる
        ui.SetActive(true);
        ui.transform.DOScale(0, 0);
        ui.transform.DOScale(1.1f, 0.2f).OnComplete(() =>
        {
            if (dimed != null) dimed.DOFade(1, 0.2f);
            ui.transform.DOScale(1, 0.1f);
        });
    }

    public void CloseUI(GameObject ui)
    {
        AudioManager.instance.PlaySE(AudioManager.SE.BackButton);

        Image dimed = ui.GetComponent<Image>();

        if (dimed != null) dimed.DOFade(0, 0.2f);
        //DOTweenで中央から少し大きくしてそのまま小さくする
        ui.transform.DOScale(1.1f, 0.2f).OnComplete(() =>
        {
            ui.transform.DOScale(0, 0.1f).OnComplete(() =>
            {
                ui.SetActive(false);
            });
        });
    }

    //最初のタップ //使用しない方向で？
    public void MoveUI()
    {
        //startCheckButton.SetActive(false);
        //heroMessageText.gameObject.SetActive(false);
        //camera.transform.DORotate(new Vector3(camera.transform.eulerAngles.x - 10, camera.transform.eulerAngles.y, camera.transform.eulerAngles.z), 1.0f);
        //difficultyPanel.DOAnchorPosY(difficultyPanel.anchoredPosition.y + 500, 0.8f);
        //cardListPanel.DOAnchorPosY(cardListPanel.anchoredPosition.y - 100, 1.0f);
        //battleStartButton.gameObject.SetActive(true);
        //shopButton.gameObject.SetActive(false);
    }

    public void Loading()
    {
        StartCoroutine(LoadingCoroutine());
    }

    IEnumerator LoadingCoroutine()
    {
        GameManager.instance.NextStage();
        TutorialTextDetail("カードを用いて最深部を目指そう！");
        loadPanel.SetActive(true);
        loadPanel.GetComponent<CanvasGroup>().DOFade(1, 0.5f);

        //loadPanelの子オブジェクトのTMPTextを取得し、1秒かけて現在のy座標を+100して、1秒かけて元の位置に戻す処理を一度だけ行う
        loadPanel.transform.GetChild(0).GetComponent<TMP_Text>().rectTransform.DOAnchorPosY(100, 1.0f).OnComplete(() => loadPanel.transform.GetChild(0).GetComponent<TMP_Text>().rectTransform.DOAnchorPosY(0, 1.0f));
        yield return new WaitForSeconds(0.5f);

        //全てを初期化
        loadPanel.SetActive(false);
        winPanel.SetActive(false);
        losePanel.SetActive(false);
        startCheckButton.SetActive(true);
        heroMessageText.gameObject.SetActive(true);

        //地面に置かれたアイテムを消す
        GameManager.instance.DestroyAllItemWithTag("itemObj");
        GameManager.instance.DungeonCameraChange();

        // カメラの角度を調整
        Vector3 currentCameraRotation = camera.transform.eulerAngles;
        camera.transform.eulerAngles = new Vector3(currentCameraRotation.x + 10, currentCameraRotation.y, currentCameraRotation.z);

        // UIパネルの位置を調整
        Vector2 difficultyPanelPosition = difficultyPanel.anchoredPosition;
        difficultyPanel.anchoredPosition = new Vector2(difficultyPanelPosition.x, difficultyPanelPosition.y - 500);

        Vector2 cardListPanelPosition = cardListPanel.anchoredPosition;
        cardListPanel.anchoredPosition = new Vector2(cardListPanelPosition.x, cardListPanelPosition.y + 100);

        battleStartButton.gameObject.SetActive(true);
        GameManager.instance.battleState = false;
        loadPanel.SetActive(true);

        //loadPanelの子オブジェクトのTMPTextを取得し、1秒かけて現在のy座標を+100して、1秒かけて元の位置に戻す処理を一度だけ行う
        loadPanel.transform.GetChild(0).GetComponent<TMP_Text>().rectTransform.DOAnchorPosY(100, 1.0f).OnComplete(() => loadPanel.transform.GetChild(0).GetComponent<TMP_Text>().rectTransform.DOAnchorPosY(0, 1.0f));
        int stage = 10 - PlayerPrefs.GetInt("StageHierarchy");
        if (stage == 0)
        {
            RemainingBossTextDetail("ボス戦 !!");
        }
        else
        {
            RemainingBossTextDetail($"ボスまで残り:{stage}階");
        }

        PlayerPrefs.SetInt("Tutorial", 1);
        StageTextDetail($"ダンジョン : {PlayerPrefs.GetInt("StageHierarchy")}");
        TutorialTextDetail("");

        yield return new WaitForSeconds(0.1f);
        GameManager.instance.SpawnEnemies();//敵をスポーンさせる
        GameManager.instance.SpawnItems();
        yield return new WaitForSeconds(0.1f);
        GameManager.instance.CreateCharacterList();//リストを更新
        yield return new WaitForSeconds(0.1f);
        GameManager.instance.ResetCharacters();//位置とアニメをリセット
        yield return new WaitForSeconds(0.1f);
        GameManager.instance.UpdateAllNavmeshTargets();//Navmeshの更新
        loadPanel.GetComponent<CanvasGroup>().DOFade(0, 1f);
        HeroMessageDetail("バトルの準備");
        yield return new WaitForSeconds(1);
        loadPanel.SetActive(false);
    }

    //ボタンで使用
    public void BattleStartButton()
    {
        GameManager.instance.BattleStart();

        AudioManager.instance.PlaySE(AudioManager.SE.StartButton);

        HeroMessageDetail("バトル開始");

        GameManager.instance.battleState = true;
        UIManager.instance.TutorialTextDetail("戦闘は自動で行われます");

        startCheckButton.SetActive(false);
        //heroMessageText.gameObject.SetActive(false);
        camera.transform.DORotate(new Vector3(camera.transform.eulerAngles.x - 10, camera.transform.eulerAngles.y, camera.transform.eulerAngles.z), 1.0f);
        difficultyPanel.DOAnchorPosY(difficultyPanel.anchoredPosition.y + 500, 0.8f);
        cardListPanel.DOAnchorPosY(cardListPanel.anchoredPosition.y - 100, 1.0f);
        //battleStartButton.gameObject.SetActive(true);
        //shopButton.gameObject.SetActive(false);
    }

    public void NextStageButton()
    {
        //読み込みを行う
        Loading();
        AudioManager.instance.PlaySE(AudioManager.SE.ButtonClick);
    }

    public void WinPanel()
    {
        winPanel.SetActive(true);

        HeroMessageDetail("勝利");
    }

    public void LosePanel()
    {
        losePanel.SetActive(true);

        HeroMessageDetail("敗北");
    }

    public void GiveUpButton()
    {
        StartCoroutine(GiveUpCoroutine());
    }
    public IEnumerator GiveUpCoroutine()
    {
        //UIを調整する
        if (GameManager.instance.battleState == false)
        {
            camera.transform.DORotate(new Vector3(camera.transform.eulerAngles.x - 10, camera.transform.eulerAngles.y, camera.transform.eulerAngles.z), 1.0f);
            difficultyPanel.DOAnchorPosY(difficultyPanel.anchoredPosition.y + 500, 0.8f);
            cardListPanel.DOAnchorPosY(cardListPanel.anchoredPosition.y - 100, 1.0f);
        }
        GameManager.instance.battleState = false;
        losePanel.SetActive(true);
        StageTextDetail($"ダンジョン : {PlayerPrefs.GetInt("StageHierarchy")}");

        //敵を全て破壊する
        GameManager.instance.GameReset();
        HeroMessageDetail("ギブアップ");
        AudioManager.instance.StopBGM();
        AudioManager.instance.PlaySE(AudioManager.SE.YouLose);
        //効果音の長さぶんだけ待ってからBGMを再生
        StartCoroutine(WaitAndPlayBGM(AudioManager.instance.GetSELength(AudioManager.SE.YouLose)));
        //コインを30%に減らす
        PlayerPrefs.GetInt("Coin", (int)(PlayerPrefs.GetInt("Coin") * 0.3f));
        //カードのデータをリセットする
        DrawCardController.instance.GameReset();

        yield return new WaitForSeconds(2);

        //プレイヤーのステータスを元に戻す
        PlayerController playerController = GameObject.FindGameObjectWithTag("Player").GetComponent<PlayerController>();
        playerController.GameReset();

        Loading();
        portalController.GoPortal();
    }

    private IEnumerator WaitAndPlayBGM(float delay)
    {
        yield return new WaitForSeconds(delay);
        AudioManager.instance.PlayBGM(AudioManager.BGM.GameOverTheme);
    }

    public void AdsRevivalButton()
    {
        /// <summary>
        /// ここに広告を表示
        /// </summary>
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

    /// <summary>
    /// コレクション
    /// </summary>

    public void CollectionCardUpdate()
    {
        //コレクションのカードを更新
        for (int i = 1; i < collectionContent.transform.childCount; i++)
        {
            //カードを所持していたら...以下の処理を行う
            if (PlayerPrefs.HasKey($"Collection{i}"))
            {
                //子オブジェクトのDetailPanelを取得
                GameObject detailPanel = collectionContent.transform.GetChild(i - 1).GetChild(0).gameObject;
                TMP_Text itemName = detailPanel.transform.GetChild(0).GetComponent<TMP_Text>();
                Image itemIcon = detailPanel.transform.GetChild(2).GetComponent<Image>();
                TMP_Text itemInformation = detailPanel.transform.GetChild(3).GetComponent<TMP_Text>();
                CollectionEntity collectionEntity = Resources.Load<CollectionEntity>("CollectionEntity/Collection " + (i));
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

    public void UpdateCoinText(int value = 0)
    {
        int coin = PlayerPrefs.GetInt("Coin");
        coin += value;
        PlayerPrefs.SetInt("Coin", coin);
        coinPanel.transform.GetChild(1).GetComponent<TMP_Text>().text = PlayerPrefs.GetInt("Coin").ToString();
    }

    public void ItemDropEffect(Sprite itemPrefab, Vector3 dropPosition, string collectionName = null)
    {
        //このオブジェクトの子オブジェクトとして複製
        Image dropImageItem = Instantiate(dropImage, dropPosition, Quaternion.identity, transform);
        dropImageItem.sprite = itemPrefab;

        // 最初に0.5秒でサイズを1.2倍にする
        dropImageItem.rectTransform.DOScale(1.2f, 0.5f).OnComplete(() =>
        {
            // その後、1.5秒かけてcollectionButtonの位置に移動し、サイズを縮小する
            dropImageItem.rectTransform.DOMove(settingButton.position, 1.5f).OnComplete(() => Destroy(dropImageItem.gameObject));
            dropImageItem.rectTransform.DOScale(0.5f, 1.5f);
        });

        HeroMessageDetail("コレクションゲット", collectionName);
    }

    //UIのOnOff
    public void ActiveToggle(GameObject ui)
    {
        AudioManager.instance.PlaySE(AudioManager.SE.ButtonClick);
        ui.SetActive(!ui.activeSelf);
        print(ui + "のトグルを切り替えます");
    }

    /// <summary>
    /// 以下ローカライズ
    /// </summary>
    void LocalizeUpdate()
    {
        switch (PlayerPrefs.GetString("Language"))
        {
            case "Japanese":
                this.language = Language.Japanese;
                PlayerPrefs.SetString("Language", "Japanese");
                currentLanguage.text = "Japan";
                languageImage.sprite = japaneseIcon;
                break;
            case "English":
                this.language = Language.English;
                PlayerPrefs.SetString("Language", "English");
                currentLanguage.text = "English";
                languageImage.sprite = americanIcon;
                break;
        }
        TutorialTextDetail(tutorialText.text);
        StageTextDetail(stageText.text);
        RemainingBossTextDetail(RemainingBossText.text);
        HeroMessageDetail(message: heroMessageText.text);
        NoChangeLocalizeText();
    }

    public void ChangeLanguage(/*３ヶ国語以上になると必要string language = null*/)
    {
        if (PlayerPrefs.GetString("Language") == "Japanese")
        {
            PlayerPrefs.SetString("Language", "English");
        }
        else if (PlayerPrefs.GetString("Language") == "English")
        {
            PlayerPrefs.SetString("Language", "Japanese");
        }
        //言語の変更を反映
        LocalizeUpdate();
    }

    /// <summary>
    /// チュートリアル用
    /// </summary>
    public void TutorialTextDetail(string detail)
    {
        if (!PlayerPrefs.HasKey("Tutorial"))
        {
            switch (detail)
            {
                case "カードを選択してください":
                    switch (language)
                    {
                        case Language.Japanese: detail = "カードを選択してください"; break;
                        case Language.English: detail = "Please select a card"; break;
                    }
                    break;
                case "自身をタップしてください":
                    switch (language)
                    {
                        case Language.Japanese: detail = "自身をタップしてください"; break;
                        case Language.English: detail = "Please select yourself"; break;
                    }
                    break;
                case "敵をタップしてください":
                    switch (language)
                    {
                        case Language.Japanese: detail = "敵をタップしてください"; break;
                        case Language.English: detail = "Please select an enemy"; break;
                    }
                    break;
                case "バトルを開始してください！":
                    switch (language)
                    {
                        case Language.Japanese: detail = "バトルを開始してください！"; break;
                        case Language.English: detail = "Please start the battle!"; break;
                    }
                    break;
                case "戦闘は自動で行われます":
                    switch (language)
                    {
                        case Language.Japanese: detail = "戦闘は自動で行われます"; break;
                        case Language.English: detail = "Battle is automatic"; break;
                    }
                    break;
                case "カードを用いて最深部を目指そう！":
                    switch (language)
                    {
                        case Language.Japanese: detail = "これでチュートリアルは終わりだよ！\nカードを用いて最深部を目指そう！"; break;
                        case Language.English: detail = "Let's aim for the deepest part using the card!"; break;
                    }
                    break;
            }
        }
        else
        {
            detail = "";
        }
        tutorialText.text = detail;
    }
    public void TutorialAnimation(int value)
    {
        if (PlayerPrefs.HasKey("Tutorial")) return;
        startCheckButton.SetActive(false);
        arrowImage.gameObject.SetActive(true);
        for (int i = 0; i < cardListPanel.childCount; i++)
        {
            cardListPanel.GetChild(i).GetComponent<CanvasGroup>().blocksRaycasts = false;
        }
        switch (value)
        {
            case 1:
                TutorialTextDetail("カードを選択してください");
                cardListPanel.GetChild(1).GetComponent<CanvasGroup>().blocksRaycasts = true;
                Image cloneArrowImage = Instantiate(arrowImage, cardListPanel.GetChild(1)).GetComponent<Image>();
                //cloneArrowImage.rectTransform.anchoredPositionを(0, 250, 0)にしたい
                cloneArrowImage.rectTransform.anchoredPosition = new Vector3(0, 250, 0);

                cloneArrowImage.DOFade(0, 0.5f).SetLoops(-1, LoopType.Yoyo);

                //cardListPanel.GetChild(1).GetComponent<Toggle>()がオンになったら出力
                cardListPanel.GetChild(1).GetComponent<Toggle>().onValueChanged.AddListener((bool value) =>
                {
                    if (value)
                    {
                        TutorialTextDetail("自身をタップしてください");
                        cloneArrowImage.rectTransform.anchoredPosition = new Vector3(-30, 450, 0);
                    }
                });
                break;
            case 2:
                TutorialTextDetail("敵をタップしてください");
                cardListPanel.GetChild(0).GetComponent<CanvasGroup>().blocksRaycasts = true;
                Image cloneArrowImage2 = Instantiate(arrowImage, cardListPanel.GetChild(0)).GetComponent<Image>();
                cloneArrowImage2.DOFade(0, 0.5f).SetLoops(-1, LoopType.Yoyo);
                cloneArrowImage2.rectTransform.anchoredPosition = new Vector3(0, 900, 0);
                break;
            case 3:
                TutorialTextDetail("バトルを開始してください！");
                startCheckButton.SetActive(true);
                break;

        }
    }

    public void TutorialDetail(int useCardNum, Vector3 arrowPos, Vector3 targetPos, string tutorialTextDetail)
    {
        cardListPanel.GetChild(useCardNum).GetComponent<CanvasGroup>().blocksRaycasts = true;
        Image cloneArroImage = Instantiate(arrowImage, cardListPanel.GetChild(useCardNum));
        cloneArroImage.transform.localPosition = arrowPos;
        cloneArroImage.DOFade(0, 0.5f).SetLoops(-1, LoopType.Yoyo);

        //cardListPanel.GetChild(1).GetComponent<Toggle>()がオンになったら出力
        cardListPanel.GetChild(1).GetComponent<Toggle>().onValueChanged.AddListener((bool value) =>
        {
            if (value)
            {
                TutorialTextDetail(tutorialTextDetail);
                //arrowImageのRectTransformの位置を(0, 600, 0)にする
                cloneArroImage.transform.localPosition = targetPos;
            }
        });
        //もしcardListPanelの子要素がなければ
        if (cardListPanel.childCount == 0)
        {
            TutorialTextDetail("バトルを開始してください！");
        }
    }


    public void StageTextDetail(string detail)
    {
        if (detail.StartsWith("ダンジョン") || detail.StartsWith("Stage"))
        {
            int stage = GameManager.instance.stageHierarchy;
            switch (language)
            {
                case Language.Japanese: detail = $"ダンジョン {stage}階"; break;
                case Language.English: detail = $"Stage {stage}"; break;
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
                case Language.Japanese: detail = "ボス戦 !!"; break;
                case Language.English: detail = "Boss Battle !!"; break;
            }
            HeroMessageDetail("ボス戦");
        }
        else if (detail.StartsWith("ボスまで残り:") || detail.StartsWith("Remaining to Boss:"))
        {
            int remainingFloors = 10 - GameManager.instance.stageHierarchy;
            switch (language)
            {
                case Language.Japanese: detail = $"ボスまで残り:{remainingFloors}階"; break;
                case Language.English: detail = $"Remaining to Boss:{remainingFloors} floors"; break;
            }
        }

        RemainingBossText.text = detail;
    }

    private Coroutine activeCoroutine = null; // アクティブなコルーチンを追跡
    private bool isCoroutineCanceled = false;
    public void HeroMessageDetail(string message, string otherMessage = null)
    {
        switch (message)
        {
            case "バトルの準備":
                switch (language)
                {
                    case Language.Japanese: message = "カードを使って魔物との戦いに\n備えよう……。"; break;
                    case Language.English: message = "Prepare for battle with the monsters using your cards..."; break;
                }
                break;
            case "コレクションゲット":
                switch (language)
                {
                    case Language.Japanese: message = $"{otherMessage}をゲット！ \nきみは幸運の持ち主のようだね。"; break;
                    case Language.English: message = "You got a rare item! You seem to be a lucky person"; break;
                }
                break;
            case "ショップ":
                switch (language)
                {
                    case Language.Japanese: message = "このゴブリンはカードを売ってくれるみたいだ。"; break;
                    case Language.English: message = "It seems this goblin will sell us cards"; break;
                }
                break;
            case "バトル開始":
                switch (language)
                {
                    case Language.Japanese:
                        string[] messagesJP = new string[]
                        {
                            "ボクは負けない。\nキミを信じているからね！",
                            "さぁ、戦いの時だ！　\n覚悟はいいかい？",
                            "最後まで諦めずに戦い抜くことを誓おう。"
                        };
                        message = messagesJP[Random.Range(0, messagesJP.Length)];
                        break;
                    case Language.English:
                        string[] messagesEN = new string[]
                        {
                            "I won't lose because I believe in you!",
                            "Come on, it's time to fight!　Are you ready?",
                            "Let us pledge to never give up and fight to the end."
                        };
                        message = messagesEN[Random.Range(0, messagesEN.Length)];
                        break;
                }
                break;
            case "ボス戦":
                switch (language)
                {
                    case Language.Japanese: message = "ボス戦だ！　\n強敵だから気をつけて！"; break;
                    case Language.English: message = "Boss battle! Be careful!"; break;
                }
                break;
            case "勝利":
                switch (language)
                {
                    case Language.Japanese: message = "やるじゃないか！　キミのことを好きになりそうだよ！"; break;
                    case Language.English: message = "Well done! I think I'm starting to like you!"; break;
                }
                break;
            case "敗北":
                switch (language)
                {
                    case Language.Japanese: message = "おい嘘だろ？　魔物の餌になるのだけは嫌だぁ！"; break;
                    case Language.English: message = "Hey, you're kidding, right? I don't want to be monster food!"; break;
                }
                break;
            case "ギブアップ":
                switch (language)
                {
                    case Language.Japanese: message = "戦略的撤退というやつさ……。\nそうだよね？"; break;
                    case Language.English: message = "It's called strategic retreat. ...... Right?"; break;
                }
                break;
            case "ポータル":
                switch (language)
                {
                    case Language.Japanese: message = "挑戦したい階層を選択しよう！"; break;
                    case Language.English: message = "Select the hierarchy you wish to challenge!"; break;
                }
                break;
            case "未開放ポータル":
                switch (language)
                {
                    case Language.Japanese: message = "このポータルはまだ使用できないようだ。"; break;
                    case Language.English: message = "This portal does not appear to be available yet."; break;
                }
                break;
            case "ポータル移動完了":
                switch (language)
                {
                    case Language.Japanese: message = "敵が出現したぞ！ \n戦闘の準備を怠るな！"; break;
                    case Language.English: message = "Enemies have appeared! Don't neglect your battle preparations!"; break;
                }
                break;

            case "コインが足りません":
                switch (language)
                {
                    case Language.Japanese: message = "コインが不足しているよ！"; break;
                    case Language.English: message = "You don't have enough coins！"; break;
                }
                break;
            case "カードが満タンだ":
                switch (language)
                {
                    case Language.Japanese: message = "カードが満タンだよ！"; break;
                    case Language.English: message = "Your card is full!"; break;
                }
                break;
            case "自身強化":
                switch (language)
                {
                    case Language.Japanese: message = $"{otherMessage}効果発動！ \n強くなった気がする！"; break;
                    case Language.English: message = $"You were {otherMessage}! \nI feel stronger!"; break;
                }
                break;
            case "敵弱体化":
                switch (language)
                {
                    case Language.Japanese: message = $"{otherMessage}！ \nもう敵を倒せるかな！？"; break;
                    case Language.English: message = $"The enemy received {otherMessage}! \nCan I beat it!?"; break;
                }
                break;
                /*
            default:
                switch (language)
                {
                    case Language.Japanese: message = "特に喋ることはないかな。\n期待させてごめんね"; break;
                    case Language.English: message = "I don't have much to say. Sorry to disappoint."; break;
                }
                break;
                */
        }
        if (activeCoroutine != null)
        {
            isCoroutineCanceled = true; // コルーチンをキャンセル
            StopCoroutine(activeCoroutine);
        }

        isCoroutineCanceled = false; // 新しいコルーチン用にフラグをリセット
        activeCoroutine = StartCoroutine(ShowMojiokuriText(message));
    }

    public IEnumerator ShowMojiokuriText(string MojiokuriText)
    {
        for (int i = 0; i <= MojiokuriText.Length; i++)
        {
            if (isCoroutineCanceled) // キャンセルフラグチェック
            {
                yield break; // キャンセルされた場合、コルーチンを終了
            }

            heroMessageText.text = MojiokuriText.Substring(0, i);
            yield return new WaitForSeconds(delay);
        }
        activeCoroutine = null;
    }

    //静的テキストのローカライズ
    public void NoChangeLocalizeText()
    {
        switch (language)
        {
            case Language.Japanese:
                startText.text = "スタート";
                collectionTitleText.text = "所持中のアイテム";
                settingText.text = "設定";
                shopText.text = "ショップ";
                dungeonText.text = "ダンジョン";
                collectionsText.text = "バッグ";
                playingManualText.text = "遊び方";
                reviewText.text = "レビュー";
                giveUpText.text = "ギブアップ";
                reStoreText.text = "復元";
                SETTINGSText.text = "設定";
                masterText.text = "マスター";
                musicText.text = "音楽";
                seText.text = "効果音";
                voiceText.text = "ボイス";
                break;
            case Language.English:
                startText.text = "Start";
                collectionTitleText.text = "Items in possession";
                settingText.text = "Settings";
                shopText.text = "Shop";
                dungeonText.text = "dungeon";
                collectionsText.text = "bag";
                playingManualText.text = "Manual";
                reviewText.text = "Review";
                giveUpText.text = "Give up";
                reStoreText.text = "Restore";
                SETTINGSText.text = "SETTINGS";
                masterText.text = "Master";
                musicText.text = "Music";
                seText.text = "Sound";
                voiceText.text = "Voice";
                break;
        }
    }
}