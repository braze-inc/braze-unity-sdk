#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Rigidbody
struct Rigidbody_t390;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.ForceMode
#include "UnityEngine_UnityEngine_ForceMode.h"

// System.Void UnityEngine.Rigidbody::INTERNAL_get_velocity(UnityEngine.Vector3&)
 void Rigidbody_INTERNAL_get_velocity_m4611 (Rigidbody_t390 * __this, Vector3_t188 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_set_velocity(UnityEngine.Vector3&)
 void Rigidbody_INTERNAL_set_velocity_m4612 (Rigidbody_t390 * __this, Vector3_t188 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
 Vector3_t188  Rigidbody_get_velocity_m1855 (Rigidbody_t390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
 void Rigidbody_set_velocity_m1842 (Rigidbody_t390 * __this, Vector3_t188  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_get_angularVelocity(UnityEngine.Vector3&)
 void Rigidbody_INTERNAL_get_angularVelocity_m4613 (Rigidbody_t390 * __this, Vector3_t188 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_set_angularVelocity(UnityEngine.Vector3&)
 void Rigidbody_INTERNAL_set_angularVelocity_m4614 (Rigidbody_t390 * __this, Vector3_t188 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_angularVelocity()
 Vector3_t188  Rigidbody_get_angularVelocity_m1853 (Rigidbody_t390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_angularVelocity(UnityEngine.Vector3)
 void Rigidbody_set_angularVelocity_m1843 (Rigidbody_t390 * __this, Vector3_t188  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Rigidbody::get_useGravity()
 bool Rigidbody_get_useGravity_m1944 (Rigidbody_t390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3,UnityEngine.ForceMode)
 void Rigidbody_AddForce_m1945 (Rigidbody_t390 * __this, Vector3_t188  ___force, int32_t ___mode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_AddForce(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.ForceMode)
 void Rigidbody_INTERNAL_CALL_AddForce_m4615 (Object_t * __this/* static, unused */, Rigidbody_t390 * ___self, Vector3_t188 * ___force, int32_t ___mode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::AddForceAtPosition(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.ForceMode)
 void Rigidbody_AddForceAtPosition_m1994 (Rigidbody_t390 * __this, Vector3_t188  ___force, Vector3_t188  ___position, int32_t ___mode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_AddForceAtPosition(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.ForceMode)
 void Rigidbody_INTERNAL_CALL_AddForceAtPosition_m4616 (Object_t * __this/* static, unused */, Rigidbody_t390 * ___self, Vector3_t188 * ___force, Vector3_t188 * ___position, int32_t ___mode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::AddExplosionForce(System.Single,UnityEngine.Vector3,System.Single,System.Single,UnityEngine.ForceMode)
 void Rigidbody_AddExplosionForce_m1836 (Rigidbody_t390 * __this, float ___explosionForce, Vector3_t188  ___explosionPosition, float ___explosionRadius, float ___upwardsModifier, int32_t ___mode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_AddExplosionForce(UnityEngine.Rigidbody,System.Single,UnityEngine.Vector3&,System.Single,System.Single,UnityEngine.ForceMode)
 void Rigidbody_INTERNAL_CALL_AddExplosionForce_m4617 (Object_t * __this/* static, unused */, Rigidbody_t390 * ___self, float ___explosionForce, Vector3_t188 * ___explosionPosition, float ___explosionRadius, float ___upwardsModifier, int32_t ___mode, MethodInfo* method) IL2CPP_METHOD_ATTR;
