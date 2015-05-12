#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Event
struct Event_t601;
struct Event_t601_marshaled;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.EventType
#include "UnityEngine_UnityEngine_EventType.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.EventModifiers
#include "UnityEngine_UnityEngine_EventModifiers.h"
// UnityEngine.KeyCode
#include "UnityEngine_UnityEngine_KeyCode.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Event::.ctor()
 void Event__ctor_m3574 (Event_t601 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Init()
 void Event_Init_m4271 (Event_t601 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Finalize()
 void Event_Finalize_m4272 (Event_t601 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Cleanup()
 void Event_Cleanup_m4273 (Event_t601 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventType UnityEngine.Event::get_rawType()
 int32_t Event_get_rawType_m3591 (Event_t601 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventType UnityEngine.Event::get_type()
 int32_t Event_get_type_m4274 (Event_t601 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventType UnityEngine.Event::GetTypeForControl(System.Int32)
 int32_t Event_GetTypeForControl_m4275 (Event_t601 * __this, int32_t ___controlID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Event::get_mousePosition()
 Vector2_t184  Event_get_mousePosition_m4276 (Event_t601 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Internal_GetMousePosition(UnityEngine.Vector2&)
 void Event_Internal_GetMousePosition_m4277 (Event_t601 * __this, Vector2_t184 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Event::get_delta()
 Vector2_t184  Event_get_delta_m4278 (Event_t601 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Internal_GetMouseDelta(UnityEngine.Vector2&)
 void Event_Internal_GetMouseDelta_m4279 (Event_t601 * __this, Vector2_t184 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventModifiers UnityEngine.Event::get_modifiers()
 int32_t Event_get_modifiers_m3587 (Event_t601 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UnityEngine.Event::get_character()
 uint16_t Event_get_character_m3589 (Event_t601 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Event::get_commandName()
 String_t* Event_get_commandName_m4280 (Event_t601 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.KeyCode UnityEngine.Event::get_keyCode()
 int32_t Event_get_keyCode_m3588 (Event_t601 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Event UnityEngine.Event::get_current()
 Event_t601 * Event_get_current_m4281 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Internal_SetNativeEvent(System.IntPtr)
 void Event_Internal_SetNativeEvent_m4282 (Object_t * __this/* static, unused */, IntPtr_t107 ___ptr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Internal_MakeMasterEventCurrent()
 void Event_Internal_MakeMasterEventCurrent_m4283 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Use()
 void Event_Use_m4284 (Event_t601 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::PopEvent(UnityEngine.Event)
 bool Event_PopEvent_m3592 (Object_t * __this/* static, unused */, Event_t601 * ___outEvent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::get_isKey()
 bool Event_get_isKey_m4285 (Event_t601 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::get_isMouse()
 bool Event_get_isMouse_m4286 (Event_t601 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Event::GetHashCode()
 int32_t Event_GetHashCode_m4287 (Event_t601 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::Equals(System.Object)
 bool Event_Equals_m4288 (Event_t601 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Event::ToString()
 String_t* Event_ToString_m4289 (Event_t601 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void Event_t601_marshal(const Event_t601& unmarshaled, Event_t601_marshaled& marshaled);
void Event_t601_marshal_back(const Event_t601_marshaled& marshaled, Event_t601& unmarshaled);
void Event_t601_marshal_cleanup(Event_t601_marshaled& marshaled);
