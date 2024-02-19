using System;
using System.Text;
using PlayFab;
using PlayFab.ClientModels;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System.Collections.Generic;
using UnityEngine.Purchasing;


public class PlayFabLogin : MonoBehaviour, IStoreListener
{
    private bool _shouldCreateAccount;//アカウントを作成するか    
    private string _customID;//ログイン時に使うID
    private string _playFabId;//PlayFabのID
    //public Text signInWithAppleText;//Text型の変数「まだ連携できていません」のテキスト変更用

    //課金実装で追加
    private List<CatalogItem> Catalog;//CatalogItem型のListを変数名Catalogで宣言　この中にPlayFabから呼び出したカタログのデータが入ります。

    private static IStoreController storeController;
    private IExtensionProvider extensionProvider;

    //public Text consumableText;//消費型の購入判定用
    //public Text nonConsumableText;//非消費型の購入判定用
    //public Text subscriptionText;//月額課金(定期購入課金)の購入判定用
    //public Text ProcessText;//処理の終了判定用
    private string setedPurchasedProductId;//購入に使用されたアイテムID取得用
    private IAppleExtensions m_AppleExtensions;//定期購入課金確認用


    //=================================================================================
    //ログイン処理分岐
    //=================================================================================
    public void Start()
    {
        //アップルIDを登録していたらアップルIDでログイン
        if (PlayerPrefs.HasKey("APPLE_TOKEN") == true)
        {
            Debug.Log("アップルIDでログイン");
            AppleLogin();//アップルIDでログイン
        }
        else
        {
            Debug.Log("カスタムIDでログイン");
            CustomIDLogin();//カスタムIDでログイン
        }
    }


    //===========================================================================
    //カスタムIDでログイン
    //===========================================================================
    private void CustomIDLogin()
    {
        //LoadCustomID()にて取得したIDを変数に代入
        _customID = LoadCustomID();

        //第一引数に使用する変数に情報を代入　　補足：既にアカウントが作成されており、CreateAccountがtrueになっていてもエラーにはならない
        var request = new LoginWithCustomIDRequest { CustomId = _customID, CreateAccount = _shouldCreateAccount };

        //第一引数は"必要な情報"　第二引数は"成功時に実行する関数"　第三引数は"失敗時に実行する関数"
        PlayFabClientAPI.LoginWithCustomID(request, OnLoginSuccess, OnLoginFailure);
    }

    //ログイン成功    
    private void OnLoginSuccess(LoginResult result)
    {
        //アカウントを作成しようとしたのに、IDが既に使われていて、出来なかった場合
        if (_shouldCreateAccount == true && result.NewlyCreated == false)
        {
            Debug.LogWarning("CustomId :" + _customID + "は既に使われています。");
            CustomIDLogin();//ログインしなおし
            return;
        }

        //アカウント新規作成できたらIDを保存
        if (result.NewlyCreated == true)
        {
            SaveCustomID();//IDの保存
            Debug.Log("新規作成成功");
        }

        _playFabId = result.PlayFabId;//PlayFabiDの取得

        Debug.Log("カスタムIDでのログイン成功!!");
        CommonLoginSuccess();//ログイン成功後の共通処理
    }

    //ログイン失敗
    private void OnLoginFailure(PlayFabError error)
    {
        Debug.LogError("カスタムIDでのログインに失敗\n" + error.GenerateErrorReport());
        CommonLoginError();//ログインエラー後の共通処理
    }

    //カスタムIDの取得
    //=================================================================================
    //IDを保存する時のKEY
    private static readonly string CUSTOM_ID_SAVE_KEY = "CUSTOM_ID_SAVE_KEY";

    //IDを取得
    private string LoadCustomID()
    {
        //IDをセーブデータから取得
        string id = PlayerPrefs.GetString(CUSTOM_ID_SAVE_KEY);

        //idの中身がnullもしくは空の文字列("")の場合は_shouldCreateAccountはtrueになる。
        _shouldCreateAccount = string.IsNullOrEmpty(id);

        //idの中身がない場合、文字列を新規作成
        if (_shouldCreateAccount == true)
        {
            return GenerateCustomID();//文字列を新規作成
        }
        else
        {
            return id;//セーブされた文字列を返す
        }
    }
    //IDの保存
    private void SaveCustomID()
    {
        PlayerPrefs.SetString(CUSTOM_ID_SAVE_KEY, _customID);
    }


