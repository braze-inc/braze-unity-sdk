#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Appboy.Models.InAppMessage.InAppMessageButton
struct InAppMessageButton_t60;
// System.String
struct String_t;
// Appboy.Utilities.JSONClass
struct JSONClass_t15;
// Appboy.Models.ClickAction
#include "AssemblyU2DCSharpU2Dfirstpass_Appboy_Models_ClickAction.h"
// System.Nullable`1<UnityEngine.Color>
#include "mscorlib_System_Nullable_1_gen.h"

// System.Void Appboy.Models.InAppMessage.InAppMessageButton::.ctor()
 void InAppMessageButton__ctor_m410 (InAppMessageButton_t60 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.InAppMessage.InAppMessageButton::.ctor(Appboy.Utilities.JSONClass)
 void InAppMessageButton__ctor_m411 (InAppMessageButton_t60 * __this, JSONClass_t15 * ___json, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Appboy.Models.InAppMessage.InAppMessageButton::get_ButtonID()
 int32_t InAppMessageButton_get_ButtonID_m412 (InAppMessageButton_t60 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.InAppMessage.InAppMessageButton::set_ButtonID(System.Int32)
 void InAppMessageButton_set_ButtonID_m413 (InAppMessageButton_t60 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Models.InAppMessage.InAppMessageButton::get_Text()
 String_t* InAppMessageButton_get_Text_m414 (InAppMessageButton_t60 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.InAppMessage.InAppMessageButton::set_Text(System.String)
 void InAppMessageButton_set_Text_m415 (InAppMessageButton_t60 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Models.InAppMessage.InAppMessageButton::get_URI()
 String_t* InAppMessageButton_get_URI_m416 (InAppMessageButton_t60 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.InAppMessage.InAppMessageButton::set_URI(System.String)
 void InAppMessageButton_set_URI_m417 (InAppMessageButton_t60 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Models.ClickAction Appboy.Models.InAppMessage.InAppMessageButton::get_ButtonClickAction()
 int32_t InAppMessageButton_get_ButtonClickAction_m418 (InAppMessageButton_t60 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.InAppMessage.InAppMessageButton::set_ButtonClickAction(Appboy.Models.ClickAction)
 void InAppMessageButton_set_ButtonClickAction_m419 (InAppMessageButton_t60 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<UnityEngine.Color> Appboy.Models.InAppMessage.InAppMessageButton::get_TextColor()
 Nullable_1_t11  InAppMessageButton_get_TextColor_m420 (InAppMessageButton_t60 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.InAppMessage.InAppMessageButton::set_TextColor(System.Nullable`1<UnityEngine.Color>)
 void InAppMessageButton_set_TextColor_m421 (InAppMessageButton_t60 * __this, Nullable_1_t11  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<UnityEngine.Color> Appboy.Models.InAppMessage.InAppMessageButton::get_BackgroundColor()
 Nullable_1_t11  InAppMessageButton_get_BackgroundColor_m422 (InAppMessageButton_t60 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.InAppMessage.InAppMessageButton::set_BackgroundColor(System.Nullable`1<UnityEngine.Color>)
 void InAppMessageButton_set_BackgroundColor_m423 (InAppMessageButton_t60 * __this, Nullable_1_t11  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Models.InAppMessage.InAppMessageButton::ToString()
 String_t* InAppMessageButton_ToString_m424 (InAppMessageButton_t60 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Appboy.Models.InAppMessage.InAppMessageButton::SetButtonClickAction(Appboy.Models.ClickAction)
 bool InAppMessageButton_SetButtonClickAction_m425 (InAppMessageButton_t60 * __this, int32_t ___clickAction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Appboy.Models.InAppMessage.InAppMessageButton::SetButtonClickAction(Appboy.Models.ClickAction,System.String)
 bool InAppMessageButton_SetButtonClickAction_m426 (InAppMessageButton_t60 * __this, int32_t ___clickAction, String_t* ___uri, MethodInfo* method) IL2CPP_METHOD_ATTR;
