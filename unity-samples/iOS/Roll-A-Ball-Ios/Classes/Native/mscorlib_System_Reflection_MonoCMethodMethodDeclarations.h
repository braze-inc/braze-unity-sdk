#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.MonoCMethod
struct MonoCMethod_t1985;
// System.Type
struct Type_t;
// System.String
struct String_t;
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
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t960;
// System.RuntimeMethodHandle
#include "mscorlib_System_RuntimeMethodHandle.h"
// System.Reflection.MethodAttributes
#include "mscorlib_System_Reflection_MethodAttributes.h"
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Reflection.MonoCMethod::.ctor()
 void MonoCMethod__ctor_m10064 (MonoCMethod_t1985 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.MonoCMethod::GetParameters()
 ParameterInfoU5BU5D_t1067* MonoCMethod_GetParameters_m10065 (MonoCMethod_t1985 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoCMethod::InternalInvoke(System.Object,System.Object[],System.Exception&)
 Object_t * MonoCMethod_InternalInvoke_m10066 (MonoCMethod_t1985 * __this, Object_t * ___obj, ObjectU5BU5D_t112* ___parameters, Exception_t71 ** ___exc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoCMethod::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
 Object_t * MonoCMethod_Invoke_m10067 (MonoCMethod_t1985 * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t1062 * ___binder, ObjectU5BU5D_t112* ___parameters, CultureInfo_t1065 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoCMethod::Invoke(System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
 Object_t * MonoCMethod_Invoke_m10068 (MonoCMethod_t1985 * __this, int32_t ___invokeAttr, Binder_t1062 * ___binder, ObjectU5BU5D_t112* ___parameters, CultureInfo_t1065 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeMethodHandle System.Reflection.MonoCMethod::get_MethodHandle()
 RuntimeMethodHandle_t1948  MonoCMethod_get_MethodHandle_m10069 (MonoCMethod_t1985 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodAttributes System.Reflection.MonoCMethod::get_Attributes()
 int32_t MonoCMethod_get_Attributes_m10070 (MonoCMethod_t1985 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.CallingConventions System.Reflection.MonoCMethod::get_CallingConvention()
 int32_t MonoCMethod_get_CallingConvention_m10071 (MonoCMethod_t1985 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoCMethod::get_ReflectedType()
 Type_t * MonoCMethod_get_ReflectedType_m10072 (MonoCMethod_t1985 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoCMethod::get_DeclaringType()
 Type_t * MonoCMethod_get_DeclaringType_m10073 (MonoCMethod_t1985 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoCMethod::get_Name()
 String_t* MonoCMethod_get_Name_m10074 (MonoCMethod_t1985 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoCMethod::IsDefined(System.Type,System.Boolean)
 bool MonoCMethod_IsDefined_m10075 (MonoCMethod_t1985 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoCMethod::GetCustomAttributes(System.Boolean)
 ObjectU5BU5D_t112* MonoCMethod_GetCustomAttributes_m10076 (MonoCMethod_t1985 * __this, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoCMethod::GetCustomAttributes(System.Type,System.Boolean)
 ObjectU5BU5D_t112* MonoCMethod_GetCustomAttributes_m10077 (MonoCMethod_t1985 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoCMethod::ToString()
 String_t* MonoCMethod_ToString_m10078 (MonoCMethod_t1985 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoCMethod::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void MonoCMethod_GetObjectData_m10079 (MonoCMethod_t1985 * __this, SerializationInfo_t960 * ___info, StreamingContext_t961  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
