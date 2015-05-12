#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Touch
struct Touch_t451;
struct Touch_t451_marshaled;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.TouchPhase
#include "UnityEngine_UnityEngine_TouchPhase.h"

// System.Int32 UnityEngine.Touch::get_fingerId()
 int32_t Touch_get_fingerId_m1971 (Touch_t451 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
 Vector2_t184  Touch_get_position_m1966 (Touch_t451 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Touch::get_tapCount()
 int32_t Touch_get_tapCount_m1972 (Touch_t451 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
 int32_t Touch_get_phase_m1973 (Touch_t451 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void Touch_t451_marshal(const Touch_t451& unmarshaled, Touch_t451_marshaled& marshaled);
void Touch_t451_marshal_back(const Touch_t451_marshaled& marshaled, Touch_t451& unmarshaled);
void Touch_t451_marshal_cleanup(Touch_t451_marshaled& marshaled);
