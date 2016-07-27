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

// System.Object
struct Il2CppObject;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector43525329790.h"
#include "mscorlib_System_Object837106420.h"

// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Vector4__ctor_m2441427762 (Vector4_t3525329790 * __this, float ___x0, float ___y1, float ___z2, float ___w3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector4::get_Item(System.Int32)
extern "C"  float Vector4_get_Item_m2326091453 (Vector4_t3525329790 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector4::set_Item(System.Int32,System.Single)
extern "C"  void Vector4_set_Item_m922152162 (Vector4_t3525329790 * __this, int32_t ___index0, float ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Vector4::GetHashCode()
extern "C"  int32_t Vector4_GetHashCode_m3402333527 (Vector4_t3525329790 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector4::Equals(System.Object)
extern "C"  bool Vector4_Equals_m3270185343 (Vector4_t3525329790 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Vector4::ToString()
extern "C"  String_t* Vector4_ToString_m3272970053 (Vector4_t3525329790 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector4::Dot(UnityEngine.Vector4,UnityEngine.Vector4)
extern "C"  float Vector4_Dot_m2303368623 (Il2CppObject * __this /* static, unused */, Vector4_t3525329790  ___a0, Vector4_t3525329790  ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector4::SqrMagnitude(UnityEngine.Vector4)
extern "C"  float Vector4_SqrMagnitude_m3613076556 (Il2CppObject * __this /* static, unused */, Vector4_t3525329790  ___a0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector4::get_sqrMagnitude()
extern "C"  float Vector4_get_sqrMagnitude_m1418774677 (Vector4_t3525329790 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Vector4::get_zero()
extern "C"  Vector4_t3525329790  Vector4_get_zero_m3835647092 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Subtraction(UnityEngine.Vector4,UnityEngine.Vector4)
extern "C"  Vector4_t3525329790  Vector4_op_Subtraction_m3588766929 (Il2CppObject * __this /* static, unused */, Vector4_t3525329790  ___a0, Vector4_t3525329790  ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Division(UnityEngine.Vector4,System.Single)
extern "C"  Vector4_t3525329790  Vector4_op_Division_m3513381747 (Il2CppObject * __this /* static, unused */, Vector4_t3525329790  ___a0, float ___d1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector4::op_Equality(UnityEngine.Vector4,UnityEngine.Vector4)
extern "C"  bool Vector4_op_Equality_m3533121638 (Il2CppObject * __this /* static, unused */, Vector4_t3525329790  ___lhs0, Vector4_t3525329790  ___rhs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Vector4_t3525329790;
struct Vector4_t3525329790_marshaled_pinvoke;

extern "C" void Vector4_t3525329790_marshal_pinvoke(const Vector4_t3525329790& unmarshaled, Vector4_t3525329790_marshaled_pinvoke& marshaled);
extern "C" void Vector4_t3525329790_marshal_pinvoke_back(const Vector4_t3525329790_marshaled_pinvoke& marshaled, Vector4_t3525329790& unmarshaled);
extern "C" void Vector4_t3525329790_marshal_pinvoke_cleanup(Vector4_t3525329790_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Vector4_t3525329790;
struct Vector4_t3525329790_marshaled_com;

extern "C" void Vector4_t3525329790_marshal_com(const Vector4_t3525329790& unmarshaled, Vector4_t3525329790_marshaled_com& marshaled);
extern "C" void Vector4_t3525329790_marshal_com_back(const Vector4_t3525329790_marshaled_com& marshaled, Vector4_t3525329790& unmarshaled);
extern "C" void Vector4_t3525329790_marshal_com_cleanup(Vector4_t3525329790_marshaled_com& marshaled);