    //カスタムIDの生成
    //=================================================================================
    //IDを生成する
    //ユニークな文字列をGuidを使用し生成
    //https://docs.microsoft.com/ja-jp/dotnet/api/system.guid.tostring?redirectedfrom=MSDN&view=netframework-4.8#System_Guid_ToString_System_String_
    private string GenerateCustomID()
    {
        //Guidの構造体生成
        Guid guid = Guid.NewGuid();

        return guid.ToString("N");//書式指定子はNを指定　詳細は「Guid.ToString メソッド」のドキュメント参照
    }



    //===========================================================================================
    //アップルIDでログイン
    //
    //Sign in with Appleのボタンが押された後、
    //AppleSignIn.csのスクリプトにて、アップルID認証したタイミングでAppleIDのトークンをセーブしている
    //そのトークンを使ってログインする
    //===========================================================================================
    private void AppleLogin()
    {
        //AppleIDの情報呼び出し
        string AppleToken = PlayerPrefs.GetString("APPLE_TOKEN");

        //第一引数に使用する変数に情報を代入
        var request = new LoginWithAppleRequest { IdentityToken = AppleToken };

        //第一引数は"必要な情報"　第二引数は"成功時に実行する関数"　第三引数は"失敗時に実行する関数"
        PlayFabClientAPI.LoginWithApple(request, AppleLoginSuccess, AppleLoginFailure);
    }
    private void AppleLoginSuccess(LoginResult result)
    {
        Debug.Log("アップルログイン成功" + result.PlayFabId);
        _playFabId = result.PlayFabId;//PlayFabiDの取得

        //signInWithAppleText.text = "アップルIDでログイン中";//"まだ連携できていません"のテキストを変更
        CommonLoginSuccess();//ログイン成功後の共通処理
    }
    private void AppleLoginFailure(PlayFabError error)
    {
        Debug.Log("アップルログインエラー" + error.GenerateErrorReport());
        CommonLoginError();//ログインエラー後の共通処理
    }

    //=====================================================================================================
    //アップルIDとリンク  AppleSignIn.csのスクリプトで実行する。
    //
    //２台目の端末へAppleIDを登録した時にLinkAppleが呼び出されてしまうが、
    //２台目の端末のPlayFabIDへAppleIDは紐付けされないので問題無い。
    //=====================================================================================================      
    public void LinkApple(byte[] identityToken)
    {
        //第一引数に使用する変数に情報を代入
        var request = new LinkAppleRequest { IdentityToken = Encoding.UTF8.GetString(identityToken) };

        //第一引数に情報を詰め込んで実行する。第二引数は成功時の処理　第三引数は失敗時の処理
        PlayFabClientAPI.LinkApple(request, LinkAppleSuccess, LinkAppleFailure);
    }
    public void LinkAppleSuccess(EmptyResult result)
    {
        //アップルIDとリンク成功
        //signInWithAppleText.text = "アップルIDとリンク成功";//"まだ連携できていません"のテキストを変更
    }
    public void LinkAppleFailure(PlayFabError error)
    {
        //アップルIDとリンク失敗
        Debug.Log("アップルIDとリンク失敗" + error.GenerateErrorReport());
    }




    //===========================================================================
    //ログイン成功後の共通処理
    //===========================================================================
    private void CommonLoginSuccess()
    {
        //ProcessText.text = "ログイン完了";
        //PlayFabのカタログからアイテム一覧を取得
        GetPfCatalog();
    }

    //===========================================================================
    //ログイン失敗後の共通処理
    //===========================================================================
    private void CommonLoginError()
    {
        //ここにログイン失敗時の処理を追加
        //ProcessText.text = "ログイン失敗";
    }


    //==========================================================================
    //PlayFabのカタログからアイテム一覧を取得
    //==========================================================================
    private void GetPfCatalog()
    {
        //第一引数に使用する変数に情報を代入
        var request = new GetCatalogItemsRequest();
        //第一引数に情報を詰め込んで実行する。第二引数は成功時の処理　第三引数は失敗時の処理
        PlayFabClientAPI.GetCatalogItems(request, GetCatalogSuccess, GetCatalogFailure);
    }
    private void GetCatalogSuccess(GetCatalogItemsResult result)
    {
        //ProcessText.text = "カタログデータ取得完了";
        Catalog = result.Catalog;//取得したカタログのデータをListへ入れる

        /*旧 確認方法
        Debug.Log("Catalog[0]=" + Catalog[0].ItemId);//カタログのデータからItemIdを確認できます。
        Debug.Log("Catalog[1]=" + Catalog[1].ItemId);//カタログのデータからItemIdを確認できます。
        Debug.Log("Catalog[2]=" + Catalog[2].ItemId);//カタログのデータからItemIdを確認できます。
        */

        //カタログのデータからItemIdを一括確認
        for (int i = 0; i < Catalog.Count; i++)
        {
            Debug.Log("Catalog[" + i + "] = " + Catalog[i].ItemId);
        }

        InitializePurchasing();//UnityIAPを初期化
    }

