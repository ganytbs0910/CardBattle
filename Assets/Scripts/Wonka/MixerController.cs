using UnityEngine;
using UnityEngine.Audio;
using UnityEngine.UI;

public class MixerController : MonoBehaviour
{
    public AudioMixer audioMixer; // AudioMixerへの参照
    public Slider masterSlider, bgmSlider, seSlider, voiceSlider; // 各スライダーへの参照

    void Start()
    {
        // ゲーム開始時に各スライダーを初期化し、AudioMixerと連動させる
        InitializeSlider(masterSlider, "Master",0.5f); // MasterVolumeパラメータに関連付ける
        InitializeSlider(bgmSlider, "BGM",1); // BGMVolumeパラメータに関連付ける
        InitializeSlider(seSlider, "SE",1); // SEVolumeパラメータに関連付ける
        InitializeSlider(voiceSlider, "Voice",1); // VoiceVolumeパラメータに関連付ける
    }

    void InitializeSlider(Slider slider, string audioMixerParameter,float defaultValue)
    {
        // スライダーの初期値を設定
        slider.value = defaultValue;
        // スライダーの値が変更されたときのリスナーを設定
        slider.onValueChanged.AddListener(volume => SetVolume(audioMixerParameter, volume));
        // AudioMixerに初期値を適用
        SetVolume(audioMixerParameter, defaultValue);
        //float value;
        //// AudioMixerから現在のボリューム値を取得
        //audioMixer.GetFloat(audioMixerParameter, out value);
        //// スライダーの値をAudioMixerのボリューム値に合わせる
        //slider.value = Mathf.Pow(10, value / 20);
        //// スライダーの値が変更されたときのリスナーを設定
        //slider.onValueChanged.AddListener(volume => SetVolume(audioMixerParameter, volume));
    }

    void SetVolume(string parameterName, float sliderValue)
    {
        // スライダーの値をデシベルに変換
        float volume = sliderValue > 0 ? Mathf.Log10(sliderValue) * 20 : -80;
        // 変換した値をAudioMixerのパラメータに設定
        audioMixer.SetFloat(parameterName, volume);
    }
}