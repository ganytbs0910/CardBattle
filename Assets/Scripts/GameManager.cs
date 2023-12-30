﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

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

    public GameObject enemyPrefab; // 敵のプレハブ
    public List<Transform> enemySpawnPoints; // 敵のスポーン位置のリスト

    void Awake()
    {
        if (instance == null)
            instance = this;

        // DoTweenの初期化
        DOTween.Init();
    }
    void Start()
    {
        if (!PlayerPrefs.HasKey("StageHierarchy"))
        {
            PlayerPrefs.SetInt("StageHierarchy", 1);
        }
        stageHierarchy = PlayerPrefs.GetInt("StageHierarchy");
        CreateCharacterList(); //プレイヤーと敵のリストを更新
    }

    //次のステージへ移行する
    void NextStage()
    {
        stageHierarchy++;
        PlayerPrefs.SetInt("StageHierarchy", stageHierarchy);
        drawCardController.DrawCard();

        // 逆順にループ
        for (int i = playerObjects.Count - 1; i >= 0; i--)
        {
            if (playerObjects[i].name == "ShadowPlayer")
            {
                Destroy(playerObjects[i]);
                playerObjects.RemoveAt(i); // RemoveAtを使用して要素を削除
            }
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
        //RandomTarget();//それぞれのターゲットをランダム指定
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

    //敵をスポーンする
    public void SpawnEnemies()
    {
        // "Enemies" という名前のゲームオブジェクトを探す
        GameObject enemiesParent = GameObject.Find("Enemies");

        // 存在しない場合はEnemiesを新しく作成
        if (enemiesParent == null)
        {
            enemiesParent = new GameObject("Enemies");
        }

        //スポーンポイントの数だけ敵をスポーンさせる　※修正の余地あり
        foreach (var spawnPoint in enemySpawnPoints)
        {
            // 敵をインスタンス化し、"Enemies" オブジェクトの子として設定
            GameObject newEnemy = Instantiate(enemyPrefab, spawnPoint.position, spawnPoint.rotation);
            //敵のステータスを階層によって強くするように調整
            newEnemy.GetComponent<EnemyController>().maxHp = 100 + (stageHierarchy * 10);
            newEnemy.GetComponent<EnemyController>().attack = 10 + (stageHierarchy);
            newEnemy.GetComponent<EnemyController>().defense = 5 + (stageHierarchy);
            newEnemy.transform.SetParent(enemiesParent.transform);
            //print(newEnemy.name + "をSpawnPointにスポーンさせました");
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
            NextStage();
            // すべてのプレイヤーが勝利アニメーションを再生
            foreach (var player in players)
            {
                player.Victory();
            }
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
