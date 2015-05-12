#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Collider
struct Collider_t385;
// UnityEngine.Rigidbody
struct Rigidbody_t402;
// UnityEngine.PhysicMaterial
struct PhysicMaterial_t399;
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_Bounds.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// UnityEngine.Rigidbody UnityEngine.Collider::get_attachedRigidbody()
 Rigidbody_t402 * Collider_get_attachedRigidbody_m4713 (Collider_t385 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Collider::ClosestPointOnBounds(UnityEngine.Vector3)
 Vector3_t202  Collider_ClosestPointOnBounds_m2107 (Collider_t385 * __this, Vector3_t202  ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Collider::INTERNAL_CALL_ClosestPointOnBounds(UnityEngine.Collider,UnityEngine.Vector3&)
 Vector3_t202  Collider_INTERNAL_CALL_ClosestPointOnBounds_m4714 (Object_t * __this/* static, unused */, Collider_t385 * ___self, Vector3_t202 * ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.PhysicMaterial UnityEngine.Collider::get_sharedMaterial()
 PhysicMaterial_t399 * Collider_get_sharedMaterial_m1951 (Collider_t385 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Collider::INTERNAL_get_bounds(UnityEngine.Bounds&)
 void Collider_INTERNAL_get_bounds_m4715 (Collider_t385 * __this, Bounds_t169 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds UnityEngine.Collider::get_bounds()
 Bounds_t169  Collider_get_bounds_m2104 (Collider_t385 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
