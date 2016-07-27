using System;
using Appboy.Utilities;
using UnityEngine;

namespace Appboy.Models.InAppMessage {
  public class InAppMessageConstants {
    // In-app message JSON keys
    public const string MessageKey = "message";
    public const string ExtrasKey = "extras";
    public const string ClickActionKey = "click_action";
    public const string URIKey = "uri";
    public const string ImageURLKey = "image_url";
    public const string DismissTypeKey = "message_close";
    public const string DurationKey = "duration";
    public const string BackgroundColorKey = "bg_color";
    public const string TextColorKey = "text_color";
    public const string IconKey = "icon";
    public const string IconColorKey = "icon_color";
    public const string IconBackgroundColorKey = "icon_bg_color";
    public const string TypeKey = "type";
    
    // In-app message immersive JSON keys
    public const string HeaderKey = "header";
    public const string HeaderTextColorKey = "header_text_color";
    public const string CloseButtonColorKey = "close_btn_color";
    public const string ButtonsKey = "btns";
    
    // In-app message slideup jSON keys
    public const string SlideFromKey = "slide_from";
    public const string HideChevronKey = "hide_chevron";
    
    // In-app message button keys
    public const string ButtonIDKey = "id";
    public const string ButtonTextKey = "text";
    public const string ButtonTextColorKey = "text_color";
    public const string ButtonBackgroundColorKey = "bg_color";
    public const string ButtonURIKey = "uri";
    public const string ButtonClickActionKey = "click_action";
    
    // This method parses an in-app message JSON string to be a json object
    public static JSONClass JSONObjectFromString(string JSONString) {
      if (String.IsNullOrEmpty(JSONString)) {
        Debug.LogError("Slideup JSON Message cannot be null or empty.");
      }
      JSONClass json = null;
      try {
        json = (JSONClass)JSON.Parse(JSONString);
      } catch {
        Debug.LogError(String.Format("Cannot parse in-app message JSON message {0}.", JSONString));
      }
      return json;
    }
  }
}

