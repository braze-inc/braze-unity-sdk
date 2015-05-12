#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Collider
struct Collider_t373;
// UnityEngine.Rigidbody
struct Rigidbody_t390;
// UnityEngine.PhysicMaterial
struct PhysicMaterial_t387;
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_Bounds.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// UnityEngine.Rigidbody UnityEngine.Collider::get_attachedRigidbody()
 Rigidbody_t390 * Collider_get_attachedRigidbody_m4618 (Collider_t373 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Collider::ClosestPointOnBounds(UnityEngine.Vector3)
 Vector3_t188  Collider_ClosestPointOnBounds_m2001 (Collider_t373 * __this, Vector3_t188  ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Collider::INTERNAL_CALL_ClosestPointOnBounds(UnityEngine.Collider,UnityEngine.Vector3&)
 Vector3_t188  Collider_INTERNAL_CALL_ClosestPointOnBounds_m4619 (Object_t * __this/* static, unused */, Collider_t373 * ___self, Vector3_t188 * ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.PhysicMaterial UnityEngine.Collider::get_sharedMaterial()
 PhysicMaterial_t387 * Collider_get_sharedMaterial_m1845 (Collider_t373 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Collider::INTERNAL_get_bounds(UnityEngine.Bounds&)
 void Collider_INTERNAL_get_bounds_m4620 (Collider_t373 * __this, Bounds_t155 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds UnityEngine.Collider::get_bounds()
 Bounds_t155  Collider_get_bounds_m1998 (Collider_t373 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
