using UnityEngine;
using UnityEngine.Audio;
using UnityEngine.UI;

public class MixerController : MonoBehaviour
{
    public AudioMixer audioMixer; // AudioMixerへの参照
    public Slider masterSlider, bgmSlider, seSlider, voiceSlider; // 各スライダーへの参照

    void Start()
    {
        // ゲーム開始時に各スライダーを初期化し、AudioMixerと連動させ、PlayerPrefsから値を取得して設定する
        InitializeSlider(masterSlider, "MasterVolume", 0.5f); // MasterVolumeパラメータに関連付ける
        InitializeSlider(bgmSlider, "BGMVolume", 1); // BGMVolumeパラメータに関連付ける
        InitializeSlider(seSlider, "SEVolume", 1); // SEVolumeパラメータに関連付ける
        InitializeSlider(voiceSlider, "VoiceVolume", 1); // VoiceVolumeパラメータに関連付ける
    }

    void InitializeSlider(Slider slider, string audioMixerParameter, float defaultValue)
    {
        // PlayerPrefsからボリューム値を読み込み、存在しない場合はdefaultValueを使用
        float savedValue = PlayerPrefs.GetFloat(audioMixerParameter, defaultValue);
        // スライダーの値を設定
        slider.value = savedValue;
        // スライダーの値が変更されたときのリスナーを設定
        slider.onValueChanged.AddListener(volume =>
        {
            Debug.Log(audioMixerParameter + " : " + volume);
            SetVolume(audioMixerParameter, volume);
            // 新しいボリューム値をPlayerPrefsに保存
            PlayerPrefs.SetFloat(audioMixerParameter, volume);
        });
        // AudioMixerに初期値を適用
        SetVolume(audioMixerParameter, savedValue);
    }

    void SetVolume(string parameterName, float sliderValue)
    {
        // スライダーの値をデシベルに変換
        float volume = sliderValue > 0 ? Mathf.Log10(sliderValue) * 20 : -80;
        // 変換した値をAudioMixerのパラメータに設定
        audioMixer.SetFloat(parameterName, volume);
    }
}
