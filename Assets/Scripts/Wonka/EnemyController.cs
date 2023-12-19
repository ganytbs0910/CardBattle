using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class EnemyController : MonoBehaviour
{
    public Transform playerTarget;
    NavMeshAgent agent;

    // Start is called before the first frame update
    void Start()
    {
        agent = GetComponent<NavMeshAgent>();
    }

    // Update is called once per frame
    void Update()
    {
        if (GameManager.instance.BattleState == true || Input.GetKeyDown(KeyCode.Space)) // �o�g���J�n
        {
            agent.SetDestination(playerTarget.position); // �G�Ɍ������Ĉړ��J�n
        }
    }
}
