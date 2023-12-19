using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class GameManager : MonoBehaviour
{
    public static GameManager instance;
    private int stageLevel;

    //ÅöêVãKÇ≈í«â¡ÇµÇ‹ÇµÇΩÅI
    public bool BattleState;

    void Awake()
    {
        if (instance == null)
            instance = this;
    }
    void Start()
    {
        if (!PlayerPrefs.HasKey("StageLevel"))
        {
            PlayerPrefs.SetInt("StageLevel", 1);
        }
        stageLevel = PlayerPrefs.GetInt("StageLevel");
        UIManager.instance.StageUpdate(stageLevel);
    }

    void Update()
    {

    }
}
