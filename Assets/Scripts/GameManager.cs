using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using System;
using Cinemachine;


public class GameManager : MonoBehaviour
{
    public static GameManager instance;
    public int stageHierarchy;
    public int reachingStage;//最高到達ステージを記録する変数
    public int coin;

    public bool battleState; //バトル開始後==true バトル開始前==false 
    public List<GameObject> playerObjects = new List<GameObject>();
    public List<PlayerController> players;
    public List<EnemyController> enemies;
    [SerializeField] private DrawCardController drawCardController;
    public GameObject playerPrefab;
    public GameObject[] bossPrefab;
    public GameObject[] enemyPrefab; // 敵のプレハブ
    public GameObject[] itemPrefab; //アイテムのプレファブ。
    public Transform playerSpawnPoint;//プレイヤーのスポーンポイント
    public List<Transform> enemySpawnPoints; // 敵のスポーン位置のリスト
    public List<Transform> itemSpawnPoints; //フィールド上のアイテムオブジェのリスト

    public CinemachineVirtualCamera shopCamera;
    public CinemachineVirtualCamera battleCamera;
    public CinemachineVirtualCamera portalCamera;

    //エリアごとのパネル
    public GameObject mainPanel;
    public GameObject battlePanel;
    public GameObject shopPanel;
    public GameObject portalPanel;


    public enum Location
    {
        PortalWorld,
        Dungeon,
        NormalBattle,
        BossBattle,
        GoblinShop,
    }

    public Location currentLocation;

    void Awake()
    {
        if (instance == null)
            instance = this;

        // DoTweenの初期化
        DOTween.Init();

        if (!PlayerPrefs.HasKey("StageHierarchy"))
        {
            PlayerPrefs.SetInt("StageHierarchy", 1);
            PlayerPrefs.Save();
        }
        stageHierarchy = PlayerPrefs.GetInt("StageHierarchy");

        reachingStage = PlayerPrefs.GetInt("ReachingStage", 1);

        CreateCharacterList(); //プレイヤーと敵のリストを更新
    }

    public void UpdateLocation()
    {
        switch (currentLocation)
        {
            case Location.PortalWorld:
                AudioManager.instance.PlayBGM(AudioManager.BGM.PortalWorld);
                ActivePanel(portalPanel);
                break;
            case Location.Dungeon:
                AudioManager.instance.PlayBGM(AudioManager.BGM.Dungeon);
                ActivePanel(battlePanel);
                break;
            case Location.NormalBattle:
                AudioManager.instance.PlayBGM(AudioManager.BGM.NormalBattle);
                ActivePanel(battlePanel);
                break;
            case Location.BossBattle:
                AudioManager.instance.PlayBGM(AudioManager.BGM.BossBattle);
                ActivePanel(battlePanel);
                break;
            case Location.GoblinShop:
                AudioManager.instance.PlayBGM(AudioManager.BGM.GoblinShop);
                ActivePanel(shopPanel);
                break;
        }

        UIManager.instance.LobbyButtonActive();
    }

    public void ActivePanel(GameObject activePanel)
    {
        battlePanel.SetActive(false);
        shopPanel.SetActive(false);
        portalPanel.SetActive(false);
        activePanel.SetActive(true);
    }

    void Start()
    {
        //デバック用
        //BattleCameraChange();
        //ShopCameraChange();
        //PortalCameraChange();
        DungeonCameraChange();

        SpawnItems();

        SpawnPlayer();
        if (PlayerPrefs.HasKey("EnemyCount"))
        {
            // "Enemies" という名前のゲームオブジェクトを探す
            GameObject enemiesParent = GameObject.Find("Enemies");

            // 存在しない場合はEnemiesを新しく作成
            if (enemiesParent == null)
            {
                enemiesParent = new GameObject("Enemies");
            }
            // ボスの場合   
            if (stageHierarchy % 10 == 0)
            {
                //ボス部屋のアップデート
                currentLocation = Location.BossBattle;
                UpdateLocation();

                int id = stageHierarchy / 10 - 1;
                GameObject boss = Instantiate(bossPrefab[id], enemySpawnPoints[0].position, enemySpawnPoints[0].rotation);
                boss.transform.SetParent(GameObject.Find("Enemies").transform);
                enemies.Add(boss.GetComponent<EnemyController>());
            }
            else
            {
                int enemyCount = PlayerPrefs.GetInt("EnemyCount");
                for (int i = 0; i < enemyCount; i++)
                {
                    int id = PlayerPrefs.GetInt($"Enemy{i}");
                    GameObject newEnemy = Instantiate(enemyPrefab[id - 1], enemySpawnPoints[i].position, enemySpawnPoints[i].rotation);
                    //1の位によってステータスが1.1倍~1.9倍になる
                    newEnemy.GetComponent<EnemyController>().maxHp *= stageHierarchy % 10 / 10 + 1;
                    newEnemy.GetComponent<EnemyController>().attack *= stageHierarchy % 10 / 10 + 1;
                    newEnemy.GetComponent<EnemyController>().defense *= stageHierarchy % 10 / 10 + 1;
                    newEnemy.transform.SetParent(GameObject.Find("Enemies").transform);
                    enemies.Add(newEnemy.GetComponent<EnemyController>());
                }
            }

            // キャラクターリストを更新
            CreateCharacterList();
        }
        else
        {
            SpawnEnemies();
        }
    }

