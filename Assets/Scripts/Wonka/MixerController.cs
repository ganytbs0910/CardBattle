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
        InitializeSlider(masterSlider, "Master", PlayerPrefs.GetFloat("Master")); // MasterVolumeパラメータに関連付ける
        InitializeSlider(bgmSlider, "BGM", PlayerPrefs.GetFloat("BGM")); // BGMVolumeパラメータに関連付ける
        InitializeSlider(seSlider, "SE", PlayerPrefs.GetFloat("SE")); // SEVolumeパラメータに関連付ける
        InitializeSlider(voiceSlider, "Voice", PlayerPrefs.GetFloat("Voice")); // VoiceVolumeパラメータに関連付ける
    }

    void InitializeSlider(Slider slider, string audioMixerParameter, float defaultValue)
    {
        // スライダーの初期値を設定
        slider.value = defaultValue;
        // スライダーの値が変更されたときのリスナーを設定
        slider.onValueChanged.AddListener(volume =>
    {
        SetVolume(audioMixerParameter, volume);
        // 新しいボリューム値をPlayerPrefsに保存
        PlayerPrefs.SetFloat(audioMixerParameter, volume);
    });
        // AudioMixerに初期値を適用
        SetVolume(audioMixerParameter, defaultValue);
    }

    void SetVolume(string parameterName, float sliderValue)
    {
        // スライダーの値をデシベルに変換
        float volume = sliderValue > 0 ? Mathf.Log10(sliderValue) * 20 : -80;
        // 変換した値をAudioMixerのパラメータに設定
        audioMixer.SetFloat(parameterName, volume);
    }
}