    private void GetCatalogFailure(PlayFabError error)
    {
        Debug.Log("カタログの取得失敗" + error.GenerateErrorReport());
        //ProcessText.text = "カタログデータ取得失敗";
    }



    //=================================================================================================
    //UnityIAPの初期化     参考 https://docs.unity3d.com/ja/2019.3/Manual/UnityIAPInitialization.html
    //=================================================================================================
    private void InitializePurchasing()
    {
        if (IsInitialized) return;//初期化が終了していたらこの関数はこの時点で終了します。

        var builder = ConfigurationBuilder.Instance(StandardPurchasingModule.Instance());

        //商品の追加　種類ごと（消費型、非消費型、定期購入課金）に追加
        //消費型の商品一括追加        
        foreach (var item in Catalog.FindAll(x => x.ItemClass == "Consumable"))
            builder.AddProduct(item.ItemId, ProductType.Consumable);//builderに商品を追加

        //非消費型の商品一括追加
        foreach (var item in Catalog.FindAll(x => x.ItemClass == "NonConsumable"))
        {
            builder.AddProduct(item.ItemId, ProductType.NonConsumable);//builderに商品を追加

            //Androidの非消費型は一度購入すると再購入できなくなります。
            //もう一度テストする場合は、↓こちらを有効にしてください。
            //builder.AddProduct(item.ItemId, ProductType.Consumable);//Android非消費型再テスト用 
        }


        //定期購入課金の商品一括追加
        foreach (var item in Catalog.FindAll(x => x.ItemClass == "Subscription"))
            builder.AddProduct(item.ItemId, ProductType.Subscription);


        //初期化処理開始
        //→成功すると関数 OnInitialized が呼ばれます。
        //→失敗すると関数 OnInitializeFailed が呼ばれます。
        UnityPurchasing.Initialize(this, builder);
    }



    //UnityIAPの初期化に成功した時に呼ばれる関数(初期化が成功した時点で購入処理を行えるようになります。)
    public void OnInitialized(IStoreController controller, IExtensionProvider extensions)
    {
        //ProcessText.text = "UnityIAP初期化完了\nPlayFabID:" + _playFabId;//初期化成功表示とPlayFabIDの表示
        storeController = controller;
        extensionProvider = extensions;

        //↓======================定期購入課金の処理をレシートの情報から確認して実行======================↓
        //参考 https://docs.unity3d.com/ja/2019.4/Manual/UnityIAPSubscriptionProducts.html
        //参考 https://gist.github.com/AlexSikilinda/20b745bfa21b7f6b9393bc51f7459eaf
        //参考 https://forum.unity.com/threads/check-if-subscription-has-ended.571627/        
        m_AppleExtensions = extensions.GetExtension<IAppleExtensions>();
        m_AppleExtensions.RegisterPurchaseDeferredListener(OnDeferred);
        Dictionary<string, string> dict = m_AppleExtensions.GetIntroductoryPriceDictionary();


        foreach (Product item in controller.products.all)
        {
            if (item.receipt != null)//レシートを所持していれば処理
            {
                if (item.definition.type == ProductType.Subscription)//レシートが定期購入のものであれば処理
                {
                    string intro_json = (dict == null || !dict.ContainsKey(item.definition.storeSpecificId)) ? null : dict[item.definition.storeSpecificId];
                    SubscriptionManager p = new SubscriptionManager(item, intro_json);
                    SubscriptionInfo info = p.getSubscriptionInfo();//SubscriptionInfo型の変数infoにレシートの情報を代入


                    //ProcessText.text = "info.getProductId()=" + info.getProductId() + "\ninfo.isSubscribed()=" + info.isSubscribed();

                    //定期購入が有効かを判定
                    //(定期購入のレシートを所持している時点で定期購入課金は有効と判断して良いようですが、一応info.isSubscribed()でも有効かを判定しています。)
                    //※補足:定期購入が解除されていても、購入された月の間は有効(Result.Trueを返します。)
                    if (info.isSubscribed() == Result.True)//定期購入課金が有効かを判定
                    {
                        setedPurchasedProductId = info.getProductId();//レシートのアイテムIDを取得
                        ChangeText();//課金機能の処理を実行
                    }
                }
                else
                {
                    Debug.Log("the product is not a subscription product");
                }
            }
            else
            {
                Debug.Log("the product should have a valid receipt");
            }
        }
        //↑======================定期購入課金の処理をレシートの情報から確認して実行======================↑



        //*****ここに以降の処理があれば追加*****




    }
    //UnityIAPの初期化に失敗した時に呼ばれる関数
    public void OnInitializeFailed(InitializationFailureReason error)
    {
        Debug.Log("UnityIAP 初期化失敗:" + error);
        //ProcessText.text = "UnityIAP初期化失敗" + error;
    }

