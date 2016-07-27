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

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t3205101634;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t409518532;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.Camera
struct Camera_t3533968274;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_EventSystem409518532.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResu959898689.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEven876188540.h"

// System.Void UnityEngine.EventSystems.PointerEventData::.ctor(UnityEngine.EventSystems.EventSystem)
extern "C"  void PointerEventData__ctor_m82194942 (PointerEventData_t3205101634 * __this, EventSystem_t409518532 * ___eventSystem0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_pointerEnter()
extern "C"  GameObject_t4012695102 * PointerEventData_get_pointerEnter_m1754340511 (PointerEventData_t3205101634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerEnter(UnityEngine.GameObject)
extern "C"  void PointerEventData_set_pointerEnter_m3909544698 (PointerEventData_t3205101634 * __this, GameObject_t4012695102 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_lastPress()
extern "C"  GameObject_t4012695102 * PointerEventData_get_lastPress_m3682396203 (PointerEventData_t3205101634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_lastPress(UnityEngine.GameObject)
extern "C"  void PointerEventData_set_lastPress_m1523028000 (PointerEventData_t3205101634 * __this, GameObject_t4012695102 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_rawPointerPress()
extern "C"  GameObject_t4012695102 * PointerEventData_get_rawPointerPress_m4005541676 (PointerEventData_t3205101634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_rawPointerPress(UnityEngine.GameObject)
extern "C"  void PointerEventData_set_rawPointerPress_m505214625 (PointerEventData_t3205101634 * __this, GameObject_t4012695102 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_pointerDrag()
extern "C"  GameObject_t4012695102 * PointerEventData_get_pointerDrag_m2109300143 (PointerEventData_t3205101634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerDrag(UnityEngine.GameObject)
extern "C"  void PointerEventData_set_pointerDrag_m1194168164 (PointerEventData_t3205101634 * __this, GameObject_t4012695102 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::get_pointerCurrentRaycast()
extern "C"  RaycastResult_t959898689  PointerEventData_get_pointerCurrentRaycast_m874132826 (PointerEventData_t3205101634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerCurrentRaycast(UnityEngine.EventSystems.RaycastResult)
extern "C"  void PointerEventData_set_pointerCurrentRaycast_m2884097807 (PointerEventData_t3205101634 * __this, RaycastResult_t959898689  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::get_pointerPressRaycast()
extern "C"  RaycastResult_t959898689  PointerEventData_get_pointerPressRaycast_m990488592 (PointerEventData_t3205101634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerPressRaycast(UnityEngine.EventSystems.RaycastResult)
extern "C"  void PointerEventData_set_pointerPressRaycast_m126348485 (PointerEventData_t3205101634 * __this, RaycastResult_t959898689  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerEventData::get_eligibleForClick()
extern "C"  bool PointerEventData_get_eligibleForClick_m804806107 (PointerEventData_t3205101634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_eligibleForClick(System.Boolean)
extern "C"  void PointerEventData_set_eligibleForClick_m4124670100 (PointerEventData_t3205101634 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.PointerEventData::get_pointerId()
extern "C"  int32_t PointerEventData_get_pointerId_m315063471 (PointerEventData_t3205101634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerId(System.Int32)
extern "C"  void PointerEventData_set_pointerId_m204336548 (PointerEventData_t3205101634 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
extern "C"  Vector2_t3525329788  PointerEventData_get_position_m2263123361 (PointerEventData_t3205101634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_position(UnityEngine.Vector2)
extern "C"  void PointerEventData_set_position_m1287828138 (PointerEventData_t3205101634 * __this, Vector2_t3525329788  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_delta()
extern "C"  Vector2_t3525329788  PointerEventData_get_delta_m4112242786 (PointerEventData_t3205101634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_delta(UnityEngine.Vector2)
extern "C"  void PointerEventData_set_delta_m3480102791 (PointerEventData_t3205101634 * __this, Vector2_t3525329788  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_pressPosition()
extern "C"  Vector2_t3525329788  PointerEventData_get_pressPosition_m2718149942 (PointerEventData_t3205101634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pressPosition(UnityEngine.Vector2)
extern "C"  void PointerEventData_set_pressPosition_m3056630579 (PointerEventData_t3205101634 * __this, Vector2_t3525329788  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::get_worldPosition()
extern "C"  Vector3_t3525329789  PointerEventData_get_worldPosition_m489722276 (PointerEventData_t3205101634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_worldPosition(UnityEngine.Vector3)
extern "C"  void PointerEventData_set_worldPosition_m914315875 (PointerEventData_t3205101634 * __this, Vector3_t3525329789  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::get_worldNormal()
extern "C"  Vector3_t3525329789  PointerEventData_get_worldNormal_m3470386274 (PointerEventData_t3205101634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_worldNormal(UnityEngine.Vector3)
extern "C"  void PointerEventData_set_worldNormal_m2060170853 (PointerEventData_t3205101634 * __this, Vector3_t3525329789  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.EventSystems.PointerEventData::get_clickTime()
extern "C"  float PointerEventData_get_clickTime_m2529670096 (PointerEventData_t3205101634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_clickTime(System.Single)
extern "C"  void PointerEventData_set_clickTime_m3487651291 (PointerEventData_t3205101634 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.PointerEventData::get_clickCount()
extern "C"  int32_t PointerEventData_get_clickCount_m341347570 (PointerEventData_t3205101634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_clickCount(System.Int32)
extern "C"  void PointerEventData_set_clickCount_m2279104927 (PointerEventData_t3205101634 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_scrollDelta()
extern "C"  Vector2_t3525329788  PointerEventData_get_scrollDelta_m3602781717 (PointerEventData_t3205101634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_scrollDelta(UnityEngine.Vector2)
extern "C"  void PointerEventData_set_scrollDelta_m3507625908 (PointerEventData_t3205101634 * __this, Vector2_t3525329788  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerEventData::get_useDragThreshold()
extern "C"  bool PointerEventData_get_useDragThreshold_m2749684085 (PointerEventData_t3205101634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_useDragThreshold(System.Boolean)
extern "C"  void PointerEventData_set_useDragThreshold_m2530254510 (PointerEventData_t3205101634 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerEventData::get_dragging()
extern "C"  bool PointerEventData_get_dragging_m3319220148 (PointerEventData_t3205101634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_dragging(System.Boolean)
extern "C"  void PointerEventData_set_dragging_m1730892973 (PointerEventData_t3205101634 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::get_button()
extern "C"  int32_t PointerEventData_get_button_m796143251 (PointerEventData_t3205101634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_button(UnityEngine.EventSystems.PointerEventData/InputButton)
extern "C"  void PointerEventData_set_button_m2720287992 (PointerEventData_t3205101634 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerEventData::IsPointerMoving()
extern "C"  bool PointerEventData_IsPointerMoving_m1462208007 (PointerEventData_t3205101634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerEventData::IsScrolling()
extern "C"  bool PointerEventData_IsScrolling_m2052637201 (PointerEventData_t3205101634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.EventSystems.PointerEventData::get_enterEventCamera()
extern "C"  Camera_t3533968274 * PointerEventData_get_enterEventCamera_m1535306943 (PointerEventData_t3205101634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.EventSystems.PointerEventData::get_pressEventCamera()
extern "C"  Camera_t3533968274 * PointerEventData_get_pressEventCamera_m2764092724 (PointerEventData_t3205101634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_pointerPress()
extern "C"  GameObject_t4012695102 * PointerEventData_get_pointerPress_m3028028234 (PointerEventData_t3205101634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerPress(UnityEngine.GameObject)
extern "C"  void PointerEventData_set_pointerPress_m3037509477 (PointerEventData_t3205101634 * __this, GameObject_t4012695102 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.PointerEventData::ToString()
extern "C"  String_t* PointerEventData_ToString_m746384051 (PointerEventData_t3205101634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