    public void GameReset()
    {
        //UIManager.instance.LosePanel();

        // すべての敵が勝利アニメーションを再生
        foreach (var enemy in enemies)
        {
            if (enemy != null)
            {
                enemy.Victory();
            }
        }
        PlayerPrefs.SetInt("StageHierarchy", 1);
        PlayerPrefs.Save();
        stageHierarchy = 0;

        //enemiesのオブジェクトを全て破棄
        foreach (var enemy in enemies)
        {
            if (enemy != null)
            {
                Destroy(enemy.gameObject);
            }
        }
        for (int i = 0; i < PlayerPrefs.GetInt("EnemyCount"); i++)
        {
            PlayerPrefs.DeleteKey($"Enemy{i}");
        }
        PlayerPrefs.DeleteKey("EnemyCount");

        DestroyAllItemWithTag("itemObj");
        for (int i = playerObjects.Count - 1; i >= 0; i--)
        {
            if (playerObjects[i].name == "ShadowPlayer")
            {
                Destroy(playerObjects[i]);
                playerObjects.RemoveAt(i); // RemoveAtを使用して要素を削除
            }
        }
        ResetCharacters();

        UpdateStage();
    }

    public void UpdateStage()
    {
        if (stageHierarchy > reachingStage)
        {
            reachingStage = stageHierarchy;
            PlayerPrefs.SetInt("ReachingStage", reachingStage);
            PlayerPrefs.Save();
        }
    }

    public void DestroyAllItemWithTag(string tag)
    {
        GameObject[] items = GameObject.FindGameObjectsWithTag(tag);
        foreach (GameObject item in items)
        {
            Destroy(item);
        }
    }

    public void BattleStart()
    {
        currentLocation = Location.NormalBattle;
        UpdateLocation();
    }

    public void PortalCameraChange()
    {
        ResetCameraPriority();
        portalCamera.Priority = 1;
        CameraController.instance.CutInChange();

        currentLocation = Location.PortalWorld;
        UpdateLocation();
    }
    public void DungeonCameraChange()
    {
        ResetCameraPriority();
        battleCamera.Priority = 1;
        CameraController.instance.CutInChange();

        currentLocation = Location.Dungeon;
        UpdateLocation();
    }
    public void ShopCameraChange()
    {
        ResetCameraPriority();
        shopCamera.Priority = 1;
        CameraController.instance.CutInChange();

        currentLocation = Location.GoblinShop;
        UpdateLocation();
    }

    // 特定のVirtual CameraのPriorityを変更する
    public void ResetCameraPriority()
    {
        battleCamera.Priority = 0;
        shopCamera.Priority = 0;
        portalCamera.Priority = 0;
    }
    public void GetCoin()
    {
        //コインをnumber枚取得する
        float randomNum = UnityEngine.Random.Range(0.8f, 2f);
        coin += Mathf.RoundToInt(stageHierarchy * randomNum * 10);
        PlayerPrefs.SetInt("Coin", coin);
        PlayerPrefs.Save();
        UIManager.instance.UpdateCoinText();
    }

    void KeepCurrentStage()
    {
        PlayerPrefs.SetInt("CurrentStageCard", drawCardController.cardIDList.Count);
        //このカードの内容まで保存するか怪しい。
        for (int i = 0; i < drawCardController.cardIDList.Count; i++)
        {
            PlayerPrefs.SetInt($"Card{i}", drawCardController.cardIDList[i]);
        }
        PlayerPrefs.SetInt("EnemyCount", enemies.Count);
        for (int i = 0; i < enemies.Count; i++)
        {
            PlayerPrefs.SetInt($"Enemy{i}", enemies[i].GetComponent<EnemyController>().id);
        }
        PlayerPrefs.Save();
    }

