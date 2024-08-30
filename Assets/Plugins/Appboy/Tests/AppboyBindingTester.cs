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

    // Change to `true` to automatically log clicks, button clicks,
    // and impressions for in-app messages, content cards, and news feed cards.
    bool automaticallyInteract = false;

    void Start() {
      Debug.Log("AppboyBindingTester starting with component name: " + this.name);
    }

    void InAppMessageReceivedCallback(string message) {
      Debug.Log("InAppMessageReceivedCallback message: " + message);
      IInAppMessage inApp = InAppMessageFactory.BuildInAppMessage(message);
      Debug.Log("In-app message received: " + inApp);
      if (automaticallyInteract) {
        Debug.Log("Logging IAM impression and click");
        inApp.LogImpression();
        inApp.LogClicked();
        if (inApp is IInAppMessageImmersive) {
          Debug.Log("Logging button click `0`");
          ((IInAppMessageImmersive)inApp).LogButtonClicked(0);
        }
      }
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

    void PushNotificationDeletedCallback(string message) {
      Debug.Log("Push deleted callback for Android received: " + message);
      PushNotification pushNotification = new PushNotification(message);
      Debug.Log("Push deleted message parsed into json: " + pushNotification);
    }

    void PushNotificationReceivedCallbackForiOS(string message) {
      Debug.Log("Push received callback for iOS received: " + message);
      JSONObject pushNotificationJson = (JSONObject)JSON.Parse(message);
      ApplePushNotification pushNotification = new ApplePushNotification(pushNotificationJson);
      Debug.Log("Push received message parsed into json: " + pushNotification);
    }

    void PushNotificationOpenedCallbackForiOS(string message) {
      Debug.Log("Push opened callback for iOS received: " + message);
      JSONObject pushNotificationJson = (JSONObject)JSON.Parse(message);
      ApplePushNotification pushNotification = new ApplePushNotification(pushNotificationJson);
      Debug.Log("Push opened message parsed into json: " + pushNotification);
    }

    void FeedReceivedCallback(string message) {
      Debug.Log("FeedReceivedCallback message: " + message);
      Feed feed = new Feed(message);
      Debug.Log("News Feed received: " + feed);
      foreach (Card card in feed.Cards) {
        Debug.Log("News Feed card: " + card);
        if (automaticallyInteract) {
          Debug.Log("Logging NF card impression and click");
          card.LogImpression();
          card.LogClick();
        }
      }
    }

    void ContentCardsReceivedCallback(string message) {
      Debug.Log("ContentCardsReceivedCallback message: " + message);
      try {
        JSONObject json = (JSONObject)JSON.Parse(message);
        if (json["mContentCards"] != null) {
          JSONArray jsonArray = (JSONArray)JSON.Parse(json["mContentCards"].ToString());
          Debug.Log(String.Format("Parsing Content Cards array of size {0}", jsonArray.Count));

          for (int i = 0; i < jsonArray.Count; i++) {
            JSONObject cardJson = jsonArray[i].AsObject;
            try {
              ContentCard card = new ContentCard(cardJson);
              if (automaticallyInteract) {
                Debug.Log("Logging CC card impression and click");
                card.LogImpression();
                card.LogClick();
                // card.LogDismissed();
              }
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

    // - In-app message lifecycle

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

    // - Feature Flags

    void FeatureFlagsReceivedCallback(string message) {
      Debug.Log("FeatureFlagsReceivedCallback message: " + message);
    }
  }

}
