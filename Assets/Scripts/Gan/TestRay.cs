using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TestRay : MonoBehaviour
{
    [SerializeField] private GameObject targetMarker;
    [SerializeField] private float rayWidth = 1.5f;
    public float rayDistance = 100f;
    public bool cardMove = true;
    bool rayTarget = false;
    public bool colorChange = false;
    GameObject targetObject;
    public bool canPlayerUse;
    private void Start()
    {
        targetMarker = GameObject.Find("TargetMarker");
    }

    void Update()
    {

    }
}
