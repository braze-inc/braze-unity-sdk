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
struct InAppMessageImmersiveBase_t903302277;
// Appboy.Utilities.JSONClass
struct JSONClass_t439433485;
// System.String
struct String_t;
// System.Collections.Generic.List`1<Appboy.Models.InAppMessage.InAppMessageButton>
struct List_1_t2988912186;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Appboy_Utilities_JSON439433485.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Nullable_1_gen179246372.h"

// System.Void Appboy.Models.InAppMessage.InAppMessageImmersiveBase::.ctor()
extern "C"  void InAppMessageImmersiveBase__ctor_m316551440 (InAppMessageImmersiveBase_t903302277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.InAppMessage.InAppMessageImmersiveBase::.ctor(Appboy.Utilities.JSONClass)
extern "C"  void InAppMessageImmersiveBase__ctor_m4177514055 (InAppMessageImmersiveBase_t903302277 * __this, JSONClass_t439433485 * ___json, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Models.InAppMessage.InAppMessageImmersiveBase::get_Header()
extern "C"  String_t* InAppMessageImmersiveBase_get_Header_m2784399469 (InAppMessageImmersiveBase_t903302277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.InAppMessage.InAppMessageImmersiveBase::set_Header(System.String)
extern "C"  void InAppMessageImmersiveBase_set_Header_m961064260 (InAppMessageImmersiveBase_t903302277 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<UnityEngine.Color> Appboy.Models.InAppMessage.InAppMessageImmersiveBase::get_HeaderTextColor()
extern "C"  Nullable_1_t179246372  InAppMessageImmersiveBase_get_HeaderTextColor_m225051046 (InAppMessageImmersiveBase_t903302277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.InAppMessage.InAppMessageImmersiveBase::set_HeaderTextColor(System.Nullable`1<UnityEngine.Color>)
extern "C"  void InAppMessageImmersiveBase_set_HeaderTextColor_m211169565 (InAppMessageImmersiveBase_t903302277 * __this, Nullable_1_t179246372  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<UnityEngine.Color> Appboy.Models.InAppMessage.InAppMessageImmersiveBase::get_CloseButtonColor()
extern "C"  Nullable_1_t179246372  InAppMessageImmersiveBase_get_CloseButtonColor_m1072377790 (InAppMessageImmersiveBase_t903302277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.InAppMessage.InAppMessageImmersiveBase::set_CloseButtonColor(System.Nullable`1<UnityEngine.Color>)
extern "C"  void InAppMessageImmersiveBase_set_CloseButtonColor_m815963021 (InAppMessageImmersiveBase_t903302277 * __this, Nullable_1_t179246372  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Appboy.Models.InAppMessage.InAppMessageButton> Appboy.Models.InAppMessage.InAppMessageImmersiveBase::get_Buttons()
extern "C"  List_1_t2988912186 * InAppMessageImmersiveBase_get_Buttons_m4223847422 (InAppMessageImmersiveBase_t903302277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.InAppMessage.InAppMessageImmersiveBase::set_Buttons(System.Collections.Generic.List`1<Appboy.Models.InAppMessage.InAppMessageButton>)
extern "C"  void InAppMessageImmersiveBase_set_Buttons_m701013365 (InAppMessageImmersiveBase_t903302277 * __this, List_1_t2988912186 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Models.InAppMessage.InAppMessageImmersiveBase::ToString()
extern "C"  String_t* InAppMessageImmersiveBase_ToString_m1320767299 (InAppMessageImmersiveBase_t903302277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.InAppMessage.InAppMessageImmersiveBase::LogButtonClicked(System.Int32)
extern "C"  void InAppMessageImmersiveBase_LogButtonClicked_m776913654 (InAppMessageImmersiveBase_t903302277 * __this, int32_t ___buttonID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
