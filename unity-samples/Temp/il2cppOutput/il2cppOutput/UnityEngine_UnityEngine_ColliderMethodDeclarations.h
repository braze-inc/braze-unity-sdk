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

// UnityEngine.Collider
struct Collider_t410;
// UnityEngine.Rigidbody
struct Rigidbody_t359;
// UnityEngine.PhysicMaterial
struct PhysicMaterial_t357;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Bounds.h"

// UnityEngine.Rigidbody UnityEngine.Collider::get_attachedRigidbody()
extern "C" Rigidbody_t359 * Collider_get_attachedRigidbody_m4238 (Collider_t410 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Collider::ClosestPointOnBounds(UnityEngine.Vector3)
extern "C" Vector3_t259  Collider_ClosestPointOnBounds_m1750 (Collider_t410 * __this, Vector3_t259  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Collider::INTERNAL_CALL_ClosestPointOnBounds(UnityEngine.Collider,UnityEngine.Vector3&)
extern "C" Vector3_t259  Collider_INTERNAL_CALL_ClosestPointOnBounds_m4239 (Object_t * __this /* static, unused */, Collider_t410 * ___self, Vector3_t259 * ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.PhysicMaterial UnityEngine.Collider::get_sharedMaterial()
extern "C" PhysicMaterial_t357 * Collider_get_sharedMaterial_m1599 (Collider_t410 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds UnityEngine.Collider::get_bounds()
extern "C" Bounds_t255  Collider_get_bounds_m1747 (Collider_t410 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Collider::INTERNAL_get_bounds(UnityEngine.Bounds&)
extern "C" void Collider_INTERNAL_get_bounds_m4240 (Collider_t410 * __this, Bounds_t255 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
