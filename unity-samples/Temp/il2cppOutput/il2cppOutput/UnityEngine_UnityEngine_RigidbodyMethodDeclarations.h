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

// UnityEngine.Rigidbody
struct Rigidbody_t359;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_ForceMode.h"

// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
extern "C" Vector3_t259  Rigidbody_get_velocity_m1608 (Rigidbody_t359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
extern "C" void Rigidbody_set_velocity_m1596 (Rigidbody_t359 * __this, Vector3_t259  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_get_velocity(UnityEngine.Vector3&)
extern "C" void Rigidbody_INTERNAL_get_velocity_m4231 (Rigidbody_t359 * __this, Vector3_t259 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_set_velocity(UnityEngine.Vector3&)
extern "C" void Rigidbody_INTERNAL_set_velocity_m4232 (Rigidbody_t359 * __this, Vector3_t259 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_angularVelocity()
extern "C" Vector3_t259  Rigidbody_get_angularVelocity_m1607 (Rigidbody_t359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_angularVelocity(UnityEngine.Vector3)
extern "C" void Rigidbody_set_angularVelocity_m1597 (Rigidbody_t359 * __this, Vector3_t259  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_get_angularVelocity(UnityEngine.Vector3&)
extern "C" void Rigidbody_INTERNAL_get_angularVelocity_m4233 (Rigidbody_t359 * __this, Vector3_t259 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_set_angularVelocity(UnityEngine.Vector3&)
extern "C" void Rigidbody_INTERNAL_set_angularVelocity_m4234 (Rigidbody_t359 * __this, Vector3_t259 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Rigidbody::get_useGravity()
extern "C" bool Rigidbody_get_useGravity_m1693 (Rigidbody_t359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3,UnityEngine.ForceMode)
extern "C" void Rigidbody_AddForce_m1694 (Rigidbody_t359 * __this, Vector3_t259  ___force, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_AddForce(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.ForceMode)
extern "C" void Rigidbody_INTERNAL_CALL_AddForce_m4235 (Object_t * __this /* static, unused */, Rigidbody_t359 * ___self, Vector3_t259 * ___force, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::AddForceAtPosition(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.ForceMode)
extern "C" void Rigidbody_AddForceAtPosition_m1743 (Rigidbody_t359 * __this, Vector3_t259  ___force, Vector3_t259  ___position, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_AddForceAtPosition(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.ForceMode)
extern "C" void Rigidbody_INTERNAL_CALL_AddForceAtPosition_m4236 (Object_t * __this /* static, unused */, Rigidbody_t359 * ___self, Vector3_t259 * ___force, Vector3_t259 * ___position, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::AddExplosionForce(System.Single,UnityEngine.Vector3,System.Single,System.Single,UnityEngine.ForceMode)
extern "C" void Rigidbody_AddExplosionForce_m1592 (Rigidbody_t359 * __this, float ___explosionForce, Vector3_t259  ___explosionPosition, float ___explosionRadius, float ___upwardsModifier, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_AddExplosionForce(UnityEngine.Rigidbody,System.Single,UnityEngine.Vector3&,System.Single,System.Single,UnityEngine.ForceMode)
extern "C" void Rigidbody_INTERNAL_CALL_AddExplosionForce_m4237 (Object_t * __this /* static, unused */, Rigidbody_t359 * ___self, float ___explosionForce, Vector3_t259 * ___explosionPosition, float ___explosionRadius, float ___upwardsModifier, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
