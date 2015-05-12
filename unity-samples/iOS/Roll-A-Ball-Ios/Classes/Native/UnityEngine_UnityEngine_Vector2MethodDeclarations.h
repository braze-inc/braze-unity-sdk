#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Vector2
struct Vector2_t184;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
 void Vector2__ctor_m1895 (Vector2_t184 * __this, float ___x, float ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector2::get_Item(System.Int32)
 float Vector2_get_Item_m3520 (Vector2_t184 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector2::set_Item(System.Int32,System.Single)
 void Vector2_set_Item_m3531 (Vector2_t184 * __this, int32_t ___index, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::Scale(UnityEngine.Vector2,UnityEngine.Vector2)
 Vector2_t184  Vector2_Scale_m3625 (Object_t * __this/* static, unused */, Vector2_t184  ___a, Vector2_t184  ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Vector2::ToString()
 String_t* Vector2_ToString_m4294 (Vector2_t184 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Vector2::GetHashCode()
 int32_t Vector2_GetHashCode_m4295 (Vector2_t184 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector2::Equals(System.Object)
 bool Vector2_Equals_m4296 (Vector2_t184 * __this, Object_t * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector2::get_magnitude()
 float Vector2_get_magnitude_m1247 (Vector2_t184 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
 float Vector2_get_sqrMagnitude_m3283 (Vector2_t184 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector2::SqrMagnitude(UnityEngine.Vector2)
 float Vector2_SqrMagnitude_m4297 (Object_t * __this/* static, unused */, Vector2_t184  ___a, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
 Vector2_t184  Vector2_get_zero_m1949 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::get_one()
 Vector2_t184  Vector2_get_one_m3516 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
 Vector2_t184  Vector2_get_up_m3770 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
 Vector2_t184  Vector2_op_Addition_m3518 (Object_t * __this/* static, unused */, Vector2_t184  ___a, Vector2_t184  ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
 Vector2_t184  Vector2_op_Subtraction_m1967 (Object_t * __this/* static, unused */, Vector2_t184  ___a, Vector2_t184  ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
 Vector2_t184  Vector2_op_Multiply_m1975 (Object_t * __this/* static, unused */, Vector2_t184  ___a, float ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
 Vector2_t184  Vector2_op_Division_m1974 (Object_t * __this/* static, unused */, Vector2_t184  ___a, float ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
 bool Vector2_op_Equality_m3847 (Object_t * __this/* static, unused */, Vector2_t184  ___lhs, Vector2_t184  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector2::op_Inequality(UnityEngine.Vector2,UnityEngine.Vector2)
 bool Vector2_op_Inequality_m3617 (Object_t * __this/* static, unused */, Vector2_t184  ___lhs, Vector2_t184  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
 Vector2_t184  Vector2_op_Implicit_m3300 (Object_t * __this/* static, unused */, Vector3_t188  ___v, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
 Vector3_t188  Vector2_op_Implicit_m1969 (Object_t * __this/* static, unused */, Vector2_t184  ___v, MethodInfo* method) IL2CPP_METHOD_ATTR;
