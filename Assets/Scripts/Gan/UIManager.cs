using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using DG.Tweening;
using TMPro;


public class UIManager : MonoBehaviour
{
    public PlayerController playerController;
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
    public GameObject battlePanel;
    [SerializeField] private GameObject warningPanel;
    [SerializeField] private GameObject coinPanel;
    [SerializeField] private GameObject startCheckButton;
    [SerializeField] private GameObject loadPanel;
    [SerializeField] private GameObject winPanel;
    [SerializeField] private GameObject losePanel;
    public GameObject gameClearPanel;
    [SerializeField] private GameObject Hukidashi;
    [SerializeField] private int loadTime = 1;

    [SerializeField] private Image dropImage;
    [SerializeField] private RectTransform battleStartButton;
    [SerializeField] private RectTransform[] PortalChangeButton;

    [SerializeField] private TMP_Text stageText;
    [SerializeField] private TMP_Text heroMessageText;
    [SerializeField] private TMP_Text canUseText;
    [SerializeField] private TMP_Text RemainingBossText;
    [SerializeField] private TMP_Text tutorialText;
    [SerializeField] private TMP_Text statusCheckText;

    [Header("ローカライズ用のテキスト")]
    [SerializeField] private TMP_Text statusText;
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

    [Header("ゲームクリアの画面")]
    [SerializeField] private TMP_Text clearTitleText;
    [SerializeField] private TMP_Text clearDetailText;

    [Header("遊び方のテキスト")]
    [SerializeField] private TMP_Text howToPlayHeadText;
    [SerializeField] private TMP_Text howToPlayTitleText;
    [SerializeField] private TMP_Text howToPlayDetailText;
    [SerializeField] private TMP_Text howToPlayTitleText2;
    [SerializeField] private TMP_Text howToPlayDetailText2;
    [SerializeField] private TMP_Text howToPlayTitleText3;
    [SerializeField] private TMP_Text howToPlayDetailText3;
    [SerializeField] private TMP_Text howToPlayTitleText4;
    [SerializeField] private TMP_Text howToPlayDetailText4;
    [SerializeField] private TMP_Text howToPlayTitleText5;
    [SerializeField] private TMP_Text howToPlayDetailText5;


    [Header("オプションの言語設定")]
    [SerializeField] Image languageImage;
    [SerializeField] TextMeshProUGUI currentLanguage;
    [SerializeField] Sprite japaneseIcon;
    [SerializeField] Sprite americanIcon;
    public int i = 0;

    [Header("文字送りテキスト")]
    public float delay = 0.05f;

    public GameObject[] LobbyButtons;
    // [SerializeField] private PortalController portalController;

    [Header("チュートリアル用")]
    [SerializeField] private Image arrowImage;


    void Awake()
    {
        if (instance == null)
            instance = this;
    }

