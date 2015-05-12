#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Touch
struct Touch_t465;
struct Touch_t465_marshaled;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.TouchPhase
#include "UnityEngine_UnityEngine_TouchPhase.h"

// System.Int32 UnityEngine.Touch::get_fingerId()
 int32_t Touch_get_fingerId_m2077 (Touch_t465 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
 Vector2_t198  Touch_get_position_m2072 (Touch_t465 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Touch::get_tapCount()
 int32_t Touch_get_tapCount_m2078 (Touch_t465 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
 int32_t Touch_get_phase_m2079 (Touch_t465 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void Touch_t465_marshal(const Touch_t465& unmarshaled, Touch_t465_marshaled& marshaled);
void Touch_t465_marshal_back(const Touch_t465_marshaled& marshaled, Touch_t465& unmarshaled);
void Touch_t465_marshal_cleanup(Touch_t465_marshaled& marshaled);
