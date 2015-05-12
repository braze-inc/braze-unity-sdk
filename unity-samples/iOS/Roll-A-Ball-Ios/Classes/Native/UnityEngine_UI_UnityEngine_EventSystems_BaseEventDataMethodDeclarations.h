#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t471;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t470;
// UnityEngine.GameObject
struct GameObject_t154;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t473;

// System.Void UnityEngine.EventSystems.BaseEventData::.ctor(UnityEngine.EventSystems.EventSystem)
 void BaseEventData__ctor_m2223 (BaseEventData_t471 * __this, EventSystem_t473 * ___eventSystem, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseEventData::Reset()
 void BaseEventData_Reset_m2224 (BaseEventData_t471 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseEventData::Use()
 void BaseEventData_Use_m2225 (BaseEventData_t471 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.BaseEventData::get_used()
 bool BaseEventData_get_used_m2226 (BaseEventData_t471 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.BaseEventData::get_currentInputModule()
 BaseInputModule_t470 * BaseEventData_get_currentInputModule_m2227 (BaseEventData_t471 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.BaseEventData::get_selectedObject()
 GameObject_t154 * BaseEventData_get_selectedObject_m2228 (BaseEventData_t471 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseEventData::set_selectedObject(UnityEngine.GameObject)
 void BaseEventData_set_selectedObject_m2229 (BaseEventData_t471 * __this, GameObject_t154 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
