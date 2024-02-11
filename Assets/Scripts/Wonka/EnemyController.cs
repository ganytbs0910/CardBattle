using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.AI;
using DG.Tweening;
using UniRx;
using TMPro;

//Distance 7以下⇒Runに移行
//Ditstance 2以下⇒Attack移行
public class EnemyController : MonoBehaviour
{
    [Header("Enemyのステータス")]
    public int id;
    public int maxHp = 100;
    public int attack;
    public float attackInterval;
    public int defense;
    public float moveSpeed;
    public int agility;
    public int coin;
    public int dropRate = 100;
    public Weapon weapon = null;


    //通常変数
    float lastAttackTime = 0f; //最後に攻撃した時間
    int hp;
    public bool IsDead;
    public bool isAttacking = false;//攻撃中かどうかの判定
    public bool CantMove = false;//移動できない状態の判定

    [Header("状態異常")]
    bool poison;
    bool stan;
    bool sleep;
    bool charm;

    public Transform playerTarget; // 敵の位置
    public NavMeshAgent agent; // NavMesh Agent
    private Animator animator;

    public Collider weaponCollider;//武器の当たり判定
    public EnemyUIManager enemyUIManager;

    private Vector3 initialPosition;

    [SerializeField] GameObject coinEffectPrefab;

    public TextMeshProUGUI missText;

    public ParticleSystem attackEffect = null;
    public ParticleSystem getHitEffect = null;
    public GameObject effectCollider = null;

    void Start()
    {
        StopAttackEffect();
        hp = maxHp;

        agent = GetComponent<NavMeshAgent>(); // NavMesh Agentの取得
        moveSpeed = agent.speed;

        animator = GetComponent<Animator>();// Animatorコンポーネントを取得
        DisableColliderWeapon();//武器の当たり判定無効化

        enemyUIManager.Init(this);

        initialPosition = transform.position;


        //ドロップ率が低下するコレクションの影響
        dropRate -= 5;
    }

    void Update()
    {
        //死亡中はリターン
        if (IsDead)
        {
            //print("エネミーが死亡しました");
            return;
        }

        // 現在のターゲットが死んでいれば新しいターゲットを探す
        if (playerTarget != null)
        {
            PlayerController targetEnemy = playerTarget.GetComponent<PlayerController>();
            if (targetEnemy != null && targetEnemy.IsDead)
            {
                //print("プレイヤーを倒したので次のターゲットを探します");
                FindClosestPlayer(transform);
            }
        }

        transform.LookAt(playerTarget);//常に敵のほうを向く

        if (GameManager.instance.battleState == true || Input.GetKeyDown(KeyCode.Space))
        {
            CheckAbnormalCondition(); //状態異常の効果を発動させる
            float distance = Vector3.Distance(transform.position, playerTarget.position);
            agent.isStopped = false;

            if (distance <= agent.stoppingDistance)
            {
                //print("攻撃範囲内");
                if (CanAttack())　//攻撃可能
                {
                    //print("攻撃");
                    Attack();
                }
                else//攻撃までのインターバル中
                {
                    //print("防御");
                    Defend();
                }
                agent.isStopped = true;
            }
            else
            {
                agent.speed = moveSpeed;
                //print("範囲外");
                agent.SetDestination(playerTarget.position); // 敵に向かって移動開始
                Move(); // 移動アニメ
            }
        }
    }

    /// <summary>
    /// 現在の位置から最も近くにいるプレイヤーを探す
    /// </summary>
    /// <param name="enemyTransform">現在位置を登録</param>
    public void FindClosestPlayer(Transform enemyTransform)
    {
        PlayerController closestPlayer = null;
        float closestDistanceSqr = Mathf.Infinity;

        foreach (var player in GameManager.instance.players)
        {
            if (!player.IsDead)//死んでいなければ
            {
                float distanceSqr = (player.transform.position - enemyTransform.position).sqrMagnitude;
                if (distanceSqr < closestDistanceSqr)
                {
                    closestDistanceSqr = distanceSqr;
                    closestPlayer = player;　//一番近いプレイヤーを登録
                }
            }
        }
        if (closestPlayer != null)
        {
            //ターゲットを設定
            UpdateNavMeshTarget(closestPlayer.transform);
        }
        else
        {
            UpdateNavMeshTarget(null); // ターゲットが見つからない場合は null を設定
        }
    }


    //位置とアニメを初期状態にリセットする
    public void ResetToInitialPosition()
    {
        //初期位置に移動させる
        transform.position = initialPosition;

        // プレイヤーグループの平均位置に敵を向かせる
        Vector3 averagePlayerPosition = GetAveragePositionOfPlayers();
        LookTowards(averagePlayerPosition);
    }

