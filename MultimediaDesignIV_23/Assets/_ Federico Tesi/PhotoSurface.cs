using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using BNG;

public class PhotoSurface : MonoBehaviour
{
    public UnityEvent onAllFragmentsCorrect;
    
    public int targetFragmentCount = 2;  // The number of fragments that need to be correctly placed
    
    //private List<PhotoFragment> fragments = new List<PhotoFragment>();
    
    public int correctPlacements = 0;

    //public Grabber grabber;

    public GameObject Photo1;
    public GameObject Photo2;
    public GameObject Photo3;
    public GameObject Photo4;

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Photo1")) 
        {
            other.gameObject.SetActive(false);
            Photo1.SetActive(true);
            correctPlacements++;
            CheckAllFragmentsCorrect();
        }

        else if (other.CompareTag("Photo2")) 
        {
            other.GetComponent<GameObject>().SetActive(false);
            Photo2.SetActive(true);
            correctPlacements++;
            CheckAllFragmentsCorrect();
        }

        else if (other.CompareTag("Photo3")) 
        {
            other.GetComponent<GameObject>().SetActive(false);
            Photo3.SetActive(true);
            correctPlacements++;
            CheckAllFragmentsCorrect();
        }

        else if (other.CompareTag("Photo4")) 
        {
            other.GetComponent<GameObject>().SetActive(false);
            Photo4.SetActive(true);
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

}

/*
    public void RegisterFragment(PhotoFragment fragment)
    {
        if (!fragments.Contains(fragment))
        {
            fragments.Add(fragment);
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        PhotoFragment fragment = other.GetComponent<PhotoFragment>();
        if (fragment != null)
        {
            // Snap the fragment to its target position and disable its collider
            //Collider fragmentCollider = fragment.GetComponent<Collider>();
            //Grabbable fragmentGrabbable = fragment.GetComponent<Grabbable>();
            Rigidbody fragmentRigidbody = fragment.GetComponent<Rigidbody>();

            //fragmentCollider.enabled = false;  // Disable the collider of the fragment
            //fragmentGrabbable.DropItem(grabber, true, true);

            fragment.transform.SetParent(transform);
            fragment.transform.position = transform.TransformPoint(fragment.targetPosition);
            fragment.transform.rotation = fragment.targetRotation;
            fragmentRigidbody.isKinematic = true;

            correctPlacements++;
            CheckAllFragmentsCorrect();
        }
    }
    */