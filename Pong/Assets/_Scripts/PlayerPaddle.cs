using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerPaddle : Paddle
{
    private Vector2 _direction;// (x,y)

    private void Update()
    {
        if (Input.GetKey(KeyCode.W) || Input.GetKey(KeyCode.UpArrow))
        {
            _direction = Vector2.up; //(0,1)
        }
        else if (Input.GetKey(KeyCode.S) || Input.GetKey(KeyCode.DownArrow))
        {
            _direction = Vector2.down; //(0,-1)
        }
        else
        {
            _direction = Vector2.zero;// (0,0)
        }
    }

    private void FixedUpdate()
    {
        if (_direction.sqrMagnitude != 0)
        {
            _rigidBody.AddForce(_direction * speed);
        }
    }
}
