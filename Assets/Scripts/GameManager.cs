using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using System;


public class GameManager : MonoBehaviour
{
    public static GameManager instance;
    public int stageHierarchy;
    public int coin;

    public bool battleState; //バトル開始後==true バトル開始前==false 
    public List<GameObject> playerObjects = new List<GameObject>();
    public List<PlayerController> players;
    public List<EnemyController> enemies;
    [SerializeField] private DrawCardController drawCardController;
    public GameObject[] bossPrefab;
    public GameObject[] enemyPrefab; // 敵のプレハブ
    public List<Transform> enemySpawnPoints; // 敵のスポーン位置のリスト

    void Awake()
    {
        if (instance == null)
            instance = this;

        // DoTweenの初期化
        DOTween.Init();

        if (!PlayerPrefs.HasKey("StageHierarchy"))
        {
            PlayerPrefs.SetInt("StageHierarchy", 1);
        }
        stageHierarchy = PlayerPrefs.GetInt("StageHierarchy");
        CreateCharacterList(); //プレイヤーと敵のリストを更新
    }
    void Start()
    {
        if (PlayerPrefs.HasKey("EnemyCount"))
        {
            // "Enemies" という名前のゲームオブジェクトを探す
            GameObject enemiesParent = GameObject.Find("Enemies");

            // 存在しない場合はEnemiesを新しく作成
            if (enemiesParent == null)
            {
                enemiesParent = new GameObject("Enemies");
            }
            for (int i = 0; i < PlayerPrefs.GetInt("EnemyCount"); i++)
            {
                int id = PlayerPrefs.GetInt($"Enemy{i}");
                GameObject newEnemy = Instantiate(enemyPrefab[id], enemySpawnPoints[i].position, enemySpawnPoints[i].rotation);
                newEnemy.GetComponent<EnemyController>().maxHp = 100 + (stageHierarchy * 30);
                newEnemy.GetComponent<EnemyController>().attack = 10 + (stageHierarchy + 10);
                newEnemy.GetComponent<EnemyController>().defense = 5 + (stageHierarchy + 5);
                newEnemy.transform.SetParent(GameObject.Find("Enemies").transform);
                enemies.Add(newEnemy.GetComponent<EnemyController>());
            }
            // キャラクターリストを更新
            CreateCharacterList();
        }
        else
        {
            SpawnEnemies();
        }
    }

    public void GetCoin()
    {
        //コインをnumber枚取得する
        float randomNum = UnityEngine.Random.Range(0.8f, 2f);
        coin += Mathf.RoundToInt(stageHierarchy * randomNum * 10);
        PlayerPrefs.SetInt("Coin", coin);
        UIManager.instance.UpdateCoinText();
    }

    //次のステージへ移行する
    public void NextStage()
    {
        stageHierarchy++;
        PlayerPrefs.SetInt("StageHierarchy", stageHierarchy);
        for (int i = 0; i < UnityEngine.Random.Range(4, 8); i++)
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
        KeepCurrentStage();
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
        print("すべての敵とプレイヤーのターゲットを更新しました");
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
            case 10:
                boss = Instantiate(bossPrefab[0], enemySpawnPoints[0].position, enemySpawnPoints[0].rotation);
                break;
            case 20:
                boss = Instantiate(bossPrefab[1], enemySpawnPoints[0].position, enemySpawnPoints[0].rotation);
                break;
            case 30:
                boss = Instantiate(bossPrefab[2], enemySpawnPoints[0].position, enemySpawnPoints[0].rotation);
                break;
            case 40:
                boss = Instantiate(bossPrefab[3], enemySpawnPoints[0].position, enemySpawnPoints[0].rotation);
                break;

            default:
                // stageHierarchyの値に基づいて敵の数を決定
                int remainder = (stageHierarchy - 1) % 10;
                int enemiesToSpawn = remainder / 2 + 1;
                PlayerPrefs.SetInt("EnemyCount", enemiesToSpawn);
                for (int i = 0; i < enemiesToSpawn; i++)
                {
                    int range = stageHierarchy / 10;

                    switch (range)
                    {
                        case 0:
                            // 1~9の場合の処理
                            randomIndex = UnityEngine.Random.Range(0, 5);
                            break;
                        case 1:
                            // 11~19の場合の処理
                            randomIndex = UnityEngine.Random.Range(0, 10);
                            break;
                        case 2:
                            // 21~29の場合の処理
                            randomIndex = UnityEngine.Random.Range(0, 15);
                            break;
                        case 3:
                            // 31~39の場合の処理
                            randomIndex = UnityEngine.Random.Range(0, 20);
                            break;
                    }

                    // 敵のインスタンス化とステータスの調整
                    newEnemy = Instantiate(enemyPrefab[randomIndex], enemySpawnPoints[i].position, enemySpawnPoints[i].rotation);
                    newEnemy.GetComponent<EnemyController>().maxHp = 100 / enemiesToSpawn + (stageHierarchy * 10);
                    newEnemy.GetComponent<EnemyController>().attack = 10 / enemiesToSpawn + (stageHierarchy);
                    newEnemy.GetComponent<EnemyController>().defense = 5 / enemiesToSpawn + (stageHierarchy);
                    newEnemy.transform.SetParent(enemiesParent.transform);
                }
                break;
        }

        if (boss != null)
        {
            // ボスのステータス調整
            boss.GetComponent<EnemyController>().maxHp = 100 + (stageHierarchy * 30);
            boss.GetComponent<EnemyController>().attack = 10 + (stageHierarchy * 10);
            boss.GetComponent<EnemyController>().defense = 5 + (stageHierarchy * 5);
            boss.transform.SetParent(enemiesParent.transform);
            boss.transform.localScale = new Vector3(1.5f, 1.5f, 1.5f);
        }

        // キャラクターリストを更新
        CreateCharacterList();
    }




    //両陣営のリストとIsDeadを基準に勝敗をジャッジする
    public void CheckBattleStatus()
    {
        //敵が勝利したパターン
        if (AreAllPlayersDead()) // すべてのプレイヤーが倒れたか
        {
            UIManager.instance.LosePanel();
            // すべての敵が勝利アニメーションを再生
            foreach (var enemy in enemies)
            {
                enemy.Victory();
            }
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

            NextStage();
        }
    }

    //プレイヤーとエネミーを初期位置と初期アニメに戻す
    public void ResetCharacters()
    {
        foreach (var player in players)
        {
            player.ResetToInitialPosition();
            //プレイヤーの位置とアニメを初期設定に戻す
        }

        foreach (var enemy in enemies)
        {
            enemy.ResetToInitialPosition();
            //敵の位置とアニメを初期設定に戻す
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
}
