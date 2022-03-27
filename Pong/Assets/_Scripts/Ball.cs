using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Ball : MonoBehaviour
{
    private Rigidbody2D _rigidbody;
    public float ballSpeed = 100f;

    private void Awake()
    {
        _rigidbody = this.GetComponent<Rigidbody2D>();
    }

    private void Start()
    {
        AddForceOnStart();
    }

    void AddForceOnStart()
    {
        float randXDir = Random.value < 0.5 ? -1.0f : 1.0f;
        float randYDir = Random.value < 0.5 ? Random.Range(-1.0f, 0.5f) :
                                              Random.Range(0.5f, 1.0f);

        Vector2 direction = new Vector2(randXDir,randYDir);

        _rigidbody.AddForce(direction * ballSpeed,ForceMode2D.Impulse);
    }

    public void AddBallForce(Vector2 force)
    {
        _rigidbody.AddForce(force, ForceMode2D.Impulse);
    }

    public void ResetPosition()
    {
        _rigidbody.position = Vector2.zero;
        _rigidbody.velocity = Vector2.zero;
        AddForceOnStart();
    }

}
