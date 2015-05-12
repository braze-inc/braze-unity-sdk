#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.TouchInputModule
struct TouchInputModule_t528;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t461;
// System.String
struct String_t;

// System.Void UnityEngine.EventSystems.TouchInputModule::.ctor()
 void TouchInputModule__ctor_m2243 (TouchInputModule_t528 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.TouchInputModule::get_allowActivationOnStandalone()
 bool TouchInputModule_get_allowActivationOnStandalone_m2244 (TouchInputModule_t528 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::set_allowActivationOnStandalone(System.Boolean)
 void TouchInputModule_set_allowActivationOnStandalone_m2245 (TouchInputModule_t528 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::UpdateModule()
 void TouchInputModule_UpdateModule_m2246 (TouchInputModule_t528 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.TouchInputModule::IsModuleSupported()
 bool TouchInputModule_IsModuleSupported_m2247 (TouchInputModule_t528 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.TouchInputModule::ShouldActivateModule()
 bool TouchInputModule_ShouldActivateModule_m2248 (TouchInputModule_t528 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.TouchInputModule::UseFakeInput()
 bool TouchInputModule_UseFakeInput_m2249 (TouchInputModule_t528 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::Process()
 void TouchInputModule_Process_m2250 (TouchInputModule_t528 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::FakeTouches()
 void TouchInputModule_FakeTouches_m2251 (TouchInputModule_t528 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::ProcessTouchEvents()
 void TouchInputModule_ProcessTouchEvents_m2252 (TouchInputModule_t528 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::ProcessTouchPress(UnityEngine.EventSystems.PointerEventData,System.Boolean,System.Boolean)
 void TouchInputModule_ProcessTouchPress_m2253 (TouchInputModule_t528 * __this, PointerEventData_t461 * ___pointerEvent, bool ___pressed, bool ___released, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::DeactivateModule()
 void TouchInputModule_DeactivateModule_m2254 (TouchInputModule_t528 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.TouchInputModule::ToString()
 String_t* TouchInputModule_ToString_m2255 (TouchInputModule_t528 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
