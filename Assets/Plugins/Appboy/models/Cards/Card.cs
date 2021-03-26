using Appboy.Utilities;
using System;
using System.Collections.Generic;
using Appboy.Models;
using UnityEngine;

namespace Appboy.Models.Cards {
  public class Card {
    public string ID { get; private set; }

    public string Type { get; private set; }

    public bool Viewed { get; private set; }

    public long Created { get; private set; }

    public long Updated { get; private set; }

    public HashSet<CardCategory> Categories { get; private set; }

    public string JsonString { get; private set; }

    public Dictionary<string, string> Extras { get; set; }

    public Card(JSONClass json) {
      if (json == null) {
        throw new ArgumentNullException("json");
      }
      JsonString = json.ToString();
      if (json["id"] == null || json["type"] == null || json["viewed"] == null || json["created"] == null || json["updated"] == null) {
        throw new ArgumentException("Missing required field(s).");
      }
      ID = json["id"];
      Type = json["type"];
      Viewed = json["viewed"].AsBool;
      Created = json["created"].AsInt;
      Updated = json["updated"].AsInt;
      if (json["extras"] != null) {
        Extras = JsonUtils.JSONClassToDictionary(json["extras"].AsObject);
      }
      Categories = new HashSet<CardCategory>();
      if (json["categories"] == null) {
        Categories.Add(CardCategory.NO_CATEGORY);
      } else {
        JSONArray jsonArray = (JSONArray)JSON.Parse(json["categories"].ToString());
        if (jsonArray == null || jsonArray.Count == 0) {
          Categories.Add(CardCategory.NO_CATEGORY);
        } else {
          for (int i = 0; i < jsonArray.Count; i++) {
            CardCategory category = (CardCategory)EnumUtils.TryParse(typeof(CardCategory), jsonArray[i], true, CardCategory.NO_CATEGORY);
            Categories.Add(category);
          }
          if (Categories.Count == 0) {
            Categories.Add(CardCategory.NO_CATEGORY);
          }
        }
      }

    }

    public override string ToString() {
      return String.Format("{0}: ID={1}, Type={2}, Viewed={3}, Created={4}, Extras={5}, Updated={6}" +
                           "Categories={7}",
                           this.GetType().Name, ID, Type, Viewed, Created, CollectionUtils.DictionaryToString(Extras),
                           Updated, CategoriesToString());
    }

    public void LogImpression() {
      if (!string.IsNullOrEmpty(ID)) {
#if UNITY_ANDROID
        AppboyBinding.Appboy.Call("logFeedCardImpression", ID);
#elif UNITY_IOS
        AppboyBinding.LogCardImpression(JsonString);
#endif
      }
    }

    public string CategoriesToString() {
      List<string> categoriesString = new List<string>();
      foreach (CardCategory category in Categories) {
        categoriesString.Add(category.ToString());
      }
      return string.Join(",", categoriesString.ToArray());
    }

    public void LogClick() {
      if (!string.IsNullOrEmpty(ID)) {
#if UNITY_ANDROID
        AppboyBinding.Appboy.Call("logFeedCardClick", ID);
#elif UNITY_IOS
        AppboyBinding.LogCardClicked(JsonString);
#endif
      }
    }
  }
}
