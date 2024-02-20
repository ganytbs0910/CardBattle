﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using TMPro;
using DG.Tweening;

public class ScreenRay : MonoBehaviour
{
    public TMP_Text debugCardEffectText;
    public DrawCardController drawCardController;
    [SerializeField] private GameObject targetMarker;
    [SerializeField] private GameObject cardListPanel;
    [SerializeField] private GameObject chooseCard;
    public GameObject bombPrefab;
    [SerializeField] private List<GameObject> targetObjects = new List<GameObject>();
    [SerializeField] private int cardID;
    [SerializeField] private float rayWidth = 1.5f;
    public float rayDistance = 100f;
    public bool cardMove = true;
    public bool baseColor = true;
    [SerializeField] private bool colorChangeIgnore = false;
    [SerializeField] private bool oneRayUpIgnore = false;
    [SerializeField] private bool rayTarget = false;
    private RaycastHit lastRaycastHit; // 最後のRayの衝突情報を保存
    CardEntity.TargetType targetType;
    public Weapon weapon;
    public Armor armor;
    public ParticleSystem particle;
    CardEntity.ParticlePosition particlePosition;

    Vector3 InstantPosition;

    //効果音用
    bool cardSelect = false;

    void OnDrawGizmos()
    {
        // 検出範囲を視覚化
        Gizmos.color = Color.red; // 色を赤に設定
        if (lastRaycastHit.collider != null) // レイが何かにヒットしていれば
        {
            Gizmos.DrawWireSphere(lastRaycastHit.point, rayWidth); // 最後にヒットしたポイントを中心に、指定した半径のワイヤーフレームの球を描画
        }
    }

    void Update()
    {
        if (Input.GetKey(KeyCode.Escape))
        {
            ToggleCheck();
        }

        if (!baseColor && colorChangeIgnore)
        {
            ResetTargetColors(); // すべてのターゲットの色をリセット
            baseColor = true;
        }

        if (Input.GetMouseButton(0) || Input.GetMouseButton(1)) // タップまたは長押しを検知
        {
            RayCastUI();   // UI要素に対するRaycast
        }

        if (Input.GetMouseButtonUp(0))
        {
            //効果音用
            cardSelect = false;

            if (oneRayUpIgnore)
            {
                oneRayUpIgnore = false;
                return;
            }
            if (cardID == 0)
            {
                return;
            }

            targetMarker.SetActive(false);
            Collider[] colliders = Physics.OverlapSphere(lastRaycastHit.point, rayWidth);
            foreach (Collider collider in colliders)
            {
                //もしPlayerタグを持っているオブジェクトに当たったら
                if (collider.gameObject.tag == "Player" && targetType == CardEntity.TargetType.Player)
                {

                    UIManager.instance.HeroMessageDetail("自身強化", debugCardEffectText.text);
                    drawCardController.cardIDList.Remove(cardID);
                    collider.gameObject.GetComponent<PlayerController>().GetCardEffect(cardID);

                    if (weapon != null) //武器カードだったら直接ここで装備させる
                    {
                        collider.gameObject.GetComponent<PlayerController>().EquipWeapon(weapon);
                        AudioManager.instance.PlaySE(AudioManager.SE.Equipment);
                    }

                    if (armor != null) //防具カードを装備
                    {
                        collider.gameObject.GetComponent<PlayerController>().EquipArmor(armor);
                        AudioManager.instance.PlaySE(AudioManager.SE.Equipment);
                    }

                    if (particle != null) //パーティクルを発生
                    {
                        PlayParticleAtPosition(collider);
                    }

                    Destroy(chooseCard);
                    cardID = 0;
                    UIManager.instance.TutorialAnimation(2);
                }

                else if (collider.gameObject.tag == "Enemy" && targetType == CardEntity.TargetType.Enemy)
                {
                    Debug.Log("Enemyに触れていてMouseUPしたよ！");
                    UIManager.instance.HeroMessageDetail("敵弱体化", debugCardEffectText.text);
                    drawCardController.cardIDList.Remove(cardID);
                    collider.gameObject.GetComponent<EnemyController>().GetCardEffect(cardID);
                    if (particle != null) //パーティクルを発生
                    {
                        PlayParticleAtPosition(collider);
                    }
                    Destroy(chooseCard);
                    cardID = 0;
                    UIManager.instance.TutorialAnimation(3);
                }
                else
                {
                    Debug.Log("その他に触れていてMouseUPしたよ！");
                    switch (cardID)
                    {
                        case 24:
                            //新しいコード(24,25,26に適応)
                            ThrowBomb(cardID, lastRaycastHit.point, 2500, new Vector3(1, 1, 1), 2f);
                            break;
                        case 25:
                            ThrowBomb(cardID, lastRaycastHit.point, 2500, new Vector3(2, 2, 2), 4f);
                            break;
                        case 26:
                            ThrowBomb(cardID, lastRaycastHit.point, 2500, new Vector3(3, 3, 3), 6f);
                            break;
                    }
                }
            }
            ResetTargetColors();
        }
        StartCoroutine(ToggleCheck());
    }

