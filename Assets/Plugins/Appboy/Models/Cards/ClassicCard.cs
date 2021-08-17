using Appboy.Utilities;
using System;

namespace Appboy.Models.Cards {
  public class ClassicCard : Card {
    public string Description { get; private set; }

    public string ImageUrl { get; private set; }

    // Optional
    public string Title { get; private set; }

    public string Url { get; private set; }

    public string Domain { get; private set; }

    public ClassicCard(JSONClass json) : base(json) {
      if (json["description"] == null || json["image"] == null) {
        throw new ArgumentException("Missing required field(s).");
      }
      Description = json["description"];
      ImageUrl = json["image"];
      if (json["title"] != null) {
        Title = json["title"];
      }
      if (json["url"] != null) {
        Url = json["url"];
      }
      if (json["domain"] != null) {
        Domain = json["domain"];
      }
    }

    public override string ToString() {
      return String.Format("ClassicCard[{0}, Description={1}, ImageUrl={2}, " +
                           "Title={3}, Url={4}, Domain={5}",
                           base.ToString(), Description, ImageUrl, Title, Url, Domain);
    }
  }
}
