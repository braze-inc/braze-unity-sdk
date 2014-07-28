using Appboy.Models;
using Appboy.Utilities;
using UnityEngine;
using System.Collections;

namespace Appboy {
  public class SlideupTester : MonoBehaviour {
    private string _slideupJsonString = @"{
      ""message"" : ""This is a sample slideup."",
      ""duration"" : 2000,
      ""slide_from"" : ""top"",
      ""extras"" : { ""one"" : ""1"", ""two"" : ""2"" },
      ""campaign_id"" : ""xxxx-xxxx-xxxx-xxxx-xxxx"",
      ""card_id"" : ""yyyy-yyyy-yyyy-yyyy-yyyy"",
      ""click_action"" : ""uri"",
      ""dismiss_type"" : ""swipe"",
      ""uri"" : ""http://www.appboy.com""
    }";
    public string slideupMessage;

    public void DisplaySlideup(Slideup slideup) {
      slideupMessage = slideup.Message;
    }
        
    void OnGUI() {
      if (GUI.Button(new Rect(230, 10, 100, 25), "Static Slideup")) {
        Slideup slideup = new Slideup(_slideupJsonString);
        DisplaySlideup(slideup);
      }     	
      GUI.Label(new Rect(230, 45, 210, 80), slideupMessage);
    }
  }
}