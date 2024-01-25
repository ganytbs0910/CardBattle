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

    private void Start()
    {
        //ポータルは一番最初とゲームオーバーになった時に選択可能にする
        //UIManager
        GoPortal();
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
        for (int i = 0; i < levelClear.Length; i++)
        {
            if (levelClear[i])
            {
                portalGate[i].Play();
            }
        }
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

        switch (currentPortal)
        {
            case 1:
                leftButton.SetActive(false);
                rightButton.SetActive(true);
                portalCamera[0].Priority = 1;
                break;
            case 2:
                leftButton.SetActive(true);
                rightButton.SetActive(true);
                portalCamera[1].Priority = 1;
                break;
            case 3:
                leftButton.SetActive(true);
                rightButton.SetActive(true);
                portalCamera[2].Priority = 1;
                break;
            case 4:
                leftButton.SetActive(true);
                rightButton.SetActive(false);
                portalCamera[3].Priority = 1;
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
                if (levelClear[0])
                {
                    LeavePortal();
                }
                else
                { UIManager.instance.HeroMessageDetail("未開放ポータル"); }
                break;
            case 2:
                if (levelClear[1])
                {
                    LeavePortal();
                }
                else
                { UIManager.instance.HeroMessageDetail("未開放ポータル"); }
                break;
            case 3:
                if (levelClear[2])
                {
                    LeavePortal();
                }
                else
                { UIManager.instance.HeroMessageDetail("未開放ポータル"); }
                break;
            case 4:
                if (levelClear[3])
                {
                    LeavePortal();
                }
                else
                { UIManager.instance.HeroMessageDetail("未開放ポータル"); }
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
        });

        // フェードイン
        sequence.Append(LoadPanel.DOFade(0, 1.0f)); // 1秒かけて明転

        sequence.AppendCallback(() =>
        {
            LoadPanel.gameObject.SetActive(false);
            UIManager.instance.HeroMessageDetail("ポータル");
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
        });

        // フェードイン
        sequence.Append(LoadPanel.DOFade(0, 1.0f)); // 1秒かけて明転

        sequence.AppendCallback(() =>
        {
            LoadPanel.gameObject.SetActive(false);
        });

        sequence.Play();
        UIManager.instance.HeroMessageDetail("ポータル移動完了");
        if (PlayerPrefs.HasKey("Tutorial")) return;
        UIManager.instance.TutorialAnimation(1);
    }


}
