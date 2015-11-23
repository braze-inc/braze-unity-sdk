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
struct Card_t36;
// Appboy.Utilities.JSONClass
struct JSONClass_t22;
// System.String
struct String_t;
// System.Collections.Generic.HashSet`1<Appboy.Models.CardCategory>
struct HashSet_1_t38;

#include "codegen/il2cpp-codegen.h"

// System.Void Appboy.Models.Cards.Card::.ctor(Appboy.Utilities.JSONClass)
extern "C" void Card__ctor_m308 (Card_t36 * __this, JSONClass_t22 * ___json, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Models.Cards.Card::get_ID()
extern "C" String_t* Card_get_ID_m309 (Card_t36 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.Cards.Card::set_ID(System.String)
extern "C" void Card_set_ID_m310 (Card_t36 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Models.Cards.Card::get_Type()
extern "C" String_t* Card_get_Type_m311 (Card_t36 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.Cards.Card::set_Type(System.String)
extern "C" void Card_set_Type_m312 (Card_t36 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Appboy.Models.Cards.Card::get_Viewed()
extern "C" bool Card_get_Viewed_m313 (Card_t36 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.Cards.Card::set_Viewed(System.Boolean)
extern "C" void Card_set_Viewed_m314 (Card_t36 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Appboy.Models.Cards.Card::get_Created()
extern "C" int64_t Card_get_Created_m315 (Card_t36 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.Cards.Card::set_Created(System.Int64)
extern "C" void Card_set_Created_m316 (Card_t36 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Appboy.Models.Cards.Card::get_Updated()
extern "C" int64_t Card_get_Updated_m317 (Card_t36 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.Cards.Card::set_Updated(System.Int64)
extern "C" void Card_set_Updated_m318 (Card_t36 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.HashSet`1<Appboy.Models.CardCategory> Appboy.Models.Cards.Card::get_Categories()
extern "C" HashSet_1_t38 * Card_get_Categories_m319 (Card_t36 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.Cards.Card::set_Categories(System.Collections.Generic.HashSet`1<Appboy.Models.CardCategory>)
extern "C" void Card_set_Categories_m320 (Card_t36 * __this, HashSet_1_t38 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Models.Cards.Card::get_JsonString()
extern "C" String_t* Card_get_JsonString_m321 (Card_t36 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.Cards.Card::set_JsonString(System.String)
extern "C" void Card_set_JsonString_m322 (Card_t36 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.Cards.Card::LogImpression()
extern "C" void Card_LogImpression_m323 (Card_t36 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Models.Cards.Card::CategoriesToString()
extern "C" String_t* Card_CategoriesToString_m324 (Card_t36 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.Cards.Card::LogClick()
extern "C" void Card_LogClick_m325 (Card_t36 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
