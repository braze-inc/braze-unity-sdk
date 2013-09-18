using System;
using Appboy;

namespace Appboy {
  public class Slideup {
    public string Type { get; set; }
    public string Message { get; set; }
    public int DurationInMs { get; set; }

    public Slideup(JSONClass json) {
      Type = json["type"];
      Message = json["message"];
      DurationInMs = json["duration"].AsInt;
    }
		
    public override string ToString() {
      return "Slideup: Type[" + Type + "], Message[" + Message + "], DurationInMs[" + DurationInMs + "]";
    }    
  }
}

