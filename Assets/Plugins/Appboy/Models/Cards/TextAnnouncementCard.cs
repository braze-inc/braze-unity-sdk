using Appboy.Utilities;
using System;

namespace Appboy.Models.Cards {
  public class TextAnnouncementCard : Card {
    public string Title { get; private set; }

    public string Description { get; private set; }
    // Optional
    public string Url { get; private set; }

    public string Domain { get; private set; }

    public TextAnnouncementCard(JSONObject json) : base(json) {
      if (json["title"] == null || json["description"] == null) {
        throw new ArgumentException("Missing required field(s).");
      }
      Title = json["title"];
      Description = json["description"];
      if (json["url"] != null) {
        Url = json["url"];
      }
      if (json["domain"] != null) {
        Domain = json["domain"];
      }
    }

    public override string ToString() {
      return String.Format("TextAnnouncementCard[{0}, Title={1}, Description={2}, Url={3}, Domain={4}]",
                           base.ToString(), Title, Description, Url, Domain);
    }
  }
}