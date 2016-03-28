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

// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t1365728750;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_RaycastHit46221527.h"
#include "UnityEngine_UnityEngine_QueryTriggerInteraction4085533775.h"
#include "UnityEngine_UnityEngine_Ray1522967639.h"

// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single)
extern "C"  bool Physics_Raycast_m395141497 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___origin, Vector3_t3525329789  ___direction, RaycastHit_t46221527 * ___hitInfo, float ___maxDistance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&)
extern "C"  bool Physics_Raycast_m2482317716 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___origin, Vector3_t3525329789  ___direction, RaycastHit_t46221527 * ___hitInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  bool Physics_Raycast_m1758069759 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___origin, Vector3_t3525329789  ___direction, RaycastHit_t46221527 * ___hitInfo, float ___maxDistance, int32_t ___layerMask, int32_t ___queryTriggerInteraction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C"  bool Physics_Raycast_m1600345803 (Il2CppObject * __this /* static, unused */, Ray_t1522967639  ___ray, RaycastHit_t46221527 * ___hitInfo, float ___maxDistance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  bool Physics_Raycast_m165875788 (Il2CppObject * __this /* static, unused */, Ray_t1522967639  ___ray, RaycastHit_t46221527 * ___hitInfo, float ___maxDistance, int32_t ___layerMask, int32_t ___queryTriggerInteraction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray,System.Single,System.Int32)
extern "C"  RaycastHitU5BU5D_t1365728750* Physics_RaycastAll_m1771931441 (Il2CppObject * __this /* static, unused */, Ray_t1522967639  ___ray, float ___maxDistance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  RaycastHitU5BU5D_t1365728750* Physics_RaycastAll_m1269007794 (Il2CppObject * __this /* static, unused */, Ray_t1522967639  ___ray, float ___maxDistance, int32_t ___layerMask, int32_t ___queryTriggerInteraction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  RaycastHitU5BU5D_t1365728750* Physics_RaycastAll_m892728677 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___origin, Vector3_t3525329789  ___direction, float ___maxDistance, int32_t ___layermask, int32_t ___queryTriggerInteraction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::INTERNAL_CALL_RaycastAll(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  RaycastHitU5BU5D_t1365728750* Physics_INTERNAL_CALL_RaycastAll_m2642095530 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789 * ___origin, Vector3_t3525329789 * ___direction, float ___maxDistance, int32_t ___layermask, int32_t ___queryTriggerInteraction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Internal_Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  bool Physics_Internal_Raycast_m3365413907 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___origin, Vector3_t3525329789  ___direction, RaycastHit_t46221527 * ___hitInfo, float ___maxDistance, int32_t ___layermask, int32_t ___queryTriggerInteraction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  bool Physics_INTERNAL_CALL_Internal_Raycast_m1291554392 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789 * ___origin, Vector3_t3525329789 * ___direction, RaycastHit_t46221527 * ___hitInfo, float ___maxDistance, int32_t ___layermask, int32_t ___queryTriggerInteraction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
