using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class GoblinShop : MonoBehaviour
{
    public static GoblinShop instance;

    Animator animator;
    public GameObject Goblin;
    public GameObject ShopEnviloment;

    public Camera ShopCamera;
    public Camera BattleCamera;

    public Transform InitPoint;
    public Transform SpawnPoint;
    public CanvasGroup LoadPanel;

    public GameObject[] FalsePanel;
    public GameObject ShopPanel;

    public GameObject ShopButton;
    public GameObject DungeonButton;

    private void Awake()
    {
        instance = this;
    }

    // Start is called before the first frame update
    void Start()
    {
        ShopButton.SetActive(true);
        DungeonButton.SetActive(false);

        animator = Goblin.GetComponent<Animator>();
        ShopEnviloment.SetActive(false);
        ShopCamera.gameObject.SetActive(false); 
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    //ショップに向かう
    public void GoShop()
    {
        Sequence sequence = DOTween.Sequence();
        LoadPanel.gameObject.SetActive(true);

        //フェードアウト
        sequence.Append(LoadPanel.DOFade(1, 1.0f)); // 1秒かけて暗転

        // ショップ関連の処理をフェードアウト後に実行
        sequence.AppendCallback(() =>
        {
            ShopPanel.SetActive(true);
            ShopCamera.gameObject.SetActive(true);
            BattleCamera.gameObject.SetActive(false);
            ShopEnviloment.SetActive(true);
            animator.SetTrigger("Spawn");
            // DoTweenを使用してゴブリンを移動させる
            Goblin.transform.DOMove(SpawnPoint.position, 1.0f);

            ShopButton.SetActive(false);
            DungeonButton.SetActive(true);

            foreach (GameObject panel in FalsePanel)
            {
                panel.SetActive(false);
            }
        });

        // フェードイン
        sequence.Append(LoadPanel.DOFade(0, 1.0f)); // 1秒かけて明転

        sequence.AppendCallback(() =>
        {
            LoadPanel.gameObject.SetActive(false);
            UIManager.instance.HeroMessageDetail("ショップ");
        });
        sequence.Play();
    }

    //ショップを離れる
    public void LeaveShop()
    {
        animator.SetTrigger("Bye");

        Sequence sequence = DOTween.Sequence();
        //フェードアウト
        LoadPanel.gameObject.SetActive(true);
        sequence.Append(LoadPanel.DOFade(1, 1.0f)); // 1秒かけて暗転

        // ショップ関連の処理をフェードアウト後に実行
        sequence.AppendCallback(() =>
        {
            ShopCamera.gameObject.SetActive(false);
            BattleCamera.gameObject.SetActive(true);
            ShopEnviloment.SetActive(false);

            // DoTweenを使用してゴブリンを移動させる
            Goblin.transform.DOMove(InitPoint.position, 1.0f);

            ShopButton.SetActive(true);
            DungeonButton.SetActive(false);

            foreach (GameObject panel in FalsePanel)
            {
                panel.SetActive(true);
                UIManager.instance.HeroMessageDetail("バトルの準備");
                ShopPanel.SetActive(false);
            }

        });

        // フェードイン
        sequence.Append(LoadPanel.DOFade(0, 1.0f)); // 1秒かけて明転

        sequence.AppendCallback(() =>
        {
            LoadPanel.gameObject.SetActive(false);
        });

        sequence.Play();
    }

    //カードを購入する
    public void SelectCard()
    {
        animator.SetTrigger("Thanks");
    }
}
