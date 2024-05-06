using UnityEngine;
using System;
using System.Collections.Generic;

public class CommandReceiver : MonoBehaviour
{
    private Dictionary<CommandType, List<Action>> handlers = new Dictionary<CommandType, List<Action>>();

    // Receive a command and invoke the registered handlers
    public void Receive(CommandType commandType)
    {
        if (handlers.TryGetValue(commandType, out var callbacks))
        {
            foreach (Action callback in callbacks)
            {
                callback.Invoke();
            }
        }
    }

    // Register a new handler for a specific command type
    public void Register(CommandType type, CommandHandler handler)
    {
        if (!handlers.TryGetValue(type, out var callbacks))
        {
            callbacks = new List<Action>();
            handlers[type] = callbacks;
        }
        callbacks.Add(handler.OnInteraction);
    }

    // Remove a handler for a specific command type
    public void Remove(CommandType type, CommandHandler handler)
    {
        if (handlers.TryGetValue(type, out var callbacks))
        {
            callbacks.Remove(handler.OnInteraction);
        }
    }
}