using System;
using UnityEngine;

namespace Appboy.Internal {
  public class BrazeInternalGameObject : MonoBehaviour {

    private static GameObject instance;

    private static GameObject Instance {
      get {
        if (instance == null) {
          instance = new GameObject("BrazeInternalCallback");
          instance.AddComponent<BrazeInternalComponent>();
          DontDestroyOnLoad(instance);
        }
        return instance;
      }
    }

    public static void setPushPromptResponseReceivedDelegate(PushPromptResponseReceived responseDelegate) {
      BrazeInternalComponent internalComponent = Instance.GetComponent<BrazeInternalComponent>();
      internalComponent.setPushPromptResponseReceivedDelegate(responseDelegate);
    }

    public static void setPushTokenReceivedFromSystemDelegate(PushTokenReceivedFromSystem responseDelegate) {
      BrazeInternalComponent internalComponent = Instance.GetComponent<BrazeInternalComponent>();
      internalComponent.setPushTokenReceivedFromSystemDelegate(responseDelegate);
    }
  }
}