    void Start()
    {
        playerController = GameObject.FindGameObjectWithTag("Player").GetComponent<PlayerController>();
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
        UIManager.instance.HeroMessageDetail("ポータル移動完了");
        if (!PlayerPrefs.HasKey("Tutorial"))
        {
            UIManager.instance.TutorialAnimation(1);
        }
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
        //1/2の確率で広告を表示させる
        //if (Random.Range(0, 2) == 0) AdmobInterstitial.instance.ShowAd();


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
        //winPanelの透明度を0にする
        winPanel.GetComponent<CanvasGroup>().alpha = 0;
        //winPanelの透明度をだんだん1にする
        winPanel.GetComponent<CanvasGroup>().DOFade(1, 0.5f);
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
        AdmobInterstitial.instance.ShowAd();
        GameManager.instance.battleState = false;
        winPanel.SetActive(false);
        losePanel.SetActive(true);
        StageTextDetail($"ダンジョン : {PlayerPrefs.GetInt("StageHierarchy")}");

        //敵を全て破壊する

        HeroMessageDetail("ギブアップ");
        AudioManager.instance.StopBGM();
        AudioManager.instance.PlaySE(AudioManager.SE.YouLose);

        //効果音の長さぶんだけ待ってからBGMを再生
        StartCoroutine(WaitAndPlayBGM(AudioManager.instance.GetSELength(AudioManager.SE.YouLose)));

        //コインを30%に減らす
        PlayerPrefs.GetInt("Coin", (int)(PlayerPrefs.GetInt("Coin") * 0.3f));
        //カードのデータをリセットする
        DrawCardController.instance.GameReset();

        PlayerController playerController = GameObject.FindGameObjectWithTag("Player").GetComponent<PlayerController>();

        playerController.GiveUpAnime();

        playerController.agent.enabled = false;
        yield return new WaitForSeconds(2);
        losePanel.SetActive(false);
        //Loading();
        PortalController.instance.GoPortal();

        yield return new WaitForSeconds(1f);

        //プレイヤーのステータスを元に戻す
        GameManager.instance.GameReset();
        playerController.GameReset();
        yield return new WaitForSeconds(1f);
        //GameManager.instance.enemiesの一つ目の要素以外をリストから外す
        PlayerPrefs.SetInt("EnemyCount", 1);
        for (int i = 1; i < GameManager.instance.enemies.Count; i++)
        {
            GameManager.instance.enemies.Remove(GameManager.instance.enemies[i]);
        }
    }

    private IEnumerator WaitAndPlayBGM(float delay)
    {
        yield return new WaitForSeconds(delay);
        if (!AudioManager.instance.audioSourceBGM.isPlaying)
        {
            AudioManager.instance.PlayBGM(AudioManager.BGM.GameOverTheme);
        }
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

    public void CollectionCardUpdate(int id = 0)
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
        playerController.GetCollectionEffect(id);
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
        //dropImageItemの子オブジェクトを取得
        dropImageItem.rectTransform.GetChild(0).GetComponent<Image>().sprite = itemPrefab;

        // 最初に0.5秒でサイズを1.2倍にする
        dropImageItem.rectTransform.DOScale(1.35f, 1f).OnComplete(() =>
        {
            // その後、1.5秒かけてcollectionButtonの位置に移動し、サイズを縮小する
            dropImageItem.rectTransform.DOMove(settingButton.position, 2f).OnComplete(() => Destroy(dropImageItem.gameObject));
            dropImageItem.rectTransform.DOScale(0.5f, 2f);
        });
        HeroMessageDetail("コレクションゲット", collectionName);
    }

    //ステータスの確認
    public void StatusCheckUpdate(int maxHp, float hpRate, int attack, float attackRate, int defense, float defenseRate, int avoidance, float moveSpeed, Weapon weapon, Armor head, Armor armor, Armor backpack)
    {
        string weaponText = weapon != null ? $"攻撃力{weapon.attackPoint}, 防御力{weapon.defendPoint}" : "未装備";
        string headText = head != null ? $"攻撃力{head.ATKPoint}, 防御力{head.DEFPoint}\n\n回避率{head.AGIPoint}, 追加最大HP{head.MAXHPAdd}" : "未装備";
        string armorText = armor != null ? $"攻撃力{armor.ATKPoint}, 防御力{armor.DEFPoint}\n\n回避率{armor.AGIPoint}, 追加最大HP{armor.MAXHPAdd}" : "未装備";
        string backpackText = backpack != null ? $"攻撃力{backpack.ATKPoint}, 防御力{backpack.DEFPoint}\n\n回避率{backpack.AGIPoint}, 追加最大HP{backpack.MAXHPAdd}" : "未装備";

        switch (PlayerPrefs.GetString("Language"))
        {
            case "Japanese":
                statusCheckText.text = $"現在の階層 : {PlayerPrefs.GetInt("StageHierarchy")}階層\n\n最大HP : {maxHp}\n\nHP倍率 : {hpRate}倍\n\n合計体力 : {(int)maxHp * hpRate}\n\n攻撃力 : {attack}\n\n攻撃倍率 : {attackRate}倍\n\n合計攻撃力 : {(int)attack * attackRate}\n\n防御力 : {defense}\n\n防御倍率 : {defenseRate}倍\n\n合計防御力{(int)defense * defenseRate}\n\n回避率 : {avoidance}%\n\nプレイヤーの移動速度 : {moveSpeed}\n\n剣 : {weaponText}\n\n頭 : {headText}\n\nアーマー : {armorText}\n\nリュックサック : {backpackText}";
                break;
            case "English":
                statusCheckText.text = $"Current stage : {PlayerPrefs.GetInt("StageHierarchy")}F\n\nMax HP : {maxHp}\n\nHP rate : {hpRate} times\n\nTotal HP : {(int)maxHp * hpRate}\n\nAttack : {attack}\n\nAttack rate : {attackRate} times\n\nTotal attack : {(int)attack * attackRate}\n\nDefense : {defense}\n\nDefense rate : {defenseRate} times\n\nTotal defense : {(int)defense * defenseRate}\n\nAvoidance : {avoidance}%\n\nPlayer's move speed : {moveSpeed}\n\nWeapon : {weaponText}\n\nHead : {headText}\n\nArmor : {armorText}\n\nBackpack : {backpackText}";
                break;
        }
    }


