#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.MethodInfo
struct MethodInfo_t198;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t146;
// System.Reflection.MemberTypes
#include "mscorlib_System_Reflection_MemberTypes.h"

// System.Void System.Reflection.MethodInfo::.ctor()
 void MethodInfo__ctor_m9969 (MethodInfo_t198 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.MethodInfo::GetBaseDefinition()
// System.Reflection.MemberTypes System.Reflection.MethodInfo::get_MemberType()
 int32_t MethodInfo_get_MemberType_m9970 (MethodInfo_t198 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MethodInfo::get_ReturnType()
 Type_t * MethodInfo_get_ReturnType_m1283 (MethodInfo_t198 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.MethodInfo::MakeGenericMethod(System.Type[])
 MethodInfo_t198 * MethodInfo_MakeGenericMethod_m9971 (MethodInfo_t198 * __this, TypeU5BU5D_t146* ___typeArguments, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.MethodInfo::GetGenericArguments()
 TypeU5BU5D_t146* MethodInfo_GetGenericArguments_m9972 (MethodInfo_t198 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodInfo::get_IsGenericMethod()
 bool MethodInfo_get_IsGenericMethod_m9973 (MethodInfo_t198 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodInfo::get_IsGenericMethodDefinition()
 bool MethodInfo_get_IsGenericMethodDefinition_m9974 (MethodInfo_t198 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodInfo::get_ContainsGenericParameters()
 bool MethodInfo_get_ContainsGenericParameters_m9975 (MethodInfo_t198 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
