// ------------------------------------------------------------------------------
//  <autogenerated>
//      This code was generated by a tool.
//      Mono Runtime Version: 4.0.30319.1
// 
//      Changes to this file may cause incorrect behavior and will be lost if 
//      the code is regenerated.
//  </autogenerated>
// ------------------------------------------------------------------------------
using System;
using UnityEngine;
namespace Utilities {
  
  public class UtilityMethods {
    public static bool textIsValid(string text) {
      return text != null && text.Length > 0;
    }
    
    public static bool ParseStringToInt(string text, string ErrorDescription, out int ParsedInt) {
      try {
        ParsedInt = System.Convert.ToInt32(text);
      } catch {
        Debug.Log(String.Format("{0}: {1} isn't valid", ErrorDescription, text)); 
        // Have to assign a number to the our parameter before leaving the method
        ParsedInt = 0;
        return false;
      }
      return true;
    }
    
    public static bool ParseStringToDecimal(string text, string ErrorDescription, out decimal ParsedDecimal) {
      try {
        ParsedDecimal = System.Convert.ToDecimal(text);
      } catch {
        Debug.Log(String.Format("{0}: {1} isn't valid", ErrorDescription, text)); 
        // Have to assign a number to the our parameter before leaving the method
        ParsedDecimal = 0.0m;
        return false;
      }
      return true;
    }
  }
  
	public class Constants {
    // Scene names
    public static string MainMenuScene = "MainMenu";
    public static string SetCustomAttributesScene = "SetCustomAttributes";
    public static string SetCustomAttributesArrayScene = "SetCustomAttributesArray";
    public static string ChangeUserScene = "ChangeUser";
    public static string LogCustomEventScene = "LogCustomEvent";
    public static string LogPurchaseScene = "LogPurchase";
    public static string SetUserFieldScene = "SetUserField";
    public static string CustomAttributesSettingScene = "CustomAttributesSetting";
    
    // Change User
    public static string ChangeUserCancelLog = "Cancel changing User ID.";
    
    // CUstom Attributes Setting
    public static string IncrementValueParseErrorDescription = "Increment value";
    
    // Log Custom Event
    public static string CustomEventCancelLog = "Cancel logging custom event.";
    
    // Log Purchase
    public static string PurchasePriceParseErrorDescription = "Log Purchase price value";
    public static string PurchaseQuantityParseErrorDescription = "Log Purchase quantity value";
    public static string PurchaseCancelLog = "Cancel logging purchase.";
    
    // Set Custom Attribute
    public static string CustomAttributeIntParseErrorDescription = "Int custom attribute value";
    
    // Set User Field
    public static string BirthdayMonthParseErrorDescription = "The birthday month number" ;
    public static string BirthdayDayParseErrorDescription = "The birthday day number" ;
    public static string BirthdayYearParseErrorDescription = "The birthday year number" ;
	}
}
