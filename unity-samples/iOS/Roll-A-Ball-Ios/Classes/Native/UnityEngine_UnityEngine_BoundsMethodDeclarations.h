#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Bounds
struct Bounds_t155;
// System.Object
struct Object_t;
// System.String
struct String_t;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_Bounds.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"

// System.Void UnityEngine.Bounds::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
 void Bounds__ctor_m3673 (Bounds_t155 * __this, Vector3_t188  ___center, Vector3_t188  ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Bounds::GetHashCode()
 int32_t Bounds_GetHashCode_m4367 (Bounds_t155 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::Equals(System.Object)
 bool Bounds_Equals_m4368 (Bounds_t155 * __this, Object_t * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::get_center()
 Vector3_t188  Bounds_get_center_m3674 (Bounds_t155 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::set_center(UnityEngine.Vector3)
 void Bounds_set_center_m3676 (Bounds_t155 * __this, Vector3_t188  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::get_size()
 Vector3_t188  Bounds_get_size_m3664 (Bounds_t155 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::set_size(UnityEngine.Vector3)
 void Bounds_set_size_m3675 (Bounds_t155 * __this, Vector3_t188  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::get_extents()
 Vector3_t188  Bounds_get_extents_m1999 (Bounds_t155 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::set_extents(UnityEngine.Vector3)
 void Bounds_set_extents_m4369 (Bounds_t155 * __this, Vector3_t188  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::get_min()
 Vector3_t188  Bounds_get_min_m3665 (Bounds_t155 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::set_min(UnityEngine.Vector3)
 void Bounds_set_min_m4370 (Bounds_t155 * __this, Vector3_t188  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::get_max()
 Vector3_t188  Bounds_get_max_m3683 (Bounds_t155 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::set_max(UnityEngine.Vector3)
 void Bounds_set_max_m4371 (Bounds_t155 * __this, Vector3_t188  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::SetMinMax(UnityEngine.Vector3,UnityEngine.Vector3)
 void Bounds_SetMinMax_m4372 (Bounds_t155 * __this, Vector3_t188  ___min, Vector3_t188  ___max, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::Encapsulate(UnityEngine.Vector3)
 void Bounds_Encapsulate_m3682 (Bounds_t155 * __this, Vector3_t188  ___point, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::Encapsulate(UnityEngine.Bounds)
 void Bounds_Encapsulate_m4373 (Bounds_t155 * __this, Bounds_t155  ___bounds, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::Expand(System.Single)
 void Bounds_Expand_m4374 (Bounds_t155 * __this, float ___amount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::Expand(UnityEngine.Vector3)
 void Bounds_Expand_m4375 (Bounds_t155 * __this, Vector3_t188  ___amount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::Intersects(UnityEngine.Bounds)
 bool Bounds_Intersects_m1166 (Bounds_t155 * __this, Bounds_t155  ___bounds, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::Internal_Contains(UnityEngine.Bounds,UnityEngine.Vector3)
 bool Bounds_Internal_Contains_m4376 (Object_t * __this/* static, unused */, Bounds_t155  ___m, Vector3_t188  ___point, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::INTERNAL_CALL_Internal_Contains(UnityEngine.Bounds&,UnityEngine.Vector3&)
 bool Bounds_INTERNAL_CALL_Internal_Contains_m4377 (Object_t * __this/* static, unused */, Bounds_t155 * ___m, Vector3_t188 * ___point, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::Contains(UnityEngine.Vector3)
 bool Bounds_Contains_m4378 (Bounds_t155 * __this, Vector3_t188  ___point, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Bounds::Internal_SqrDistance(UnityEngine.Bounds,UnityEngine.Vector3)
 float Bounds_Internal_SqrDistance_m4379 (Object_t * __this/* static, unused */, Bounds_t155  ___m, Vector3_t188  ___point, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Bounds::INTERNAL_CALL_Internal_SqrDistance(UnityEngine.Bounds&,UnityEngine.Vector3&)
 float Bounds_INTERNAL_CALL_Internal_SqrDistance_m4380 (Object_t * __this/* static, unused */, Bounds_t155 * ___m, Vector3_t188 * ___point, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Bounds::SqrDistance(UnityEngine.Vector3)
 float Bounds_SqrDistance_m4381 (Bounds_t155 * __this, Vector3_t188  ___point, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::Internal_IntersectRay(UnityEngine.Ray&,UnityEngine.Bounds&,System.Single&)
 bool Bounds_Internal_IntersectRay_m4382 (Object_t * __this/* static, unused */, Ray_t432 * ___ray, Bounds_t155 * ___bounds, float* ___distance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::INTERNAL_CALL_Internal_IntersectRay(UnityEngine.Ray&,UnityEngine.Bounds&,System.Single&)
 bool Bounds_INTERNAL_CALL_Internal_IntersectRay_m4383 (Object_t * __this/* static, unused */, Ray_t432 * ___ray, Bounds_t155 * ___bounds, float* ___distance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::IntersectRay(UnityEngine.Ray)
 bool Bounds_IntersectRay_m4384 (Bounds_t155 * __this, Ray_t432  ___ray, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::IntersectRay(UnityEngine.Ray,System.Single&)
 bool Bounds_IntersectRay_m4385 (Bounds_t155 * __this, Ray_t432  ___ray, float* ___distance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::Internal_GetClosestPoint(UnityEngine.Bounds&,UnityEngine.Vector3&)
 Vector3_t188  Bounds_Internal_GetClosestPoint_m4386 (Object_t * __this/* static, unused */, Bounds_t155 * ___bounds, Vector3_t188 * ___point, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::INTERNAL_CALL_Internal_GetClosestPoint(UnityEngine.Bounds&,UnityEngine.Vector3&)
 Vector3_t188  Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m4387 (Object_t * __this/* static, unused */, Bounds_t155 * ___bounds, Vector3_t188 * ___point, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::ClosestPoint(UnityEngine.Vector3)
 Vector3_t188  Bounds_ClosestPoint_m4388 (Bounds_t155 * __this, Vector3_t188  ___point, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Bounds::ToString()
 String_t* Bounds_ToString_m4389 (Bounds_t155 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Bounds::ToString(System.String)
 String_t* Bounds_ToString_m4390 (Bounds_t155 * __this, String_t* ___format, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::op_Equality(UnityEngine.Bounds,UnityEngine.Bounds)
 bool Bounds_op_Equality_m4391 (Object_t * __this/* static, unused */, Bounds_t155  ___lhs, Bounds_t155  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::op_Inequality(UnityEngine.Bounds,UnityEngine.Bounds)
 bool Bounds_op_Inequality_m3669 (Object_t * __this/* static, unused */, Bounds_t155  ___lhs, Bounds_t155  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
