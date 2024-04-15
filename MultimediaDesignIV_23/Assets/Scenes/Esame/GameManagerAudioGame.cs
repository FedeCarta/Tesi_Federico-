using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class GameManagerAudioGame : MonoBehaviour
{
    public int Point;
    public TextMeshProUGUI Text;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        Text.text = Point.ToString();
    }

    public void AddPoints(){
        Point = Point + 1;
    }
}
