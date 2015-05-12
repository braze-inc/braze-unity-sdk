#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.ParameterInfo
struct ParameterInfo_t1068;
// System.Type
struct Type_t;
// System.Reflection.MemberInfo
struct MemberInfo_t196;
// System.String
struct String_t;
// System.Reflection.Emit.ParameterBuilder
struct ParameterBuilder_t1957;
// System.Object[]
struct ObjectU5BU5D_t112;
// System.Reflection.ParameterAttributes
#include "mscorlib_System_Reflection_ParameterAttributes.h"

// System.Void System.Reflection.ParameterInfo::.ctor()
 void ParameterInfo__ctor_m10110 (ParameterInfo_t1068 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.ParameterInfo::.ctor(System.Reflection.Emit.ParameterBuilder,System.Type,System.Reflection.MemberInfo,System.Int32)
 void ParameterInfo__ctor_m10111 (ParameterInfo_t1068 * __this, ParameterBuilder_t1957 * ___pb, Type_t * ___type, MemberInfo_t196 * ___member, int32_t ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.ParameterInfo::.ctor(System.Reflection.ParameterInfo,System.Reflection.MemberInfo)
 void ParameterInfo__ctor_m10112 (ParameterInfo_t1068 * __this, ParameterInfo_t1068 * ___pinfo, MemberInfo_t196 * ___member, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.ParameterInfo::ToString()
 String_t* ParameterInfo_ToString_m10113 (ParameterInfo_t1068 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.ParameterInfo::get_ParameterType()
 Type_t * ParameterInfo_get_ParameterType_m5089 (ParameterInfo_t1068 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::get_Attributes()
 int32_t ParameterInfo_get_Attributes_m10114 (ParameterInfo_t1068 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.ParameterInfo::get_IsIn()
 bool ParameterInfo_get_IsIn_m10115 (ParameterInfo_t1068 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.ParameterInfo::get_IsOptional()
 bool ParameterInfo_get_IsOptional_m10116 (ParameterInfo_t1068 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.ParameterInfo::get_IsOut()
 bool ParameterInfo_get_IsOut_m10117 (ParameterInfo_t1068 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.ParameterInfo::get_IsRetval()
 bool ParameterInfo_get_IsRetval_m10118 (ParameterInfo_t1068 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberInfo System.Reflection.ParameterInfo::get_Member()
 MemberInfo_t196 * ParameterInfo_get_Member_m10119 (ParameterInfo_t1068 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.ParameterInfo::get_Name()
 String_t* ParameterInfo_get_Name_m10120 (ParameterInfo_t1068 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.ParameterInfo::get_Position()
 int32_t ParameterInfo_get_Position_m10121 (ParameterInfo_t1068 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.ParameterInfo::GetCustomAttributes(System.Type,System.Boolean)
 ObjectU5BU5D_t112* ParameterInfo_GetCustomAttributes_m10122 (ParameterInfo_t1068 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.ParameterInfo::IsDefined(System.Type,System.Boolean)
 bool ParameterInfo_IsDefined_m10123 (ParameterInfo_t1068 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.ParameterInfo::GetPseudoCustomAttributes()
 ObjectU5BU5D_t112* ParameterInfo_GetPseudoCustomAttributes_m10124 (ParameterInfo_t1068 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
