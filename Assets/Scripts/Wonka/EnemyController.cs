using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

//Distance 7�ȉ���Run�Ɉڍs
//Ditstance 2�ȉ���Attack�ڍs
public class EnemyController : MonoBehaviour
{ 
    [Header("Player�̃X�e�[�^�X")]
    [SerializeField] private int hp;
    [SerializeField] private int attack;
    [SerializeField] private float attackInterval;
    [SerializeField] private int defense;
    [SerializeField] private int speed;

    public Transform playerTarget; // �G�̈ʒu
    private NavMeshAgent agent; // NavMesh Agent
    private Animator animator;
    private bool isAttacking = false;
    public bool CantMove = false;

    public static EnemyController instance;

    void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }
    }

    void Start()
    {
        agent = GetComponent<NavMeshAgent>(); // NavMesh Agent�̎擾
                                              // Animator�R���|�[�l���g���擾
        animator = GetComponent<Animator>();
    }

    void Update()
    {
        if (GameManager.instance.BattleState == true || Input.GetKeyDown(KeyCode.Space)) // �o�g���J�n
        {
            agent.SetDestination(playerTarget.position); // �G�Ɍ������Ĉړ��J�n
            Move();//�ړ��A�j��
            print("�ړ��J�n");
        }

        //�G�Ǝ����̋������U���͈�
        float distance = Vector3.Distance(transform.position, playerTarget.position);
        if (distance <= agent.stoppingDistance) // �U���͈�<=��~�ʒu�G=�G���U���͈͓��ɂ���
        {
            Attack(); // �U��
            print("�U���J�n");
        }
    }

    // �e�A�j���[�V������Ԃ��g���K�[���郁�\�b�h
    public void Move()
    {
        if (CantMove == false)
        {
            animator.SetTrigger("Move");
            print("Move�A�j���[�V�������s");
        }
        else
        {
            print("PlayerAttackBehavior�ɂ��ړ��s�\");
        }
    }

    public void Idle()
    {
        animator.SetTrigger("Idle");
    }

    public void Attack()
    {
        if (isAttacking)
        {
            // ���łɍU�����̏ꍇ�A�������Ȃ�
            return;
        }

        isAttacking = true;

        int attackNumber = Random.Range(1, 3); // 1����2�̊Ԃ̃����_���Ȑ��𐶐�

        // �������ꂽ���ɉ����ĈقȂ�U���A�j���[�V�������g���K�[
        switch (attackNumber)
        {
            case 1:
                animator.SetTrigger("Attack01");
                break;
            case 2:
                animator.SetTrigger("Attack02");
                break;
        }
        print("Attack�A�j���[�V�������s");
    }

    // �A�j���[�V�����C�x���g�܂��͂��̑��̕��@�ōU����Ԃ����Z�b�g����
    public void ResetAttackState()
    {
        isAttacking = false;
    }

    public void GetHit()
    {
        animator.SetTrigger("GetHit");
    }

    public void Die()
    {
        animator.SetTrigger("Die");
    }

    public void Victory()
    {
        animator.SetTrigger("Victory");
    }
}

