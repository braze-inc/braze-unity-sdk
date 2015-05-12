#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.MonoMethod
struct MonoMethod_t1983;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.MethodBase
struct MethodBase_t307;
// System.Reflection.MethodInfo
struct MethodInfo_t198;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t1067;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t112;
// System.Exception
struct Exception_t71;
// System.Reflection.Binder
struct Binder_t1062;
// System.Globalization.CultureInfo
struct CultureInfo_t1065;
// System.Runtime.InteropServices.DllImportAttribute
struct DllImportAttribute_t1757;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t960;
// System.Type[]
struct TypeU5BU5D_t146;
// System.RuntimeMethodHandle
#include "mscorlib_System_RuntimeMethodHandle.h"
// System.Reflection.MethodAttributes
#include "mscorlib_System_Reflection_MethodAttributes.h"
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Reflection.MonoMethod::.ctor()
 void MonoMethod__ctor_m10036 (MonoMethod_t1983 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoMethod::get_name(System.Reflection.MethodBase)
 String_t* MonoMethod_get_name_m10037 (Object_t * __this/* static, unused */, MethodBase_t307 * ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MonoMethod System.Reflection.MonoMethod::get_base_definition(System.Reflection.MonoMethod)
 MonoMethod_t1983 * MonoMethod_get_base_definition_m10038 (Object_t * __this/* static, unused */, MonoMethod_t1983 * ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.MonoMethod::GetBaseDefinition()
 MethodInfo_t198 * MonoMethod_GetBaseDefinition_m10039 (MonoMethod_t1983 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoMethod::get_ReturnType()
 Type_t * MonoMethod_get_ReturnType_m10040 (MonoMethod_t1983 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.MonoMethod::GetParameters()
 ParameterInfoU5BU5D_t1067* MonoMethod_GetParameters_m10041 (MonoMethod_t1983 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoMethod::InternalInvoke(System.Object,System.Object[],System.Exception&)
 Object_t * MonoMethod_InternalInvoke_m10042 (MonoMethod_t1983 * __this, Object_t * ___obj, ObjectU5BU5D_t112* ___parameters, Exception_t71 ** ___exc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoMethod::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
 Object_t * MonoMethod_Invoke_m10043 (MonoMethod_t1983 * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t1062 * ___binder, ObjectU5BU5D_t112* ___parameters, CultureInfo_t1065 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeMethodHandle System.Reflection.MonoMethod::get_MethodHandle()
 RuntimeMethodHandle_t1948  MonoMethod_get_MethodHandle_m10044 (MonoMethod_t1983 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodAttributes System.Reflection.MonoMethod::get_Attributes()
 int32_t MonoMethod_get_Attributes_m10045 (MonoMethod_t1983 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.CallingConventions System.Reflection.MonoMethod::get_CallingConvention()
 int32_t MonoMethod_get_CallingConvention_m10046 (MonoMethod_t1983 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoMethod::get_ReflectedType()
 Type_t * MonoMethod_get_ReflectedType_m10047 (MonoMethod_t1983 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoMethod::get_DeclaringType()
 Type_t * MonoMethod_get_DeclaringType_m10048 (MonoMethod_t1983 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoMethod::get_Name()
 String_t* MonoMethod_get_Name_m10049 (MonoMethod_t1983 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoMethod::IsDefined(System.Type,System.Boolean)
 bool MonoMethod_IsDefined_m10050 (MonoMethod_t1983 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoMethod::GetCustomAttributes(System.Boolean)
 ObjectU5BU5D_t112* MonoMethod_GetCustomAttributes_m10051 (MonoMethod_t1983 * __this, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoMethod::GetCustomAttributes(System.Type,System.Boolean)
 ObjectU5BU5D_t112* MonoMethod_GetCustomAttributes_m10052 (MonoMethod_t1983 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.InteropServices.DllImportAttribute System.Reflection.MonoMethod::GetDllImportAttribute(System.IntPtr)
 DllImportAttribute_t1757 * MonoMethod_GetDllImportAttribute_m10053 (Object_t * __this/* static, unused */, IntPtr_t107 ___mhandle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoMethod::GetPseudoCustomAttributes()
 ObjectU5BU5D_t112* MonoMethod_GetPseudoCustomAttributes_m10054 (MonoMethod_t1983 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoMethod::ShouldPrintFullName(System.Type)
 bool MonoMethod_ShouldPrintFullName_m10055 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoMethod::ToString()
 String_t* MonoMethod_ToString_m10056 (MonoMethod_t1983 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoMethod::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void MonoMethod_GetObjectData_m10057 (MonoMethod_t1983 * __this, SerializationInfo_t960 * ___info, StreamingContext_t961  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.MonoMethod::MakeGenericMethod(System.Type[])
 MethodInfo_t198 * MonoMethod_MakeGenericMethod_m10058 (MonoMethod_t1983 * __this, TypeU5BU5D_t146* ___methodInstantiation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.MonoMethod::MakeGenericMethod_impl(System.Type[])
 MethodInfo_t198 * MonoMethod_MakeGenericMethod_impl_m10059 (MonoMethod_t1983 * __this, TypeU5BU5D_t146* ___types, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.MonoMethod::GetGenericArguments()
 TypeU5BU5D_t146* MonoMethod_GetGenericArguments_m10060 (MonoMethod_t1983 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoMethod::get_IsGenericMethodDefinition()
 bool MonoMethod_get_IsGenericMethodDefinition_m10061 (MonoMethod_t1983 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoMethod::get_IsGenericMethod()
 bool MonoMethod_get_IsGenericMethod_m10062 (MonoMethod_t1983 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoMethod::get_ContainsGenericParameters()
 bool MonoMethod_get_ContainsGenericParameters_m10063 (MonoMethod_t1983 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
