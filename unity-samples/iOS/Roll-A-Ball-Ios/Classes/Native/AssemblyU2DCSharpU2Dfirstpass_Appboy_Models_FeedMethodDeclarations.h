#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Appboy.Models.Feed
struct Feed_t57;
// System.Collections.Generic.List`1<Appboy.Models.Cards.Card>
struct List_1_t10;
// System.String
struct String_t;
// Appboy.Models.Cards.Card
struct Card_t11;
// Appboy.Utilities.JSONClass
struct JSONClass_t17;

// System.Void Appboy.Models.Feed::.ctor(System.String)
 void Feed__ctor_m371 (Feed_t57 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Appboy.Models.Cards.Card> Appboy.Models.Feed::get_Cards()
 List_1_t10 * Feed_get_Cards_m372 (Feed_t57 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.Feed::set_Cards(System.Collections.Generic.List`1<Appboy.Models.Cards.Card>)
 void Feed_set_Cards_m373 (Feed_t57 * __this, List_1_t10 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Appboy.Models.Feed::get_Count()
 int32_t Feed_get_Count_m374 (Feed_t57 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Appboy.Models.Feed::get_IsFromOfflineStorage()
 bool Feed_get_IsFromOfflineStorage_m375 (Feed_t57 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.Feed::set_IsFromOfflineStorage(System.Boolean)
 void Feed_set_IsFromOfflineStorage_m376 (Feed_t57 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Models.Cards.Card Appboy.Models.Feed::CreateCardFromJson(Appboy.Utilities.JSONClass)
 Card_t11 * Feed_CreateCardFromJson_m377 (Object_t * __this/* static, unused */, JSONClass_t17 * ___json, MethodInfo* method) IL2CPP_METHOD_ATTR;
