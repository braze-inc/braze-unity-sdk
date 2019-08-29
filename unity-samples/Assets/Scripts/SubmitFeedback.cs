using Appboy;
using System;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using Utilities;

public class SubmitFeedback : MonoBehaviour {

  public InputField FeedbackField;
  public InputField EmailField;
  public Toggle IssueToggle;
  
  public void OnSubmitButtonClick() {
    Debug.Log(String.Format("Submitting feedback {0} with email {1} and isBug {2}", FeedbackField.text, EmailField.text, IssueToggle.isOn));
    Appboy.AppboyBinding.SubmitFeedback(EmailField.text, FeedbackField.text, IssueToggle.isOn);
    SceneManager.LoadScene(Constants.MainMenuScene);
  }
  
  public void OnCancelButtonClick() {
    SceneManager.LoadScene(Constants.MainMenuScene);
  }
}
