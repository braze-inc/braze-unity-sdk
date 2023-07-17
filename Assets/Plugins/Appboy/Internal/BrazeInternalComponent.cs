using System;
using UnityEngine;
using Appboy.Models.InAppMessage;
using Appboy.Utilities;

namespace Appboy.Internal {
  public class BrazeInternalComponent : MonoBehaviour {

    /*** Push Notifications ***/

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

    /*** In-app messages ***/

    public BrazeInAppMessageListener iamListener;

    public void beforeInAppMessageDisplayed(string messageJSON) {
      Debug.Log("BrazeInternalComponent.beforeInAppMessageDisplayed called with json: " + messageJSON);
      if (iamListener == null || iamListener.BeforeInAppMessageDisplayed == null) {
        Debug.Log("BrazeInternalComponent.beforeInAppMessageDisplayed no-op on null listener");
        return; 
      }

      IInAppMessage message = InAppMessageFactory.BuildInAppMessage(messageJSON);
      iamListener.BeforeInAppMessageDisplayed(message);
    }

    public void onInAppMessageDismissed(string messageJSON) {
      Debug.Log("BrazeInternalComponent.onInAppMessageDismissed called with json: " + messageJSON);
      if (iamListener == null || iamListener.OnInAppMessageDismissed == null) {
        Debug.Log("BrazeInternalComponent.onInAppMessageDismissed no-op on null listener");
        return;
      }

      IInAppMessage message = InAppMessageFactory.BuildInAppMessage(messageJSON);
      iamListener.OnInAppMessageDismissed(message);
    }

    public void onInAppMessageClicked(string messageJSON) {
      Debug.Log("BrazeInternalComponent.onInAppMessageClicked called with json: " + messageJSON);
      if (iamListener == null || iamListener.OnInAppMessageClicked == null) {
        Debug.Log("BrazeInternalComponent.onInAppMessageClicked no-op on null listener");
        return;
      }

      IInAppMessage message = InAppMessageFactory.BuildInAppMessage(messageJSON);
      iamListener.OnInAppMessageClicked(message);
    }

    public void onInAppMessageButtonClicked(string argvJSON) {
      Debug.Log("BrazeInternalComponent.onInAppMessageButtonClicked called with json: " + argvJSON);
      if (iamListener == null || iamListener.OnInAppMessageButtonClicked == null) {
        Debug.Log("BrazeInternalComponent.onInAppMessageButtonClicked no-op on null listener");
        return;
      }

      try {
        JSONArray argv = (JSONArray)JSON.Parse(argvJSON);
        (string messageJSON, int buttonId) = (argv[0], argv[1].AsInt);

        IInAppMessage message = InAppMessageFactory.BuildInAppMessage(messageJSON);
        InAppMessageButton button = ((IInAppMessageImmersive)message).Buttons[buttonId];
        iamListener.OnInAppMessageButtonClicked(message, button);
      } catch {
        Debug.Log("Received invalid in-app message data from native side.");
      }
    }

    public void onInAppMessageHTMLClicked(string argvJSON) {
      Debug.Log("BrazeInternalComponent.onInAppMessageHTMLClicked called with json: " + argvJSON);
      if (iamListener == null || iamListener.OnInAppMessageHTMLClicked == null) {
        Debug.Log("BrazeInternalComponent.onInAppMessageHTMLClicked no-op on null listener");
        return;
      }

      try {
        JSONArray argv = (JSONArray)JSON.Parse(argvJSON);
        (string messageJSON, string uriString) = (argv[0], argv[1]);

        IInAppMessage message = InAppMessageFactory.BuildInAppMessage(messageJSON);
        Uri uri = uriString != null ? new Uri(uriString) : null;
        iamListener.OnInAppMessageHTMLClicked(message, uri);
      } catch {
        Debug.Log("Received invalid in-app message data from native side.");
      }
    }
  }
}
