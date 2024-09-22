using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Cinemachine;

public class CameraController : MonoBehaviour
{
    public static CameraController instance;

    CinemachineBrain cinemachineBrain;

    private void Awake()
    {
        instance = this;
    }

    // Start is called before the first frame update
    void Start()
    {
         cinemachineBrain = GetComponent<CinemachineBrain>();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void HardOutChange()
    {
        cinemachineBrain.m_DefaultBlend.m_Style = CinemachineBlendDefinition.Style.HardOut;
        cinemachineBrain.m_DefaultBlend.m_Time = 0.5f; // ここでブレンドにかかる時間を設定できます
    }

    public void CutInChange()
    {
        cinemachineBrain.m_DefaultBlend.m_Style = CinemachineBlendDefinition.Style.Cut;
        cinemachineBrain.m_DefaultBlend.m_Time = 0f; // ここでブレンドにかかる時間を設定できます
    }
}