    //UnityIAPの初期化状態を管理します。(初期化が完了していたらtrueを返します。)
    public bool IsInitialized
    {
        get => storeController != null && extensionProvider != null && Catalog != null;
    }



    //==========================================================================
    //課金処理の実行 
    //この関数の引数に任意のアイテムIDを入れて実行 (課金ボタンに配置割り当てて使用)
    //==========================================================================
    public void BuyProductID(string productId)
    {
        //初期化が終了していなかったら例外処理
        if (!IsInitialized) throw new Exception("IAP Service is not initialized!");

        //購入成功の処理用にproductIdを変数へ代入
        setedPurchasedProductId = productId;

        //InitiatePurchase で各プラットフォームの購入画面を呼び出します。
        //GooglePlayConsole と AppStoreConnect　で同じアイテムIDを設定している前提でのコードです。
        //→購入成功　関数ProcessPurchase が呼ばれます。
        //→購入失敗　関数OnPurchaseFailed が呼ばれます。
        storeController.InitiatePurchase(productId);
    }


    //==========================================================================
    //課金購入の結果を受けとる
    //https://docs.unity3d.com/ja/current/Manual/UnityIAPProcessingPurchases.html
    //==========================================================================
    public PurchaseProcessingResult ProcessPurchase(PurchaseEventArgs e)
    {
        if (!IsInitialized)//初期化が終了していなかったら
        {
            //ProcessText.text = "UnityIAP初期化が終了していません";
            return PurchaseProcessingResult.Complete;//購入処理を即座に終了            
        }

        // プロダクトが不明の時
        if (e.purchasedProduct == null)
        {
            //ProcessText.text = "プロダクトが不明です";
            Debug.LogWarning("Attempted to process purchase with unknown product. Ignoring");
            return PurchaseProcessingResult.Complete;//購入処理を即座に終了
        }

        // レシートがない時
        if (string.IsNullOrEmpty(e.purchasedProduct.receipt))
        {
            //ProcessText.text = "レシートがありません。";
            Debug.LogWarning("Attempted to process purchase with no receipt: ignoring");
            return PurchaseProcessingResult.Complete;//購入処理を即座に終了
        }

        // 購入したプロダクトIDに応じて処理を分岐
        if (String.Equals(e.purchasedProduct.definition.id, "hisyouhi_jpy400b", StringComparison.Ordinal))
        {
            RemoveAds();//広告を非表示にする

            // 必要に応じて他の処理を追加
            // 例えば、ゲーム内通貨を追加する、広告を非表示にする、特定のコンテンツをアンロックするなど

            // 購入処理が完了したものとする
            return PurchaseProcessingResult.Complete;
        }

        Debug.Log("Processing transaction: " + e.purchasedProduct.transactionID);



        //------------ここからレシート検証---------------

#if UNITY_IOS
        //iOSのレシート検証＆アイテム付与
        ValidateIosPurchase(e.purchasedProduct);
              

#elif UNITY_ANDROID
        //Androidのレシート検証＆アイテム付与
        ValidateAndroidPurchase(e.purchasedProduct);

#endif

        //アプリが途中で停止された時や、レシート検証がうまくいかなかった場合、アプリ開始時にレシート検証を処理します。
        //参考 https://docs.unity3d.com/ja/current/Manual/UnityIAPProcessingPurchases.html        
        return PurchaseProcessingResult.Pending;
    }



