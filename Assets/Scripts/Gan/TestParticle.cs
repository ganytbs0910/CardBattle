using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class TestParticle : MonoBehaviour
{
    public ParticleSystem particle;
    void Start()
    {
        particle.Play();
    }

    // Update is called once per frame
    void Update()
    {

    }
}
