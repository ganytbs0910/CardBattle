using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AudioManager : MonoBehaviour
{
    public static AudioManager instance;

    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
            DontDestroyOnLoad(gameObject);
        }
        else
        {
            Destroy(gameObject);
        }

    }

    public AudioSource audioSourceBGM;
    public AudioSource audioSourceSE;
    public AudioSource audioSourceVoice;


    public AudioClip[] bgmList;
    public enum BGM
    {
        PortalWorld,
        Dungeon,
        NormalBattle,
        BossBattle,
        GoblinShop,
        GameClearTheme,
        GameOverTheme
    }

    public AudioClip[] seList;
    public enum SE
    { 
        ButtonClick,//0
        ArrowClick,//1
        BackButton,//2
        StartButton,//3
        ItemGet,//4
        GoPortal,//5
        BuyCard,//6
        YouLose,//7
        YouWin,//8
        WinTheBoss,//9
        GoblinLanding,//10
        DropCoin,//11
        BreakBox,//12
        BreakGlass,//13
        CardSelect,//14
        BombExprosion,//15
        ThrowObject,//16
        Equipment,//17
        PlayerIncrease,//18
        Regeneration,//19
        PowerUp,//20
        PowerDown,//21
    }

    public AudioClip[] voiceList;
    public enum Voice
    { 
        Welcome,//ゴブリン
        Thanks,//ゴブリン
        ByeBye,//ゴブリン
        Win,//Player
        Lose,//Player
    }

    //BGMを鳴らす
    public void PlayBGM(BGM bgm)
    {
        int index = (int)bgm;
        audioSourceBGM.clip = bgmList[index];
        audioSourceBGM.Play();
    }

    public void StopBGM()
    {
        audioSourceBGM.Stop();
    }

    //効果音を鳴らす
    public void PlaySE(SE se)
    {
        int index = (int)se;
        AudioClip clip = seList[index];
        audioSourceSE.PlayOneShot(clip);
    }

    //セリフをならす
    public void PlayVoice(Voice voice)
    {
        int index = (int)voice;
        AudioClip clip = voiceList[index];
        audioSourceVoice.PlayOneShot(clip);
    }

    //効果音の長さを取得する
    public float GetSELength(SE se)
    {
        int index = (int)se;
        AudioClip clip = seList[index];
        return clip.length;
    }
}
