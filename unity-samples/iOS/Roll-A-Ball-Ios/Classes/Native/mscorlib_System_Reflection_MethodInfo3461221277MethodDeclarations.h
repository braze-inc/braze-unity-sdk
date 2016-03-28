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

// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3431720054;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_MemberTypes938013741.h"

// System.Void System.Reflection.MethodInfo::.ctor()
extern "C"  void MethodInfo__ctor_m2414387615 (MethodInfo_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberTypes System.Reflection.MethodInfo::get_MemberType()
extern "C"  int32_t MethodInfo_get_MemberType_m1399337402 (MethodInfo_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MethodInfo::get_ReturnType()
extern "C"  Type_t * MethodInfo_get_ReturnType_m1349485746 (MethodInfo_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.MethodInfo::MakeGenericMethod(System.Type[])
extern "C"  MethodInfo_t * MethodInfo_MakeGenericMethod_m548581224 (MethodInfo_t * __this, TypeU5BU5D_t3431720054* ___typeArguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.MethodInfo::GetGenericArguments()
extern "C"  TypeU5BU5D_t3431720054* MethodInfo_GetGenericArguments_m2245069050 (MethodInfo_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodInfo::get_IsGenericMethod()
extern "C"  bool MethodInfo_get_IsGenericMethod_m2274064352 (MethodInfo_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodInfo::get_IsGenericMethodDefinition()
extern "C"  bool MethodInfo_get_IsGenericMethodDefinition_m1886989779 (MethodInfo_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodInfo::get_ContainsGenericParameters()
extern "C"  bool MethodInfo_get_ContainsGenericParameters_m2631056340 (MethodInfo_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
