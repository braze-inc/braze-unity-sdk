using UnityEngine;
using System.Collections;
using System.Runtime.InteropServices;

public class AppboyBinding : MonoBehaviour {

	[System.Runtime.InteropServices.DllImport("__Internal")]
	private static extern void _showStreamView();
		
	[System.Runtime.InteropServices.DllImport("__Internal")]
	private static extern void _showFeedbackForm();
		
	[System.Runtime.InteropServices.DllImport("__Internal")]
	private static extern void _logAppEvent(string eventName);
	
	[System.Runtime.InteropServices.DllImport("__Internal")]
	private static extern void _changeUserId(string userId);
	
	public static void showStreamView()
	{
		if( Application.platform == RuntimePlatform.IPhonePlayer )
			_showStreamView();
	}
	
	public static void showFeedbackForm()
	{
		if( Application.platform == RuntimePlatform.IPhonePlayer )
			_showFeedbackForm();
	}
	
	public static void logAppEvent(string eventName)
	{
		if( Application.platform == RuntimePlatform.IPhonePlayer )
			_logAppEvent(eventName);
	}
	
	public static void changeUserId(string userId)
	{
		if( Application.platform == RuntimePlatform.IPhonePlayer )
			_changeUserId(userId);
	}
}