using PlayFab;//追加
using PlayFab.ClientModels;//追加
using UnityEngine;

public class PlayFabLogin : MonoBehaviour
{
    public void Start()
    {
        //リクエスト生成
        var request = new LoginWithCustomIDRequest { CustomId = "GettingStartedGuide", CreateAccount = true };

        //ログイン処理実行
        PlayFabClientAPI.LoginWithCustomID(request, OnLoginSuccess, OnLoginFailure);
    }

    //ログイン成功時に呼び出される関数
    private void OnLoginSuccess(LoginResult result)
    {
        Debug.Log("ログイン成功！！");
    }

    //ログイン失敗時に呼び出される関数
    private void OnLoginFailure(PlayFabError error)
    {        
        Debug.LogError("ログインに失敗しました。");
        Debug.LogError(error.GenerateErrorReport());//エラー内容
    }
}