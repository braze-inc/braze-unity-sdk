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

// UnityEngine.EventSystems.TouchInputModule
struct TouchInputModule_t2251026098;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t3205101634;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve3205101634.h"

// System.Void UnityEngine.EventSystems.TouchInputModule::.ctor()
extern "C"  void TouchInputModule__ctor_m339421258 (TouchInputModule_t2251026098 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.TouchInputModule::get_allowActivationOnStandalone()
extern "C"  bool TouchInputModule_get_allowActivationOnStandalone_m2975554192 (TouchInputModule_t2251026098 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::set_allowActivationOnStandalone(System.Boolean)
extern "C"  void TouchInputModule_set_allowActivationOnStandalone_m2844331589 (TouchInputModule_t2251026098 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.TouchInputModule::get_forceModuleActive()
extern "C"  bool TouchInputModule_get_forceModuleActive_m3711716298 (TouchInputModule_t2251026098 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::set_forceModuleActive(System.Boolean)
extern "C"  void TouchInputModule_set_forceModuleActive_m3663751039 (TouchInputModule_t2251026098 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::UpdateModule()
extern "C"  void TouchInputModule_UpdateModule_m1492847119 (TouchInputModule_t2251026098 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.TouchInputModule::IsModuleSupported()
extern "C"  bool TouchInputModule_IsModuleSupported_m3258396622 (TouchInputModule_t2251026098 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.TouchInputModule::ShouldActivateModule()
extern "C"  bool TouchInputModule_ShouldActivateModule_m1989212798 (TouchInputModule_t2251026098 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.TouchInputModule::UseFakeInput()
extern "C"  bool TouchInputModule_UseFakeInput_m1788394586 (TouchInputModule_t2251026098 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::Process()
extern "C"  void TouchInputModule_Process_m2613923415 (TouchInputModule_t2251026098 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::FakeTouches()
extern "C"  void TouchInputModule_FakeTouches_m1483201856 (TouchInputModule_t2251026098 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::ProcessTouchEvents()
extern "C"  void TouchInputModule_ProcessTouchEvents_m2652204291 (TouchInputModule_t2251026098 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::ProcessTouchPress(UnityEngine.EventSystems.PointerEventData,System.Boolean,System.Boolean)
extern "C"  void TouchInputModule_ProcessTouchPress_m3277592771 (TouchInputModule_t2251026098 * __this, PointerEventData_t3205101634 * ___pointerEvent0, bool ___pressed1, bool ___released2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::DeactivateModule()
extern "C"  void TouchInputModule_DeactivateModule_m873087546 (TouchInputModule_t2251026098 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.TouchInputModule::ToString()
extern "C"  String_t* TouchInputModule_ToString_m2343614755 (TouchInputModule_t2251026098 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
