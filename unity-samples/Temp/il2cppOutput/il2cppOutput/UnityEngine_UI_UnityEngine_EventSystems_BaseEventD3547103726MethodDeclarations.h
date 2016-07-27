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

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t3547103726;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t409518532;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t3800378272;
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_EventSystem409518532.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"

// System.Void UnityEngine.EventSystems.BaseEventData::.ctor(UnityEngine.EventSystems.EventSystem)
extern "C"  void BaseEventData__ctor_m3246352982 (BaseEventData_t3547103726 * __this, EventSystem_t409518532 * ___eventSystem0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.BaseEventData::get_currentInputModule()
extern "C"  BaseInputModule_t3800378272 * BaseEventData_get_currentInputModule_m502779959 (BaseEventData_t3547103726 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.BaseEventData::get_selectedObject()
extern "C"  GameObject_t4012695102 * BaseEventData_get_selectedObject_m2003968484 (BaseEventData_t3547103726 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseEventData::set_selectedObject(UnityEngine.GameObject)
extern "C"  void BaseEventData_set_selectedObject_m3912430657 (BaseEventData_t3547103726 * __this, GameObject_t4012695102 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
