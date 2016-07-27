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

// UnityEngine.EventSystems.StandaloneInputModule
struct StandaloneInputModule_t3152099756;
// System.String
struct String_t;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t3205101634;
// UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData
struct MouseButtonEventData_t3739491085;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_Standalone3710726253.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve3205101634.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerInp3739491085.h"

// System.Void UnityEngine.EventSystems.StandaloneInputModule::.ctor()
extern "C"  void StandaloneInputModule__ctor_m3585261844 (StandaloneInputModule_t3152099756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.StandaloneInputModule/InputMode UnityEngine.EventSystems.StandaloneInputModule::get_inputMode()
extern "C"  int32_t StandaloneInputModule_get_inputMode_m3683217473 (StandaloneInputModule_t3152099756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::get_allowActivationOnMobileDevice()
extern "C"  bool StandaloneInputModule_get_allowActivationOnMobileDevice_m898677649 (StandaloneInputModule_t3152099756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::set_allowActivationOnMobileDevice(System.Boolean)
extern "C"  void StandaloneInputModule_set_allowActivationOnMobileDevice_m2716306402 (StandaloneInputModule_t3152099756 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::get_forceModuleActive()
extern "C"  bool StandaloneInputModule_get_forceModuleActive_m4263603128 (StandaloneInputModule_t3152099756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::set_forceModuleActive(System.Boolean)
extern "C"  void StandaloneInputModule_set_forceModuleActive_m2821456585 (StandaloneInputModule_t3152099756 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.EventSystems.StandaloneInputModule::get_inputActionsPerSecond()
extern "C"  float StandaloneInputModule_get_inputActionsPerSecond_m386579003 (StandaloneInputModule_t3152099756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::set_inputActionsPerSecond(System.Single)
extern "C"  void StandaloneInputModule_set_inputActionsPerSecond_m3962672568 (StandaloneInputModule_t3152099756 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.EventSystems.StandaloneInputModule::get_repeatDelay()
extern "C"  float StandaloneInputModule_get_repeatDelay_m756347909 (StandaloneInputModule_t3152099756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::set_repeatDelay(System.Single)
extern "C"  void StandaloneInputModule_set_repeatDelay_m3283777070 (StandaloneInputModule_t3152099756 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.StandaloneInputModule::get_horizontalAxis()
extern "C"  String_t* StandaloneInputModule_get_horizontalAxis_m4124505505 (StandaloneInputModule_t3152099756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::set_horizontalAxis(System.String)
extern "C"  void StandaloneInputModule_set_horizontalAxis_m1994117648 (StandaloneInputModule_t3152099756 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.StandaloneInputModule::get_verticalAxis()
extern "C"  String_t* StandaloneInputModule_get_verticalAxis_m828001843 (StandaloneInputModule_t3152099756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::set_verticalAxis(System.String)
extern "C"  void StandaloneInputModule_set_verticalAxis_m3009801854 (StandaloneInputModule_t3152099756 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.StandaloneInputModule::get_submitButton()
extern "C"  String_t* StandaloneInputModule_get_submitButton_m1573295782 (StandaloneInputModule_t3152099756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::set_submitButton(System.String)
extern "C"  void StandaloneInputModule_set_submitButton_m3989846251 (StandaloneInputModule_t3152099756 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.StandaloneInputModule::get_cancelButton()
extern "C"  String_t* StandaloneInputModule_get_cancelButton_m3049849608 (StandaloneInputModule_t3152099756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::set_cancelButton(System.String)
extern "C"  void StandaloneInputModule_set_cancelButton_m822377417 (StandaloneInputModule_t3152099756 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::UpdateModule()
extern "C"  void StandaloneInputModule_UpdateModule_m4260747781 (StandaloneInputModule_t3152099756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::IsModuleSupported()
extern "C"  bool StandaloneInputModule_IsModuleSupported_m1519744700 (StandaloneInputModule_t3152099756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::ShouldActivateModule()
extern "C"  bool StandaloneInputModule_ShouldActivateModule_m3115394256 (StandaloneInputModule_t3152099756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::ActivateModule()
extern "C"  void StandaloneInputModule_ActivateModule_m1130429551 (StandaloneInputModule_t3152099756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::DeactivateModule()
extern "C"  void StandaloneInputModule_DeactivateModule_m1049634608 (StandaloneInputModule_t3152099756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::Process()
extern "C"  void StandaloneInputModule_Process_m3720469665 (StandaloneInputModule_t3152099756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::ProcessTouchEvents()
extern "C"  bool StandaloneInputModule_ProcessTouchEvents_m3567487943 (StandaloneInputModule_t3152099756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::ProcessTouchPress(UnityEngine.EventSystems.PointerEventData,System.Boolean,System.Boolean)
extern "C"  void StandaloneInputModule_ProcessTouchPress_m2953705401 (StandaloneInputModule_t3152099756 * __this, PointerEventData_t3205101634 * ___pointerEvent0, bool ___pressed1, bool ___released2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::SendSubmitEventToSelectedObject()
extern "C"  bool StandaloneInputModule_SendSubmitEventToSelectedObject_m2183743635 (StandaloneInputModule_t3152099756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::GetRawMoveVector()
extern "C"  Vector2_t3525329788  StandaloneInputModule_GetRawMoveVector_m3480660049 (StandaloneInputModule_t3152099756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::SendMoveEventToSelectedObject()
extern "C"  bool StandaloneInputModule_SendMoveEventToSelectedObject_m439066490 (StandaloneInputModule_t3152099756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::ProcessMouseEvent()
extern "C"  void StandaloneInputModule_ProcessMouseEvent_m2927305846 (StandaloneInputModule_t3152099756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::ProcessMouseEvent(System.Int32)
extern "C"  void StandaloneInputModule_ProcessMouseEvent_m1104664775 (StandaloneInputModule_t3152099756 * __this, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::SendUpdateEventToSelectedObject()
extern "C"  bool StandaloneInputModule_SendUpdateEventToSelectedObject_m1730287810 (StandaloneInputModule_t3152099756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::ProcessMousePress(UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData)
extern "C"  void StandaloneInputModule_ProcessMousePress_m794465737 (StandaloneInputModule_t3152099756 * __this, MouseButtonEventData_t3739491085 * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
