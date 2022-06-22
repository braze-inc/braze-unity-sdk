using Appboy;
using Appboy.Models;
using Appboy.Models.Cards;
using Appboy.Models.InAppMessage;
using Appboy.Utilities;
using UnityEngine;
using System;
using System.Collections;

namespace Appboy {
  public class AppboyBindingTester : MonoBehaviour {

    void Start() {
      Debug.Log("AppboyBindingTester starting with component name: " + this.name);
    }

    void InAppMessageReceivedCallback(string message) {
      Debug.Log("InAppMessageReceivedCallback message: " + message);
      IInAppMessage inApp = InAppMessageFactory.BuildInAppMessage(message);
      Debug.Log("In-app message received: " + inApp);
    }

    void PromptUserForPushPermissionsCallback(string message) {
      Debug.Log("User push permission prompt result was: " + message);
    }

    void PushTokenReceivedCallback(string message) {
      Debug.Log("Push token received: " + message);
    }

    void PushNotificationReceivedCallback(string message) {
      Debug.Log("Push received callback for Android received: " + message);
      PushNotification pushNotification = new PushNotification(message);
      Debug.Log("Push received message parsed into json: " + pushNotification);
    }

    void PushNotificationOpenedCallback(string message) {
      Debug.Log("Push opened callback for Android received: " + message);
      PushNotification pushNotification = new PushNotification(message);
      Debug.Log("Push opened message parsed into json: " + pushNotification);
    }

    void PushNotificationReceivedCallbackForiOS(string message) {
      Debug.Log("Push received callback for iOS received: " + message);
      JSONClass pushNotificationJson = (JSONClass)JSON.Parse(message);
      ApplePushNotification pushNotification = new ApplePushNotification(pushNotificationJson);
      Debug.Log("Push received message parsed into json: " + pushNotification);
    }

    void PushNotificationOpenedCallbackForiOS(string message) {
      Debug.Log("Push opened callback for iOS received: " + message);
      JSONClass pushNotificationJson = (JSONClass)JSON.Parse(message);
      ApplePushNotification pushNotification = new ApplePushNotification(pushNotificationJson);
      Debug.Log("Push opened message parsed into json: " + pushNotification);
    }

    void FeedReceivedCallback(string message) {
      Debug.Log("FeedReceivedCallback message: " + message);
      Feed feed = new Feed(message);
      Debug.Log("Feed received: " + feed);
      foreach (Card card in feed.Cards) {
        Debug.Log("Card: " + card);
      }
    }

    void ContentCardsReceivedCallback(string message) {
      Debug.Log("ContentCardsReceivedCallback message: " + message);
      AppboyBinding.LogContentCardsDisplayed();
      try {
        JSONClass json = (JSONClass)JSON.Parse(message);
        if (json["mContentCards"] != null) {
          JSONArray jsonArray = (JSONArray)JSON.Parse(json["mContentCards"].ToString());
          Debug.Log(String.Format("Parsing Content Cards array of size {0}", jsonArray.Count));
          for (int i = 0; i < jsonArray.Count; i++) {
            JSONClass cardJson = jsonArray[i].AsObject;
            try {
              ContentCard card = new ContentCard(cardJson);
              Debug.Log(String.Format("Created card object for card: {0}", card));
              card.LogImpression();
              card.LogClick();
            } catch {
              Debug.Log(String.Format("Unable to create and log analytics for card {0}", cardJson));
            }
          }
        }
      } catch {
        throw new ArgumentException("Could not parse content card JSON message.");
      }
    }

    void SdkAuthenticationFailureCallback(string message) {
      Debug.Log("SdkAuthenticationFailureCallback: " + message);
    }

    public static void InAppMessageBeforeDisplayed(IInAppMessage message) {
      Debug.Log($"InAppMessage before displayed: {message}");
    }

    public static void InAppMessageDismissed(IInAppMessage message) {
      Debug.Log($"InAppMessage dismissed: {message}");
    }

    public static void InAppMessageClicked(IInAppMessage message) {
      Debug.Log($"InAppMessage clicked: {message}");
    }

    public static void InAppMessageButtonClicked(IInAppMessage message, InAppMessageButton button) {
      Debug.Log($"InAppMessage button clicked: {message} {button}");
    }

    public static void InAppMessageHTMLClicked(IInAppMessage message, Uri uri) {
      Debug.Log($"InAppMessage HTML clicked: {message} {uri}");
    }
  }

}
