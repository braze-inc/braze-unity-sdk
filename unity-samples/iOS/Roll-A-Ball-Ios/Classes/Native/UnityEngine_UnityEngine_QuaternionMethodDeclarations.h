#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Quaternion
struct Quaternion_t427;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
 void Quaternion__ctor_m4407 (Quaternion_t427 * __this, float ___x, float ___y, float ___z, float ___w, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
 Quaternion_t427  Quaternion_get_identity_m1943 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
 float Quaternion_Dot_m4408 (Object_t * __this/* static, unused */, Quaternion_t427  ___a, Quaternion_t427  ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
 Quaternion_t427  Quaternion_LookRotation_m2035 (Object_t * __this/* static, unused */, Vector3_t202  ___forward, Vector3_t202  ___upwards, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
 Quaternion_t427  Quaternion_LookRotation_m2094 (Object_t * __this/* static, unused */, Vector3_t202  ___forward, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_LookRotation(UnityEngine.Vector3&,UnityEngine.Vector3&)
 Quaternion_t427  Quaternion_INTERNAL_CALL_LookRotation_m4409 (Object_t * __this/* static, unused */, Vector3_t202 * ___forward, Vector3_t202 * ___upwards, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
 Quaternion_t427  Quaternion_Slerp_m2096 (Object_t * __this/* static, unused */, Quaternion_t427  ___from, Quaternion_t427  ___to, float ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_Slerp(UnityEngine.Quaternion&,UnityEngine.Quaternion&,System.Single)
 Quaternion_t427  Quaternion_INTERNAL_CALL_Slerp_m4410 (Object_t * __this/* static, unused */, Quaternion_t427 * ___from, Quaternion_t427 * ___to, float ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
 Quaternion_t427  Quaternion_Inverse_m1995 (Object_t * __this/* static, unused */, Quaternion_t427  ___rotation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_Inverse(UnityEngine.Quaternion&)
 Quaternion_t427  Quaternion_INTERNAL_CALL_Inverse_m4411 (Object_t * __this/* static, unused */, Quaternion_t427 * ___rotation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Quaternion::ToString()
 String_t* Quaternion_ToString_m4412 (Quaternion_t427 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
 Vector3_t202  Quaternion_get_eulerAngles_m4413 (Quaternion_t427 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
 Quaternion_t427  Quaternion_Euler_m1991 (Object_t * __this/* static, unused */, float ___x, float ___y, float ___z, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
 Quaternion_t427  Quaternion_Euler_m4414 (Object_t * __this/* static, unused */, Vector3_t202  ___euler, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
 Vector3_t202  Quaternion_Internal_ToEulerRad_m4415 (Object_t * __this/* static, unused */, Quaternion_t427  ___rotation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::INTERNAL_CALL_Internal_ToEulerRad(UnityEngine.Quaternion&)
 Vector3_t202  Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m4416 (Object_t * __this/* static, unused */, Quaternion_t427 * ___rotation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
 Quaternion_t427  Quaternion_Internal_FromEulerRad_m4417 (Object_t * __this/* static, unused */, Vector3_t202  ___euler, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_Internal_FromEulerRad(UnityEngine.Vector3&)
 Quaternion_t427  Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m4418 (Object_t * __this/* static, unused */, Vector3_t202 * ___euler, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Quaternion::GetHashCode()
 int32_t Quaternion_GetHashCode_m4419 (Quaternion_t427 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Quaternion::Equals(System.Object)
 bool Quaternion_Equals_m4420 (Quaternion_t427 * __this, Object_t * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
 Quaternion_t427  Quaternion_op_Multiply_m1993 (Object_t * __this/* static, unused */, Quaternion_t427  ___lhs, Quaternion_t427  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
 Vector3_t202  Quaternion_op_Multiply_m1989 (Object_t * __this/* static, unused */, Quaternion_t427  ___rotation, Vector3_t202  ___point, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Quaternion::op_Inequality(UnityEngine.Quaternion,UnityEngine.Quaternion)
 bool Quaternion_op_Inequality_m3720 (Object_t * __this/* static, unused */, Quaternion_t427  ___lhs, Quaternion_t427  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
