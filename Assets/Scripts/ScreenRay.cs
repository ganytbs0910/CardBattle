using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using TMPro;
using DG.Tweening;
using Cysharp.Threading.Tasks;
using System.Threading;
using System.Linq;

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
    private RaycastHit lastRaycastHit;
    CardEntity.TargetType targetType;
    public Weapon weapon;
    public Armor armor;
    public ParticleSystem particle;
    CardEntity.ParticlePosition particlePosition;

    Vector3 InstantPosition;

    bool cardSelect = false;

    void OnDrawGizmos()
    {
        Gizmos.color = Color.red;
        if (lastRaycastHit.collider != null)
        {
            Gizmos.DrawWireSphere(lastRaycastHit.point, rayWidth);
        }
    }

    void Update()
    {
        if (Input.GetKey(KeyCode.Escape))
        {
            ToggleCheck().Forget();
        }

        if (!baseColor && colorChangeIgnore)
        {
            ResetTargetColors();
            baseColor = true;
        }

        if (Input.GetMouseButton(0) || Input.GetMouseButton(1))
        {
            RayCastUI();
        }

        if (Input.GetMouseButtonUp(0))
        {
            HandleMouseUp().Forget();
        }
    }

    async UniTaskVoid HandleMouseUp()
    {
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
        int playerCount = colliders.Count(c => c.gameObject.CompareTag("Player"));

        foreach (Collider collider in colliders)
        {
            if (collider.CompareTag("Player") && targetType == CardEntity.TargetType.Player)
            {
                await ApplyPlayerEffect(collider, playerCount);
            }
            else if (collider.CompareTag("Enemy") && targetType == CardEntity.TargetType.Enemy)
            {
                await ApplyEnemyEffect(collider);
            }
            else
            {
                HandleOtherEffect();
            }
        }
        ResetTargetColors();
    }

    async UniTask ApplyPlayerEffect(Collider collider, int playerCount)
    {
        Destroy(chooseCard);
        UIManager.instance.HeroMessageDetail("自身強化", debugCardEffectText.text);
        drawCardController.cardIDList.Remove(cardID);
        collider.gameObject.GetComponent<PlayerController>().GetCardEffect(cardID, playerCount);

        if (weapon != null)
        {
            collider.gameObject.GetComponent<PlayerController>().EquipWeapon(weapon);
            AudioManager.instance.PlaySE(AudioManager.SE.Equipment);
        }

        if (armor != null)
        {
            collider.gameObject.GetComponent<PlayerController>().EquipArmor(armor);
            AudioManager.instance.PlaySE(AudioManager.SE.Equipment);
        }

        if (particle != null)
        {
            PlayParticleAtPosition(collider);
        }
        cardID = 0;
        await UIManager.instance.TutorialAnimation(2);
    }

    async UniTask ApplyEnemyEffect(Collider collider)
    {
        Debug.Log("Enemyに触れていてMouseUPしたよ！");
        Destroy(chooseCard);
        UIManager.instance.HeroMessageDetail("敵弱体化", debugCardEffectText.text);
        drawCardController.cardIDList.Remove(cardID);
        collider.gameObject.GetComponent<EnemyController>().GetCardEffect(cardID);
        if (particle != null)
        {
            PlayParticleAtPosition(collider);
        }
        cardID = 0;
        await UIManager.instance.TutorialAnimation(3);
    }

    void HandleOtherEffect()
    {
        Debug.Log("その他に触れていてMouseUPしたよ！");
        switch (cardID)
        {
            case 24:
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

    void ThrowBomb(int num, Vector3 targetPos, int power, Vector3 size, float radius)
    {
        drawCardController.cardIDList.Remove(num);
        ThrowObject(bombPrefab, targetPos, power, size, radius);
        Destroy(chooseCard);
        cardID = 0;
    }

    public void PlayParticleAtPosition(Collider collider)
    {
        Vector3 instantPosition = Vector3.zero;

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

        ParticleSystem newParticle = Instantiate(particle, collider.transform);
        newParticle.transform.localPosition = collider.transform.InverseTransformPoint(instantPosition);
        newParticle.Play();
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
            if (result.gameObject.CompareTag("Card"))
            {
                cardSelect = true;
                AudioManager.instance.PlaySE(AudioManager.SE.CardSelect);

                oneRayUpIgnore = true;
                targetMarker.SetActive(false);
                targetMarker.transform.position = result.gameObject.transform.position;
                chooseCard = result.gameObject;
                result.gameObject.GetComponent<CardMovement>().toggle.isOn = true;
                debugCardEffectText.text = PlayerPrefs.GetString("Language") == "Japanese"
                    ? result.gameObject.GetComponent<CardMovement>().nameJP
                    : result.gameObject.GetComponent<CardMovement>().nameEN;
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
            lastRaycastHit = hit;

            targetMarker.SetActive(true);
            targetMarker.transform.position = hit.point;
            Quaternion markerRotation = Quaternion.LookRotation(hit.normal);
            targetMarker.transform.rotation = Quaternion.Euler(0, markerRotation.eulerAngles.y, markerRotation.eulerAngles.z);
            baseColor = true;
            Collider[] colliders = Physics.OverlapSphere(lastRaycastHit.point, rayWidth);
            foreach (Collider collider in colliders)
            {
                if (collider.CompareTag("Player") && cardID != 0 && targetType == CardEntity.TargetType.Player)
                {
                    float distance = Vector3.Distance(collider.transform.position, lastRaycastHit.point);
                    if (distance >= 2f)
                    {
                        return;
                    }

                    targetObjects.Add(collider.gameObject);
                    SetColor(Color.green, collider.gameObject);
                    baseColor = false;
                    colorChangeIgnore = true;
                }
                else if (collider.CompareTag("Enemy") && cardID != 0 && targetType == CardEntity.TargetType.Enemy)
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
            lastRaycastHit = hit;
        }
    }

    void ResetTargetColors()
    {
        foreach (GameObject target in targetObjects)
        {
            if (target.name == "ShadowPlayer") continue;
            SetColor(Color.white, target);
        }
        targetObjects.Clear();
    }

    void SetColor(Color color, GameObject target)
    {
        if (target.name == "ShadowPlayer") return;
        Renderer[] renderers = target.GetComponentsInChildren<Renderer>();
        foreach (Renderer renderer in renderers)
        {
            renderer.material.color = color;
        }
    }

    async UniTaskVoid ToggleCheck()
    {
        await UniTask.Yield();
        for (int i = 0; i < cardListPanel.transform.childCount; i++)
        {
            var childToggle = cardListPanel.transform.GetChild(i).GetComponent<Toggle>();
            if (childToggle.isOn)
            {
                var cardMovement = childToggle.GetComponent<CardMovement>();
                chooseCard = childToggle.gameObject;
                cardID = cardMovement.cardID;
                targetType = cardMovement.targetType;
                debugCardEffectText.text = PlayerPrefs.GetString("Language") == "Japanese" ? cardMovement.nameJP : cardMovement.nameEN;
                weapon = cardMovement.weapon;
                armor = cardMovement.armor;
                particle = cardMovement.particle;
                particlePosition = cardMovement.particlePosition;
            }
        }
    }

    void ThrowObject(GameObject throwObject, Vector3 targetPos, int power, Vector3 size, float radius)
    {
        GameObject bomb = Instantiate(throwObject, Camera.main.transform.position, Quaternion.identity);
        bomb.transform.localScale = size;

        BombController bombctl = bomb.GetComponent<BombController>();
        bombctl.BombRadius = radius;

        Vector3 direction = targetPos - Camera.main.transform.position;
        bomb.GetComponent<Rigidbody>().AddForce(direction.normalized * power);

        AudioManager.instance.PlaySE(AudioManager.SE.ThrowObject);
    }
}