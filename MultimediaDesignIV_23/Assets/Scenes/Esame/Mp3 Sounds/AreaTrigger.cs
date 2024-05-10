using UnityEngine;
using UnityEngine.Events;

public class AreaTrigger : MonoBehaviour
{
    public string TargetTag;
    
    public UnityEvent AreaTriggerEvent;

    private void OnTriggerEnter(Collider other)
    {
        // Check if the entering GameObject has the tag "Player"
        if (other.CompareTag(TargetTag))
        {
            // Trigger the OnEnterArea event
            AreaTriggerEvent.Invoke();
        }
    }
}
