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
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C" void Vector2__ctor_m1646 (Vector2_t231 * __this, float ___x, float ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector2::get_Item(System.Int32)
extern "C" float Vector2_get_Item_m3436 (Vector2_t231 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector2::set_Item(System.Int32,System.Single)
extern "C" void Vector2_set_Item_m3444 (Vector2_t231 * __this, int32_t ___index, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::Scale(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" Vector2_t231  Vector2_Scale_m3502 (Object_t * __this /* static, unused */, Vector2_t231  ___a, Vector2_t231  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Vector2::ToString()
extern "C" String_t* Vector2_ToString_m3864 (Vector2_t231 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Vector2::GetHashCode()
extern "C" int32_t Vector2_GetHashCode_m3865 (Vector2_t231 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector2::Equals(System.Object)
extern "C" bool Vector2_Equals_m3866 (Vector2_t231 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector2::Dot(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" float Vector2_Dot_m3228 (Object_t * __this /* static, unused */, Vector2_t231  ___lhs, Vector2_t231  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector2::get_magnitude()
extern "C" float Vector2_get_magnitude_m1111 (Vector2_t231 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
extern "C" float Vector2_get_sqrMagnitude_m3196 (Vector2_t231 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector2::SqrMagnitude(UnityEngine.Vector2)
extern "C" float Vector2_SqrMagnitude_m3867 (Object_t * __this /* static, unused */, Vector2_t231  ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
extern "C" Vector2_t231  Vector2_get_zero_m1698 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::get_one()
extern "C" Vector2_t231  Vector2_get_one_m3286 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
extern "C" Vector2_t231  Vector2_get_up_m3306 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::get_right()
extern "C" Vector2_t231  Vector2_get_right_m3300 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" Vector2_t231  Vector2_op_Addition_m3331 (Object_t * __this /* static, unused */, Vector2_t231  ___a, Vector2_t231  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" Vector2_t231  Vector2_op_Subtraction_m1716 (Object_t * __this /* static, unused */, Vector2_t231  ___a, Vector2_t231  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
extern "C" Vector2_t231  Vector2_op_Multiply_m1724 (Object_t * __this /* static, unused */, Vector2_t231  ___a, float ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
extern "C" Vector2_t231  Vector2_op_Division_m1723 (Object_t * __this /* static, unused */, Vector2_t231  ___a, float ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" bool Vector2_op_Equality_m3688 (Object_t * __this /* static, unused */, Vector2_t231  ___lhs, Vector2_t231  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector2::op_Inequality(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" bool Vector2_op_Inequality_m3500 (Object_t * __this /* static, unused */, Vector2_t231  ___lhs, Vector2_t231  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
extern "C" Vector2_t231  Vector2_op_Implicit_m3205 (Object_t * __this /* static, unused */, Vector3_t259  ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
extern "C" Vector3_t259  Vector2_op_Implicit_m1718 (Object_t * __this /* static, unused */, Vector2_t231  ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
