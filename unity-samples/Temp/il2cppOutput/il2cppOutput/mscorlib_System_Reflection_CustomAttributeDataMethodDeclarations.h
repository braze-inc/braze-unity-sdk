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

// System.Reflection.CustomAttributeData
struct CustomAttributeData_t1644;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t990;
// System.Object[]
struct ObjectU5BU5D_t87;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument>
struct IList_1_t1645;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument>
struct IList_1_t1646;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeData>
struct IList_1_t2072;
// System.Reflection.Assembly
struct Assembly_t215;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.Module
struct Module_t1605;
// System.Reflection.ParameterInfo
struct ParameterInfo_t985;
// System.String
struct String_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Reflection.CustomAttributeData::.ctor(System.Reflection.ConstructorInfo,System.Object[],System.Object[])
extern "C" void CustomAttributeData__ctor_m9852 (CustomAttributeData_t1644 * __this, ConstructorInfo_t990 * ___ctorInfo, ObjectU5BU5D_t87* ___ctorArgs, ObjectU5BU5D_t87* ___namedArgs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Reflection.CustomAttributeData::get_Constructor()
extern "C" ConstructorInfo_t990 * CustomAttributeData_get_Constructor_m9853 (CustomAttributeData_t1644 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument> System.Reflection.CustomAttributeData::get_ConstructorArguments()
extern "C" Object_t* CustomAttributeData_get_ConstructorArguments_m9854 (CustomAttributeData_t1644 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument> System.Reflection.CustomAttributeData::get_NamedArguments()
extern "C" Object_t* CustomAttributeData_get_NamedArguments_m9855 (CustomAttributeData_t1644 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeData> System.Reflection.CustomAttributeData::GetCustomAttributes(System.Reflection.Assembly)
extern "C" Object_t* CustomAttributeData_GetCustomAttributes_m9856 (Object_t * __this /* static, unused */, Assembly_t215 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeData> System.Reflection.CustomAttributeData::GetCustomAttributes(System.Reflection.MemberInfo)
extern "C" Object_t* CustomAttributeData_GetCustomAttributes_m9857 (Object_t * __this /* static, unused */, MemberInfo_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeData> System.Reflection.CustomAttributeData::GetCustomAttributes(System.Reflection.Module)
extern "C" Object_t* CustomAttributeData_GetCustomAttributes_m9858 (Object_t * __this /* static, unused */, Module_t1605 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeData> System.Reflection.CustomAttributeData::GetCustomAttributes(System.Reflection.ParameterInfo)
extern "C" Object_t* CustomAttributeData_GetCustomAttributes_m9859 (Object_t * __this /* static, unused */, ParameterInfo_t985 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.CustomAttributeData::ToString()
extern "C" String_t* CustomAttributeData_ToString_m9860 (CustomAttributeData_t1644 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.CustomAttributeData::Equals(System.Object)
extern "C" bool CustomAttributeData_Equals_m9861 (CustomAttributeData_t1644 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.CustomAttributeData::GetHashCode()
extern "C" int32_t CustomAttributeData_GetHashCode_m9862 (CustomAttributeData_t1644 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
