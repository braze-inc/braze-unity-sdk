#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Appboy.Models.ApplePushNotification
struct ApplePushNotification_t43;
// Appboy.Models.ApplePushNotificationAlert
struct ApplePushNotificationAlert_t41;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t42;
// Appboy.Utilities.JSONClass
struct JSONClass_t15;
// System.Object
struct Object_t;
// Appboy.Utilities.JSONNode
struct JSONNode_t17;

// System.Void Appboy.Models.ApplePushNotification::.ctor(Appboy.Utilities.JSONClass)
 void ApplePushNotification__ctor_m263 (ApplePushNotification_t43 * __this, JSONClass_t15 * ___json, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Models.ApplePushNotificationAlert Appboy.Models.ApplePushNotification::get_Alert()
 ApplePushNotificationAlert_t41 * ApplePushNotification_get_Alert_m264 (ApplePushNotification_t43 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.ApplePushNotification::set_Alert(Appboy.Models.ApplePushNotificationAlert)
 void ApplePushNotification_set_Alert_m265 (ApplePushNotification_t43 * __this, ApplePushNotificationAlert_t41 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Appboy.Models.ApplePushNotification::get_Badge()
 int32_t ApplePushNotification_get_Badge_m266 (ApplePushNotification_t43 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.ApplePushNotification::set_Badge(System.Int32)
 void ApplePushNotification_set_Badge_m267 (ApplePushNotification_t43 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Models.ApplePushNotification::get_Sound()
 String_t* ApplePushNotification_get_Sound_m268 (ApplePushNotification_t43 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.ApplePushNotification::set_Sound(System.String)
 void ApplePushNotification_set_Sound_m269 (ApplePushNotification_t43 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Appboy.Models.ApplePushNotification::get_ContentAvailable()
 int32_t ApplePushNotification_get_ContentAvailable_m270 (ApplePushNotification_t43 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.ApplePushNotification::set_ContentAvailable(System.Int32)
 void ApplePushNotification_set_ContentAvailable_m271 (ApplePushNotification_t43 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Appboy.Models.ApplePushNotification::get_Extra()
 Object_t* ApplePushNotification_get_Extra_m272 (ApplePushNotification_t43 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.ApplePushNotification::set_Extra(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
 void ApplePushNotification_set_Extra_m273 (ApplePushNotification_t43 * __this, Object_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Appboy.Models.ApplePushNotification::getJSONNodeValue(Appboy.Utilities.JSONNode)
 Object_t * ApplePushNotification_getJSONNodeValue_m274 (ApplePushNotification_t43 * __this, JSONNode_t17 * ___node, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Models.ApplePushNotification::ToString()
 String_t* ApplePushNotification_ToString_m275 (ApplePushNotification_t43 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
