#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.PhysicsRaycaster
struct PhysicsRaycaster_t530;
// UnityEngine.Camera
struct Camera_t172;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t461;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t462;
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMask.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"

// System.Void UnityEngine.EventSystems.PhysicsRaycaster::.ctor()
 void PhysicsRaycaster__ctor_m2264 (PhysicsRaycaster_t530 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.EventSystems.PhysicsRaycaster::get_eventCamera()
 Camera_t172 * PhysicsRaycaster_get_eventCamera_m2265 (PhysicsRaycaster_t530 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.PhysicsRaycaster::get_depth()
 int32_t PhysicsRaycaster_get_depth_m2266 (PhysicsRaycaster_t530 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.PhysicsRaycaster::get_finalEventMask()
 int32_t PhysicsRaycaster_get_finalEventMask_m2267 (PhysicsRaycaster_t530 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.LayerMask UnityEngine.EventSystems.PhysicsRaycaster::get_eventMask()
 LayerMask_t532  PhysicsRaycaster_get_eventMask_m2268 (PhysicsRaycaster_t530 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PhysicsRaycaster::set_eventMask(UnityEngine.LayerMask)
 void PhysicsRaycaster_set_eventMask_m2269 (PhysicsRaycaster_t530 * __this, LayerMask_t532  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PhysicsRaycaster::Raycast(UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>)
 void PhysicsRaycaster_Raycast_m2270 (PhysicsRaycaster_t530 * __this, PointerEventData_t461 * ___eventData, List_1_t462 * ___resultAppendList, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.PhysicsRaycaster::<Raycast>m__1(UnityEngine.RaycastHit,UnityEngine.RaycastHit)
 int32_t PhysicsRaycaster_U3CRaycastU3Em__1_m2271 (Object_t * __this/* static, unused */, RaycastHit_t439  ___r1, RaycastHit_t439  ___r2, MethodInfo* method) IL2CPP_METHOD_ATTR;
