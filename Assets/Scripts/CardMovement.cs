using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using DG.Tweening;

public class CardMovement : MonoBehaviour, IBeginDragHandler, IDragHandler, IEndDragHandler
{
    public Toggle toggle;
    CardController cardController;
    CardModel cardModel;

    public int cardID;
    public string name;
    public string nameJP;
    public string nameEN;
    public int tiar;
    public CardEntity.TargetType targetType;

    public Weapon weapon;
    public Armor armor;
    public ParticleSystem particle;

    public CardEntity.ParticlePosition particlePosition;

    private Canvas canvas;
    private RectTransform rectTransform;
    private CanvasGroup canvasGroup;
    private Vector3 startPosition;
    private ScreenRay screenRay;

    private void Start()
    {
        toggle.group = GetComponentInParent<ToggleGroup>();
        toggle.isOn = false;
        toggle.onValueChanged.AddListener(OnToggleChanged);

        cardController = GetComponent<CardController>();
        cardModel = cardController.model;
        cardID = cardModel.cardID;
        name = cardModel.name;
        nameJP = cardModel.nameJP;
        nameEN = cardModel.nameEN;
        tiar = cardModel.tiar;
        targetType = cardModel.targetType;

        weapon = cardModel.weapon;
        armor = cardModel.armor;
        particle = cardModel.particle;

        particlePosition = cardModel.particlePosition;

        canvas = GetComponentInParent<Canvas>();
        rectTransform = GetComponent<RectTransform>();
        canvasGroup = GetComponent<CanvasGroup>();
        if (canvasGroup == null)
        {
            canvasGroup = gameObject.AddComponent<CanvasGroup>();
        }
        screenRay = FindObjectOfType<ScreenRay>();
    }

    public void OnBeginDrag(PointerEventData eventData)
    {
        startPosition = transform.position;
        canvasGroup.blocksRaycasts = false;
    }

    public void OnDrag(PointerEventData eventData)
    {
        transform.position = Input.mousePosition;
        CheckTargetHit();
    }

    public void OnEndDrag(PointerEventData eventData)
    {
        transform.position = startPosition;
        canvasGroup.blocksRaycasts = true;
        screenRay.HandleCardDrop(this);
    }

    private void CheckTargetHit()
    {
        Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
        RaycastHit hit;
        if (Physics.Raycast(ray, out hit, screenRay.rayDistance))
        {
            if ((hit.collider.CompareTag("Enemy") && targetType == CardEntity.TargetType.Enemy) ||
                (hit.collider.CompareTag("Player") && targetType == CardEntity.TargetType.Player))
            {
                canvasGroup.alpha = 0;
            }
            else
            {
                canvasGroup.alpha = 1;
            }
        }
        else
        {
            canvasGroup.alpha = 1;
        }
    }

    private void OnToggleChanged(bool isOn)
    {
        if (isOn)
        {
            transform.DOScale(1.2f, 0.1f);
        }
        else
        {
            transform.DOScale(1f, 0.1f);
        }
    }
}