    //UIのOnOff
    public void ActiveToggle(GameObject ui)
    {
        AudioManager.instance.PlaySE(AudioManager.SE.ButtonClick);
        ui.SetActive(!ui.activeSelf);
        print(ui + "のトグルを切り替えます");
    }

    public void WarningPanel()
    {
        Debug.Log("WarningPanel");
        //warningPanelを0.5秒かけて透明度0にする
        warningPanel.GetComponent<Image>().DOFade(0, 0.5f);
        //warningPanelを0.5秒後に0.5秒かけて透明度1にする
        warningPanel.GetComponent<Image>().DOFade(0.5f, 0.5f).SetDelay(0.5f);
        warningPanel.GetComponent<Image>().DOFade(0, 0.5f).SetDelay(1);
        warningPanel.GetComponent<Image>().DOFade(0.5f, 0.5f).SetDelay(1.5f);
        warningPanel.GetComponent<Image>().DOFade(0, 0.5f).SetDelay(2);
        warningPanel.GetComponent<Image>().DOFade(0.5f, 0.5f).SetDelay(2.5f);
        warningPanel.GetComponent<Image>().DOFade(0, 0.5f).SetDelay(3);
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
            case "ポータル1":
                switch (language)
                {
                    case Language.Japanese: message = "このポータルは1階層から始まるよ！"; break;
                    case Language.English: message = "This portal starts from the 1st floor!"; break;
                }
                break;
            case "ポータル2":
                switch (language)
                {
                    case Language.Japanese: message = "このポータルは11階層から始まるよ！"; break;
                    case Language.English: message = "This portal starts from the 11th floor!"; break;
                }
                break;
            case "ポータル3":
                switch (language)
                {
                    case Language.Japanese: message = "このポータルは21階層から始まるよ！"; break;
                    case Language.English: message = "This portal starts from the 21st floor!"; break;
                }
                break;
            case "ポータル4":
                switch (language)
                {
                    case Language.Japanese: message = "このポータルは31階層から始まるよ！"; break;
                    case Language.English: message = "This portal starts from the 31st floor!"; break;
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
            default:
                switch (language)
                {
                    case Language.Japanese: message = "言語の変更が行われたよ！"; break;
                    case Language.English: message = "The language has been changed!"; break;
                }
                break;
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
                statusText.text = "ステータス";
                startText.text = "スタート";
                collectionTitleText.text = "所持中のコレクション";
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
                howToPlayHeadText.text = "遊び方";
                howToPlayTitleText.text = "・何するゲーム？";
                howToPlayDetailText.text = "毎階層獲得できるカードを用いて<color=#ff0000>地下40階層</color>を目指すゲームです。\n死んでしまうとカードや装備などは失われますが、<color=#ff0000>コイン</color>や<color=#ff0000>ドロップアイテム</color>は引き継がれます。";
                howToPlayTitleText2.text = "・ゲームのコツは？";
                howToPlayDetailText2.text = "カードは<color=#ff0000>最大8枚</color>しか持てません。\n10階層ごとに<color=#ff0000>ボス</color>が出現するので、強いカードを残しておこう！";
                howToPlayTitleText3.text = "・全然進めなくなった！";
                howToPlayDetailText3.text = "敵から低確率で<color=#ff0000>レアドロップアイテム</color>があります。\nもし<color=#ff0000>ボス</color>からドロップすれば....";
                howToPlayTitleText4.text = "・戦闘はどうするの？";
                howToPlayDetailText4.text = "戦闘は<color=#ff0000>自動</color>で行われます。\n戦闘中でもスキルが使えますが、HPとスキルカードは<color=#ff0000>次回の階層に引き継がれる</color>ので注意しましょう。";
                howToPlayTitleText5.text = "・カードのレアリティ";
                howToPlayDetailText5.text = "カードには<color=#ff0000>レアリティ</color>があります。\nレアリティが高いほど、カードの効果が強力になります。\nレアリティは<color=#ff0000>ノーマル</color>、<color=#ff0000>レア</color>、<color=#ff0000>スーパーレア</color>、<color=#ff0000>ウルトラレア</color>の4種類があります。\nレアリティが高いほど、カードの効果が強力になります。";
                clearTitleText.text = "ゲームクリア！";
                clearDetailText.text = "まさかクリアする者が現れるとはな。\n君はなかなか猛者だな。\n\n我々はさらなる階層と新たな敵、スキルカードを追求するための開発中である。\n\n今後の発展のためにレビューで応援やSNSでの拡散で我々の開発のコストとモチベーションの向上をお願いしたい。\n\nまた別のゲームでも会おうではないか。\n\n君のさらなる活躍には期待しているもんだよ。\n\nさらばだ。";
                break;
            case Language.English:
                statusText.text = "Status";
                startText.text = "Start";
                collectionTitleText.text = "Collections in possession";
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
                howToPlayHeadText.text = "How to play";
                howToPlayTitleText.text = "・What to do?";
                howToPlayDetailText.text = "This is a game where you aim for <color=#ff0000>the 40th floor underground</color> using cards that can be obtained on each floor.\nIf you die, you will lose cards and equipment, but <color=#ff0000>coins</color> and <color=#ff0000>drop items</color> will be carried over.";
                howToPlayTitleText2.text = "・What's the trick to the game?";
                howToPlayDetailText2.text = "You can only have <color=#ff0000>up to 8 cards</color>.\nA <color=#ff0000>Boss</color> appears every 10 floors, so keep strong cards!";
                howToPlayTitleText3.text = "・I can't make any progress!";
                howToPlayDetailText3.text = "There is a <color=#ff0000>rare drop item</color> with a low probability from the enemy.\nIf you drop it from the <color=#ff0000>Boss</color>...";
                howToPlayTitleText4.text = "・How do you fight?";
                howToPlayDetailText4.text = "The battle is <color=#ff0000>automatic</color>.\nYou can use skills even during battle, but be careful as HP and skill cards will be <color=#ff0000>carried over to the next floor</color>.";
                howToPlayTitleText5.text = "・Card rarity";
                howToPlayDetailText5.text = "Cards have <color=#ff0000>rarity</color>.\nThe higher the rarity, the more powerful the effect of the card.\nThere are four types of rarity: <color=#ff0000>Normal</color>, <color=#ff0000>Rare</color>, <color=#ff0000>Super Rare</color>, and <color=#ff0000>Ultra Rare</color>.";
                clearTitleText.text = "Game Clear!";
                clearDetailText.text = "I can't believe someone has cleared it.\nYou're quite a fighter.\n\nWe are developing further hierarchies, new enemies, and skill cards.\n\nWe would like to ask for your support in the form of reviews and spreading the word on SNS to improve our development costs and motivation.\n\nLet's meet again in another game.\n\nI'm looking forward to your further success.\n\nGoodbye.";
                break;
        }
    }
}