    void ThrowBomb(int num, Vector3 targetPos, int power, Vector3 size, float radius)
    {
        drawCardController.cardIDList.Remove(num);
        ThrowObject(bombPrefab, targetPos, power, size, radius);
        Destroy(chooseCard);
        cardID = 0;
    }


    public void PlayParticleAtPosition(Collider collider)
    {
        // instantPositionにデフォルト値を設定
        Vector3 instantPosition = Vector3.zero;

        // 生成位置を選択
        switch (particlePosition)
        {
            case CardEntity.ParticlePosition.Top:
                instantPosition = collider.bounds.center + new Vector3(0, collider.bounds.extents.y, 0);
                break;
            case CardEntity.ParticlePosition.Center:
                instantPosition = collider.bounds.center;
                break;
            case CardEntity.ParticlePosition.Bottom:
                instantPosition = collider.bounds.center - new Vector3(0, collider.bounds.extents.y, 0);
                break;
            default:
                Debug.LogError("Invalid particle position specified.");
                break;
        }

        // パーティクルシステムのインスタンスを生成
        ParticleSystem newParticle = Instantiate(particle, collider.transform);

        // パーティクルシステムの位置を設定
        newParticle.transform.localPosition = collider.transform.InverseTransformPoint(instantPosition);

        // パーティクルを再生
        newParticle.Play();

        // パーティクルの再生が終了したら自動的に破棄する
        Destroy(newParticle.gameObject, newParticle.main.duration);
    }

    void RayCastUI()
    {
        if (cardSelect) return;
        PointerEventData pointData = new PointerEventData(EventSystem.current);
        List<RaycastResult> results = new List<RaycastResult>();
        pointData.position = Input.mousePosition;
        EventSystem.current.RaycastAll(pointData, results);
        foreach (RaycastResult result in results)
        {
            if (result.gameObject.tag == "Card")
            {
                cardSelect = true;
                AudioManager.instance.PlaySE(AudioManager.SE.CardSelect);

                oneRayUpIgnore = true;
                targetMarker.SetActive(false);
                targetMarker.transform.position = result.gameObject.transform.position;
                chooseCard = result.gameObject;
                result.gameObject.GetComponent<CardMovement>().toggle.isOn = true;
                debugCardEffectText.text = result.gameObject.GetComponent<CardMovement>().name;
                return;
            }

            if (result.gameObject.layer == LayerMask.NameToLayer("UI"))
            {
                oneRayUpIgnore = true;
                targetMarker.SetActive(false);
                targetMarker.transform.position = result.gameObject.transform.position;
                return;
            }
        }

        Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
        RaycastHit hit;
        if (Physics.Raycast(ray, out hit, rayDistance))
        {
            lastRaycastHit = hit; // この行を確認または追加

            targetMarker.SetActive(true);
            targetMarker.transform.position = hit.point;
            Quaternion markerRotation = Quaternion.LookRotation(hit.normal);
            targetMarker.transform.rotation = Quaternion.Euler(0, markerRotation.eulerAngles.y, markerRotation.eulerAngles.z);
            baseColor = true;
            Collider[] colliders = Physics.OverlapSphere(lastRaycastHit.point, rayWidth);
            foreach (Collider collider in colliders)
            {
                //もしPlayerタグを持っているオブジェクトに当たったら
                if (collider.gameObject.tag == "Player" && cardID != 0 && targetType == CardEntity.TargetType.Player)
                {
                    // Colliderの中心地点（transform.position）からレイがヒットした地点（lastRaycastHit.point）までの距離を計算
                    float distance = Vector3.Distance(collider.transform.position, lastRaycastHit.point);

                    // 距離が1以上なら処理をスキップ（return）
                    if (distance >= 2f)
                    {
                        Debug.Log("距離は" + distance + "です");
                        return; // この場合、以降の処理は行われず、ループから抜けます
                    }

                    targetObjects.Add(collider.gameObject);
                    SetColor(Color.green, collider.gameObject);
                    baseColor = false;
                    colorChangeIgnore = true;
                }
                else if (collider.gameObject.tag == "Enemy" && cardID != 0 && targetType == CardEntity.TargetType.Enemy)
                {
                    targetObjects.Add(collider.gameObject);
                    SetColor(Color.red, collider.gameObject);
                    baseColor = false;
                    colorChangeIgnore = true;
                }
                else
                {
                    colorChangeIgnore = false;
                }
            }
            //rayの当たった最終地点を取得
            lastRaycastHit = hit;
        }
    }

