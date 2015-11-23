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

// Appboy.Models.InAppMessage.InAppMessageBase
struct InAppMessageBase_t48;
// Appboy.Utilities.JSONClass
struct JSONClass_t22;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t50;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Nullable_1_gen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Appboy_Models_ClickAction.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Appboy_Models_DismissType.h"

// System.Void Appboy.Models.InAppMessage.InAppMessageBase::.ctor()
extern "C" void InAppMessageBase__ctor_m379 (InAppMessageBase_t48 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.InAppMessage.InAppMessageBase::.ctor(Appboy.Utilities.JSONClass)
extern "C" void InAppMessageBase__ctor_m380 (InAppMessageBase_t48 * __this, JSONClass_t22 * ___json, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<UnityEngine.Color> Appboy.Models.InAppMessage.InAppMessageBase::get_BackgroundColor()
extern "C" Nullable_1_t49  InAppMessageBase_get_BackgroundColor_m381 (InAppMessageBase_t48 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.InAppMessage.InAppMessageBase::set_BackgroundColor(System.Nullable`1<UnityEngine.Color>)
extern "C" void InAppMessageBase_set_BackgroundColor_m382 (InAppMessageBase_t48 * __this, Nullable_1_t49  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<UnityEngine.Color> Appboy.Models.InAppMessage.InAppMessageBase::get_TextColor()
extern "C" Nullable_1_t49  InAppMessageBase_get_TextColor_m383 (InAppMessageBase_t48 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.InAppMessage.InAppMessageBase::set_TextColor(System.Nullable`1<UnityEngine.Color>)
extern "C" void InAppMessageBase_set_TextColor_m384 (InAppMessageBase_t48 * __this, Nullable_1_t49  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Models.InAppMessage.InAppMessageBase::get_Icon()
extern "C" String_t* InAppMessageBase_get_Icon_m385 (InAppMessageBase_t48 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.InAppMessage.InAppMessageBase::set_Icon(System.String)
extern "C" void InAppMessageBase_set_Icon_m386 (InAppMessageBase_t48 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<UnityEngine.Color> Appboy.Models.InAppMessage.InAppMessageBase::get_IconColor()
extern "C" Nullable_1_t49  InAppMessageBase_get_IconColor_m387 (InAppMessageBase_t48 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.InAppMessage.InAppMessageBase::set_IconColor(System.Nullable`1<UnityEngine.Color>)
extern "C" void InAppMessageBase_set_IconColor_m388 (InAppMessageBase_t48 * __this, Nullable_1_t49  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<UnityEngine.Color> Appboy.Models.InAppMessage.InAppMessageBase::get_IconBackgroundColor()
extern "C" Nullable_1_t49  InAppMessageBase_get_IconBackgroundColor_m389 (InAppMessageBase_t48 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.InAppMessage.InAppMessageBase::set_IconBackgroundColor(System.Nullable`1<UnityEngine.Color>)
extern "C" void InAppMessageBase_set_IconBackgroundColor_m390 (InAppMessageBase_t48 * __this, Nullable_1_t49  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Models.InAppMessage.InAppMessageBase::get_ImageURI()
extern "C" String_t* InAppMessageBase_get_ImageURI_m391 (InAppMessageBase_t48 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.InAppMessage.InAppMessageBase::set_ImageURI(System.String)
extern "C" void InAppMessageBase_set_ImageURI_m392 (InAppMessageBase_t48 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Models.InAppMessage.InAppMessageBase::get_Message()
extern "C" String_t* InAppMessageBase_get_Message_m393 (InAppMessageBase_t48 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.InAppMessage.InAppMessageBase::set_Message(System.String)
extern "C" void InAppMessageBase_set_Message_m394 (InAppMessageBase_t48 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> Appboy.Models.InAppMessage.InAppMessageBase::get_Extras()
extern "C" Dictionary_2_t50 * InAppMessageBase_get_Extras_m395 (InAppMessageBase_t48 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.InAppMessage.InAppMessageBase::set_Extras(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C" void InAppMessageBase_set_Extras_m396 (InAppMessageBase_t48 * __this, Dictionary_2_t50 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Models.ClickAction Appboy.Models.InAppMessage.InAppMessageBase::get_InAppClickAction()
extern "C" int32_t InAppMessageBase_get_InAppClickAction_m397 (InAppMessageBase_t48 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.InAppMessage.InAppMessageBase::set_InAppClickAction(Appboy.Models.ClickAction)
extern "C" void InAppMessageBase_set_InAppClickAction_m398 (InAppMessageBase_t48 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Models.InAppMessage.InAppMessageBase::get_URI()
extern "C" String_t* InAppMessageBase_get_URI_m399 (InAppMessageBase_t48 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.InAppMessage.InAppMessageBase::set_URI(System.String)
extern "C" void InAppMessageBase_set_URI_m400 (InAppMessageBase_t48 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Models.DismissType Appboy.Models.InAppMessage.InAppMessageBase::get_InAppDismissType()
extern "C" int32_t InAppMessageBase_get_InAppDismissType_m401 (InAppMessageBase_t48 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.InAppMessage.InAppMessageBase::set_InAppDismissType(Appboy.Models.DismissType)
extern "C" void InAppMessageBase_set_InAppDismissType_m402 (InAppMessageBase_t48 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Appboy.Models.InAppMessage.InAppMessageBase::get_Duration()
extern "C" int32_t InAppMessageBase_get_Duration_m403 (InAppMessageBase_t48 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.InAppMessage.InAppMessageBase::set_Duration(System.Int32)
extern "C" void InAppMessageBase_set_Duration_m404 (InAppMessageBase_t48 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Models.InAppMessage.InAppMessageBase::ToString()
extern "C" String_t* InAppMessageBase_ToString_m405 (InAppMessageBase_t48 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.InAppMessage.InAppMessageBase::LogClicked()
extern "C" void InAppMessageBase_LogClicked_m406 (InAppMessageBase_t48 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.InAppMessage.InAppMessageBase::LogImpression()
extern "C" void InAppMessageBase_LogImpression_m407 (InAppMessageBase_t48 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Appboy.Models.InAppMessage.InAppMessageBase::SetInAppClickAction(Appboy.Models.ClickAction)
extern "C" bool InAppMessageBase_SetInAppClickAction_m408 (InAppMessageBase_t48 * __this, int32_t ___clickAction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Appboy.Models.InAppMessage.InAppMessageBase::SetInAppClickAction(Appboy.Models.ClickAction,System.String)
extern "C" bool InAppMessageBase_SetInAppClickAction_m409 (InAppMessageBase_t48 * __this, int32_t ___clickAction, String_t* ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
