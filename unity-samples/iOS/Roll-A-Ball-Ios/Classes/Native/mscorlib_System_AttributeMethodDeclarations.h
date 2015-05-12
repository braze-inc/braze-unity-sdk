#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Attribute
struct Attribute_t213;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Reflection.MemberInfo
struct MemberInfo_t196;
// System.Reflection.ParameterInfo
struct ParameterInfo_t1068;

// System.Void System.Attribute::.ctor()
 void Attribute__ctor_m1353 (Attribute_t213 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Attribute::CheckParameters(System.Object,System.Type)
 void Attribute_CheckParameters_m7704 (Object_t * __this/* static, unused */, Object_t * ___element, Type_t * ___attributeType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Attribute System.Attribute::GetCustomAttribute(System.Reflection.MemberInfo,System.Type)
 Attribute_t213 * Attribute_GetCustomAttribute_m7705 (Object_t * __this/* static, unused */, MemberInfo_t196 * ___element, Type_t * ___attributeType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Attribute System.Attribute::GetCustomAttribute(System.Reflection.MemberInfo,System.Type,System.Boolean)
 Attribute_t213 * Attribute_GetCustomAttribute_m7706 (Object_t * __this/* static, unused */, MemberInfo_t196 * ___element, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Attribute::GetHashCode()
 int32_t Attribute_GetHashCode_m1359 (Attribute_t213 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Attribute::IsDefined(System.Reflection.ParameterInfo,System.Type)
 bool Attribute_IsDefined_m7707 (Object_t * __this/* static, unused */, ParameterInfo_t1068 * ___element, Type_t * ___attributeType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Attribute::IsDefined(System.Reflection.MemberInfo,System.Type)
 bool Attribute_IsDefined_m7708 (Object_t * __this/* static, unused */, MemberInfo_t196 * ___element, Type_t * ___attributeType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Attribute::IsDefined(System.Reflection.MemberInfo,System.Type,System.Boolean)
 bool Attribute_IsDefined_m7709 (Object_t * __this/* static, unused */, MemberInfo_t196 * ___element, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Attribute::IsDefined(System.Reflection.ParameterInfo,System.Type,System.Boolean)
 bool Attribute_IsDefined_m7710 (Object_t * __this/* static, unused */, ParameterInfo_t1068 * ___element, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Attribute::Equals(System.Object)
 bool Attribute_Equals_m1358 (Attribute_t213 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
