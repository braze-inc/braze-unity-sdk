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

// Appboy.Models.InAppMessage.InAppMessageImmersiveBase
struct InAppMessageImmersiveBase_t55;
// Appboy.Utilities.JSONClass
struct JSONClass_t22;
// System.String
struct String_t;
// System.Collections.Generic.List`1<Appboy.Models.InAppMessage.InAppMessageButton>
struct List_1_t56;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Nullable_1_gen.h"

// System.Void Appboy.Models.InAppMessage.InAppMessageImmersiveBase::.ctor()
extern "C" void InAppMessageImmersiveBase__ctor_m433 (InAppMessageImmersiveBase_t55 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.InAppMessage.InAppMessageImmersiveBase::.ctor(Appboy.Utilities.JSONClass)
extern "C" void InAppMessageImmersiveBase__ctor_m434 (InAppMessageImmersiveBase_t55 * __this, JSONClass_t22 * ___json, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Models.InAppMessage.InAppMessageImmersiveBase::get_Header()
extern "C" String_t* InAppMessageImmersiveBase_get_Header_m435 (InAppMessageImmersiveBase_t55 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.InAppMessage.InAppMessageImmersiveBase::set_Header(System.String)
extern "C" void InAppMessageImmersiveBase_set_Header_m436 (InAppMessageImmersiveBase_t55 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<UnityEngine.Color> Appboy.Models.InAppMessage.InAppMessageImmersiveBase::get_HeaderTextColor()
extern "C" Nullable_1_t49  InAppMessageImmersiveBase_get_HeaderTextColor_m437 (InAppMessageImmersiveBase_t55 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.InAppMessage.InAppMessageImmersiveBase::set_HeaderTextColor(System.Nullable`1<UnityEngine.Color>)
extern "C" void InAppMessageImmersiveBase_set_HeaderTextColor_m438 (InAppMessageImmersiveBase_t55 * __this, Nullable_1_t49  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<UnityEngine.Color> Appboy.Models.InAppMessage.InAppMessageImmersiveBase::get_CloseButtonColor()
extern "C" Nullable_1_t49  InAppMessageImmersiveBase_get_CloseButtonColor_m439 (InAppMessageImmersiveBase_t55 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.InAppMessage.InAppMessageImmersiveBase::set_CloseButtonColor(System.Nullable`1<UnityEngine.Color>)
extern "C" void InAppMessageImmersiveBase_set_CloseButtonColor_m440 (InAppMessageImmersiveBase_t55 * __this, Nullable_1_t49  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Appboy.Models.InAppMessage.InAppMessageButton> Appboy.Models.InAppMessage.InAppMessageImmersiveBase::get_Buttons()
extern "C" List_1_t56 * InAppMessageImmersiveBase_get_Buttons_m441 (InAppMessageImmersiveBase_t55 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.InAppMessage.InAppMessageImmersiveBase::set_Buttons(System.Collections.Generic.List`1<Appboy.Models.InAppMessage.InAppMessageButton>)
extern "C" void InAppMessageImmersiveBase_set_Buttons_m442 (InAppMessageImmersiveBase_t55 * __this, List_1_t56 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Models.InAppMessage.InAppMessageImmersiveBase::ToString()
extern "C" String_t* InAppMessageImmersiveBase_ToString_m443 (InAppMessageImmersiveBase_t55 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.InAppMessage.InAppMessageImmersiveBase::LogButtonClicked(System.Int32)
extern "C" void InAppMessageImmersiveBase_LogButtonClicked_m444 (InAppMessageImmersiveBase_t55 * __this, int32_t ___buttonID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
