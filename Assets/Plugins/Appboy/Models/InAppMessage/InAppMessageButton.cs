using System;
using Appboy.Models;
using UnityEngine;
using Appboy.Utilities;

namespace Appboy.Models.InAppMessage {
  public class InAppMessageButton {
    public int ButtonID { get; private set;}
    public string Text { get; set; }
    public string URI { get; private set; }
    public ClickAction ButtonClickAction { get; private set; }
    public Color? TextColor { get; set; }
    public Color? BackgroundColor { get; set; }
    
    public override string ToString() {
      return String.Format("In-App Message Button: ButtonID={0}, Text={1}, URI={2}, ButtonClickAction={3}, TextColor={4}, BackgroundColor={5}", 
                           ButtonID, Text, URI, ButtonClickAction, TextColor, BackgroundColor);
    }
  
    public InAppMessageButton() {
    }
    
    public InAppMessageButton(JSONObject json) {
      ButtonID = json[InAppMessageConstants.ButtonIDKey].AsInt;
      Text = json[InAppMessageConstants.ButtonTextKey];
      TextColor = ColorUtils.HexToColor((int)json[InAppMessageConstants.ButtonTextColorKey]);
      BackgroundColor = ColorUtils.HexToColor((int)json[InAppMessageConstants.ButtonBackgroundColorKey]);
      URI = json[InAppMessageConstants.ButtonURIKey];
      ButtonClickAction = (ClickAction)EnumUtils.TryParse(typeof(ClickAction), json[InAppMessageConstants.ButtonClickActionKey], true, ClickAction.NEWS_FEED);
      if (ButtonClickAction == ClickAction.URI && URI == null) {
        Debug.Log("Required URI not present for URI click action type. Setting click action to NONE.");
        ButtonClickAction = ClickAction.NONE;
      }
    }
    
    public bool SetButtonClickAction(ClickAction clickAction) {
      if (clickAction != ClickAction.URI) {
        ButtonClickAction = clickAction;
        URI = null;
        return true;
      } else {
        Debug.Log("A non-null URI is required for ClickAction.URI.");
        return false;
      }
    }
    
    public bool SetButtonClickAction(ClickAction clickAction, string uri) {
      if (uri != null && clickAction == ClickAction.URI) {
        ButtonClickAction = clickAction;
        URI = uri;
        return true;
      } else {
        return SetButtonClickAction(clickAction);
      }
    }
  }
}

