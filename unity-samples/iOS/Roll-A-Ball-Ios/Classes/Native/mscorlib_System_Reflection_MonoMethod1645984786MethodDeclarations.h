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

// System.Reflection.MonoMethod
struct MonoMethod_t;
// System.String
struct String_t;
// System.Reflection.MethodBase
struct MethodBase_t3461000640;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Type
struct Type_t;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t1127461800;
// System.Object
struct Il2CppObject;
// System.Object[]
struct ObjectU5BU5D_t11523773;
// System.Exception
struct Exception_t1967233988;
// System.Reflection.Binder
struct Binder_t4180926488;
// System.Globalization.CultureInfo
struct CultureInfo_t3603717042;
// System.Runtime.InteropServices.DllImportAttribute
struct DllImportAttribute_t2977516789;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;
// System.Type[]
struct TypeU5BU5D_t3431720054;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_MethodBase3461000640.h"
#include "mscorlib_System_Reflection_MonoMethod1645984786.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Exception1967233988.h"
#include "mscorlib_System_Reflection_BindingFlags2090192240.h"
#include "mscorlib_System_Reflection_Binder4180926488.h"
#include "mscorlib_System_Globalization_CultureInfo3603717042.h"
#include "mscorlib_System_RuntimeMethodHandle2360005078.h"
#include "mscorlib_System_Reflection_MethodAttributes455054214.h"
#include "mscorlib_System_Reflection_CallingConventions3959446060.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"

// System.Void System.Reflection.MonoMethod::.ctor()
extern "C"  void MonoMethod__ctor_m370255050 (MonoMethod_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoMethod::get_name(System.Reflection.MethodBase)
extern "C"  String_t* MonoMethod_get_name_m439428219 (Il2CppObject * __this /* static, unused */, MethodBase_t3461000640 * ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MonoMethod System.Reflection.MonoMethod::get_base_definition(System.Reflection.MonoMethod)
extern "C"  MonoMethod_t * MonoMethod_get_base_definition_m1389391157 (Il2CppObject * __this /* static, unused */, MonoMethod_t * ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.MonoMethod::GetBaseDefinition()
extern "C"  MethodInfo_t * MonoMethod_GetBaseDefinition_m3877450154 (MonoMethod_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoMethod::get_ReturnType()
extern "C"  Type_t * MonoMethod_get_ReturnType_m2366628327 (MonoMethod_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.MonoMethod::GetParameters()
extern "C"  ParameterInfoU5BU5D_t1127461800* MonoMethod_GetParameters_m1957703466 (MonoMethod_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoMethod::InternalInvoke(System.Object,System.Object[],System.Exception&)
extern "C"  Il2CppObject * MonoMethod_InternalInvoke_m4222289618 (MonoMethod_t * __this, Il2CppObject * ___obj, ObjectU5BU5D_t11523773* ___parameters, Exception_t1967233988 ** ___exc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoMethod::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C"  Il2CppObject * MonoMethod_Invoke_m240151045 (MonoMethod_t * __this, Il2CppObject * ___obj, int32_t ___invokeAttr, Binder_t4180926488 * ___binder, ObjectU5BU5D_t11523773* ___parameters, CultureInfo_t3603717042 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeMethodHandle System.Reflection.MonoMethod::get_MethodHandle()
extern "C"  RuntimeMethodHandle_t2360005078  MonoMethod_get_MethodHandle_m3375732565 (MonoMethod_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodAttributes System.Reflection.MonoMethod::get_Attributes()
extern "C"  int32_t MonoMethod_get_Attributes_m3567797513 (MonoMethod_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.CallingConventions System.Reflection.MonoMethod::get_CallingConvention()
extern "C"  int32_t MonoMethod_get_CallingConvention_m1596053931 (MonoMethod_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoMethod::get_ReflectedType()
extern "C"  Type_t * MonoMethod_get_ReflectedType_m64213147 (MonoMethod_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoMethod::get_DeclaringType()
extern "C"  Type_t * MonoMethod_get_DeclaringType_m833766374 (MonoMethod_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoMethod::get_Name()
extern "C"  String_t* MonoMethod_get_Name_m3300938865 (MonoMethod_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoMethod::IsDefined(System.Type,System.Boolean)
extern "C"  bool MonoMethod_IsDefined_m1598659081 (MonoMethod_t * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoMethod::GetCustomAttributes(System.Boolean)
extern "C"  ObjectU5BU5D_t11523773* MonoMethod_GetCustomAttributes_m534554826 (MonoMethod_t * __this, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoMethod::GetCustomAttributes(System.Type,System.Boolean)
extern "C"  ObjectU5BU5D_t11523773* MonoMethod_GetCustomAttributes_m673046967 (MonoMethod_t * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.InteropServices.DllImportAttribute System.Reflection.MonoMethod::GetDllImportAttribute(System.IntPtr)
extern "C"  DllImportAttribute_t2977516789 * MonoMethod_GetDllImportAttribute_m3397930907 (Il2CppObject * __this /* static, unused */, IntPtr_t ___mhandle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoMethod::GetPseudoCustomAttributes()
extern "C"  ObjectU5BU5D_t11523773* MonoMethod_GetPseudoCustomAttributes_m4233716593 (MonoMethod_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoMethod::ShouldPrintFullName(System.Type)
extern "C"  bool MonoMethod_ShouldPrintFullName_m401880127 (Il2CppObject * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoMethod::ToString()
extern "C"  String_t* MonoMethod_ToString_m2662663945 (MonoMethod_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoMethod::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void MonoMethod_GetObjectData_m1160867688 (MonoMethod_t * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.MonoMethod::MakeGenericMethod(System.Type[])
extern "C"  MethodInfo_t * MonoMethod_MakeGenericMethod_m2250506909 (MonoMethod_t * __this, TypeU5BU5D_t3431720054* ___methodInstantiation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.MonoMethod::MakeGenericMethod_impl(System.Type[])
extern "C"  MethodInfo_t * MonoMethod_MakeGenericMethod_impl_m2160588496 (MonoMethod_t * __this, TypeU5BU5D_t3431720054* ___types, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.MonoMethod::GetGenericArguments()
extern "C"  TypeU5BU5D_t3431720054* MonoMethod_GetGenericArguments_m978560229 (MonoMethod_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoMethod::get_IsGenericMethodDefinition()
extern "C"  bool MonoMethod_get_IsGenericMethodDefinition_m279322622 (MonoMethod_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoMethod::get_IsGenericMethod()
extern "C"  bool MonoMethod_get_IsGenericMethod_m1007555531 (MonoMethod_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoMethod::get_ContainsGenericParameters()
extern "C"  bool MonoMethod_get_ContainsGenericParameters_m1023389183 (MonoMethod_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
