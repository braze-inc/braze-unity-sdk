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
    }

    void InAppMessageReceivedCallback(string message) {
      Debug.Log("InAppMessageReceivedCallback message: " + message);
      IInAppMessage inApp = InAppMessageFactory.BuildInAppMessage(message);
      Debug.Log("In-app message received: " + inApp);
      // Here we are testing the Unity SDK by manually logging the in-app message's click and impression.
      // We should only log the click and impression when the in-app message isn't displayed by Appboy but in Unity.
      //inApp.LogClicked();
      //inApp.LogImpression();
      if (inApp is IInAppMessageImmersive) {
        IInAppMessageImmersive inAppImmersive = inApp as IInAppMessageImmersive;
        if (inAppImmersive.Buttons != null && inAppImmersive.Buttons.Count > 0) {
          // Here we are testing the Unity SDK by manually logging the in-app message's first button's click.
          // We should only log the button click when the in-app message isn't displayed by Appboy but in Unity.
          //inAppImmersive.LogButtonClicked(inAppImmersive.Buttons[0].ButtonID);
        }
      }
    }

    void PushNotificationReceivedCallback(string message) {
      Debug.Log("PushNotificationReceivedCallback message: " + message);
      PushNotification pushNotification = new PushNotification(message);
      Debug.Log("Push Notification received: " + pushNotification);     
    }

    void PushNotificationOpenedCallback(string message) {
      Debug.Log("PushNotificationOpenedCallback message: " + message);
      PushNotification pushNotification = new PushNotification(message);
      Debug.Log("Push Notification opened: " + pushNotification);
    }

    void PushNotificationReceivedCallbackForiOS(string message) {
      JSONClass pushNotificationJson = (JSONClass)JSON.Parse(message);
      ApplePushNotification pushNotification = new ApplePushNotification(pushNotificationJson);
      Debug.Log("Push received Notification event: " + pushNotification);     
    }

    void PushNotificationOpenedCallbackForiOS(string message) {
      JSONClass pushNotificationJson = (JSONClass)JSON.Parse(message);
      ApplePushNotification pushNotification = new ApplePushNotification(pushNotificationJson);
      Debug.Log("Push opened Notification event: " + pushNotification);      
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
          Debug.Log(String.Format("Parsed content cards array with {0} cards", jsonArray.Count));
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
  }
}
