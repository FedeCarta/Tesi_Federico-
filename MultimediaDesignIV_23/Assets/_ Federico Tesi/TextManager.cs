using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TextManager : MonoBehaviour
{
    public List<TextElement> textElements;
    public Text displayText;  // Reference to the UI Text component
    private int currentIndex = -1;

    public void Next()
    {
        if (textElements == null || textElements.Count == 0)
            return;

        currentIndex = (currentIndex + 1) % textElements.Count;
        TextElement currentElement = textElements[currentIndex];

        if (displayText != null)
            displayText.text = currentElement.text;

        currentElement.onActivate.Invoke();
    }
    
    public void Previous()
    {
        if (textElements == null || textElements.Count == 0)
            return;

        currentIndex = (currentIndex - 1 + textElements.Count) % textElements.Count;
        TextElement currentElement = textElements[currentIndex];

        if (displayText != null)
            displayText.text = currentElement.text;

        currentElement.onActivate.Invoke();
    }
    
    public void SetText(int index)
    {
        if (textElements == null || textElements.Count == 0)
            return;

        currentIndex = index % textElements.Count;
        TextElement currentElement = textElements[currentIndex];

        if (displayText != null)
            displayText.text = currentElement.text;

        currentElement.onActivate.Invoke();
    }

    public void DebugText(string text)
    {
        Debug.Log(text);
    }
}