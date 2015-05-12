using UnityEngine;
using UnityEngine.UI;
using System;
using Utilities;

public class SubmitFeedback : MonoBehaviour {

  public InputField FeedbackField;
  public InputField EmailField;
  public Toggle IssueToggle;
  
  public void OnSubmitButtonClick() {
    Debug.Log(String.Format("Submitting feedback {0} with email {1} and isBug {2}", FeedbackField.text, EmailField.text, IssueToggle.isOn));
    Appboy.AppboyBinding.SubmitFeedback(EmailField.text, FeedbackField.text, IssueToggle.isOn);
    Application.LoadLevel(Constants.MainMenuScene);
  }
  
  public void OnCancelButtonClick() {
    Application.LoadLevel(Constants.MainMenuScene);
  }
}
