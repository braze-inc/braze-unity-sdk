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
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "mscorlib_System_Object837106420.h"

// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m2926210380 (Vector3_t3525329789 * __this, float ___x, float ___y, float ___z, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
extern "C"  void Vector3__ctor_m1846874791 (Vector3_t3525329789 * __this, float ___x, float ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t3525329789  Vector3_Lerp_m650470329 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___a, Vector3_t3525329789  ___b, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::RotateTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
extern "C"  Vector3_t3525329789  Vector3_RotateTowards_m2666123092 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___current, Vector3_t3525329789  ___target, float ___maxRadiansDelta, float ___maxMagnitudeDelta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::INTERNAL_CALL_RotateTowards(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Single,UnityEngine.Vector3&)
extern "C"  void Vector3_INTERNAL_CALL_RotateTowards_m3264305586 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789 * ___current, Vector3_t3525329789 * ___target, float ___maxRadiansDelta, float ___maxMagnitudeDelta, Vector3_t3525329789 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::SmoothDamp(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3&,System.Single)
extern "C"  Vector3_t3525329789  Vector3_SmoothDamp_m3121209633 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___current, Vector3_t3525329789  ___target, Vector3_t3525329789 * ___currentVelocity, float ___smoothTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::SmoothDamp(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3&,System.Single,System.Single,System.Single)
extern "C"  Vector3_t3525329789  Vector3_SmoothDamp_m3551295147 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___current, Vector3_t3525329789  ___target, Vector3_t3525329789 * ___currentVelocity, float ___smoothTime, float ___maxSpeed, float ___deltaTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::get_Item(System.Int32)
extern "C"  float Vector3_get_Item_m108333500 (Vector3_t3525329789 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::set_Item(System.Int32,System.Single)
extern "C"  void Vector3_set_Item_m1844835745 (Vector3_t3525329789 * __this, int32_t ___index, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Scale(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3525329789  Vector3_Scale_m3746402337 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___a, Vector3_t3525329789  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Cross(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3525329789  Vector3_Cross_m2894122475 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___lhs, Vector3_t3525329789  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Vector3::GetHashCode()
extern "C"  int32_t Vector3_GetHashCode_m3912867704 (Vector3_t3525329789 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector3::Equals(System.Object)
extern "C"  bool Vector3_Equals_m3337192096 (Vector3_t3525329789 * __this, Il2CppObject * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
extern "C"  Vector3_t3525329789  Vector3_Normalize_m3047997355 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::Normalize()
extern "C"  void Vector3_Normalize_m3984983796 (Vector3_t3525329789 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
extern "C"  Vector3_t3525329789  Vector3_get_normalized_m2650940353 (Vector3_t3525329789 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Vector3::ToString()
extern "C"  String_t* Vector3_ToString_m3566373060 (Vector3_t3525329789 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float Vector3_Dot_m2370485424 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___lhs, Vector3_t3525329789  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Project(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3525329789  Vector3_Project_m2128087858 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___vector, Vector3_t3525329789  ___onNormal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::Angle(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float Vector3_Angle_m1904328934 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___from, Vector3_t3525329789  ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float Vector3_Distance_m3366690344 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___a, Vector3_t3525329789  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::ClampMagnitude(UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t3525329789  Vector3_ClampMagnitude_m4004286216 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___vector, float ___maxLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
extern "C"  float Vector3_Magnitude_m995314358 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::get_magnitude()
extern "C"  float Vector3_get_magnitude_m989985786 (Vector3_t3525329789 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::SqrMagnitude(UnityEngine.Vector3)
extern "C"  float Vector3_SqrMagnitude_m1662776270 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
extern "C"  float Vector3_get_sqrMagnitude_m1207423764 (Vector3_t3525329789 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Min(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3525329789  Vector3_Min_m10392601 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___lhs, Vector3_t3525329789  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Max(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3525329789  Vector3_Max_m545730887 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___lhs, Vector3_t3525329789  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C"  Vector3_t3525329789  Vector3_get_zero_m2017759730 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
extern "C"  Vector3_t3525329789  Vector3_get_one_m886467710 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
extern "C"  Vector3_t3525329789  Vector3_get_forward_m1039372701 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_back()
extern "C"  Vector3_t3525329789  Vector3_get_back_m1326515313 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
extern "C"  Vector3_t3525329789  Vector3_get_up_m4046647141 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
extern "C"  Vector3_t3525329789  Vector3_get_down_m1397301612 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
extern "C"  Vector3_t3525329789  Vector3_get_left_m1616598929 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
extern "C"  Vector3_t3525329789  Vector3_get_right_m4015137012 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3525329789  Vector3_op_Addition_m695438225 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___a, Vector3_t3525329789  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3525329789  Vector3_op_Subtraction_m2842958165 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___a, Vector3_t3525329789  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
extern "C"  Vector3_t3525329789  Vector3_op_UnaryNegation_m3293197314 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t3525329789  Vector3_op_Multiply_m973638459 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___a, float ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
extern "C"  Vector3_t3525329789  Vector3_op_Multiply_m3809076219 (Il2CppObject * __this /* static, unused */, float ___d, Vector3_t3525329789  ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t3525329789  Vector3_op_Division_m4277988370 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___a, float ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  bool Vector3_op_Equality_m582817895 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___lhs, Vector3_t3525329789  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  bool Vector3_op_Inequality_m231387234 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___lhs, Vector3_t3525329789  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Vector3_t3525329789;
struct Vector3_t3525329789_marshaled_pinvoke;

extern "C" void Vector3_t3525329789_marshal_pinvoke(const Vector3_t3525329789& unmarshaled, Vector3_t3525329789_marshaled_pinvoke& marshaled);
extern "C" void Vector3_t3525329789_marshal_pinvoke_back(const Vector3_t3525329789_marshaled_pinvoke& marshaled, Vector3_t3525329789& unmarshaled);
extern "C" void Vector3_t3525329789_marshal_pinvoke_cleanup(Vector3_t3525329789_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Vector3_t3525329789;
struct Vector3_t3525329789_marshaled_com;

extern "C" void Vector3_t3525329789_marshal_com(const Vector3_t3525329789& unmarshaled, Vector3_t3525329789_marshaled_com& marshaled);
extern "C" void Vector3_t3525329789_marshal_com_back(const Vector3_t3525329789_marshaled_com& marshaled, Vector3_t3525329789& unmarshaled);
extern "C" void Vector3_t3525329789_marshal_com_cleanup(Vector3_t3525329789_marshaled_com& marshaled);
