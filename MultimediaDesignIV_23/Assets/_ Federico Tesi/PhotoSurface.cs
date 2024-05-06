using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class PhotoSurface : MonoBehaviour
{
    public UnityEvent onAllFragmentsCorrect;
    
    public int targetFragmentCount = 2;  // The number of fragments that need to be correctly placed
    
    private List<Photofragment> fragments = new List<Photofragment>();
    
    public int correctPlacements = 0;

    private void OnTriggerEnter(Collider other)
    {
        Photofragment fragment = other.GetComponent<Photofragment>();
        if (fragment != null)
        {
            // Snap the fragment to its target position and disable its collider
            fragment.transform.position = transform.TransformPoint(fragment.targetPosition);
            fragment.transform.SetParent(transform);
            Collider fragmentCollider = fragment.GetComponent<Collider>();
            if (fragmentCollider != null)
            {
                fragmentCollider.enabled = false;  // Disable the collider of the fragment
            }
            correctPlacements++;
            CheckAllFragmentsCorrect();
        }
    }

    private void CheckAllFragmentsCorrect()
    {
        // Check if the number of correctly placed fragments meets or exceeds the target number
        if (correctPlacements >= targetFragmentCount)
        {
            onAllFragmentsCorrect.Invoke();
        }
    }

    public void RegisterFragment(Photofragment fragment)
    {
        if (!fragments.Contains(fragment))
        {
            fragments.Add(fragment);
        }
    }
}