    //キャラクターのリストを作成する。あるいはリストをリフレッシュするする。
    public void CreateCharacterList()
    {
        // シーン内のすべてのPlayerControllerとEnemyControllerを検索し、リストに追加
        players = new List<PlayerController>(FindObjectsOfType<PlayerController>());
        playerObjects = new List<GameObject>(GameObject.FindGameObjectsWithTag("Player"));
        enemies = new List<EnemyController>(FindObjectsOfType<EnemyController>());

        UpdateAllNavmeshTargets();//敵と味方のターゲットを最も近い相手に指定
        //RandomTarget(); //それぞれのターゲットをランダム指定
    }

    // 各陣営のNavMeshターゲットを更新
    public void UpdateAllNavmeshTargets()
    {
        foreach (var player in players)
        {
            if (!player.IsDead)
            {
                player.FindClosestEnemy(player.transform);
                //最も近い敵を探してターゲットにする
            }
        }
        foreach (var enemy in enemies)
        {
            if (!enemy.IsDead)
            {
                enemy.FindClosestPlayer(enemy.transform);
                //最も近いプレイヤーを探してターゲットにする
            }
        }
        //print("すべての敵とプレイヤーのターゲットを更新しました");
    }

    /// <summary>
    /// リストから特定の敵を除外する
    /// </summary>
    /// <param name="removeEnemy">リストから除外する敵</param>
    public void RemoveEnemyFromList(EnemyController removeEnemy)
    {
        if (enemies.Contains(removeEnemy))//removeEnemyがリストに含まれていたら
        {
            enemies.Remove(removeEnemy);
            //print("リストから" + removeEnemy.name + "が除名されました");
        }
    }
    /// <summary>
    /// リストから特定のプレイヤーを除外する
    /// </summary>
    /// <param name="removePlayer">リストから除外するプレイヤー</param>
    public void RemovePlayerFromList(PlayerController removePlayer)
    {
        if (players.Contains(removePlayer))//removePlayerがリストに含まれていたら
        {
            players.Remove(removePlayer);
            //print("リストから" + removePlayer + "が除名されました");
        }
        if (playerObjects.Contains(removePlayer.gameObject))//removePlayerがリストに含まれていたら
        {
            playerObjects.Remove(removePlayer.gameObject);
        }
    }

    public void SpawnPlayer()
    {
        // "Player" という名前のオブジェクトをヒエラルキーで探す
        GameObject existingPlayer = GameObject.Find("Player");

        // "Player" というオブジェクトが存在しない場合にのみ新しいプレイヤーを作成
        if (existingPlayer == null)
        {
            GameObject playersParent = GameObject.Find("Players");

            // "Players" という親オブジェクトが存在しない場合は新しく作成
            if (playersParent == null)
            {
                playersParent = new GameObject("Players");
            }

            // プレイヤーをインスタンス化し、"Players" に子として追加
            GameObject newPlayer = Instantiate(playerPrefab, playerSpawnPoint.position, playerSpawnPoint.rotation);
            newPlayer.name = "Player"; // インスタンス化したオブジェクトに "Player" という名前を設定
            newPlayer.transform.SetParent(playersParent.transform);
        }

        // キャラクターリストを更新
        CreateCharacterList();
    }

