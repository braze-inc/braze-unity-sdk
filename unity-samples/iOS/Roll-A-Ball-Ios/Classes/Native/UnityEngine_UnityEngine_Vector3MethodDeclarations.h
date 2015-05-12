#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Vector3
struct Vector3_t188;
// System.Object
struct Object_t;
// System.String
struct String_t;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
 void Vector3__ctor_m1321 (Vector3_t188 * __this, float ___x, float ___y, float ___z, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
 void Vector3__ctor_m3442 (Vector3_t188 * __this, float ___x, float ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
 Vector3_t188  Vector3_Lerp_m1906 (Object_t * __this/* static, unused */, Vector3_t188  ___from, Vector3_t188  ___to, float ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::RotateTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
 Vector3_t188  Vector3_RotateTowards_m1886 (Object_t * __this/* static, unused */, Vector3_t188  ___current, Vector3_t188  ___target, float ___maxRadiansDelta, float ___maxMagnitudeDelta, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::INTERNAL_CALL_RotateTowards(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Single)
 Vector3_t188  Vector3_INTERNAL_CALL_RotateTowards_m4298 (Object_t * __this/* static, unused */, Vector3_t188 * ___current, Vector3_t188 * ___target, float ___maxRadiansDelta, float ___maxMagnitudeDelta, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::SmoothDamp(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3&,System.Single)
 Vector3_t188  Vector3_SmoothDamp_m1983 (Object_t * __this/* static, unused */, Vector3_t188  ___current, Vector3_t188  ___target, Vector3_t188 * ___currentVelocity, float ___smoothTime, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::SmoothDamp(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3&,System.Single,System.Single,System.Single)
 Vector3_t188  Vector3_SmoothDamp_m4299 (Object_t * __this/* static, unused */, Vector3_t188  ___current, Vector3_t188  ___target, Vector3_t188 * ___currentVelocity, float ___smoothTime, float ___maxSpeed, float ___deltaTime, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::get_Item(System.Int32)
 float Vector3_get_Item_m3671 (Vector3_t188 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::set_Item(System.Int32,System.Single)
 void Vector3_set_Item_m3672 (Vector3_t188 * __this, int32_t ___index, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Scale(UnityEngine.Vector3,UnityEngine.Vector3)
 Vector3_t188  Vector3_Scale_m1902 (Object_t * __this/* static, unused */, Vector3_t188  ___a, Vector3_t188  ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Cross(UnityEngine.Vector3,UnityEngine.Vector3)
 Vector3_t188  Vector3_Cross_m1948 (Object_t * __this/* static, unused */, Vector3_t188  ___lhs, Vector3_t188  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Vector3::GetHashCode()
 int32_t Vector3_GetHashCode_m4300 (Vector3_t188 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector3::Equals(System.Object)
 bool Vector3_Equals_m4301 (Vector3_t188 * __this, Object_t * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
 Vector3_t188  Vector3_Normalize_m4302 (Object_t * __this/* static, unused */, Vector3_t188  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::Normalize()
 void Vector3_Normalize_m1980 (Vector3_t188 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
 Vector3_t188  Vector3_get_normalized_m1841 (Vector3_t188 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Vector3::ToString()
 String_t* Vector3_ToString_m4303 (Vector3_t188 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Vector3::ToString(System.String)
 String_t* Vector3_ToString_m4304 (Vector3_t188 * __this, String_t* ___format, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
 float Vector3_Dot_m1882 (Object_t * __this/* static, unused */, Vector3_t188  ___lhs, Vector3_t188  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Project(UnityEngine.Vector3,UnityEngine.Vector3)
 Vector3_t188  Vector3_Project_m1946 (Object_t * __this/* static, unused */, Vector3_t188  ___vector, Vector3_t188  ___onNormal, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::Angle(UnityEngine.Vector3,UnityEngine.Vector3)
 float Vector3_Angle_m1947 (Object_t * __this/* static, unused */, Vector3_t188  ___from, Vector3_t188  ___to, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
 float Vector3_Distance_m1833 (Object_t * __this/* static, unused */, Vector3_t188  ___a, Vector3_t188  ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::ClampMagnitude(UnityEngine.Vector3,System.Single)
 Vector3_t188  Vector3_ClampMagnitude_m4305 (Object_t * __this/* static, unused */, Vector3_t188  ___vector, float ___maxLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
 float Vector3_Magnitude_m4306 (Object_t * __this/* static, unused */, Vector3_t188  ___a, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::get_magnitude()
 float Vector3_get_magnitude_m1257 (Vector3_t188 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::SqrMagnitude(UnityEngine.Vector3)
 float Vector3_SqrMagnitude_m4307 (Object_t * __this/* static, unused */, Vector3_t188  ___a, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
 float Vector3_get_sqrMagnitude_m1840 (Vector3_t188 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Min(UnityEngine.Vector3,UnityEngine.Vector3)
 Vector3_t188  Vector3_Min_m3680 (Object_t * __this/* static, unused */, Vector3_t188  ___lhs, Vector3_t188  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Max(UnityEngine.Vector3,UnityEngine.Vector3)
 Vector3_t188  Vector3_Max_m3681 (Object_t * __this/* static, unused */, Vector3_t188  ___lhs, Vector3_t188  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
 Vector3_t188  Vector3_get_zero_m1827 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
 Vector3_t188  Vector3_get_one_m1800 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
 Vector3_t188  Vector3_get_forward_m1871 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_back()
 Vector3_t188  Vector3_get_back_m4308 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
 Vector3_t188  Vector3_get_up_m1787 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
 Vector3_t188  Vector3_get_down_m3704 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
 Vector3_t188  Vector3_get_left_m3703 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
 Vector3_t188  Vector3_get_right_m1979 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
 Vector3_t188  Vector3_op_Addition_m1789 (Object_t * __this/* static, unused */, Vector3_t188  ___a, Vector3_t188  ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
 Vector3_t188  Vector3_op_Subtraction_m1809 (Object_t * __this/* static, unused */, Vector3_t188  ___a, Vector3_t188  ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
 Vector3_t188  Vector3_op_UnaryNegation_m1912 (Object_t * __this/* static, unused */, Vector3_t188  ___a, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
 Vector3_t188  Vector3_op_Multiply_m1788 (Object_t * __this/* static, unused */, Vector3_t188  ___a, float ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
 Vector3_t188  Vector3_op_Multiply_m1903 (Object_t * __this/* static, unused */, float ___d, Vector3_t188  ___a, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
 Vector3_t188  Vector3_op_Division_m1828 (Object_t * __this/* static, unused */, Vector3_t188  ___a, float ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
 bool Vector3_op_Equality_m1234 (Object_t * __this/* static, unused */, Vector3_t188  ___lhs, Vector3_t188  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
 bool Vector3_op_Inequality_m1235 (Object_t * __this/* static, unused */, Vector3_t188  ___lhs, Vector3_t188  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
