using UnityEngine;
using TMPro;

public class CoinManager : MonoBehaviour
{
    public static CoinManager instance;

    public int coin;
    [SerializeField] private TextMeshProUGUI coinText;

    void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }
        else if (instance != this)
        {
            Destroy(gameObject);
        }

        UpdateCoinText();
    }

    public void AddCoins(int Amount)
    {
        if (GameManager.instance != null)
        {
            int amountToAdd = Amount * GameManager.instance.stageHierarchy;
            coin += amountToAdd;
        }
        else
        {
            coin += Amount;
        }

        UpdateCoinText();
    }

    private void UpdateCoinText()
    {
        if (coinText != null)
        {
            coinText.text = "Coin: " + coin.ToString();
        }
    }
}