    // NavMeshAgentのターゲットを更新するメソッド
    public void UpdateNavMeshTarget(Transform newTarget)
    {
        if (newTarget == null)
        {
            return;
        }
        playerTarget = newTarget;
        if (agent != null) //ヌルリファ対策
        {
            agent.isStopped = true; // 移動を停止
            agent.SetDestination(playerTarget.position);
        }
        //print(gameObject.name + "の新しいターゲットを更新しました");
    }

    bool CanAttack() //インターバルの設定
    {
        return Time.time - lastAttackTime >= attackInterval;
    }

    public void OnTriggerEnter(Collider other)
    {
        //print(other.name);
        if (other.CompareTag("Weapon_Player"))
        {
            PlayerWeapon playerWeapon = other.GetComponent<PlayerWeapon>();
            if (playerWeapon != null)
            {
                //ダメージを与えるものにぶつかったら
                //print(other.name + "が" + gameObject.name + "に" + playerWeapon.SumDamage() + "ダメージを与えた");

                // 回避チェック
                if (Random.Range(0, 100) < agility)
                {
                    Debug.Log("攻撃を回避しました！");
                    ShowMissText();
                    return; // 攻撃を回避
                }

                Damage(playerWeapon.SumDamage()); //ダメージを与える
            }
        }

        if (other.CompareTag("Projectile_Player"))
        {
            // 回避チェック
            if (Random.Range(0, 100) < agility)
            {
                Debug.Log("攻撃を回避しました！");
                ShowMissText();
                return; // 攻撃を回避
            }

            Projectile projectile = other.GetComponent<Projectile>();
            if (projectile != null)
            {
                //Damage(playerWeapon.SumDamage()); //ダメージを与える
                Debug.Log("プレイヤーの弾が当たりました");
                Damage(projectile.damage);
            }
        }

        if (other.CompareTag("Bomb"))
        {
            BombController bomb = other.GetComponent<BombController>();
            if (bomb != null)
            {
                //ダメージを与えるものにぶつかったら
                //print(other.name + "が" + gameObject.name + "に" + bomb.Attack + "のダメージを与えた");

                Damage(bomb.Attack);//ダメージを与える
            }
        }
    }

    //回避したときにミスを表記する
    public void ShowMissText()
    {
        //missText.transform.position = Camera.main.WorldToScreenPoint(transform.position + Vector3.up * 2); // 敵の頭上に配置
        missText.gameObject.SetActive(true);
        missText.alpha = 1; // テキストの透明度を最大に設定

        // フェードアウトのアニメーションを設定
        missText.DOFade(0, 2f).OnComplete(() => missText.gameObject.SetActive(false));
    }


    //攻撃
    public void Attack()
    {
        if (isAttacking)
        {
            // すでに攻撃中の場合、何もしない
            return;
        }

        // 現在の時刻と最後の攻撃時刻の差が攻撃インターバル以上かどうかを確認
        if (Time.time - lastAttackTime < attackInterval)
        {
            // インターバル時間が経過していない場合、攻撃しない
            return;
        }

        isAttacking = true;

        lastAttackTime = Time.time; // 攻撃時刻を更新

        animator.SetTrigger("Attack");
        animator.SetInteger("AttackType", Random.Range(1, 3));

        //int attackNumber = Random.Range(1, 3); // 1から2の間のランダムな数を生成

        //// 生成された数に応じて異なる攻撃アニメーションをトリガー
        //switch (attackNumber)
        //{
        //    case 1:
        //        animator.SetTrigger("Attack01");
        //        break;
        //    case 2:
        //        animator.SetTrigger("Attack02");
        //        break;
        //}
        //print("Attackアニメーション実行");
    }



    /// <summary>
    /// ダメージを与える関数
    /// </summary>
    /// <param name="damage">各武器のインスペクター参照</param>
    void Damage(int damage)
    {
        int sumDamage;
        //damegeが0.9~1.2倍になる（不要なら外す）
        damage = (int)(damage * Random.Range(0.9f, 1.2f));
        sumDamage = damage - defense;
        if (sumDamage <= 0)
        {
            sumDamage = 1;
        }
        hp -= sumDamage;
        if (hp <= 0)
        {
            hp = 0;
            Die();
            //print("死亡アニメに移行します");
        }
        else
        {
            GetHit();//ノックバック
        }

        enemyUIManager.UpdateHP(hp);//HPSliderの更新

        //print(gameObject.name + "の残りHP= : " + hp);
    }


    //防御
    public void Defend()
    {
        animator.SetTrigger("Defend");
    }

    // 各アニメーション状態をトリガーするメソッド
    public void Move()
    {
        if (CantMove == false)
        {
            animator.SetTrigger("Move");
            //print("EnemyMoveアニメーション実行");
        }
        else
        {
            //print("EnemyAttackBehaviorにより移動不可能");
        }
    }

    public void Idle()
    {
        animator.SetTrigger("Idle");
    }


