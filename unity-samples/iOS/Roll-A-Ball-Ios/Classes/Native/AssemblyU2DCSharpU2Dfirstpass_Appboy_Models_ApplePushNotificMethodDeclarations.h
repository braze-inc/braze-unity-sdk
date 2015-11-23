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

// Appboy.Models.ApplePushNotification
struct ApplePushNotification_t30;
// Appboy.Utilities.JSONClass
struct JSONClass_t22;
// Appboy.Models.ApplePushNotificationAlert
struct ApplePushNotificationAlert_t31;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t32;
// System.Object
struct Object_t;
// Appboy.Utilities.JSONNode
struct JSONNode_t11;

#include "codegen/il2cpp-codegen.h"

// System.Void Appboy.Models.ApplePushNotification::.ctor(Appboy.Utilities.JSONClass)
extern "C" void ApplePushNotification__ctor_m263 (ApplePushNotification_t30 * __this, JSONClass_t22 * ___json, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Models.ApplePushNotificationAlert Appboy.Models.ApplePushNotification::get_Alert()
extern "C" ApplePushNotificationAlert_t31 * ApplePushNotification_get_Alert_m264 (ApplePushNotification_t30 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.ApplePushNotification::set_Alert(Appboy.Models.ApplePushNotificationAlert)
extern "C" void ApplePushNotification_set_Alert_m265 (ApplePushNotification_t30 * __this, ApplePushNotificationAlert_t31 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Appboy.Models.ApplePushNotification::get_Badge()
extern "C" int32_t ApplePushNotification_get_Badge_m266 (ApplePushNotification_t30 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.ApplePushNotification::set_Badge(System.Int32)
extern "C" void ApplePushNotification_set_Badge_m267 (ApplePushNotification_t30 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Models.ApplePushNotification::get_Sound()
extern "C" String_t* ApplePushNotification_get_Sound_m268 (ApplePushNotification_t30 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.ApplePushNotification::set_Sound(System.String)
extern "C" void ApplePushNotification_set_Sound_m269 (ApplePushNotification_t30 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Appboy.Models.ApplePushNotification::get_ContentAvailable()
extern "C" int32_t ApplePushNotification_get_ContentAvailable_m270 (ApplePushNotification_t30 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.ApplePushNotification::set_ContentAvailable(System.Int32)
extern "C" void ApplePushNotification_set_ContentAvailable_m271 (ApplePushNotification_t30 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Appboy.Models.ApplePushNotification::get_Extra()
extern "C" Object_t* ApplePushNotification_get_Extra_m272 (ApplePushNotification_t30 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.ApplePushNotification::set_Extra(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" void ApplePushNotification_set_Extra_m273 (ApplePushNotification_t30 * __this, Object_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Appboy.Models.ApplePushNotification::getJSONNodeValue(Appboy.Utilities.JSONNode)
extern "C" Object_t * ApplePushNotification_getJSONNodeValue_m274 (ApplePushNotification_t30 * __this, JSONNode_t11 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Models.ApplePushNotification::ToString()
extern "C" String_t* ApplePushNotification_ToString_m275 (ApplePushNotification_t30 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