    // すべてのターゲットオブジェクトの色をリセットするメソッド
    void ResetTargetColors()
    {
        foreach (GameObject target in targetObjects)
        {
            SetColor(Color.white, target);
        }
        targetObjects.Clear();
    }

    void SetColor(Color color, GameObject target)
    {
        //色を白に戻す
        Renderer[] renderers = target.GetComponentsInChildren<Renderer>();
        foreach (Renderer renderer in renderers)
        {
            renderer.material.color = color;
        }
    }

    IEnumerator ToggleCheck()
    {
        yield return null;
        //cardListPanelの子要素をすべて取得してToggleのIsOnのオブジェクトからCardIDを取得する
        for (int i = 0; i < cardListPanel.transform.childCount; i++)
        {
            if (cardListPanel.transform.GetChild(i).GetComponent<Toggle>().isOn)
            {
                chooseCard = cardListPanel.transform.GetChild(i).gameObject;
                cardID = cardListPanel.transform.GetChild(i).GetComponent<CardMovement>().cardID;
                targetType = cardListPanel.transform.GetChild(i).GetComponent<CardMovement>().targetType;
                debugCardEffectText.text = cardListPanel.transform.GetChild(i).GetComponent<CardMovement>().name;
                weapon = cardListPanel.transform.GetChild(i).gameObject.GetComponent<CardMovement>().weapon;
                armor = cardListPanel.transform.GetChild(i).gameObject.GetComponent<CardMovement>().armor;
                particle = cardListPanel.transform.GetChild(i).gameObject.GetComponent<CardMovement>().particle;
                particlePosition = cardListPanel.transform.GetChild(i).GetComponent<CardMovement>().particlePosition;
            }
        }
    }
    void ThrowObject(GameObject throwObject, Vector3 targetPos, int power, Vector3 size, float radius)
    {
        // 弾丸をメインカメラの位置に生成
        GameObject bomb = Instantiate(throwObject, Camera.main.transform.position, Quaternion.identity);

        // 弾丸のサイズを設定
        bomb.transform.localScale = size;

        BombController bombctl = bomb.GetComponent<BombController>();

        bombctl.BombRadius = radius;

        // メインカメラの位置からターゲットの位置への方向ベクトルを計算
        Vector3 direction = targetPos - Camera.main.transform.position;

        // 弾丸に力を加える（方向ベクトルを正規化し、力を乗算）
        bomb.GetComponent<Rigidbody>().AddForce(direction.normalized * power);

        AudioManager.instance.PlaySE(AudioManager.SE.ThrowObject);
    }
}