    //ノックバック
    public void GetHit()
    {
        PlayGetHitEffect();
        animator.SetTrigger("GetHit");
    }

    //死亡
    public void Die()
    {
        animator.SetTrigger("Die");
        IsDead = true;
        //このゲームオブジェクトについている当たり判定が消える
        GetComponent<Collider>().enabled = false;

        //剣の当たり判定も消す
        DisableColliderWeapon();

        //Playerを追いかけないようにする
        agent.isStopped = true;

        if (coinEffectPrefab != null)
        {
            // コインエフェクトのインスタンス化
            Instantiate(coinEffectPrefab, transform.position, Quaternion.identity);
        }

        //コインを入手
        UIManager.instance.UpdateCoinText(coin + PlayerPrefs.GetInt("DropCoin"));

        // GameManager のプレイヤーリストから自身を除外
        GameManager.instance.RemoveEnemyFromList(this);

        //// ディレイののち、オブジェクトを1秒かけて縮小
        transform.DOScale(Vector3.zero, 1f).SetDelay(1.2f).OnComplete(() => Destroy(gameObject));

        //ゲームの勝敗をチェックする
        GameManager.instance.CheckBattleStatus();

        //コレクションがドロップするかどうかの判定
        int dropNumber = Random.Range(1, 101);
        if (dropNumber <= dropRate)
        {
            //コレクションをドロップする
            PlayerPrefs.SetInt($"Collection{id}", 1);
            ItemDrop();
            UIManager.instance.CollectionCardUpdate();
        }
    }

    /// <summary>
    /// これで動いてくれ〜〜要チェック
    /// </summary>
    void ItemDrop()
    {
        Vector3 worldPosition = this.gameObject.transform.position;
        //メインカメラから見た位置にする
        Vector3 screenPosition = Camera.main.WorldToScreenPoint(worldPosition);
        //dropItemPrefabをCollectionEnetityのid番目のiconを取得kする
        Sprite dropItemPrefab = Resources.Load<CollectionEntity>($"CollectionEntity/Collection {id}").icon;
        UIManager.instance.ItemDropEffect(dropItemPrefab, screenPosition, dropItemPrefab.name);

        AudioManager.instance.PlaySE(AudioManager.SE.DropCoin);
    }

    // 勝利アニメーションをトリガーするメソッド
    public void Victory()
    {
        if (!IsDead && GameManager.instance.battleState == true)
        {
            //print("勝利した");
            GameManager.instance.battleState = false;

            // 2秒後に実行される処理
            DOVirtual.DelayedCall(2.0f, () =>
            {
                animator.SetTrigger("Victory");
                transform.LookAt(Camera.main.transform);

            });
        }
    }

    //アニメイベントでも使用中
    public void DisableColliderWeapon()
    {
        weaponCollider.enabled = false;
        //print(gameObject.name + "の" + weaponCollider.gameObject.name + "を無効化します");
    }

    //アニメイベントで使用中
    public void EnableColliderWeapon()
    {
        weaponCollider.enabled = true;
        //print(gameObject.name + "の" + weaponCollider.gameObject.name + "を有効化します");
    }

    public void GetCardEffect(int effectNumber, int? targetNumber = null)
    {
        if (!targetNumber.HasValue)
        {
            targetNumber = 1;
        }
        switch (effectNumber)
        {
            //プレイヤーがターゲット
            case 1: break;
            case 2: break;
            case 3: break;
            case 4: break;
            case 5: break;
            case 6: break;
            case 7: break;
            //敵がターゲット 敵の体力-10％
            case 8: DecreaseHealth(0.1f); break;
            //敵がターゲット 敵の体力-20％
            case 9: DecreaseHealth(0.2f); break;
            //敵がターゲット 敵の体力-30％
            case 10: DecreaseHealth(0.3f); break;
            //プレイヤーがターゲット
            case 11: break;
            case 12: break;
            case 13: break;
            case 14: break;
            case 15: break;
            case 16: break;
            //敵を毒状態にする
            case 17: Poison(); break;
            //敵をマヒ状態にする
            case 18: Stan(); break;
            //敵を眠り状態にする
            case 19: Sleep(); break;
            //敵をフリーズ状態にする
            case 20: Charm(); break;
            //プレイヤーがターゲット
            case 21: AttackLower(3); break;
            case 22: DefenceLower(3); break;
            case 23: AvoidanceLower(5); break;
        }
    }

    /// <summary>
    /// カードのエフェクト一覧
    /// </summary>
    void DecreaseHealth(float value)
    {
        //hpをvalue%分減らす
        hp -= (int)(hp * value);
        enemyUIManager.UpdateHP(hp);//HPSliderの更新
        AudioManager.instance.PlaySE(AudioManager.SE.PowerDown);
    }

