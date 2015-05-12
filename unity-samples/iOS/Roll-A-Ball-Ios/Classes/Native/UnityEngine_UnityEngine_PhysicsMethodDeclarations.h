#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Physics
struct Physics_t895;
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t712;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"

// System.Boolean UnityEngine.Physics::Internal_Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
 bool Physics_Internal_Raycast_m4606 (Object_t * __this/* static, unused */, Vector3_t188  ___origin, Vector3_t188  ___direction, RaycastHit_t439 * ___hitInfo, float ___maxDistance, int32_t ___layermask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32)
 bool Physics_INTERNAL_CALL_Internal_Raycast_m4607 (Object_t * __this/* static, unused */, Vector3_t188 * ___origin, Vector3_t188 * ___direction, RaycastHit_t439 * ___hitInfo, float ___maxDistance, int32_t ___layermask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single)
 bool Physics_Raycast_m1810 (Object_t * __this/* static, unused */, Vector3_t188  ___origin, Vector3_t188  ___direction, RaycastHit_t439 * ___hitInfo, float ___maxDistance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&)
 bool Physics_Raycast_m2002 (Object_t * __this/* static, unused */, Vector3_t188  ___origin, Vector3_t188  ___direction, RaycastHit_t439 * ___hitInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
 bool Physics_Raycast_m4608 (Object_t * __this/* static, unused */, Vector3_t188  ___origin, Vector3_t188  ___direction, RaycastHit_t439 * ___hitInfo, float ___maxDistance, int32_t ___layerMask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32)
 bool Physics_Raycast_m3471 (Object_t * __this/* static, unused */, Ray_t432  ___ray, RaycastHit_t439 * ___hitInfo, float ___maxDistance, int32_t ___layerMask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray,System.Single,System.Int32)
 RaycastHitU5BU5D_t712* Physics_RaycastAll_m3356 (Object_t * __this/* static, unused */, Ray_t432  ___ray, float ___maxDistance, int32_t ___layerMask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32)
 RaycastHitU5BU5D_t712* Physics_RaycastAll_m4609 (Object_t * __this/* static, unused */, Vector3_t188  ___origin, Vector3_t188  ___direction, float ___maxDistance, int32_t ___layermask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::INTERNAL_CALL_RaycastAll(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32)
 RaycastHitU5BU5D_t712* Physics_INTERNAL_CALL_RaycastAll_m4610 (Object_t * __this/* static, unused */, Vector3_t188 * ___origin, Vector3_t188 * ___direction, float ___maxDistance, int32_t ___layermask, MethodInfo* method) IL2CPP_METHOD_ATTR;
