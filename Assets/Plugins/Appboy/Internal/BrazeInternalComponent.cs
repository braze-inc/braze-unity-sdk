using System;
using UnityEngine;

namespace Appboy.Internal {
  public class BrazeInternalComponent : MonoBehaviour {

    private PushPromptResponseReceived pushPromptResponseReceived;
    private PushTokenReceivedFromSystem pushTokenReceivedFromSystem;

    public void setPushPromptResponseReceivedDelegate(PushPromptResponseReceived responseDelegate) {
      pushPromptResponseReceived = responseDelegate;
    }

    public void setPushTokenReceivedFromSystemDelegate(PushTokenReceivedFromSystem responseDelegate) {
      pushTokenReceivedFromSystem = responseDelegate;
    }

    public void onPushPromptResponseReceived(String response) {
      if (pushPromptResponseReceived != null) {
        pushPromptResponseReceived(Convert.ToBoolean(response));
      }
    }

    public void onPushTokenReceivedFromSystem(String token) {
      if (pushTokenReceivedFromSystem != null) {
        pushTokenReceivedFromSystem(token);
      }
    }
  }
}