    //
    void LookTowards(Vector3 position)
    {
        Vector3 direction = position - transform.position;
        direction.y = 0; // Y軸の回転は無視
        transform.rotation = Quaternion.LookRotation(direction);
    }

    //プレイヤーたちの平均の位置を取得
    Vector3 GetAveragePositionOfPlayers()
    {
        var players = FindObjectsOfType<PlayerController>();
        Vector3 sum = Vector3.zero;
        foreach (var player in players)
        {
            sum += player.transform.position;
        }
        return players.Length > 0 ? sum / players.Length : Vector3.zero;
    }

    void CheckAbnormalCondition()
    {
        if (poison)
        {
            //毒状態の処理
            //毎秒1ダメージ
            // Observable.Intervalを使って毎秒処理を実行
            Observable.Interval(System.TimeSpan.FromSeconds(1))
                .Subscribe(_ =>
                {
                    hp -= 1;
                }).AddTo(this); // オブジェクト破棄時に購読を自動解除するためにAddToを使用
        }
        if (stan)
        {
            //マヒ状態の処理
            //5秒間攻撃しなくなる
            lastAttackTime = 20;
            Observable.Timer(System.TimeSpan.FromSeconds(5))
            .Subscribe(_ =>
            {
                lastAttackTime = 0;
            }).AddTo(this); // オブジェクト破棄時に購読を自動解除
        }
        if (sleep)
        {
            //眠り状態の処理
            //攻撃を喰らうまでなにもしない

        }
        if (charm)
        {
            //フリーズ状態の処理
            //移動速度が半分になる
            moveSpeed /= 2;

        }
    }



    public void Poison()
    {
        if (!poison)
        {
            poison = true;
            StartCoroutine(PoisonEffect(10f, 1f));
            AudioManager.instance.PlaySE(AudioManager.SE.PowerDown);
        }
    }

    IEnumerator PoisonEffect(float duration, float damageInterval)
    {
        float timer = 0;
        while (timer < duration)
        {
            hp -= maxHp / 20;
            enemyUIManager.UpdateHP(hp);
            if (hp <= 0)
            {
                Die();
                yield break;
            }
            yield return new WaitForSeconds(damageInterval);
            timer += damageInterval;
        }
        poison = false;
    }
    public void Stan()
    {
        if (!stan)
        {
            stan = true;
            StartCoroutine(StanEffect(5f));
            AudioManager.instance.PlaySE(AudioManager.SE.PowerDown);
        }
    }

    IEnumerator StanEffect(float duration)
    {
        CantMove = true;
        isAttacking = false;
        yield return new WaitForSeconds(duration);
        CantMove = false;
        stan = false;
    }

    public void Sleep()
    {
        if (!sleep)
        {
            sleep = true;
            StartCoroutine(SleepEffect());
            AudioManager.instance.PlaySE(AudioManager.SE.PowerDown);
        }
    }

    IEnumerator SleepEffect()
    {
        CantMove = true;
        isAttacking = false;
        // Wait until the enemy takes damage to wake up
        while (sleep)
        {
            yield return null;
        }
    }

    public void Charm()
    {
        if (!charm)
        {
            charm = true;
            StartCoroutine(CharmEffect(10f));
            AudioManager.instance.PlaySE(AudioManager.SE.PowerDown);
        }
    }

    IEnumerator CharmEffect(float duration)
    {
        GameObject[] enemies = GameObject.FindGameObjectsWithTag("Enemy");
        Transform newTarget = null;

        if (enemies.Length > 0)
        {
            // Optionally, you can add logic here to choose a specific enemy
            newTarget = enemies[Random.Range(0, enemies.Length)].transform;
        }

        if (newTarget != null)
        {
            Transform originalTarget = playerTarget;
            playerTarget = newTarget;
            yield return new WaitForSeconds(duration);
            playerTarget = originalTarget;
        }
        charm = false;
    }


    public void PlayAttackEffect()
    {
        if (attackEffect != null)
        {
            effectCollider.SetActive(true);
            attackEffect.Play();
        }
    }

    public void PlayGetHitEffect()
    {
        if (getHitEffect != null)
        {
            ParticleSystem getHitEffectClone = Instantiate(getHitEffect, new Vector3(transform.position.x, transform.position.y + 0.5f, transform.position.z), Quaternion.identity);
            //getHitEffectCloneのサイズを半分に
            getHitEffectClone.transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
            getHitEffectClone.Play();
        }
    }

    public void StopAttackEffect()
    {
        if (attackEffect != null)
        {
            effectCollider.SetActive(false);
            attackEffect.Stop();
        }
    }

    public void AttackLower(int value)
    {
        //攻撃力を下げる
        attack -= value;
    }
    public void DefenceLower(int value)
    {
        //防御力を下げる
        defense -= value;
    }

    public void AvoidanceLower(int value)
    {
        //回避率を下げる
        agility -= value;
    }
}