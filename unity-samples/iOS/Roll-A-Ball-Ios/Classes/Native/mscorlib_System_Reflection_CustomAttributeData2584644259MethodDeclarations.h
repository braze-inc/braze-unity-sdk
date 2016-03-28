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
struct CustomAttributeData_t2584644259;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t3542137334;
// System.Object[]
struct ObjectU5BU5D_t11523773;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument>
struct IList_1_t2726907876;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument>
struct IList_1_t2485227443;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeData>
struct IList_1_t456169277;
// System.Reflection.Assembly
struct Assembly_t1882292308;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.Module
struct Module_t206139610;
// System.Reflection.ParameterInfo
struct ParameterInfo_t2610273829;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_ConstructorInfo3542137334.h"
#include "mscorlib_System_Reflection_Assembly1882292308.h"
#include "mscorlib_System_Reflection_MemberInfo2843033814.h"
#include "mscorlib_System_Reflection_Module206139610.h"
#include "mscorlib_System_Reflection_ParameterInfo2610273829.h"
#include "mscorlib_System_Object837106420.h"

// System.Void System.Reflection.CustomAttributeData::.ctor(System.Reflection.ConstructorInfo,System.Object[],System.Object[])
extern "C"  void CustomAttributeData__ctor_m1024003907 (CustomAttributeData_t2584644259 * __this, ConstructorInfo_t3542137334 * ___ctorInfo, ObjectU5BU5D_t11523773* ___ctorArgs, ObjectU5BU5D_t11523773* ___namedArgs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Reflection.CustomAttributeData::get_Constructor()
extern "C"  ConstructorInfo_t3542137334 * CustomAttributeData_get_Constructor_m624500001 (CustomAttributeData_t2584644259 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument> System.Reflection.CustomAttributeData::get_ConstructorArguments()
extern "C"  Il2CppObject* CustomAttributeData_get_ConstructorArguments_m3485544262 (CustomAttributeData_t2584644259 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument> System.Reflection.CustomAttributeData::get_NamedArguments()
extern "C"  Il2CppObject* CustomAttributeData_get_NamedArguments_m3035361272 (CustomAttributeData_t2584644259 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeData> System.Reflection.CustomAttributeData::GetCustomAttributes(System.Reflection.Assembly)
extern "C"  Il2CppObject* CustomAttributeData_GetCustomAttributes_m1041584968 (Il2CppObject * __this /* static, unused */, Assembly_t1882292308 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeData> System.Reflection.CustomAttributeData::GetCustomAttributes(System.Reflection.MemberInfo)
extern "C"  Il2CppObject* CustomAttributeData_GetCustomAttributes_m1840127430 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeData> System.Reflection.CustomAttributeData::GetCustomAttributes(System.Reflection.Module)
extern "C"  Il2CppObject* CustomAttributeData_GetCustomAttributes_m3291957442 (Il2CppObject * __this /* static, unused */, Module_t206139610 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeData> System.Reflection.CustomAttributeData::GetCustomAttributes(System.Reflection.ParameterInfo)
extern "C"  Il2CppObject* CustomAttributeData_GetCustomAttributes_m3662380525 (Il2CppObject * __this /* static, unused */, ParameterInfo_t2610273829 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.CustomAttributeData::ToString()
extern "C"  String_t* CustomAttributeData_ToString_m440699946 (CustomAttributeData_t2584644259 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.CustomAttributeData::Equals(System.Object)
extern "C"  bool CustomAttributeData_Equals_m613333846 (CustomAttributeData_t2584644259 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.CustomAttributeData::GetHashCode()
extern "C"  int32_t CustomAttributeData_GetHashCode_m2481020718 (CustomAttributeData_t2584644259 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