    //==========================================================================
    //iOSのレシート検証＆アイテム付与
    //==========================================================================
#if UNITY_IOS
    private void ValidateIosPurchase(Product purchasedProduct)
    {
        //ProcessText.text = "レシート検証開始";

        var wrapper = (Dictionary<string, object>)MiniJson.JsonDecode(purchasedProduct.receipt);
        var store = (string)wrapper["Store"];
        var payload = (string)wrapper["Payload"]; // For Apple this will be the base64 encoded ASN.1 receipt       

        //iOSのレシート検証 Validate IOS Receipt() で行う
        //https://docs.microsoft.com/en-us/rest/api/playfab/client/platform-specific-methods/validateiosreceipt?view=playfab-rest
        PlayFabClientAPI.ValidateIOSReceipt(new ValidateIOSReceiptRequest
        {
            //PlayFabClientAPI.ValidateIOSReceipt()に必要な情報の入力
            CurrencyCode = purchasedProduct.metadata.isoCurrencyCode,//通貨コード
            PurchasePrice = (int)(purchasedProduct.metadata.localizedPrice * 100),//支払われた表示通貨の金額  *100しているのは価格を RM(1ドル 100RM)に変換している
            ReceiptData = payload//レシートデータ

        }, result => {
            //ProcessText.text = "レシート検証成功";
            Debug.Log("レシート検証成功");

            //purchasedProductから購入に使用されたアイテムIDを取得
            //アプリ内の購入ボタンが押されたときにはこの行は不要。
            //しかし、月額課金(定期購入課金)更新処理のレシート更新 や 途中でアプリが落ちた場合は
            //アプリが開いたタイミングでレシート検証が実行されるので、
            //その場合に何のアイテムIDかを把握する必要がある。
            setedPurchasedProductId = purchasedProduct.definition.id;     

            //******ここに課金対象のアイテム付与などの処理を追加*****
            ChangeText();//購入後の処理


            //購入処理が完了したものとする
            storeController.ConfirmPendingPurchase(purchasedProduct);          
        },
           error => {
               //ProcessText.text = "レシート検証失敗" + error.GenerateErrorReport();               
               Debug.Log("レシート検証失敗: " + error.GenerateErrorReport());
               Debug.Log("エラーメッセージ: " + error.ErrorMessage);


               //使用済みレシートが残っていた場合は完了扱いにする
               if (error.ErrorMessage == "Receipt already used")
               {
                   //ProcessText.text = "使用済みレシートを確認→完了扱い";
                   storeController.ConfirmPendingPurchase(purchasedProduct);
                   RemoveAds();
               }
           }
        );
    }
#endif


    //==========================================================================
    //Androidのレシート検証＆アイテム付与
    //==========================================================================
#if UNITY_ANDROID
    private void ValidateAndroidPurchase(Product purchasedProduct)
    {
        //ProcessText.text = "レシート検証開始";

        var googleReceipt = GooglePurchase.FromJson(purchasedProduct.receipt);

        //Androidの検証 Validate Google Play Purchase() で行う
        //https://docs.microsoft.com/en-us/rest/api/playfab/client/platform-specific-methods/validategoogleplaypurchase?view=playfab-rest
        PlayFabClientAPI.ValidateGooglePlayPurchase(new ValidateGooglePlayPurchaseRequest()
        {
            //PlayFabClientAPI.ValidateGooglePlayPurchase()に必要な情報の入力
            CurrencyCode = purchasedProduct.metadata.isoCurrencyCode,//通貨コード
            PurchasePrice = (uint)(purchasedProduct.metadata.localizedPrice * 100),//支払われた表示通貨の金額  *100しているのは価格を RM(1ドル 100RM)に変換している
            ReceiptJson = googleReceipt.PayloadData.json,//レシートデータ
            Signature = googleReceipt.PayloadData.signature//GooglePlay署名
        }, result =>
        {
            //ProcessText.text = "レシート検証成功";
            Debug.Log("レシート検証成功");

            //purchasedProductから購入に使用されたアイテムIDを取得
            //アプリ内の購入ボタンが押されたときにはこの行は不要。
            //しかし、月額課金(定期購入課金)更新処理のレシート更新 や 途中でアプリが落ちた場合は
            //アプリが開いたタイミングでレシート検証が実行されるので、
            //その場合に何のアイテムIDかを把握する必要がある。
            setedPurchasedProductId = purchasedProduct.definition.id;                        

            //******ここに課金対象のアイテム付与などの処理を追加*****
            ChangeText();//購入後の処理

            //購入処理が完了したものとする
            storeController.ConfirmPendingPurchase(purchasedProduct);
        },
           error =>
           {               
               //ProcessText.text = "レシート検証失敗" + error.GenerateErrorReport();               
               Debug.Log("レシート検証失敗: " + error.GenerateErrorReport());
               Debug.Log("エラーメッセージ: " + error.ErrorMessage);

               //使用済みレシートが残っていた場合は完了扱いにする
               if (error.ErrorMessage == "Receipt already used")
               {
                   storeController.ConfirmPendingPurchase(purchasedProduct);
               }
           }
        );
    }
#endif



