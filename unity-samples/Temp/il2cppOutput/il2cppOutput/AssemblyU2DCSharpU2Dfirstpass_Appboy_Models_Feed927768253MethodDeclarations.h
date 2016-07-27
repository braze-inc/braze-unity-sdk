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
struct Feed_t927768253;
// System.String
struct String_t;
// System.Collections.Generic.List`1<Appboy.Models.Cards.Card>
struct List_1_t4215507743;
// Appboy.Models.Cards.Card
struct Card_t3418548774;
// Appboy.Utilities.JSONClass
struct JSONClass_t439433485;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Appboy_Utilities_JSON439433485.h"

// System.Void Appboy.Models.Feed::.ctor(System.String)
extern "C"  void Feed__ctor_m1721691442 (Feed_t927768253 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Appboy.Models.Cards.Card> Appboy.Models.Feed::get_Cards()
extern "C"  List_1_t4215507743 * Feed_get_Cards_m3684501145 (Feed_t927768253 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.Feed::set_Cards(System.Collections.Generic.List`1<Appboy.Models.Cards.Card>)
extern "C"  void Feed_set_Cards_m1916063322 (Feed_t927768253 * __this, List_1_t4215507743 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Appboy.Models.Feed::get_Count()
extern "C"  int32_t Feed_get_Count_m288077598 (Feed_t927768253 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Appboy.Models.Feed::get_IsFromOfflineStorage()
extern "C"  bool Feed_get_IsFromOfflineStorage_m1171457221 (Feed_t927768253 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.Feed::set_IsFromOfflineStorage(System.Boolean)
extern "C"  void Feed_set_IsFromOfflineStorage_m732609620 (Feed_t927768253 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Models.Cards.Card Appboy.Models.Feed::CreateCardFromJson(Appboy.Utilities.JSONClass)
extern "C"  Card_t3418548774 * Feed_CreateCardFromJson_m3712290674 (Il2CppObject * __this /* static, unused */, JSONClass_t439433485 * ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
