using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Cinemachine;
using MoreMountains.Feedbacks;
using DG.Tweening;

public class PortalController : MonoBehaviour
{
    public GameObject[] falseUI;

    public int currentPortal = 1;

    public GameObject rightButton;
    public GameObject leftButton;

    public CinemachineVirtualCamera[] portalCamera;

    public MMFeedbacks PortalFeedback;

    public bool[] levelClear; //０はどの階層も未クリアの状態
    public ParticleSystem[] portalGate;

    public GameObject PortalPanel;
    public CanvasGroup LoadPanel;
    public GameObject PortalEnviloment;

    public static PortalController instance;

    private void Awake()
    {
        instance = this;
    }

    private void Start()
    {
        //ポータルは一番最初とゲームオーバーになった時に選択可能にする
        //UIManager)
        //GoPortal();
    }

    private void Update()
    {
        levelClear[0] = true;
        if (10 < GameManager.instance.reachingStage)
        {
            levelClear[1] = true;
        }
        if (20 < GameManager.instance.reachingStage)
        {
            levelClear[2] = true;
        }
        if (30 < GameManager.instance.reachingStage)
        {
            levelClear[3] = true;
        }
    }

    public void GateDeactive()
    {
        foreach (ParticleSystem gate in portalGate)
        {
            gate.Stop();
        }
    }

    public void GateActive()
    {
        if (levelClear[0])
        { portalGate[0].Play(); }
        if (levelClear[1])
        { portalGate[1].Play(); }
        if (levelClear[2])
        { portalGate[2].Play(); }
        if (levelClear[3])
        { portalGate[3].Play(); }
    }

    public void RightPortalButton()
    {
        AudioManager.instance.PlaySE(AudioManager.SE.ArrowClick);

        currentPortal++;

        if (currentPortal > 4)
        {
            currentPortal = 4;
        }
        CameraController.instance.HardOutChange();
        PortalUpdate();

    }

    public void LeftPortalButton()
    {
        AudioManager.instance.PlaySE(AudioManager.SE.ArrowClick);

        currentPortal--;

        if (currentPortal < 1)
        {
            currentPortal = 1;
        }
        CameraController.instance.HardOutChange();
        PortalUpdate();
    }

    public void PortalUpdate()
    {
        PortalCameraPriorityReset();
        GateActive();

        switch (currentPortal)
        {
            case 1:
                leftButton.SetActive(false);
                rightButton.SetActive(true);
                portalCamera[0].Priority = 1;
                GameManager.instance.stageHierarchy = 0;
                UIManager.instance.HeroMessageDetail("ポータル1");
                break;
            case 2:
                leftButton.SetActive(true);
                rightButton.SetActive(true);
                portalCamera[1].Priority = 1;
                GameManager.instance.stageHierarchy = 10;
                UIManager.instance.HeroMessageDetail("ポータル2");
                break;
            case 3:
                leftButton.SetActive(true);
                rightButton.SetActive(true);
                portalCamera[2].Priority = 1;
                GameManager.instance.stageHierarchy = 20;
                UIManager.instance.HeroMessageDetail("ポータル3");
                break;
            case 4:
                leftButton.SetActive(true);
                rightButton.SetActive(false);
                portalCamera[3].Priority = 1;
                GameManager.instance.stageHierarchy = 30;
                UIManager.instance.HeroMessageDetail("ポータル4");
                break;
        }


    }

    public void PortalCameraPriorityReset()
    {
        foreach (CinemachineVirtualCamera camera in portalCamera)
        {
            camera.Priority = 0;
        }
    }

    //それぞれのダンジョンの階層に飛ぶ
    public void SelectButtonClick()
    {
        PortalFeedback?.PlayFeedbacks();

        switch (currentPortal)
        {
            case 1:
                if (levelClear[0]) LeavePortal();
                else UIManager.instance.HeroMessageDetail("未開放ポータル");
                break;
            case 2:
                if (levelClear[1]) LeavePortal();
                else UIManager.instance.HeroMessageDetail("未開放ポータル");
                break;
            case 3:
                if (levelClear[2]) LeavePortal();
                else UIManager.instance.HeroMessageDetail("未開放ポータル");
                break;
            case 4:
                if (levelClear[3]) LeavePortal();
                else UIManager.instance.HeroMessageDetail("未開放ポータル");
                break;
        }
    }

    public void GoPortal()
    {
        Sequence sequence = DOTween.Sequence();
        //フェードアウト
        LoadPanel.gameObject.SetActive(true);
        sequence.Append(LoadPanel.DOFade(1, 1.0f)); // 1秒かけて暗転

        // ショップ関連の処理をフェードアウト後に実行
        sequence.AppendCallback(() =>
        {
            GameManager.instance.PortalCameraChange();

            PortalEnviloment.SetActive(true);
            PortalPanel.SetActive(true);
            leftButton.SetActive(false);
            rightButton.SetActive(true);

            foreach (GameObject falseUI in falseUI)
            {
                falseUI.SetActive(false);
            }

            GateDeactive();
            GateActive();

            PortalUpdate();
        });

        // フェードイン
        sequence.Append(LoadPanel.DOFade(0, 1.0f)); // 1秒かけて明転

        sequence.AppendCallback(() =>
        {
            LoadPanel.gameObject.SetActive(false);
        });

        sequence.Play();

    }

    //ショップを離れる
    public void LeavePortal()
    {
        AudioManager.instance.PlaySE(AudioManager.SE.GoPortal);

        Sequence sequence = DOTween.Sequence();
        //フェードアウト

        LoadPanel.gameObject.SetActive(true);
        sequence.Append(LoadPanel.DOFade(1, 1.0f)); // 1秒かけて暗転


        // ショップ関連の処理をフェードアウト後に実行
        sequence.AppendCallback(() =>
        {
            GameManager.instance.DungeonCameraChange();

            PortalEnviloment.SetActive(false);
            PortalPanel.SetActive(false);

            foreach (GameObject falseUI in falseUI)
            {
                falseUI.SetActive(true);
            }
            UIManager.instance.HeroMessageDetail("ポータル移動完了");
        });

        // フェードイン

        sequence.Append(LoadPanel.DOFade(0, 1.0f)); // 1秒かけて明転
        sequence.AppendCallback(() =>
        {
            LoadPanel.gameObject.SetActive(false);
        });
        sequence.Play();

        //GameManager.instance.SpawnEnemies();
        GameManager.instance.SpawnPlayer();
        GameManager.instance.PortalMovement(GameManager.instance.stageHierarchy);

    }


}
