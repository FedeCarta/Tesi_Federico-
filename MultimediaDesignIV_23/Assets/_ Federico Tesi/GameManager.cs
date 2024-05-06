using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    public static GameManager Instance { get; private set; }
    
    private void Awake() 
    {
        if (Instance != null && Instance != this) 
        {
            Destroy(gameObject); // Destroy this gameObject if a duplicate instance exists
        } 
        else 
        {
            Instance = this;
            DontDestroyOnLoad(gameObject); // Make this singleton persist across scenes
        }
    }
    
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
