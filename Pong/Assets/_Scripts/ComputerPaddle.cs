using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ComputerPaddle : Paddle
{
    [SerializeField] private Rigidbody2D ball;

    void FixedUpdate()
    {
        if (this.ball.velocity.x > 0)
        {
            if (this.ball.transform.position.y > this.transform.position.y)
            {
                _rigidBody.AddForce(Vector2.up * speed);
            }
            else if (this.ball.transform.position.y < this.transform.position.y)
            {
                _rigidBody.AddForce(Vector2.down * speed);
            }
        }
        else
        {
            if (this.transform.position.y > 0.0f)
            {
                _rigidBody.AddForce(Vector2.down * speed);
            }
            else if (this.transform.position.y < 0.0f)
            {
                _rigidBody.AddForce(Vector2.up * speed);
            }
        }
    }
}
