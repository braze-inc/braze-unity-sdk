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

// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "mscorlib_System_Object837106420.h"

// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Quaternion__ctor_m1100844011 (Quaternion_t1891715979 * __this, float ___x0, float ___y1, float ___z2, float ___w3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
extern "C"  Quaternion_t1891715979  Quaternion_get_identity_m1743882806 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C"  float Quaternion_Dot_m580284 (Il2CppObject * __this /* static, unused */, Quaternion_t1891715979  ___a0, Quaternion_t1891715979  ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Quaternion_t1891715979  Quaternion_LookRotation_m2869326048 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___forward0, Vector3_t3525329789  ___upwards1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
extern "C"  Quaternion_t1891715979  Quaternion_LookRotation_m1257501645 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___forward0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Quaternion::INTERNAL_CALL_LookRotation(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Quaternion&)
extern "C"  void Quaternion_INTERNAL_CALL_LookRotation_m1501255504 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789 * ___forward0, Vector3_t3525329789 * ___upwards1, Quaternion_t1891715979 * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
extern "C"  Quaternion_t1891715979  Quaternion_Slerp_m844700366 (Il2CppObject * __this /* static, unused */, Quaternion_t1891715979  ___a0, Quaternion_t1891715979  ___b1, float ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Quaternion::INTERNAL_CALL_Slerp(UnityEngine.Quaternion&,UnityEngine.Quaternion&,System.Single,UnityEngine.Quaternion&)
extern "C"  void Quaternion_INTERNAL_CALL_Slerp_m2927410052 (Il2CppObject * __this /* static, unused */, Quaternion_t1891715979 * ___a0, Quaternion_t1891715979 * ___b1, float ___t2, Quaternion_t1891715979 * ___value3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
extern "C"  Quaternion_t1891715979  Quaternion_Inverse_m3542515566 (Il2CppObject * __this /* static, unused */, Quaternion_t1891715979  ___rotation0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Quaternion::INTERNAL_CALL_Inverse(UnityEngine.Quaternion&,UnityEngine.Quaternion&)
extern "C"  void Quaternion_INTERNAL_CALL_Inverse_m4175627710 (Il2CppObject * __this /* static, unused */, Quaternion_t1891715979 * ___rotation0, Quaternion_t1891715979 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Quaternion::ToString()
extern "C"  String_t* Quaternion_ToString_m1793285860 (Quaternion_t1891715979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
extern "C"  Vector3_t3525329789  Quaternion_get_eulerAngles_m997303795 (Quaternion_t1891715979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
extern "C"  Quaternion_t1891715979  Quaternion_Euler_m1204688217 (Il2CppObject * __this /* static, unused */, float ___x0, float ___y1, float ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
extern "C"  Quaternion_t1891715979  Quaternion_Euler_m1940911101 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___euler0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
extern "C"  Vector3_t3525329789  Quaternion_Internal_ToEulerRad_m1608666215 (Il2CppObject * __this /* static, unused */, Quaternion_t1891715979  ___rotation0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Quaternion::INTERNAL_CALL_Internal_ToEulerRad(UnityEngine.Quaternion&,UnityEngine.Vector3&)
extern "C"  void Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m1660134351 (Il2CppObject * __this /* static, unused */, Quaternion_t1891715979 * ___rotation0, Vector3_t3525329789 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
extern "C"  Quaternion_t1891715979  Quaternion_Internal_FromEulerRad_m3681319598 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___euler0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Quaternion::INTERNAL_CALL_Internal_FromEulerRad(UnityEngine.Vector3&,UnityEngine.Quaternion&)
extern "C"  void Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m1312441940 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789 * ___euler0, Quaternion_t1891715979 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Quaternion::GetHashCode()
extern "C"  int32_t Quaternion_GetHashCode_m3823258238 (Quaternion_t1891715979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Quaternion::Equals(System.Object)
extern "C"  bool Quaternion_Equals_m3843409946 (Quaternion_t1891715979 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C"  Quaternion_t1891715979  Quaternion_op_Multiply_m3077481361 (Il2CppObject * __this /* static, unused */, Quaternion_t1891715979  ___lhs0, Quaternion_t1891715979  ___rhs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C"  Vector3_t3525329789  Quaternion_op_Multiply_m3771288979 (Il2CppObject * __this /* static, unused */, Quaternion_t1891715979  ___rotation0, Vector3_t3525329789  ___point1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Quaternion::op_Inequality(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C"  bool Quaternion_op_Inequality_m4197259746 (Il2CppObject * __this /* static, unused */, Quaternion_t1891715979  ___lhs0, Quaternion_t1891715979  ___rhs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Quaternion_t1891715979;
struct Quaternion_t1891715979_marshaled_pinvoke;

extern "C" void Quaternion_t1891715979_marshal_pinvoke(const Quaternion_t1891715979& unmarshaled, Quaternion_t1891715979_marshaled_pinvoke& marshaled);
extern "C" void Quaternion_t1891715979_marshal_pinvoke_back(const Quaternion_t1891715979_marshaled_pinvoke& marshaled, Quaternion_t1891715979& unmarshaled);
extern "C" void Quaternion_t1891715979_marshal_pinvoke_cleanup(Quaternion_t1891715979_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Quaternion_t1891715979;
struct Quaternion_t1891715979_marshaled_com;

extern "C" void Quaternion_t1891715979_marshal_com(const Quaternion_t1891715979& unmarshaled, Quaternion_t1891715979_marshaled_com& marshaled);
extern "C" void Quaternion_t1891715979_marshal_com_back(const Quaternion_t1891715979_marshaled_com& marshaled, Quaternion_t1891715979& unmarshaled);
extern "C" void Quaternion_t1891715979_marshal_com_cleanup(Quaternion_t1891715979_marshaled_com& marshaled);
