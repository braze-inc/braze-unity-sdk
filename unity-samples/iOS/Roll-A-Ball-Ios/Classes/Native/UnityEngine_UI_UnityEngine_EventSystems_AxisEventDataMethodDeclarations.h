#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t469;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t459;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.EventSystems.MoveDirection
#include "UnityEngine_UI_UnityEngine_EventSystems_MoveDirection.h"

// System.Void UnityEngine.EventSystems.AxisEventData::.ctor(UnityEngine.EventSystems.EventSystem)
 void AxisEventData__ctor_m2112 (AxisEventData_t469 * __this, EventSystem_t459 * ___eventSystem, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.EventSystems.AxisEventData::get_moveVector()
 Vector2_t184  AxisEventData_get_moveVector_m2113 (AxisEventData_t469 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.AxisEventData::set_moveVector(UnityEngine.Vector2)
 void AxisEventData_set_moveVector_m2114 (AxisEventData_t469 * __this, Vector2_t184  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.MoveDirection UnityEngine.EventSystems.AxisEventData::get_moveDir()
 int32_t AxisEventData_get_moveDir_m2115 (AxisEventData_t469 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.AxisEventData::set_moveDir(UnityEngine.EventSystems.MoveDirection)
 void AxisEventData_set_moveDir_m2116 (AxisEventData_t469 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
