#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t457;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t456;
// UnityEngine.GameObject
struct GameObject_t140;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t459;

// System.Void UnityEngine.EventSystems.BaseEventData::.ctor(UnityEngine.EventSystems.EventSystem)
 void BaseEventData__ctor_m2117 (BaseEventData_t457 * __this, EventSystem_t459 * ___eventSystem, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseEventData::Reset()
 void BaseEventData_Reset_m2118 (BaseEventData_t457 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseEventData::Use()
 void BaseEventData_Use_m2119 (BaseEventData_t457 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.BaseEventData::get_used()
 bool BaseEventData_get_used_m2120 (BaseEventData_t457 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.BaseEventData::get_currentInputModule()
 BaseInputModule_t456 * BaseEventData_get_currentInputModule_m2121 (BaseEventData_t457 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.BaseEventData::get_selectedObject()
 GameObject_t140 * BaseEventData_get_selectedObject_m2122 (BaseEventData_t457 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseEventData::set_selectedObject(UnityEngine.GameObject)
 void BaseEventData_set_selectedObject_m2123 (BaseEventData_t457 * __this, GameObject_t140 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
