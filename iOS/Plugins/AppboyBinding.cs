using UnityEngine;
using System.Collections;
using System.Runtime.InteropServices;

public class AppboyBinding : MonoBehaviour {

	[System.Runtime.InteropServices.DllImport("__Internal")]
	extern static public void _showStreamView();
	
    [System.Runtime.InteropServices.DllImport("__Internal")]
	extern static public void _showFeedbackForm();
}