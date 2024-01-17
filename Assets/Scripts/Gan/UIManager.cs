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

    [SerializeField] private Button shopButton;

    [SerializeField] private TMP_Text stageText;
    [SerializeField] private TMP_Text heroMessageText;
    [SerializeField] private TMP_Text canUseText;
    [SerializeField] private TMP_Text RemainingBossText;
    [SerializeField] private TMP_Text tutorialText;

    [Header("ローカライズ用のテキスト")]
    [SerializeField] private TMP_Text startText;
    [SerializeField] private TMP_Text collectionTitleText;
    [SerializeField] private TMP_Text settingText;
    [SerializeField] private TMP_Text collectionsText;
    [SerializeField] private TMP_Text playingManualText;
    [SerializeField] private TMP_Text reviewText;
    [SerializeField] private TMP_Text giveUpText;
    [SerializeField] private TMP_Text reStoreText;
    [SerializeField] private TMP_Text SETTINGSText;
    [SerializeField] private TMP_Text soundText;
    [SerializeField] private TMP_Text musicText;
    [SerializeField] private TMP_Text pushAlarmText;


    [SerializeField] private Image dropImage;

    //オプションの言語設定
    [SerializeField] Image languageImage;
    [SerializeField] TextMeshProUGUI currentLanguage;
    [SerializeField] Sprite japaneseIcon;
    [SerializeField] Sprite americanIcon;
    public int i = 0;

    //文字送りテキスト
    public float delay = 0.05f;

    void Awake()
    {
        if (instance == null)
            instance = this;
    }

    void Start()
    {
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

        HeroMessageDetail("バトルの準備");
        TutorialTextDetail("カードを選択してください");
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

    //右上の三本線ボタンを押したとき
    public void ShowLobbyMenu(GameObject ui)
    {
        ui.SetActive(true);
        RectTransform rect = ui.GetComponent<RectTransform>();
        // X位置を1秒かけて0にアニメーション
        rect.DOAnchorPosX(0, 0.5f);
    }

    //ロビーの×ボタンを押したとき
    public void CloseLobbyMenu(GameObject ui)
    {
        RectTransform rect = ui.GetComponent<RectTransform>();
        // X位置を1秒かけて0にアニメーション
        rect.DOAnchorPosX(600, 0.5f).OnComplete(() =>
        {
            ui.SetActive(false);
        });
    }

    public void ShowSettingPanel(GameObject ui)
    {

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

    public void Loading(int stageHierarchy)
    {
        StartCoroutine(LoadingCoroutine(stageHierarchy));
    }

    IEnumerator LoadingCoroutine(int stageHierarchy)
    {
        GameManager.instance.NextStage();
        print("バグった");
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
        heroMessageText.gameObject.SetActive(true);

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
        PlayerPrefs.SetInt("Tutorial", 1);
        TutorialTextDetail("");

        GameManager.instance.DungeonCameraChange();
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
        shopButton.gameObject.SetActive(false);
    }

    public void NextStageButton()
    {
        //読み込みを行う
        Loading(GameManager.instance.stageHierarchy);
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
        GameManager.instance.battleState = false;
        losePanel.SetActive(true);
        PlayerPrefs.DeleteAll();
        PlayerPrefs.SetInt("StageHierarchy", 1);
        Loading(1);

        HeroMessageDetail("ギブアップ");
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

    /// <summary>
    /// コレクション
    /// </summary>
    //コレクションが集まったら呼び出してほしい
    public void CollectionCardUpdate(GameObject player = null)
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
                if (player == null) return;
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

    public void ItemDropEffect(Sprite itemPrefab, Vector3 dropPosition)
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

        HeroMessageDetail("コレクションゲット");
    }

    //UIのOnOff
    public void ActiveToggle(GameObject ui)
    {
        AudioManager.instance.PlaySE(AudioManager.SE.ButtonClick);
        ui.SetActive(!ui.activeSelf);
        print(ui + "のトグルを切り替えます");
    }

    //以下ローカライズ
    void LocalizeUpdate()
    {
        switch (PlayerPrefs.GetString("Language"))
        {
            case "Japanese":
                Debug.Log("Japaneseになりました");
                this.language = Language.Japanese;
                PlayerPrefs.SetString("Language", "Japanese");
                currentLanguage.text = "Japan";
                languageImage.sprite = japaneseIcon;
                break;
            case "English":
                Debug.Log("Englishになりました");
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
                        case Language.Japanese: detail = "カードを用いて最深部を目指そう！"; break;
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
                case Language.Japanese: detail = $"ボスまで残り:{remainingFloors}階層"; break;
                case Language.English: detail = $"Remaining to Boss:{remainingFloors} floors"; break;
            }
        }

        RemainingBossText.text = detail;
    }

    //チュートリアル用
    public void HeroMessageDetail(string message, string dropCollectionName = null)
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
                    case Language.Japanese: message = $"{dropCollectionName}をゲット！ \nきみは幸運の持ち主のようだね。"; break;
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
            default:
                switch (language)
                {
                    case Language.Japanese: message = "特に喋ることはないかな。\n期待させてごめんね"; break;
                    case Language.English: message = "I don't have much to say. Sorry to disappoint."; break;
                }
                break;
        }
        StartCoroutine(ShowMojiokuriText(message));//文字送り
    }

    public IEnumerator ShowMojiokuriText(string MojiokuriText)
    {
        for (int i = 0; i <= MojiokuriText.Length; i++)
        {
            heroMessageText.text = MojiokuriText.Substring(0, i);
            yield return new WaitForSeconds(delay);
        }
    }

    //変更のないテキストのローカライズ
    public void NoChangeLocalizeText()
    {
        switch (language)
        {
            case Language.Japanese:
                startText.text = "スタート";
                collectionTitleText.text = "所持中のアイテム";
                settingText.text = "設定";
                collectionsText.text = "コレクション";
                playingManualText.text = "遊び方";
                reviewText.text = "レビューを書く";
                giveUpText.text = "ギブアップ";
                reStoreText.text = "復元";
                SETTINGSText.text = "設定";
                soundText.text = "サウンド";
                musicText.text = "音楽";
                pushAlarmText.text = "プッシュ通知";
                break;
            case Language.English:
                startText.text = "Start";
                collectionTitleText.text = "Items in possession";
                settingText.text = "Settings";
                collectionsText.text = "Collections";
                playingManualText.text = "Manual";
                reviewText.text = "Review";
                giveUpText.text = "Give up";
                reStoreText.text = "Restore";
                SETTINGSText.text = "SETTINGS";
                soundText.text = "Sound";
                musicText.text = "Music";
                pushAlarmText.text = "Push Alarm";
                break;
        }
    }
}