    //課金購入が失敗した時に呼ばれる関数
    public void OnPurchaseFailed(Product product, PurchaseFailureReason failureReason)
    {
        Debug.Log(string.Format("OnPurchaseFailed: FAIL. Product: '{0}', PurchaseFailureReason: {1}", product.definition.storeSpecificId, failureReason));
    }


    //課金成功時の処理
    private void ChangeText()
    {
        //アイテムIDによって処理を変更
        switch (setedPurchasedProductId)
        {
            case "hisyouhi_jpy400b":
                break;

            case "hisyouhi_jpy250a":
                //nonConsumableText.text = "購入されています。";
                break;

            case "getugaku_jpy300a":
                //subscriptionText.text = "購入されています。";
                break;
        }
    }

    /// <summary>
    /// iOS定期購入課金確認用
    /// iOS Specific.
    /// This is called as part of Apple's 'Ask to buy' functionality,
    /// when a purchase is requested by a minor and referred to a parent
    /// for approval.
    ///
    /// When the purchase is approved or rejected, the normal purchase events
    /// will fire.
    /// </summary>
    /// <param name="item">Item.</param>
    private void OnDeferred(Product item)
    {
        Debug.Log("Purchase deferred: " + item.definition.id);
    }
    public void RemoveAds()
    {
        Debug.Log("広告削除が呼ばれたよ！！");
        PlayerPrefs.SetInt("RemoveAds", 1);//広告を削除
        UIManager.instance.adsButton.SetActive(false);//広告ボタンを非表示にする
        //AdMobBanner.instance.BannerDestroy();
    }
}

//↓=============================================================================================================================↓
// Androidのレシート検証に必要なクラス
// https://docs.microsoft.com/ja-jp/gaming/playfab/features/commerce/economy/getting-started-with-unity-iap-android
// The following classes are used to deserialize JSON results provided by IAP Service
// Please, note that JSON fields are case-sensitive and should remain fields to support Unity Deserialization via JsonUtilities
public class JsonData
{
    // JSON Fields, ! Case-sensitive
    public string orderId;
    public string packageName;
    public string productId;
    public long purchaseTime;
    public int purchaseState;
    public string purchaseToken;
}
public class PayloadData
{
    public JsonData JsonData;

    // JSON Fields, ! Case-sensitive
    public string signature;
    public string json;

    public static PayloadData FromJson(string json)
    {
        //追加2022.10.6
#if UNITY_EDITOR  //Unity上でのみ動作
        json = "{\"damy\":\"damyData\"}";//string型の変数jsonにダミーのjsonデータを割り当て
#endif            //Unity上のみの動作終了

        //上記コードを追加しないとUnity上では下記の行でエラーが出ます　
        //原因：引数jsonがThisIsFakeReceiptDataというjsonデータではないただの文字列のため
        //　　　Purchasing Packageバージョン4.5.0で確認（動画で使用しているバージョンは4.0.3）
        //対策：上記の Unity上でのみダミーの{"damy":"damyData"}というjsonデータを作ることでエラーを回避
        var payload = JsonUtility.FromJson<PayloadData>(json);

        payload.JsonData = JsonUtility.FromJson<JsonData>(payload.json);
        return payload;
    }
}
public class GooglePurchase
{
    public PayloadData PayloadData;

    // JSON Fields, ! Case-sensitive
    public string Store;
    public string TransactionID;
    public string Payload;

    public static GooglePurchase FromJson(string json)
    {
        var purchase = JsonUtility.FromJson<GooglePurchase>(json);
        purchase.PayloadData = PayloadData.FromJson(purchase.Payload);
        return purchase;
    }
}
//↑=============================================================================================================================↑


