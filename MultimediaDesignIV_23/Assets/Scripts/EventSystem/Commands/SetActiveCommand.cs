using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SetGameObjectActive : CommandHandler
{
    public GameObject[] targets;
    public bool isEnabled = true;

    public override void PerformInteraction()
    {
        foreach (var gameObject in targets)
            gameObject.SetActive(isEnabled);
    }
}
