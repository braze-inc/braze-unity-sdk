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

// Appboy.Models.Feed
struct Feed_t44;
// System.String
struct String_t;
// System.Collections.Generic.List`1<Appboy.Models.Cards.Card>
struct List_1_t45;
// Appboy.Models.Cards.Card
struct Card_t36;
// Appboy.Utilities.JSONClass
struct JSONClass_t22;

#include "codegen/il2cpp-codegen.h"

// System.Void Appboy.Models.Feed::.ctor(System.String)
extern "C" void Feed__ctor_m372 (Feed_t44 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Appboy.Models.Cards.Card> Appboy.Models.Feed::get_Cards()
extern "C" List_1_t45 * Feed_get_Cards_m373 (Feed_t44 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.Feed::set_Cards(System.Collections.Generic.List`1<Appboy.Models.Cards.Card>)
extern "C" void Feed_set_Cards_m374 (Feed_t44 * __this, List_1_t45 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Appboy.Models.Feed::get_Count()
extern "C" int32_t Feed_get_Count_m375 (Feed_t44 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Appboy.Models.Feed::get_IsFromOfflineStorage()
extern "C" bool Feed_get_IsFromOfflineStorage_m376 (Feed_t44 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.Feed::set_IsFromOfflineStorage(System.Boolean)
extern "C" void Feed_set_IsFromOfflineStorage_m377 (Feed_t44 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Models.Cards.Card Appboy.Models.Feed::CreateCardFromJson(Appboy.Utilities.JSONClass)
extern "C" Card_t36 * Feed_CreateCardFromJson_m378 (Object_t * __this /* static, unused */, JSONClass_t22 * ___json, const MethodInfo* method) IL2CPP_METHOD_ATTR;
