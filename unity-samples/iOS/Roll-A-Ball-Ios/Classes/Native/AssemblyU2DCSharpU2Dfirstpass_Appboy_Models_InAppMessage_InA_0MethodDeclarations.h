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

// Appboy.Models.InAppMessage.InAppMessageButton
struct InAppMessageButton_t51;
// Appboy.Utilities.JSONClass
struct JSONClass_t22;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Appboy_Models_ClickAction.h"
#include "mscorlib_System_Nullable_1_gen.h"

// System.Void Appboy.Models.InAppMessage.InAppMessageButton::.ctor()
extern "C" void InAppMessageButton__ctor_m410 (InAppMessageButton_t51 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.InAppMessage.InAppMessageButton::.ctor(Appboy.Utilities.JSONClass)
extern "C" void InAppMessageButton__ctor_m411 (InAppMessageButton_t51 * __this, JSONClass_t22 * ___json, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Appboy.Models.InAppMessage.InAppMessageButton::get_ButtonID()
extern "C" int32_t InAppMessageButton_get_ButtonID_m412 (InAppMessageButton_t51 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.InAppMessage.InAppMessageButton::set_ButtonID(System.Int32)
extern "C" void InAppMessageButton_set_ButtonID_m413 (InAppMessageButton_t51 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Models.InAppMessage.InAppMessageButton::get_Text()
extern "C" String_t* InAppMessageButton_get_Text_m414 (InAppMessageButton_t51 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.InAppMessage.InAppMessageButton::set_Text(System.String)
extern "C" void InAppMessageButton_set_Text_m415 (InAppMessageButton_t51 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Models.InAppMessage.InAppMessageButton::get_URI()
extern "C" String_t* InAppMessageButton_get_URI_m416 (InAppMessageButton_t51 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.InAppMessage.InAppMessageButton::set_URI(System.String)
extern "C" void InAppMessageButton_set_URI_m417 (InAppMessageButton_t51 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Models.ClickAction Appboy.Models.InAppMessage.InAppMessageButton::get_ButtonClickAction()
extern "C" int32_t InAppMessageButton_get_ButtonClickAction_m418 (InAppMessageButton_t51 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.InAppMessage.InAppMessageButton::set_ButtonClickAction(Appboy.Models.ClickAction)
extern "C" void InAppMessageButton_set_ButtonClickAction_m419 (InAppMessageButton_t51 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<UnityEngine.Color> Appboy.Models.InAppMessage.InAppMessageButton::get_TextColor()
extern "C" Nullable_1_t49  InAppMessageButton_get_TextColor_m420 (InAppMessageButton_t51 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.InAppMessage.InAppMessageButton::set_TextColor(System.Nullable`1<UnityEngine.Color>)
extern "C" void InAppMessageButton_set_TextColor_m421 (InAppMessageButton_t51 * __this, Nullable_1_t49  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<UnityEngine.Color> Appboy.Models.InAppMessage.InAppMessageButton::get_BackgroundColor()
extern "C" Nullable_1_t49  InAppMessageButton_get_BackgroundColor_m422 (InAppMessageButton_t51 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.InAppMessage.InAppMessageButton::set_BackgroundColor(System.Nullable`1<UnityEngine.Color>)
extern "C" void InAppMessageButton_set_BackgroundColor_m423 (InAppMessageButton_t51 * __this, Nullable_1_t49  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Models.InAppMessage.InAppMessageButton::ToString()
extern "C" String_t* InAppMessageButton_ToString_m424 (InAppMessageButton_t51 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Appboy.Models.InAppMessage.InAppMessageButton::SetButtonClickAction(Appboy.Models.ClickAction)
extern "C" bool InAppMessageButton_SetButtonClickAction_m425 (InAppMessageButton_t51 * __this, int32_t ___clickAction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Appboy.Models.InAppMessage.InAppMessageButton::SetButtonClickAction(Appboy.Models.ClickAction,System.String)
extern "C" bool InAppMessageButton_SetButtonClickAction_m426 (InAppMessageButton_t51 * __this, int32_t ___clickAction, String_t* ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
