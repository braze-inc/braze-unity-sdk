using Appboy;
using Appboy.Utilities;
using System;
using System.Collections;
using System.Text;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using UnityEngine.Networking;
using Utilities;

public class ChangeUser : MonoBehaviour {

  public InputField UserIDField;
  
  public void OnDoneButtonClicked() {
    Debug.Log(String.Format("Changing user ID to {0}", UserIDField.text));
    getTokenSetAndExit(UserIDField.text);
  }
  
  public void OnCancelButtonClicked() {
    Debug.Log(String.Format(Constants.ChangeUserCancelLog));
    SceneManager.LoadScene(Constants.MainMenuScene);
  }

  private async void getTokenSetAndExit(string userId) {
    var request = new UnityWebRequest ("https://us-central1-jwt-responder.cloudfunctions.net/getToken", "POST");
    byte[] bodyRaw = Encoding.UTF8.GetBytes("{\"data\": {\"user_id\": \"" + userId + "\"}}");
    request.uploadHandler = (UploadHandler) new UploadHandlerRaw(bodyRaw);
    request.downloadHandler = (DownloadHandler) new DownloadHandlerBuffer();
    request.SetRequestHeader("Content-Type", "application/json");
    request.SetRequestHeader("Accept", "application/json");
    var operation = request.SendWebRequest();

    while (!operation.isDone) {
      await Task.Yield();
    }
    var jsonResponse = request.downloadHandler.text;

    if (request.error != null) {
      Debug.Log("Error: " + request.error);
    } else {
      Debug.Log("Status Code: " + request.responseCode);
      JSONObject json = (JSONObject) JSON.Parse(jsonResponse);
      var token = json["data"]["token"];
      Appboy.AppboyBinding.ChangeUser(userId, token);
      SceneManager.LoadScene(Constants.MainMenuScene);  
    }
  }
}
