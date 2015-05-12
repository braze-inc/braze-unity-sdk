#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Vector2
struct Vector2_t198;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
 void Vector2__ctor_m2001 (Vector2_t198 * __this, float ___x, float ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector2::get_Item(System.Int32)
 float Vector2_get_Item_m3625 (Vector2_t198 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector2::set_Item(System.Int32,System.Single)
 void Vector2_set_Item_m3636 (Vector2_t198 * __this, int32_t ___index, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::Scale(UnityEngine.Vector2,UnityEngine.Vector2)
 Vector2_t198  Vector2_Scale_m3729 (Object_t * __this/* static, unused */, Vector2_t198  ___a, Vector2_t198  ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Vector2::ToString()
 String_t* Vector2_ToString_m4384 (Vector2_t198 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Vector2::GetHashCode()
 int32_t Vector2_GetHashCode_m4385 (Vector2_t198 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector2::Equals(System.Object)
 bool Vector2_Equals_m4386 (Vector2_t198 * __this, Object_t * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector2::get_magnitude()
 float Vector2_get_magnitude_m1353 (Vector2_t198 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
 float Vector2_get_sqrMagnitude_m3388 (Vector2_t198 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector2::SqrMagnitude(UnityEngine.Vector2)
 float Vector2_SqrMagnitude_m4387 (Object_t * __this/* static, unused */, Vector2_t198  ___a, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
 Vector2_t198  Vector2_get_zero_m2055 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::get_one()
 Vector2_t198  Vector2_get_one_m3621 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
 Vector2_t198  Vector2_get_up_m3875 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
 Vector2_t198  Vector2_op_Addition_m3623 (Object_t * __this/* static, unused */, Vector2_t198  ___a, Vector2_t198  ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
 Vector2_t198  Vector2_op_Subtraction_m2073 (Object_t * __this/* static, unused */, Vector2_t198  ___a, Vector2_t198  ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
 Vector2_t198  Vector2_op_Multiply_m2081 (Object_t * __this/* static, unused */, Vector2_t198  ___a, float ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
 Vector2_t198  Vector2_op_Division_m2080 (Object_t * __this/* static, unused */, Vector2_t198  ___a, float ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
 bool Vector2_op_Equality_m3952 (Object_t * __this/* static, unused */, Vector2_t198  ___lhs, Vector2_t198  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector2::op_Inequality(UnityEngine.Vector2,UnityEngine.Vector2)
 bool Vector2_op_Inequality_m3721 (Object_t * __this/* static, unused */, Vector2_t198  ___lhs, Vector2_t198  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
 Vector2_t198  Vector2_op_Implicit_m3405 (Object_t * __this/* static, unused */, Vector3_t202  ___v, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
 Vector3_t202  Vector2_op_Implicit_m2075 (Object_t * __this/* static, unused */, Vector2_t198  ___v, MethodInfo* method) IL2CPP_METHOD_ATTR;
