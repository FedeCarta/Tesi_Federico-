using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DebugLogCommand : CommandHandler
{
    public string message = "Interaction Performed";
    
    public override void PerformInteraction()
    {
        Debug.Log(message);
    }
}
