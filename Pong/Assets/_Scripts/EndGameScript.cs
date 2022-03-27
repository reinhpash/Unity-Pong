using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;


public class EndGameScript : MonoBehaviour
{
    [SerializeField] private Canvas UICanvas;
    [SerializeField] private Canvas EndGameCanvas;
    [SerializeField] private TextMeshProUGUI kazandinText;
    [SerializeField] private TextMeshProUGUI kaybettinText;

    public void PlayerGameEnd()
    {
        UICanvas.enabled = false;
        EndGameCanvas.enabled = true;
        kazandinText.enabled = true;
        Time.timeScale = 0;
    }

    public void ComputerGameEnd()
    {
        UICanvas.enabled = false;
        EndGameCanvas.enabled = true;
        kaybettinText.enabled = true;
        Time.timeScale = 0;
    }
}
