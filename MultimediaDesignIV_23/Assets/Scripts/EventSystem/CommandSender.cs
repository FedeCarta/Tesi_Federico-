using UnityEngine;


public class CommandSender : MonoBehaviour
{
    [Tooltip("The type of command to send.")]
    public CommandType interactionType;

    [Tooltip("This object will receive the command.")]
    public CommandReceiver interactiveObject;

    [Tooltip("If set to true, this command will only be sent once.")]
    public bool oneShot = false;

    [Tooltip("How many seconds must pass before the command is sent again.")]
    public float coolDown = 1.0f;

    private float lastSendTime;
    private bool isTriggered = false;

    // Method to send command
    [ContextMenu("Send Interaction")]
    public void Send()
    {
        if (oneShot && isTriggered) return;
        if (Time.time - lastSendTime < coolDown) return;
        
        isTriggered = true;
        lastSendTime = Time.time;
        interactiveObject.Receive(interactionType);
        
    }
}