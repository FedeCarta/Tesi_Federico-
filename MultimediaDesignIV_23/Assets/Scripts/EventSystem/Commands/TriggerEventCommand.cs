using UnityEngine.Events;

public class TriggerUnityEvent : CommandHandler
{
    public UnityEvent unityEvent;

    public override void PerformInteraction()
    {
        unityEvent.Invoke();
    }
}

