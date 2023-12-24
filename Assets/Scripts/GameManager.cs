using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class GameManager : MonoBehaviour
{
    public static GameManager instance;
    public int stageHierarchy;
    public int coin;

    public bool battleState;

    public List<PlayerController> players;
    public List<EnemyController> enemies;
    [SerializeField] private GachaController gachaController;

    public GameObject enemyPrefab; // 敵のプレハブ
    public List<Transform> spawnPoints; // スポーン位置のリスト

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


    void Update()
    {

    }


    void NextStage()
    {
        stageHierarchy++;
        PlayerPrefs.SetInt("StageHierarchy", stageHierarchy);
        UIManager.instance.Loading(stageHierarchy);
        gachaController.DrawCard();
    }

    //キャラクターの増減時に呼ぶ
    public void CreateCharacterList()
    {
        // シーン内のすべてのPlayerControllerとEnemyControllerを検索し、リストに追加
        players = new List<PlayerController>(FindObjectsOfType<PlayerController>());
        enemies = new List<EnemyController>(FindObjectsOfType<EnemyController>());

        UpdateAllNavmeshTargets();//敵と味方のターゲットを最も近い相手に指定
        //RandomTarget();//それぞれのターゲットをランダム指定
    }

    //死亡したキャラを除外してリストを再構築
    public void CheckCharacterList()
    {
        players.Clear();
        foreach (var player in players)
        {
            if (!player.IsDead)
            {
                players.Add(player);
            }
        }

        enemies.Clear();
        foreach (var enemy in enemies)
        {
            if (!enemy.IsDead)
            {
                enemies.Add(enemy);
            }
        }
    }

    public void RemoveEnemyFromList(EnemyController enemy)
    {
        if (enemies.Contains(enemy))
        {
            enemies.Remove(enemy);
            //Debug.LogError("Enemy removed from list: " + gameObject.name);
            //print("リストから敵一人が除名されました");
        }
    }

    public void RemovePlayerFromList(PlayerController player)
    {
        if (players.Contains(player))
        {
            players.Remove(player);
            print("リストからプレイヤー一人が除名されました");
        }
    }

    // 現在の敵リストからすべての要素を削除するメソッド
    public void RemoveAllEnemies()
    {
        foreach (var enemy in enemies)
        {
            Destroy(enemy.gameObject); // シーンから敵を削除
        }
        enemies.Clear(); // リストを空にする
        print("現在のすべての敵をリストから除外します");
    }

    //敵をスポーンさせる
    public void SpawnEnemies()
    {
        // "Enemies" という名前のゲームオブジェクトを探す
        GameObject enemiesParent = GameObject.Find("Enemies");

        // 存在しない場合は新しく作成
        if (enemiesParent == null)
        {
            enemiesParent = new GameObject("Enemies");
        }

        foreach (var spawnPoint in spawnPoints)
        {
            // 敵をインスタンス化し、"Enemies" オブジェクトの子として設定
            GameObject newEnemy = Instantiate(enemyPrefab, spawnPoint.position, spawnPoint.rotation);
            newEnemy.transform.SetParent(enemiesParent.transform);
        }
        print("敵をSpawnPointにスポーンする");

        // キャラクターリストを更新
        CheckCharacterList();
    }

    //プレイヤーとエネミーを初期位置と初期アニメに戻す
    public void ResetCharacters()
    {
        foreach (var player in players)
        {
            player.ResetToInitialPosition();
        }
        //敵を新しくスポーンしたい。
        foreach (var enemy in enemies)
        {
            enemy.ResetToInitialPosition();
        }

        print("プレイヤーとエネミーの位置とアニメをリセットします");
    }

    // 各陣営のNavMeshターゲットを更新
    public void UpdateAllNavmeshTargets()
    {
        foreach (var player in players)
        {
            if (!player.IsDead)
            {
                player.FindClosestEnemy(player.transform);
            }
        }
        foreach (var enemy in enemies)
        {
            if (!enemy.IsDead)
            {
                enemy.FindClosestPlayer(enemy.transform);
            }
        }

        print("敵とプレイヤーのターゲットを更新しました");
    }


    public void CheckGameStatus()
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

    /// <summary>
    /// プレイヤーの生存判定。プレイヤーが全滅したらTrueを返す。
    /// </summary>
    /// <returns></returns>
    public bool AreAllPlayersDead()
    {
        if (players.Count == 0)
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
