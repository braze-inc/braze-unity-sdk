#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Quaternion
struct Quaternion_t415;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
 void Quaternion__ctor_m4314 (Quaternion_t415 * __this, float ___x, float ___y, float ___z, float ___w, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
 Quaternion_t415  Quaternion_get_identity_m1837 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
 float Quaternion_Dot_m4315 (Object_t * __this/* static, unused */, Quaternion_t415  ___a, Quaternion_t415  ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
 Quaternion_t415  Quaternion_LookRotation_m1929 (Object_t * __this/* static, unused */, Vector3_t188  ___forward, Vector3_t188  ___upwards, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
 Quaternion_t415  Quaternion_LookRotation_m1988 (Object_t * __this/* static, unused */, Vector3_t188  ___forward, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_LookRotation(UnityEngine.Vector3&,UnityEngine.Vector3&)
 Quaternion_t415  Quaternion_INTERNAL_CALL_LookRotation_m4316 (Object_t * __this/* static, unused */, Vector3_t188 * ___forward, Vector3_t188 * ___upwards, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
 Quaternion_t415  Quaternion_Slerp_m1990 (Object_t * __this/* static, unused */, Quaternion_t415  ___from, Quaternion_t415  ___to, float ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_Slerp(UnityEngine.Quaternion&,UnityEngine.Quaternion&,System.Single)
 Quaternion_t415  Quaternion_INTERNAL_CALL_Slerp_m4317 (Object_t * __this/* static, unused */, Quaternion_t415 * ___from, Quaternion_t415 * ___to, float ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
 Quaternion_t415  Quaternion_Inverse_m1889 (Object_t * __this/* static, unused */, Quaternion_t415  ___rotation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_Inverse(UnityEngine.Quaternion&)
 Quaternion_t415  Quaternion_INTERNAL_CALL_Inverse_m4318 (Object_t * __this/* static, unused */, Quaternion_t415 * ___rotation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Quaternion::ToString()
 String_t* Quaternion_ToString_m4319 (Quaternion_t415 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
 Vector3_t188  Quaternion_get_eulerAngles_m4320 (Quaternion_t415 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
 Quaternion_t415  Quaternion_Euler_m1885 (Object_t * __this/* static, unused */, float ___x, float ___y, float ___z, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
 Quaternion_t415  Quaternion_Euler_m4321 (Object_t * __this/* static, unused */, Vector3_t188  ___euler, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
 Vector3_t188  Quaternion_Internal_ToEulerRad_m4322 (Object_t * __this/* static, unused */, Quaternion_t415  ___rotation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::INTERNAL_CALL_Internal_ToEulerRad(UnityEngine.Quaternion&)
 Vector3_t188  Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m4323 (Object_t * __this/* static, unused */, Quaternion_t415 * ___rotation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
 Quaternion_t415  Quaternion_Internal_FromEulerRad_m4324 (Object_t * __this/* static, unused */, Vector3_t188  ___euler, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_Internal_FromEulerRad(UnityEngine.Vector3&)
 Quaternion_t415  Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m4325 (Object_t * __this/* static, unused */, Vector3_t188 * ___euler, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Quaternion::GetHashCode()
 int32_t Quaternion_GetHashCode_m4326 (Quaternion_t415 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Quaternion::Equals(System.Object)
 bool Quaternion_Equals_m4327 (Quaternion_t415 * __this, Object_t * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
 Quaternion_t415  Quaternion_op_Multiply_m1887 (Object_t * __this/* static, unused */, Quaternion_t415  ___lhs, Quaternion_t415  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
 Vector3_t188  Quaternion_op_Multiply_m1883 (Object_t * __this/* static, unused */, Quaternion_t415  ___rotation, Vector3_t188  ___point, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Quaternion::op_Inequality(UnityEngine.Quaternion,UnityEngine.Quaternion)
 bool Quaternion_op_Inequality_m3616 (Object_t * __this/* static, unused */, Quaternion_t415  ___lhs, Quaternion_t415  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
