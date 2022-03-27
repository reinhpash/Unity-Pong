using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using TMPro;


public class GameManager : MonoBehaviour
{
    [SerializeField] private AudioClip soundFx;
    public EventTrigger.TriggerEvent playerGameEnd;
    public EventTrigger.TriggerEvent computerGameEnd;

    int _playerScore = 0;
    [SerializeField] private TextMeshProUGUI playerScoreText;
    int _computerScore = 0;
    [SerializeField] private TextMeshProUGUI computerScoreText;

    int defaultScoreValue = 10;
    int maxScore = 100;

    [SerializeField] private Ball ball;

    public void PlayerScore()
    {
        _playerScore += defaultScoreValue;
        playerScoreText.text = _playerScore.ToString();
        AudioSource.PlayClipAtPoint(soundFx,Vector2.one);
        if (_playerScore == maxScore)
        {
            BaseEventData eventData = new BaseEventData(EventSystem.current);
            playerGameEnd.Invoke(eventData);
        }
        this.ball.ResetPosition();
    }

    public void ComputerScore()
    {
        _computerScore += defaultScoreValue;
        computerScoreText.text = _computerScore.ToString();
        playerScoreText.text = _playerScore.ToString();
        AudioSource.PlayClipAtPoint(soundFx, Vector2.one);
        if (_computerScore == maxScore)
        {
            BaseEventData eventData = new BaseEventData(EventSystem.current);
            computerGameEnd.Invoke(eventData);
        }
        this.ball.ResetPosition();
    }
}
