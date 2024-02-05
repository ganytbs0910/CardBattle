using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerGetHitBehavior : StateMachineBehaviour
{
    private float originalSpeed;

    override public void OnStateEnter(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    {
        var playerController = animator.GetComponent<PlayerController>();
        if (playerController != null && playerController.agent != null)
        {
            // 元の速度を保存し、速度を0に設定
            //playerController.agent.speed = 0f;
            playerController.CantMove = true;
        }

        animator.ResetTrigger("GetHit");
    }


    // OnStateUpdate is called on each Update frame between OnStateEnter and OnStateExit callbacks
    override public void OnStateUpdate(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    {

    }

    // OnStateExit is called when a transition ends and the state machine finishes evaluating this state
    override public void OnStateExit(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    {
        var playerController = animator.GetComponent<PlayerController>();
        if (playerController != null && playerController.agent != null)
        {
            // 速度を元に戻す
            playerController.agent.speed = playerController.moveSpeed;
            playerController.CantMove = false;
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
