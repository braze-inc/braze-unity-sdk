#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t475;
// UnityEngine.GameObject
struct GameObject_t154;
// UnityEngine.Camera
struct Camera_t186;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t473;
// System.String
struct String_t;
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.EventSystems.PointerEventData/InputButton
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEventData_Inp.h"

// System.Void UnityEngine.EventSystems.PointerEventData::.ctor(UnityEngine.EventSystems.EventSystem)
 void PointerEventData__ctor_m2230 (PointerEventData_t475 * __this, EventSystem_t473 * ___eventSystem, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_pointerEnter()
 GameObject_t154 * PointerEventData_get_pointerEnter_m2231 (PointerEventData_t475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerEnter(UnityEngine.GameObject)
 void PointerEventData_set_pointerEnter_m2232 (PointerEventData_t475 * __this, GameObject_t154 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_lastPress()
 GameObject_t154 * PointerEventData_get_lastPress_m2233 (PointerEventData_t475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_lastPress(UnityEngine.GameObject)
 void PointerEventData_set_lastPress_m2234 (PointerEventData_t475 * __this, GameObject_t154 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_rawPointerPress()
 GameObject_t154 * PointerEventData_get_rawPointerPress_m2235 (PointerEventData_t475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_rawPointerPress(UnityEngine.GameObject)
 void PointerEventData_set_rawPointerPress_m2236 (PointerEventData_t475 * __this, GameObject_t154 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_pointerDrag()
 GameObject_t154 * PointerEventData_get_pointerDrag_m2237 (PointerEventData_t475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerDrag(UnityEngine.GameObject)
 void PointerEventData_set_pointerDrag_m2238 (PointerEventData_t475 * __this, GameObject_t154 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::get_pointerCurrentRaycast()
 RaycastResult_t477  PointerEventData_get_pointerCurrentRaycast_m2239 (PointerEventData_t475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerCurrentRaycast(UnityEngine.EventSystems.RaycastResult)
 void PointerEventData_set_pointerCurrentRaycast_m2240 (PointerEventData_t475 * __this, RaycastResult_t477  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::get_pointerPressRaycast()
 RaycastResult_t477  PointerEventData_get_pointerPressRaycast_m2241 (PointerEventData_t475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerPressRaycast(UnityEngine.EventSystems.RaycastResult)
 void PointerEventData_set_pointerPressRaycast_m2242 (PointerEventData_t475 * __this, RaycastResult_t477  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerEventData::get_eligibleForClick()
 bool PointerEventData_get_eligibleForClick_m2243 (PointerEventData_t475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_eligibleForClick(System.Boolean)
 void PointerEventData_set_eligibleForClick_m2244 (PointerEventData_t475 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.PointerEventData::get_pointerId()
 int32_t PointerEventData_get_pointerId_m2245 (PointerEventData_t475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerId(System.Int32)
 void PointerEventData_set_pointerId_m2246 (PointerEventData_t475 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
 Vector2_t198  PointerEventData_get_position_m2247 (PointerEventData_t475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_position(UnityEngine.Vector2)
 void PointerEventData_set_position_m2248 (PointerEventData_t475 * __this, Vector2_t198  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_delta()
 Vector2_t198  PointerEventData_get_delta_m2249 (PointerEventData_t475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_delta(UnityEngine.Vector2)
 void PointerEventData_set_delta_m2250 (PointerEventData_t475 * __this, Vector2_t198  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_pressPosition()
 Vector2_t198  PointerEventData_get_pressPosition_m2251 (PointerEventData_t475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pressPosition(UnityEngine.Vector2)
 void PointerEventData_set_pressPosition_m2252 (PointerEventData_t475 * __this, Vector2_t198  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::get_worldPosition()
 Vector3_t202  PointerEventData_get_worldPosition_m2253 (PointerEventData_t475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_worldPosition(UnityEngine.Vector3)
 void PointerEventData_set_worldPosition_m2254 (PointerEventData_t475 * __this, Vector3_t202  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::get_worldNormal()
 Vector3_t202  PointerEventData_get_worldNormal_m2255 (PointerEventData_t475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_worldNormal(UnityEngine.Vector3)
 void PointerEventData_set_worldNormal_m2256 (PointerEventData_t475 * __this, Vector3_t202  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.EventSystems.PointerEventData::get_clickTime()
 float PointerEventData_get_clickTime_m2257 (PointerEventData_t475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_clickTime(System.Single)
 void PointerEventData_set_clickTime_m2258 (PointerEventData_t475 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.PointerEventData::get_clickCount()
 int32_t PointerEventData_get_clickCount_m2259 (PointerEventData_t475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_clickCount(System.Int32)
 void PointerEventData_set_clickCount_m2260 (PointerEventData_t475 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_scrollDelta()
 Vector2_t198  PointerEventData_get_scrollDelta_m2261 (PointerEventData_t475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_scrollDelta(UnityEngine.Vector2)
 void PointerEventData_set_scrollDelta_m2262 (PointerEventData_t475 * __this, Vector2_t198  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerEventData::get_useDragThreshold()
 bool PointerEventData_get_useDragThreshold_m2263 (PointerEventData_t475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_useDragThreshold(System.Boolean)
 void PointerEventData_set_useDragThreshold_m2264 (PointerEventData_t475 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerEventData::get_dragging()
 bool PointerEventData_get_dragging_m2265 (PointerEventData_t475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_dragging(System.Boolean)
 void PointerEventData_set_dragging_m2266 (PointerEventData_t475 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::get_button()
 int32_t PointerEventData_get_button_m2267 (PointerEventData_t475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_button(UnityEngine.EventSystems.PointerEventData/InputButton)
 void PointerEventData_set_button_m2268 (PointerEventData_t475 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerEventData::IsPointerMoving()
 bool PointerEventData_IsPointerMoving_m2269 (PointerEventData_t475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerEventData::IsScrolling()
 bool PointerEventData_IsScrolling_m2270 (PointerEventData_t475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.EventSystems.PointerEventData::get_enterEventCamera()
 Camera_t186 * PointerEventData_get_enterEventCamera_m2271 (PointerEventData_t475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.EventSystems.PointerEventData::get_pressEventCamera()
 Camera_t186 * PointerEventData_get_pressEventCamera_m2272 (PointerEventData_t475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_pointerPress()
 GameObject_t154 * PointerEventData_get_pointerPress_m2273 (PointerEventData_t475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerPress(UnityEngine.GameObject)
 void PointerEventData_set_pointerPress_m2274 (PointerEventData_t475 * __this, GameObject_t154 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.PointerEventData::ToString()
 String_t* PointerEventData_ToString_m2275 (PointerEventData_t475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
