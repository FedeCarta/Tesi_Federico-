using UnityEngine;

[SelectionBase]
[RequireComponent(typeof(CommandReceiver))]
public abstract class CommandHandler : MonoBehaviour
{
    [Tooltip("Type of interaction. Used to differentiate the command received.")]
    public CommandType interactionType;

    [Tooltip("Is this interaction only sent once?")]
    public bool isOneShot = false;

    [Tooltip("If this value > 0, the interaction will only be sent once every specified number of seconds.")]
    public float coolDown = 0;

    [Tooltip("Delay in seconds before the interaction is sent to the target.")]
    public float startDelay = 0;

    protected bool isTriggered = false;
    private float lastInteractionTime = 0;

    // This method must be implemented in subclasses to define specific actions.
    public abstract void PerformInteraction();

    // Called when a command is received. This method manages timing restrictions like cooldowns and delays.
    public virtual void OnInteraction()
    {
        if (isOneShot && isTriggered) return;
        if (Time.time - lastInteractionTime < coolDown) return;

        isTriggered = true;
        lastInteractionTime = Time.time;
        
        if (startDelay > 0)
            Invoke(nameof(PerformInteraction), startDelay);
        else
            PerformInteraction();
    }

    // Register this handler with the GameCommandReceiver upon initialization
    protected virtual void Awake()
    {
        CommandReceiver receiver = GetComponent<CommandReceiver>();
        receiver.Register(interactionType, this);
    }
}