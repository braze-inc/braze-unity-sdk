using System;
using Appboy.Utilities;
using UnityEngine;

namespace Appboy.Models.InAppMessage {
  public class InAppMessageConstants {
    // In-app message base
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
    
    // In-app message immersive
    public const string HeaderKey = "header";
    public const string HeaderTextColorKey = "header_text_color";
    public const string CloseButtonColorKey = "close_btn_color";
    public const string ButtonsKey = "btns";
    
    // In-app message slideup
    public const string SlideFromKey = "slide_from";
    public const string HideChevronKey = "hide_chevron";
    
    // In-app message buttons
    public const string ButtonIDKey = "id";
    public const string ButtonTextKey = "text";
    public const string ButtonTextColorKey = "text_color";
    public const string ButtonBackgroundColorKey = "bg_color";
    public const string ButtonURIKey = "uri";
    public const string ButtonClickActionKey = "click_action";
    
    // Safe wrapper for JSON.Parse
    public static JSONClass JSONObjectFromString(string JSONString) {
      if (String.IsNullOrEmpty(JSONString)) {
        Debug.Log("JSON string was null or empty.");
      }
      JSONClass json = null;
      try {
        json = (JSONClass)JSON.Parse(JSONString);
      } catch {
        Debug.Log(String.Format("Could not parse JSON {0}.", JSONString));
      }
      return json;
    }
  }
}