    // 敵をスポーンする
    public void SpawnEnemies()
    {
        // "Enemies" という名前のゲームオブジェクトを探す
        GameObject enemiesParent = GameObject.Find("Enemies");

        // 存在しない場合はEnemiesを新しく作成
        if (enemiesParent == null)
        {
            enemiesParent = new GameObject("Enemies");
        }

        GameObject boss = null;
        GameObject newEnemy = null;  // newEnemyの宣言をここに移動
        int randomIndex = 0;  // randomIndexの宣言をここに移動

        switch (stageHierarchy)
        {
            // 以降ボス戦
            case 10: boss = Instantiate(bossPrefab[0], enemySpawnPoints[0].position, enemySpawnPoints[0].rotation); break;
            case 20: boss = Instantiate(bossPrefab[1], enemySpawnPoints[0].position, enemySpawnPoints[0].rotation); break;
            case 30: boss = Instantiate(bossPrefab[2], enemySpawnPoints[0].position, enemySpawnPoints[0].rotation); break;
            case 40: boss = Instantiate(bossPrefab[3], enemySpawnPoints[0].position, enemySpawnPoints[0].rotation); break;
            default:
                // stageHierarchyの値に基づいて敵の数を決定
                int remainder = (stageHierarchy - 1) % 10;
                int enemiesToSpawn = remainder / 2 + 1;
                Debug.Log($"敵の数: {PlayerPrefs.GetInt("EnemyCount")}");
                PlayerPrefs.SetInt("EnemyCount", enemiesToSpawn);
                Debug.Log($"敵の数: {PlayerPrefs.GetInt("EnemyCount")}");
                PlayerPrefs.Save();
                for (int i = 0; i < enemiesToSpawn; i++)
                {
                    int range = stageHierarchy / 10;
                    switch (range)
                    {
                        // 1~9の場合の処理
                        case 0: randomIndex = UnityEngine.Random.Range(0, 5); break;
                        // 11~19の場合の処理
                        case 1: randomIndex = UnityEngine.Random.Range(6, 10); break;
                        // 21~29の場合の処理
                        case 2: randomIndex = UnityEngine.Random.Range(11, 15); break;
                        // 31~39の場合の処理
                        case 3: randomIndex = UnityEngine.Random.Range(16, 20); break;
                    }

                    // 敵のインスタンス化とステータスの調整
                    newEnemy = Instantiate(enemyPrefab[randomIndex], enemySpawnPoints[i].position, enemySpawnPoints[i].rotation);
                    newEnemy.GetComponent<EnemyController>().maxHp *= stageHierarchy % 10 / 10 + 1;
                    newEnemy.GetComponent<EnemyController>().attack *= stageHierarchy % 10 / 10 + 1;
                    newEnemy.GetComponent<EnemyController>().defense *= stageHierarchy % 10 / 10 + 1;
                    newEnemy.transform.SetParent(enemiesParent.transform);
                }
                break;
        }

        if (boss != null)
        {
            boss.transform.SetParent(enemiesParent.transform);
        }

        // キャラクターリストを更新
        CreateCharacterList();
        KeepCurrentStage();
    }

    //アイテムをスポーンさせる
    public void SpawnItems()
    {
        GameObject itemParent = GameObject.Find("Items");
        if (itemParent == null)
        {
            itemParent = new GameObject("Items");
        }

        int randomAmountIndex = UnityEngine.Random.Range(1, itemSpawnPoints.Count + 1);

        // 使用された位置を追跡するためのリストのコピーを作成
        List<Transform> availableSpawnPoints = new List<Transform>(itemSpawnPoints);

        for (int i = 0; i < randomAmountIndex; i++)
        {
            if (availableSpawnPoints.Count == 0) break; // すべてのスポーンポイントが使用された場合はループを抜ける

            int randomPositionIndex = UnityEngine.Random.Range(0, availableSpawnPoints.Count);
            int randomTypeIndex = UnityEngine.Random.Range(0, itemPrefab.Length);

            GameObject newItem = Instantiate(itemPrefab[randomTypeIndex], availableSpawnPoints[randomPositionIndex].position, availableSpawnPoints[randomPositionIndex].rotation);
            newItem.transform.SetParent(itemParent.transform);

            // 使用されたスポーンポイントをリストから削除
            availableSpawnPoints.RemoveAt(randomPositionIndex);
        }
    }

    //両陣営のリストとIsDeadを基準に勝敗をジャッジする
    public void CheckBattleStatus()
    {
        //敵が勝利したパターン
        if (AreAllPlayersDead()) // すべてのプレイヤーが倒れたか
        {
            UIManager.instance.GiveUpButton();
            JudgementSound(AudioManager.SE.YouLose, AudioManager.BGM.GameOverTheme, AudioManager.instance.randomLoseClip);
        }
        //プレイヤーが勝利したパターン
        else if (AreAllEnemiesDead()) // すべての敵が倒れたか
        {
            UIManager.instance.WinPanel();

            // すべてのプレイヤーが勝利アニメーションを再生
            foreach (var player in players)
            {
                player.Victory();
            }
            if (!PlayerPrefs.HasKey("Tutorial"))
            {
                UIManager.instance.TutorialTextDetail("カードを用いて最深部を目指そう！");
            }
            JudgementSound(AudioManager.SE.YouWin, AudioManager.BGM.GameClearTheme, AudioManager.instance.randomVictoryClip);
        }
    }

