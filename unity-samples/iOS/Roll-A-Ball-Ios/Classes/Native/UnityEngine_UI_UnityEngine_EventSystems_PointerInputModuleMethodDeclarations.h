#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.PointerInputModule
struct PointerInputModule_t539;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t475;
// UnityEngine.EventSystems.PointerInputModule/MouseState
struct MouseState_t537;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t154;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t471;
// UnityEngine.Touch
#include "UnityEngine_UnityEngine_Touch.h"
// UnityEngine.EventSystems.PointerEventData/FramePressState
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEventData_Fra.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.EventSystems.PointerInputModule::.ctor()
 void PointerInputModule__ctor_m2306 (PointerInputModule_t539 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerInputModule::GetPointerData(System.Int32,UnityEngine.EventSystems.PointerEventData&,System.Boolean)
 bool PointerInputModule_GetPointerData_m2307 (PointerInputModule_t539 * __this, int32_t ___id, PointerEventData_t475 ** ___data, bool ___create, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerInputModule::RemovePointerData(UnityEngine.EventSystems.PointerEventData)
 void PointerInputModule_RemovePointerData_m2308 (PointerInputModule_t539 * __this, PointerEventData_t475 * ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.PointerEventData UnityEngine.EventSystems.PointerInputModule::GetTouchPointerEventData(UnityEngine.Touch,System.Boolean&,System.Boolean&)
 PointerEventData_t475 * PointerInputModule_GetTouchPointerEventData_m2309 (PointerInputModule_t539 * __this, Touch_t465  ___input, bool* ___pressed, bool* ___released, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerInputModule::CopyFromTo(UnityEngine.EventSystems.PointerEventData,UnityEngine.EventSystems.PointerEventData)
 void PointerInputModule_CopyFromTo_m2310 (PointerInputModule_t539 * __this, PointerEventData_t475 * ___from, PointerEventData_t475 * ___to, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.PointerEventData/FramePressState UnityEngine.EventSystems.PointerInputModule::StateForMouseButton(System.Int32)
 int32_t PointerInputModule_StateForMouseButton_m2311 (Object_t * __this/* static, unused */, int32_t ___buttonId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.PointerInputModule/MouseState UnityEngine.EventSystems.PointerInputModule::GetMousePointerEventData()
 MouseState_t537 * PointerInputModule_GetMousePointerEventData_m2312 (PointerInputModule_t539 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.PointerEventData UnityEngine.EventSystems.PointerInputModule::GetLastPointerEventData(System.Int32)
 PointerEventData_t475 * PointerInputModule_GetLastPointerEventData_m2313 (PointerInputModule_t539 * __this, int32_t ___id, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerInputModule::ShouldStartDrag(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Boolean)
 bool PointerInputModule_ShouldStartDrag_m2314 (Object_t * __this/* static, unused */, Vector2_t198  ___pressPos, Vector2_t198  ___currentPos, float ___threshold, bool ___useDragThreshold, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerInputModule::ProcessMove(UnityEngine.EventSystems.PointerEventData)
 void PointerInputModule_ProcessMove_m2315 (PointerInputModule_t539 * __this, PointerEventData_t475 * ___pointerEvent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerInputModule::ProcessDrag(UnityEngine.EventSystems.PointerEventData)
 void PointerInputModule_ProcessDrag_m2316 (PointerInputModule_t539 * __this, PointerEventData_t475 * ___pointerEvent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerInputModule::IsPointerOverGameObject(System.Int32)
 bool PointerInputModule_IsPointerOverGameObject_m2317 (PointerInputModule_t539 * __this, int32_t ___pointerId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerInputModule::ClearSelection()
 void PointerInputModule_ClearSelection_m2318 (PointerInputModule_t539 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.PointerInputModule::ToString()
 String_t* PointerInputModule_ToString_m2319 (PointerInputModule_t539 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerInputModule::DeselectIfSelectionChanged(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData)
 void PointerInputModule_DeselectIfSelectionChanged_m2320 (PointerInputModule_t539 * __this, GameObject_t154 * ___currentOverGo, BaseEventData_t471 * ___pointerEvent, MethodInfo* method) IL2CPP_METHOD_ATTR;
