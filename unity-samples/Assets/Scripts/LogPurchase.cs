using UnityEngine;
using UnityEngine.UI;
using System;
using Utilities;
using Appboy;

public class LogPurchase : MonoBehaviour {

  public InputField ProductNameField;
  public InputField ProductPriceField;
  public InputField ProductQuantityField;
  
  public void OnDoneButtonClick() {
    if (UtilityMethods.textIsValid(ProductNameField.text) && 
        UtilityMethods.textIsValid(ProductPriceField.text) && 
        UtilityMethods.textIsValid(ProductQuantityField.text)) {
      decimal price;
      int quantity;
      if (UtilityMethods.ParseStringToDecimal(ProductPriceField.text, Constants.PurchasePriceParseErrorDescription, out price) && 
          UtilityMethods.ParseStringToInt(ProductQuantityField.text, Constants.PurchaseQuantityParseErrorDescription, out quantity)) {
        Debug.Log(String.Format("Logging purchase {0} with price {1} and quantity {2}", ProductNameField.text, price, quantity));
        Appboy.AppboyBinding.LogPurchase(ProductNameField.text, "USD", price, quantity);
        Application.LoadLevel(Constants.MainMenuScene);
      }
    }
  }
  
  public void OnCancelButtonClick() {
    Debug.Log(String.Format(Constants.PurchaseCancelLog));
    Application.LoadLevel(Constants.MainMenuScene);
  }
}