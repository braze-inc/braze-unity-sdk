#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Appboy.Models.Cards.Card
struct Card_t3418548774;
// Appboy.Utilities.JSONClass
struct JSONClass_t439433485;
// System.String
struct String_t;
// System.Collections.Generic.HashSet`1<Appboy.Models.CardCategory>
struct HashSet_1_t7921132;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t2606186806;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Appboy_Utilities_JSON439433485.h"
#include "mscorlib_System_String968488902.h"

// System.Void Appboy.Models.Cards.Card::.ctor(Appboy.Utilities.JSONClass)
extern "C"  void Card__ctor_m2236867178 (Card_t3418548774 * __this, JSONClass_t439433485 * ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Models.Cards.Card::get_ID()
extern "C"  String_t* Card_get_ID_m4234879960 (Card_t3418548774 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.Cards.Card::set_ID(System.String)
extern "C"  void Card_set_ID_m3328504249 (Card_t3418548774 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Models.Cards.Card::get_Type()
extern "C"  String_t* Card_get_Type_m2751683415 (Card_t3418548774 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.Cards.Card::set_Type(System.String)
extern "C"  void Card_set_Type_m539326682 (Card_t3418548774 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Appboy.Models.Cards.Card::get_Viewed()
extern "C"  bool Card_get_Viewed_m4176371802 (Card_t3418548774 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.Cards.Card::set_Viewed(System.Boolean)
extern "C"  void Card_set_Viewed_m4146392617 (Card_t3418548774 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Appboy.Models.Cards.Card::get_Created()
extern "C"  int64_t Card_get_Created_m1334554105 (Card_t3418548774 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.Cards.Card::set_Created(System.Int64)
extern "C"  void Card_set_Created_m1384813614 (Card_t3418548774 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Appboy.Models.Cards.Card::get_Updated()
extern "C"  int64_t Card_get_Updated_m3081955084 (Card_t3418548774 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.Cards.Card::set_Updated(System.Int64)
extern "C"  void Card_set_Updated_m2556283073 (Card_t3418548774 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.HashSet`1<Appboy.Models.CardCategory> Appboy.Models.Cards.Card::get_Categories()
extern "C"  HashSet_1_t7921132 * Card_get_Categories_m166944402 (Card_t3418548774 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.Cards.Card::set_Categories(System.Collections.Generic.HashSet`1<Appboy.Models.CardCategory>)
extern "C"  void Card_set_Categories_m2275701857 (Card_t3418548774 * __this, HashSet_1_t7921132 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Models.Cards.Card::get_JsonString()
extern "C"  String_t* Card_get_JsonString_m1504482934 (Card_t3418548774 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.Cards.Card::set_JsonString(System.String)
extern "C"  void Card_set_JsonString_m2084712667 (Card_t3418548774 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> Appboy.Models.Cards.Card::get_Extras()
extern "C"  Dictionary_2_t2606186806 * Card_get_Extras_m57808307 (Card_t3418548774 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.Cards.Card::set_Extras(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  void Card_set_Extras_m202146690 (Card_t3418548774 * __this, Dictionary_2_t2606186806 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Models.Cards.Card::ToString()
extern "C"  String_t* Card_ToString_m1919379712 (Card_t3418548774 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.Cards.Card::LogImpression()
extern "C"  void Card_LogImpression_m1243047230 (Card_t3418548774 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Models.Cards.Card::CategoriesToString()
extern "C"  String_t* Card_CategoriesToString_m892091516 (Card_t3418548774 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.Cards.Card::LogClick()
extern "C"  void Card_LogClick_m4172440469 (Card_t3418548774 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
