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
struct Collider_t955670625;
// UnityEngine.Rigidbody
struct Rigidbody_t1972007546;
// UnityEngine.PhysicMaterial
struct PhysicMaterial_t4182154592;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Collider955670625.h"
#include "UnityEngine_UnityEngine_Bounds3518514978.h"

// UnityEngine.Rigidbody UnityEngine.Collider::get_attachedRigidbody()
extern "C"  Rigidbody_t1972007546 * Collider_get_attachedRigidbody_m2821754842 (Collider_t955670625 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Collider::ClosestPointOnBounds(UnityEngine.Vector3)
extern "C"  Vector3_t3525329789  Collider_ClosestPointOnBounds_m2926847401 (Collider_t955670625 * __this, Vector3_t3525329789  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Collider::INTERNAL_CALL_ClosestPointOnBounds(UnityEngine.Collider,UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C"  void Collider_INTERNAL_CALL_ClosestPointOnBounds_m861289994 (Il2CppObject * __this /* static, unused */, Collider_t955670625 * ___self, Vector3_t3525329789 * ___position, Vector3_t3525329789 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.PhysicMaterial UnityEngine.Collider::get_sharedMaterial()
extern "C"  PhysicMaterial_t4182154592 * Collider_get_sharedMaterial_m747017541 (Collider_t955670625 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds UnityEngine.Collider::get_bounds()
extern "C"  Bounds_t3518514978  Collider_get_bounds_m1050008332 (Collider_t955670625 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Collider::INTERNAL_get_bounds(UnityEngine.Bounds&)
extern "C"  void Collider_INTERNAL_get_bounds_m1269265569 (Collider_t955670625 * __this, Bounds_t3518514978 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
