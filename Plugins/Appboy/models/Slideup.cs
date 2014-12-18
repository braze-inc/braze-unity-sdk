using Appboy;
using Appboy.Utilities;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;

namespace Appboy.Models {
  public class Slideup {
    private const int s_DefaultDuration = 5000;

    private string _jsonString;
    private int _duration;
    private bool _clickLogged;
    private bool _impressionLogged;

    public string Message { get; set; }
    public Dictionary<string, string> Extras { get; private set; }
    public SlideFrom SlideFrom { get; set; }
    public ClickAction ClickAction { get; private set; }
    public Uri Uri { get; private set; }
    public DismissType DismissType { get; set; }
    public int Duration {
      get {
        return _duration; 
      }
      set {
        _duration = value <= 0 ? s_DefaultDuration : value;
      }
    }
        
    public Slideup(string message) {
      if (String.IsNullOrEmpty(message)) {
        throw new ArgumentException("Slideup JSON Message cannot be null or empty.", "message");
      }
      _jsonString = message;
      JSONClass json;
      try {
        json = (JSONClass) JSON.Parse(message);
      } catch {
        throw new ArgumentException("Cannot parse slideup JSON message.");
      }
      Message = json["message"];
      if (json["extras"] != null) {
        Extras = JsonUtils.JSONClassToDictionary(json["extras"].AsObject);
      } else {
        Extras = new Dictionary<string, string>();
      }
      SlideFrom = (SlideFrom) EnumUtils.TryParse(typeof(SlideFrom), json["slide_from"], true, SlideFrom.BOTTOM);
      ClickAction = (ClickAction) EnumUtils.TryParse(typeof(ClickAction), json["click_action"], true, ClickAction.NEWS_FEED);
      Uri = json["uri"] != null ? new Uri(json["uri"]) : null;
      if (ClickAction == ClickAction.URI && Uri == null) {
        Debug.Log("The click action cannot be set to URI because the uri is null. Setting click action to NONE.");
        ClickAction = ClickAction.NONE;
      }
      DismissType = (DismissType) EnumUtils.TryParse(typeof(DismissType), json["dismiss_type"], true, DismissType.AUTO_DISMISS);
      Duration = json["duration"].AsInt;
      _impressionLogged = false;
      _clickLogged = false;
    }

    /// <summary>
    /// Sets the ClickAction to NEWS_FEED and unsets the Uri.
    /// </summary>
    public void SetClickActionToNewsFeed() {
      Uri = null;
      ClickAction = ClickAction.NEWS_FEED;
    }
        
    /// <summary>
    /// Sets the ClickAction to URI and sets the Uri only if the uri is not null.
    /// </summary>
    public bool SetClickActionToUri(Uri uri) {
      if (uri == null) {
        Debug.Log("A non-null URI is required in order to set the ClickAction to URI.");
        return false;
      }
      ClickAction = ClickAction.URI;
      Uri = uri;
      return true;
    }
        
    /// <summary>
    /// Sets the ClickAction to NONE and unsets the Uri.
    /// </summary>
    public void SetClickActionToNone() {
      Uri = null;
      ClickAction = ClickAction.NONE;
    }  

    public override string ToString() {
      return String.Format("Slideup[Message={0}, SlideFrom={1}, ClickAction={2}, Uri={3}, DismissType={4}, Duration={5}, Extras={6}]", 
                           Message, SlideFrom, ClickAction, Uri, DismissType, Duration, CollectionUtils.DictionaryToString(Extras));
    } 

    public void LogClicked() {
      if (!_clickLogged) {
        _clickLogged = true;
        AppboyBinding.LogSlideupClicked(_jsonString);
      }
    }

    public void LogImpression() {
      if (!_impressionLogged) {
        _impressionLogged = true;
        AppboyBinding.LogSlideupImpression(_jsonString);
      }
    }
  }
}