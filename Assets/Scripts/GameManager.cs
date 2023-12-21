﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class GameManager : MonoBehaviour
{
    public static GameManager instance;
    private int stageLevel;

    public bool battleState;

    public List<PlayerController> players;
    public List<EnemyController> enemies;

    void Awake()
    {
        if (instance == null)
            instance = this;

        // DoTweenの初期化
        DOTween.Init();
    }
    void Start()
    {
        if (!PlayerPrefs.HasKey("StageLevel"))
        {
            PlayerPrefs.SetInt("StageLevel", 1);
        }
        stageLevel = PlayerPrefs.GetInt("StageLevel");
        UIManager.instance.StageUpdate(stageLevel);

        // シーン内のすべてのPlayerControllerとEnemyControllerを検索し、リストに追加
        players = new List<PlayerController>(FindObjectsOfType<PlayerController>());
        enemies = new List<EnemyController>(FindObjectsOfType<EnemyController>());
    }


    void Update()
    {
        CheckGameStatus();
    }

    void CheckGameStatus()
    {
        //敵が勝利したパターン
        if(AreAllPlayersDead()) // すべてのプレイヤーが倒れたか
        {
            // すべての敵が勝利アニメーションを再生
            foreach (var enemy in enemies)
            {
                enemy.Victory();
            }
        }
        //プレイヤーが勝利したパターン
        else if (AreAllEnemiesDead()) // すべての敵が倒れたか
        {
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
