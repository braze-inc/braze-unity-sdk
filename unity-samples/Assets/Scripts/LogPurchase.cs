using UnityEngine;
using UnityEngine.UI;
using System;
using Utilities;
using Appboy;
using System.Collections.Generic;

public class LogPurchase : MonoBehaviour {

  public InputField ProductNameField;
  public InputField ProductPriceField;
  public InputField ProductQuantityField;
  public InputField PurchasePropertiesKeyField;
  public InputField PurchasePropertiesValueField;
  public Dictionary<string, object> PurchaseProperties;

  
  public void OnDoneButtonClick() {
    if (UtilityMethods.textIsValid(ProductNameField.text) && 
        UtilityMethods.textIsValid(ProductPriceField.text) && 
        UtilityMethods.textIsValid(ProductQuantityField.text)) {
      decimal price;
      int quantity;
      if (UtilityMethods.ParseStringToDecimal(ProductPriceField.text, Constants.PurchasePriceParseErrorDescription, out price) && 
          UtilityMethods.ParseStringToInt(ProductQuantityField.text, Constants.PurchaseQuantityParseErrorDescription, out quantity)) {
        Debug.Log(String.Format("Logging purchase {0} with price {1} and quantity {2}", ProductNameField.text, price, quantity));
        if (PurchaseProperties == null) {
          Appboy.AppboyBinding.LogPurchase(ProductNameField.text, "USD", price, quantity);
        } else {
          Appboy.AppboyBinding.LogPurchase(ProductNameField.text, "USD", price, quantity, PurchaseProperties);
        }
        Application.LoadLevel(Constants.MainMenuScene);
      }
    }
  }
  
  public void OnCancelButtonClick() {
    Debug.Log(String.Format(Constants.PurchaseCancelLog));
    Application.LoadLevel(Constants.MainMenuScene);
  }

  public void AddTestPropertiesButtonClick() {
    if (PurchaseProperties == null) {
      PurchaseProperties = new Dictionary<string, object> ();
    }

    PurchaseProperties["intprop"] = 1;
    PurchaseProperties["doubleprop"] = 1.2D;
    PurchaseProperties["floatprop"] = 1.2F;
    PurchaseProperties["testcoercion"] = "11";
    PurchaseProperties["dateprop"] = DateTime.Today;
    PurchaseProperties["boolprop"] = true;
    PurchaseProperties["nullprop"] = null;
    PurchaseProperties["objprop"] = new object();
  }

  public void AddPropertyButtonClick() {
    if (!UtilityMethods.textIsValid (PurchasePropertiesKeyField.text) ||
      !UtilityMethods.textIsValid (PurchasePropertiesValueField.text)) {
      Debug.Log ("Key and value must be valid strings.");
      return;
    }
    Debug.Log(String.Format("Add Property {0} : {1}", PurchasePropertiesKeyField.text, PurchasePropertiesValueField.text));
    if (PurchaseProperties == null) {
      PurchaseProperties = new Dictionary<string, object> ();
    }
    PurchaseProperties.Add(PurchasePropertiesKeyField.text, PurchasePropertiesValueField.text);
  }
}