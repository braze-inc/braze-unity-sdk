#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Appboy.Models.Cards.Card
struct Card_t11;
// System.String
struct String_t;
// System.Collections.Generic.HashSet`1<Appboy.Models.CardCategory>
struct HashSet_1_t50;
// Appboy.Utilities.JSONClass
struct JSONClass_t17;

// System.Void Appboy.Models.Cards.Card::.ctor(Appboy.Utilities.JSONClass)
 void Card__ctor_m307 (Card_t11 * __this, JSONClass_t17 * ___json, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Models.Cards.Card::get_ID()
 String_t* Card_get_ID_m308 (Card_t11 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.Cards.Card::set_ID(System.String)
 void Card_set_ID_m309 (Card_t11 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Models.Cards.Card::get_Type()
 String_t* Card_get_Type_m310 (Card_t11 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.Cards.Card::set_Type(System.String)
 void Card_set_Type_m311 (Card_t11 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Appboy.Models.Cards.Card::get_Viewed()
 bool Card_get_Viewed_m312 (Card_t11 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.Cards.Card::set_Viewed(System.Boolean)
 void Card_set_Viewed_m313 (Card_t11 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Appboy.Models.Cards.Card::get_Created()
 int32_t Card_get_Created_m314 (Card_t11 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.Cards.Card::set_Created(System.Int32)
 void Card_set_Created_m315 (Card_t11 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Appboy.Models.Cards.Card::get_Updated()
 int32_t Card_get_Updated_m316 (Card_t11 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.Cards.Card::set_Updated(System.Int32)
 void Card_set_Updated_m317 (Card_t11 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.HashSet`1<Appboy.Models.CardCategory> Appboy.Models.Cards.Card::get_Categories()
 HashSet_1_t50 * Card_get_Categories_m318 (Card_t11 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.Cards.Card::set_Categories(System.Collections.Generic.HashSet`1<Appboy.Models.CardCategory>)
 void Card_set_Categories_m319 (Card_t11 * __this, HashSet_1_t50 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Models.Cards.Card::get_JsonString()
 String_t* Card_get_JsonString_m320 (Card_t11 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.Cards.Card::set_JsonString(System.String)
 void Card_set_JsonString_m321 (Card_t11 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.Cards.Card::LogImpression()
 void Card_LogImpression_m322 (Card_t11 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Models.Cards.Card::CategoriesToString()
 String_t* Card_CategoriesToString_m323 (Card_t11 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.Cards.Card::LogClick()
 void Card_LogClick_m324 (Card_t11 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
