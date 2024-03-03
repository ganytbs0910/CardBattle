using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using GoogleMobileAds.Api;
using GoogleMobileAds;

public class AdmobInterstitial : MonoBehaviour
{
    public static AdmobInterstitial instance;
    // これらの広告ユニットは、常にテスト広告を配信するように設定されています。
#if UNITY_ANDROID
  private string _adUnitId = "ca-app-pub-7957458721094755/6598555525";
#elif UNITY_IPHONE
  private string _adUnitId = "ca-app-pub-4317478239934902/4203881967";
#else
    private string _adUnitId = "unused";
#endif

    private InterstitialAd interstitialAd;

    /// <summary>
    /// Loads the interstitial ad.
    /// </summary>
    /// 
    void Awake()
    {
        instance = this;
    }

    public void Start()
    {
        if (PlayerPrefs.HasKey("RemoveAds")) return;
        // Google Mobile Ads SDK を初期化します。
        MobileAds.Initialize((InitializationStatus initStatus) =>
        {
            // このコールバックは、MobileAds SDK が初期化されると呼び出されます。
        });
        LoadInterstitialAd();
        //Debug.Log("広告をロード");
    }

    public void LoadInterstitialAd()
    {
        if (PlayerPrefs.HasKey("RemoveAds")) return;
        // 既にロードされている広告があれば破棄します。
        if (interstitialAd != null)
        {
            interstitialAd.Destroy();
            interstitialAd = null;
        }

        //Debug.Log("インタースティシャル広告を読み込んでいます。");

        // 広告を読み込むために使用するリクエストを作成します。
        var adRequest = new AdRequest();
        adRequest.Keywords.Add("unity-admob-sample");

        // 広告を読み込むリクエストを送信します。
        InterstitialAd.Load(_adUnitId, adRequest,
            (InterstitialAd ad, LoadAdError error) =>
            {
                // エラーが null でない場合、ロード リクエストは失敗しました。
                if (error != null || ad == null)
                {
                    //Debug.LogError("インタースティシャル広告が広告を読み込めませんでした " +"with error : " + error);
                    return;
                }

                //Debug.Log("レスポンスを伴うインタースティシャル広告が読み込まれる : "+ ad.GetResponseInfo());

                interstitialAd = ad;

                RegisterEventHandlers(interstitialAd);
                //Debug.Log("イベントハンドラーの登録");
                RegisterReloadHandler(interstitialAd);
                //Debug.Log("ロードハンドラーの登録");

            });
    }

    /// <summary>
    /// Shows the interstitial ad.
    /// </summary>
    public void ShowAd()
    {
        if (PlayerPrefs.HasKey("RemoveAds")) return;
        if (interstitialAd != null && interstitialAd.CanShowAd())
        {
            //Debug.Log("インタースティシャル広告を表示しています。");
            interstitialAd.Show();
        }
        else
        {
            //Debug.LogError("インタースティシャル広告はまだ準備ができていません。");
        }
    }

    //イベントハンドラーの登録
    private void RegisterEventHandlers(InterstitialAd ad)
    {
        // 広告が収益を上げたと推定される場合に発生します。
        ad.OnAdPaid += (AdValue adValue) =>
        {
            //Debug.Log(String.Format("Interstitial ad paid {0} {1}.",adValue.Value,adValue.CurrencyCode));
        };
        // 広告のインプレッションが記録されるときに発生します。
        ad.OnAdImpressionRecorded += () =>
        {
            //Debug.Log("インタースティシャル広告がインプレッションを記録しました。");
        };
        // 広告のクリックが記録されたときに発生します。
        ad.OnAdClicked += () =>
        {
            //Debug.Log("インタースティシャル広告がクリックされました。");
        };
        // 広告が全画面コンテンツを開いたときに発生します。
        ad.OnAdFullScreenContentOpened += () =>
        {
            //Debug.Log("インタースティシャル広告の全画面コンテンツが開きました。");
        };
        // 広告が全画面コンテンツを閉じたときに発生します。
        ad.OnAdFullScreenContentClosed += () =>
        {
            //Debug.Log("インタースティシャル広告の全画面コンテンツが閉じられました。");
        };
        // 広告が全画面コンテンツを開けなかった場合に発生します。
        ad.OnAdFullScreenContentFailed += (AdError error) =>
        {
            //Debug.LogError("インタースティシャル広告が全画面コンテンツを開けませんでした " +"with error : " + error);
        };
    }
    private void RegisterReloadHandler(InterstitialAd ad)
    {
        // 広告が全画面コンテンツを閉じたときに発生します。
        ad.OnAdFullScreenContentClosed += () =>
    {
        //Debug.Log("インタースティシャル広告の全画面コンテンツが閉じられました。");

        // できるだけ早く別の広告を表示できるよう、広告をリロードしてください。
        LoadInterstitialAd();
    };
        // 広告が全画面コンテンツを開けなかった場合に発生します。
        ad.OnAdFullScreenContentFailed += (AdError error) =>
        {
            //Debug.LogError("インタースティシャル広告が全画面コンテンツを開けませんでした " + "with error : " + error);

            // できるだけ早く別の広告を表示できるよう、広告をリロードしてください。
            LoadInterstitialAd();
        };
    }
}