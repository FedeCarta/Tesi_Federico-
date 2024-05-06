using UnityEngine;
using UnityEngine.Events;

[System.Serializable]  // This makes it show up nicely in the Unity Editor
public class TextElement
{
    [TextArea(3, 10)]
    public string text;
    public UnityEvent onActivate;

    public TextElement(string text, UnityEvent onActivate)
    {
        this.text = text;
        this.onActivate = onActivate ?? new UnityEvent();
    }
}