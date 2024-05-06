using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CounterCommand : CommandHandler
{
    [Tooltip("Current progress count.")]
    public int currentCount = 0;

    [Tooltip("Target progress count at which a special action will be triggered.")]
    public int targetCount = 3;

    [Space]
    [Tooltip("Send a command when increment is performed. (optional)")]
    public CommandSender onIncrementSendCommand;

    [Tooltip("Perform an action when increment is performed. (optional)")]
    public CommandHandler onIncrementPerformAction;

    [Space]
    [Tooltip("Send a command when target count is reached. (optional)")]
    public CommandSender onTargetReachedSendCommand;

    [Tooltip("Perform an action when target count is reached. (optional)")]
    public CommandHandler onTargetReachedPerformAction;

    public override void PerformInteraction()
    {
        currentCount += 1;
        if (currentCount >= targetCount)
        {
            if (onTargetReachedPerformAction != null) onTargetReachedPerformAction.PerformInteraction(); // Perform an action when target count is reached.
            if (onTargetReachedSendCommand != null) onTargetReachedSendCommand.Send(); // Send a command when target count is reached.
            isTriggered = true;
        }
        else
        {
            if (onIncrementPerformAction != null) onIncrementPerformAction.PerformInteraction(); // Perform an action when increment is performed.
            if (onIncrementSendCommand != null) onIncrementSendCommand.Send(); // Send a command when increment is performed.
            isTriggered = false;
        }
    }
}
