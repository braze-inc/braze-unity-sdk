using System;
using UnityEngine;

namespace Appboy.Utilities {
  public class ColorUtils {
    
    // Parsing a string with hex number to color in the format of ARGB. The Hex string can be a uint or int number.
    public static Color? HexToColor(string hex) {
      if (hex != null) {
        int hexInt;
        if (int.TryParse(hex, out hexInt)) {
          return HexToColor(Convert.ToInt32(hexInt));
        } else {
          // The number of hex might be a uint number and exceed the max value of int, try to parse hex to uint.
          uint hexUInt;
          if (UInt32.TryParse(hex, out hexUInt)) {
            return HexToColor((int)hexUInt);
          } else {
            Debug.Log( String.Format("The Hex color string {0} cannot be parsed to int. Return clear color." , hex));
          } 
        }
      } 
      return null;
    }
    
    public static Color HexToColor(int hex) {
      Debug.Log( String.Format("The Hex color int is {0}.", hex));
      byte A = (byte)((hex >> 24) & 0xFF);
      byte R = (byte)((hex >> 16) & 0xFF);
      byte G = (byte)((hex >> 8) & 0xFF);
      byte B = (byte)((hex) & 0xFF);
      Debug.Log( String.Format("The Hex color is a:{0} r:{1} g:{2} b:{3}.", A, R, G, B));
      return new Color(R, G, B, A);
    }
  }
}

