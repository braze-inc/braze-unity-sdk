using Appboy.Utilities;
using System;
using System.Collections.Generic;
using Appboy.Models;
using UnityEngine;

namespace Appboy.Models.Cards {
  public class ContentCard {
    public string ID { get; private set; }

    public string Type { get; private set; }

    public bool Viewed { get; private set; }

    public long Created { get; private set; }

    public long Expires { get; private set; }

    public string ImageUrl { get; private set; }

    public string Title { get; private set; }

    public string Description { get; private set; }

    public string Url { get; private set; }

    public string Domain { get; private set; }

    public bool Dismissed { get; private set; }

    public bool Removed { get; private set; }

    public bool Pinned { get; private set; }

    public bool Dismissible { get; private set; }

    public bool UseWebView { get; private set; }

    public string JsonString { get; private set; }

    public Dictionary<string, string> Extras { get; set; }

    public ContentCard(JSONClass json) {
      if (json == null) {
        Debug.Log("Json was null.");
        throw new ArgumentNullException("json");
      }
      JsonString = json.ToString();
      ID = json["id"];
      Type = json["tp"];
      Viewed = json["v"].AsBool;
      Created = json["ca"].AsInt;
      Expires = json["ea"].AsInt;
      ImageUrl = json["i"];
      Title = json["tt"];
      Description = json["ds"];
      Url = json["u"];
      Domain = json["dm"];
      Dismissed = json["d"].AsBool;
      Removed = json["r"].AsBool;
      Pinned = json["p"].AsBool;
      Dismissible = json["db"].AsBool;
      UseWebView = json["uw"].AsBool;

      if (json["e"] != null) {
        Extras = JsonUtils.JSONClassToDictionary(json["e"].AsObject);
      }
    }

    public override string ToString() {
      return String.Format("{0}: ID={1}, Type={2}, Viewed={3}, Created={4}, Extras={5}, Expires={6}, " +
                            "ImageUrl={7}, Title={8}, Description={9}, Url={10}, Domain={11}, " +
                            "Dismissed={12}, Removed={13}, Pinned={14}, Dismissible={15}, UseWebView={16}",
                           this.GetType().Name, ID, Type, Viewed, Created, CollectionUtils.DictionaryToString(Extras), Expires,
                           ImageUrl, Title, Description, Url, Domain, Dismissed, Removed, Pinned, Dismissible, UseWebView);
    }

    public void LogImpression() {
      if (!string.IsNullOrEmpty(ID)) {
        Debug.Log("Logging Content Card impression.");
        AppboyBinding.LogContentCardImpression(JsonString);
      } else {
        Debug.Log("No ID found. Not logging Content Card impression.");
      }
    }

    public void LogClick() {
      if (!string.IsNullOrEmpty(ID)) {
        Debug.Log("Logging Content Card click.");
        AppboyBinding.LogContentCardClicked(JsonString);
      } else {
        Debug.Log("No ID found. Not logging Content Card click.");
      }
    }
  }
}
