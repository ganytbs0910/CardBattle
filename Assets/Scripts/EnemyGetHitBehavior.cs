using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class EnemyGetHitBehavior : StateMachineBehaviour
{

    // OnStateEnter is called when a transition starts and the state machine starts to evaluate this state
    override public void OnStateEnter(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    {
        var enemyController = animator.GetComponent<EnemyController>();
        if (enemyController != null && enemyController.agent != null)
        {
            // 元の速度を保存し、速度を0に設定
            enemyController.agent.speed = 0f;
            enemyController.CantMove = true;
        }

        animator.ResetTrigger("GetHit");
    }

    //OnStateUpdate is called on each Update frame between OnStateEnter and OnStateExit callbacks
    override public void OnStateUpdate(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    {

    }

    // OnStateExit is called when a transition ends and the state machine finishes evaluating this state
    override public void OnStateExit(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    {
        var enemyController = animator.GetComponent<EnemyController>();
        if (enemyController != null && enemyController.agent != null)
        {
            // 速度を元に戻す
            enemyController.agent.speed = enemyController.moveSpeed;
            enemyController.CantMove = false;
        }

        animator.ResetTrigger("GetHit");
    }

    // OnStateMove is called right after Animator.OnAnimatorMove()
    //override public void OnStateMove(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    //{
    //    // Implement code that processes and affects root motion
    //}

    // OnStateIK is called right after Animator.OnAnimatorIK()
    //override public void OnStateIK(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    //{
    //    // Implement code that sets up animation IK (inverse kinematics)
    //}
}
