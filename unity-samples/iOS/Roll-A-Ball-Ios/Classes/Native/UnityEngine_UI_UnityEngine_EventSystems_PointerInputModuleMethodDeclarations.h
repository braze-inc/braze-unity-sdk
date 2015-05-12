#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.PointerInputModule
struct PointerInputModule_t525;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t461;
// UnityEngine.EventSystems.PointerInputModule/MouseState
struct MouseState_t523;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t140;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t457;
// UnityEngine.Touch
#include "UnityEngine_UnityEngine_Touch.h"
// UnityEngine.EventSystems.PointerEventData/FramePressState
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEventData_Fra.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.EventSystems.PointerInputModule::.ctor()
 void PointerInputModule__ctor_m2200 (PointerInputModule_t525 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerInputModule::GetPointerData(System.Int32,UnityEngine.EventSystems.PointerEventData&,System.Boolean)
 bool PointerInputModule_GetPointerData_m2201 (PointerInputModule_t525 * __this, int32_t ___id, PointerEventData_t461 ** ___data, bool ___create, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerInputModule::RemovePointerData(UnityEngine.EventSystems.PointerEventData)
 void PointerInputModule_RemovePointerData_m2202 (PointerInputModule_t525 * __this, PointerEventData_t461 * ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.PointerEventData UnityEngine.EventSystems.PointerInputModule::GetTouchPointerEventData(UnityEngine.Touch,System.Boolean&,System.Boolean&)
 PointerEventData_t461 * PointerInputModule_GetTouchPointerEventData_m2203 (PointerInputModule_t525 * __this, Touch_t451  ___input, bool* ___pressed, bool* ___released, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerInputModule::CopyFromTo(UnityEngine.EventSystems.PointerEventData,UnityEngine.EventSystems.PointerEventData)
 void PointerInputModule_CopyFromTo_m2204 (PointerInputModule_t525 * __this, PointerEventData_t461 * ___from, PointerEventData_t461 * ___to, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.PointerEventData/FramePressState UnityEngine.EventSystems.PointerInputModule::StateForMouseButton(System.Int32)
 int32_t PointerInputModule_StateForMouseButton_m2205 (Object_t * __this/* static, unused */, int32_t ___buttonId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.PointerInputModule/MouseState UnityEngine.EventSystems.PointerInputModule::GetMousePointerEventData()
 MouseState_t523 * PointerInputModule_GetMousePointerEventData_m2206 (PointerInputModule_t525 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.PointerEventData UnityEngine.EventSystems.PointerInputModule::GetLastPointerEventData(System.Int32)
 PointerEventData_t461 * PointerInputModule_GetLastPointerEventData_m2207 (PointerInputModule_t525 * __this, int32_t ___id, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerInputModule::ShouldStartDrag(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Boolean)
 bool PointerInputModule_ShouldStartDrag_m2208 (Object_t * __this/* static, unused */, Vector2_t184  ___pressPos, Vector2_t184  ___currentPos, float ___threshold, bool ___useDragThreshold, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerInputModule::ProcessMove(UnityEngine.EventSystems.PointerEventData)
 void PointerInputModule_ProcessMove_m2209 (PointerInputModule_t525 * __this, PointerEventData_t461 * ___pointerEvent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerInputModule::ProcessDrag(UnityEngine.EventSystems.PointerEventData)
 void PointerInputModule_ProcessDrag_m2210 (PointerInputModule_t525 * __this, PointerEventData_t461 * ___pointerEvent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerInputModule::IsPointerOverGameObject(System.Int32)
 bool PointerInputModule_IsPointerOverGameObject_m2211 (PointerInputModule_t525 * __this, int32_t ___pointerId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerInputModule::ClearSelection()
 void PointerInputModule_ClearSelection_m2212 (PointerInputModule_t525 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.PointerInputModule::ToString()
 String_t* PointerInputModule_ToString_m2213 (PointerInputModule_t525 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerInputModule::DeselectIfSelectionChanged(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData)
 void PointerInputModule_DeselectIfSelectionChanged_m2214 (PointerInputModule_t525 * __this, GameObject_t140 * ___currentOverGo, BaseEventData_t457 * ___pointerEvent, MethodInfo* method) IL2CPP_METHOD_ATTR;
