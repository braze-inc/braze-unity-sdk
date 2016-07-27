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
struct InAppMessageButton_t2191953217;
// Appboy.Utilities.JSONClass
struct JSONClass_t439433485;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Appboy_Utilities_JSON439433485.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Appboy_Models_ClickA3405174461.h"
#include "mscorlib_System_Nullable_1_gen179246372.h"

// System.Void Appboy.Models.InAppMessage.InAppMessageButton::.ctor()
extern "C"  void InAppMessageButton__ctor_m3946090616 (InAppMessageButton_t2191953217 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.InAppMessage.InAppMessageButton::.ctor(Appboy.Utilities.JSONClass)
extern "C"  void InAppMessageButton__ctor_m3489414063 (InAppMessageButton_t2191953217 * __this, JSONClass_t439433485 * ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Appboy.Models.InAppMessage.InAppMessageButton::get_ButtonID()
extern "C"  int32_t InAppMessageButton_get_ButtonID_m3983030700 (InAppMessageButton_t2191953217 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.InAppMessage.InAppMessageButton::set_ButtonID(System.Int32)
extern "C"  void InAppMessageButton_set_ButtonID_m2306177959 (InAppMessageButton_t2191953217 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Models.InAppMessage.InAppMessageButton::get_Text()
extern "C"  String_t* InAppMessageButton_get_Text_m2109604223 (InAppMessageButton_t2191953217 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.InAppMessage.InAppMessageButton::set_Text(System.String)
extern "C"  void InAppMessageButton_set_Text_m3598711308 (InAppMessageButton_t2191953217 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Models.InAppMessage.InAppMessageButton::get_URI()
extern "C"  String_t* InAppMessageButton_get_URI_m2423666364 (InAppMessageButton_t2191953217 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.InAppMessage.InAppMessageButton::set_URI(System.String)
extern "C"  void InAppMessageButton_set_URI_m1188272765 (InAppMessageButton_t2191953217 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Models.ClickAction Appboy.Models.InAppMessage.InAppMessageButton::get_ButtonClickAction()
extern "C"  int32_t InAppMessageButton_get_ButtonClickAction_m863677679 (InAppMessageButton_t2191953217 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.InAppMessage.InAppMessageButton::set_ButtonClickAction(Appboy.Models.ClickAction)
extern "C"  void InAppMessageButton_set_ButtonClickAction_m4170295280 (InAppMessageButton_t2191953217 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<UnityEngine.Color> Appboy.Models.InAppMessage.InAppMessageButton::get_TextColor()
extern "C"  Nullable_1_t179246372  InAppMessageButton_get_TextColor_m2654943211 (InAppMessageButton_t2191953217 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.InAppMessage.InAppMessageButton::set_TextColor(System.Nullable`1<UnityEngine.Color>)
extern "C"  void InAppMessageButton_set_TextColor_m424800978 (InAppMessageButton_t2191953217 * __this, Nullable_1_t179246372  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<UnityEngine.Color> Appboy.Models.InAppMessage.InAppMessageButton::get_BackgroundColor()
extern "C"  Nullable_1_t179246372  InAppMessageButton_get_BackgroundColor_m2073877962 (InAppMessageButton_t2191953217 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.InAppMessage.InAppMessageButton::set_BackgroundColor(System.Nullable`1<UnityEngine.Color>)
extern "C"  void InAppMessageButton_set_BackgroundColor_m3511812657 (InAppMessageButton_t2191953217 * __this, Nullable_1_t179246372  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Models.InAppMessage.InAppMessageButton::ToString()
extern "C"  String_t* InAppMessageButton_ToString_m1295518197 (InAppMessageButton_t2191953217 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Appboy.Models.InAppMessage.InAppMessageButton::SetButtonClickAction(Appboy.Models.ClickAction)
extern "C"  bool InAppMessageButton_SetButtonClickAction_m2745210331 (InAppMessageButton_t2191953217 * __this, int32_t ___clickAction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Appboy.Models.InAppMessage.InAppMessageButton::SetButtonClickAction(Appboy.Models.ClickAction,System.String)
extern "C"  bool InAppMessageButton_SetButtonClickAction_m1873076951 (InAppMessageButton_t2191953217 * __this, int32_t ___clickAction0, String_t* ___uri1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
