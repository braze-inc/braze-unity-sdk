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

// Appboy.Models.PushNotification
struct PushNotification_t60;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t50;

#include "codegen/il2cpp-codegen.h"

// System.Void Appboy.Models.PushNotification::.ctor(System.String)
extern "C" void PushNotification__ctor_m456 (PushNotification_t60 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Models.PushNotification::get_Title()
extern "C" String_t* PushNotification_get_Title_m457 (PushNotification_t60 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.PushNotification::set_Title(System.String)
extern "C" void PushNotification_set_Title_m458 (PushNotification_t60 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Models.PushNotification::get_Content()
extern "C" String_t* PushNotification_get_Content_m459 (PushNotification_t60 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.PushNotification::set_Content(System.String)
extern "C" void PushNotification_set_Content_m460 (PushNotification_t60 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> Appboy.Models.PushNotification::get_Extras()
extern "C" Dictionary_2_t50 * PushNotification_get_Extras_m461 (PushNotification_t60 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.PushNotification::set_Extras(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C" void PushNotification_set_Extras_m462 (PushNotification_t60 * __this, Dictionary_2_t50 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Models.PushNotification::get_CollapseKey()
extern "C" String_t* PushNotification_get_CollapseKey_m463 (PushNotification_t60 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.PushNotification::set_CollapseKey(System.String)
extern "C" void PushNotification_set_CollapseKey_m464 (PushNotification_t60 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Appboy.Models.PushNotification::get_AndroidNotificationId()
extern "C" int32_t PushNotification_get_AndroidNotificationId_m465 (PushNotification_t60 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.PushNotification::set_AndroidNotificationId(System.Int32)
extern "C" void PushNotification_set_AndroidNotificationId_m466 (PushNotification_t60 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Models.PushNotification::ToString()
extern "C" String_t* PushNotification_ToString_m467 (PushNotification_t60 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