    //勝敗が決したときに鳴らす効果音とそのあとに流れるサウンド
    public void JudgementSound(AudioManager.SE se, AudioManager.BGM bgm, AudioClip[] clips)
    {
        AudioManager.instance.StopBGM();
        AudioManager.instance.PlaySE(se);
        AudioManager.instance.RandomVoice(clips);
        //AudioManager.instance.PlayVoice(voice);

        //効果音の長さぶんだけ待ってからBGMを再生
        StartCoroutine(WaitAndPlayBGM(AudioManager.instance.GetSELength(se), bgm));
    }
    private IEnumerator WaitAndPlayBGM(float delay, AudioManager.BGM bgm)
    {
        yield return new WaitForSeconds(delay);
        if (!AudioManager.instance.audioSourceBGM.isPlaying)
        {
            AudioManager.instance.PlayBGM(bgm);
        }
    }

    //次のステージへ移行する
    public void NextStage()
    {
        stageHierarchy++;
        PlayerPrefs.SetInt("StageHierarchy", stageHierarchy);
        for (int i = 0; i < UnityEngine.Random.Range(PlayerPrefs.GetInt("MinDrawCard"), PlayerPrefs.GetInt("MaxDrawCard")); i++)
        {
            drawCardController.DrawCard();
        }

        // 複製したプレイヤーを削除
        for (int i = playerObjects.Count - 1; i >= 0; i--)
        {
            if (playerObjects[i].name == "ShadowPlayer")
            {
                Destroy(playerObjects[i]);
                playerObjects.RemoveAt(i); // RemoveAtを使用して要素を削除
            }
        }

        UpdateStage();
    }

    //プレイヤーとエネミーを初期位置と初期アニメに戻す
    public void ResetCharacters()
    {
        foreach (var player in players)
        {
            if (player != null) // nullチェックを追加
            {
                player.ResetToInitialPosition(); // プレイヤーの位置とアニメを初期設定に戻す
            }
        }

        foreach (var enemy in enemies)
        {
            if (enemy != null) // nullチェックを追加
            {
                enemy.ResetToInitialPosition(); // 敵の位置とアニメを初期設定に戻す
            }
        }


        //print("プレイヤーとエネミーの位置とアニメをリセットします");
    }

    /// <summary>
    /// プレイヤーの生存判定。プレイヤーが全滅したらTrueを返す。
    /// </summary>
    /// <returns></returns>
    public bool AreAllPlayersDead()
    {
        if (players.Count == 0)//リストが空になったら
        {
            return true;
        }

        foreach (var player in players)
        {
            if (!player.IsDead) // もし生きているプレイヤーがいたら
            {
                return false; // すべてのプレイヤーは死んでいない
            }
        }
        return true; // すべてのプレイヤーが死んでいる
    }

    /// <summary>
    /// エネミーの生存判定。エネミーが全滅したらTrueを返す。
    /// </summary>
    /// <returns></returns>
    public bool AreAllEnemiesDead()
    {
        // 敵のリストが空の場合はすべての敵が死んでいるとみなす
        if (enemies.Count == 0)
        {
            return true;
        }

        foreach (var enemy in enemies)
        {
            if (!enemy.IsDead) // もし生きている敵がいたら
            {
                return false; // すべての敵は死んでいない
            }
        }
        return true; // すべての敵が死んでいる
    }

    /// <summary>
    /// 現在の階層によってTiarを決める
    /// </summary>
    public int CalculateTiar()
    {
        // 確率を格納する配列
        float[] probabilities;

        // Stage 1~10の確率
        if (stageHierarchy <= 10) probabilities = new float[] { 0.6f, 0.2f, 0.18f, 0.1f, 0.05f, 0.02f };
        // Stage 11~20の確率
        else if (stageHierarchy <= 20) probabilities = new float[] { 0.4f, 0.2f, 0.2f, 0.1f, 0.05f, 0.05f };
        // Stage 21~30までの確率
        else if (stageHierarchy <= 30) probabilities = new float[] { 0.2f, 0.2f, 0.2f, 0.2f, 0.1f, 0.1f };
        // Stage 31~40までの確率
        else if (stageHierarchy <= 40) probabilities = new float[] { 0.1f, 0.15f, 0.2f, 0.25f, 0.15f, 0.15f };
        // デフォルトの確率（必要に応じて設定）
        else probabilities = new float[] { 0.1f, 0.2f, 0.3f, 0.2f, 0.1f, 0.1f };

        // 乱数を生成してtiarを決定
        float randomValue = UnityEngine.Random.value;
        float cumulativeProbability = 0.0f;
        for (int tiar = 1; tiar <= probabilities.Length; tiar++)
        {
            cumulativeProbability += probabilities[tiar - 1];
            if (randomValue < cumulativeProbability)
            {
                return tiar;
            }
        }
        return 1; // 万が一、どの条件にも当てはまらない場合は最低値を返す
    }

    /// <summary>
    /// 
    /// </summary>
}
