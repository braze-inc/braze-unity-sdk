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

// UnityEngine.RaycastHit2D[]
struct RaycastHit2DU5BU5D_t2162384532;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "UnityEngine_UnityEngine_RaycastHit2D4082783401.h"
#include "UnityEngine_UnityEngine_Ray1522967639.h"

// System.Void UnityEngine.Physics2D::.cctor()
extern "C"  void Physics2D__cctor_m2087591309 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Physics2D::Internal_Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)
extern "C"  void Physics2D_Internal_Raycast_m4294843026 (Il2CppObject * __this /* static, unused */, Vector2_t3525329788  ___origin, Vector2_t3525329788  ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, RaycastHit2D_t4082783401 * ___raycastHit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Physics2D::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)
extern "C"  void Physics2D_INTERNAL_CALL_Internal_Raycast_m1210233913 (Il2CppObject * __this /* static, unused */, Vector2_t3525329788 * ___origin, Vector2_t3525329788 * ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, RaycastHit2D_t4082783401 * ___raycastHit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32)
extern "C"  RaycastHit2D_t4082783401  Physics2D_Raycast_m1435321255 (Il2CppObject * __this /* static, unused */, Vector2_t3525329788  ___origin, Vector2_t3525329788  ___direction, float ___distance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Single)
extern "C"  RaycastHit2D_t4082783401  Physics2D_Raycast_m301626417 (Il2CppObject * __this /* static, unused */, Vector2_t3525329788  ___origin, Vector2_t3525329788  ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::GetRayIntersectionAll(UnityEngine.Ray,System.Single,System.Int32)
extern "C"  RaycastHit2DU5BU5D_t2162384532* Physics2D_GetRayIntersectionAll_m2520210479 (Il2CppObject * __this /* static, unused */, Ray_t1522967639  ___ray, float ___distance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::INTERNAL_CALL_GetRayIntersectionAll(UnityEngine.Ray&,System.Single,System.Int32)
extern "C"  RaycastHit2DU5BU5D_t2162384532* Physics2D_INTERNAL_CALL_GetRayIntersectionAll_m2968135304 (Il2CppObject * __this /* static, unused */, Ray_t1522967639 * ___ray, float ___distance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
