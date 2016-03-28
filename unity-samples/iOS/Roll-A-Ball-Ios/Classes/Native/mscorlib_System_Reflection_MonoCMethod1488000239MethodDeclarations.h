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

// System.Reflection.MonoCMethod
struct MonoCMethod_t1488000239;
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
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Exception1967233988.h"
#include "mscorlib_System_Reflection_BindingFlags2090192240.h"
#include "mscorlib_System_Reflection_Binder4180926488.h"
#include "mscorlib_System_Globalization_CultureInfo3603717042.h"
#include "mscorlib_System_RuntimeMethodHandle2360005078.h"
#include "mscorlib_System_Reflection_MethodAttributes455054214.h"
#include "mscorlib_System_Reflection_CallingConventions3959446060.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"

// System.Void System.Reflection.MonoCMethod::.ctor()
extern "C"  void MonoCMethod__ctor_m1949313751 (MonoCMethod_t1488000239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.MonoCMethod::GetParameters()
extern "C"  ParameterInfoU5BU5D_t1127461800* MonoCMethod_GetParameters_m993439667 (MonoCMethod_t1488000239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoCMethod::InternalInvoke(System.Object,System.Object[],System.Exception&)
extern "C"  Il2CppObject * MonoCMethod_InternalInvoke_m1703330793 (MonoCMethod_t1488000239 * __this, Il2CppObject * ___obj, ObjectU5BU5D_t11523773* ___parameters, Exception_t1967233988 ** ___exc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoCMethod::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C"  Il2CppObject * MonoCMethod_Invoke_m3483919886 (MonoCMethod_t1488000239 * __this, Il2CppObject * ___obj, int32_t ___invokeAttr, Binder_t4180926488 * ___binder, ObjectU5BU5D_t11523773* ___parameters, CultureInfo_t3603717042 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoCMethod::Invoke(System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C"  Il2CppObject * MonoCMethod_Invoke_m2473345692 (MonoCMethod_t1488000239 * __this, int32_t ___invokeAttr, Binder_t4180926488 * ___binder, ObjectU5BU5D_t11523773* ___parameters, CultureInfo_t3603717042 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeMethodHandle System.Reflection.MonoCMethod::get_MethodHandle()
extern "C"  RuntimeMethodHandle_t2360005078  MonoCMethod_get_MethodHandle_m1736599926 (MonoCMethod_t1488000239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodAttributes System.Reflection.MonoCMethod::get_Attributes()
extern "C"  int32_t MonoCMethod_get_Attributes_m2492640542 (MonoCMethod_t1488000239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.CallingConventions System.Reflection.MonoCMethod::get_CallingConvention()
extern "C"  int32_t MonoCMethod_get_CallingConvention_m3412315242 (MonoCMethod_t1488000239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoCMethod::get_ReflectedType()
extern "C"  Type_t * MonoCMethod_get_ReflectedType_m3209895836 (MonoCMethod_t1488000239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoCMethod::get_DeclaringType()
extern "C"  Type_t * MonoCMethod_get_DeclaringType_m3979449063 (MonoCMethod_t1488000239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoCMethod::get_Name()
extern "C"  String_t* MonoCMethod_get_Name_m2330810846 (MonoCMethod_t1488000239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoCMethod::IsDefined(System.Type,System.Boolean)
extern "C"  bool MonoCMethod_IsDefined_m2679410586 (MonoCMethod_t1488000239 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoCMethod::GetCustomAttributes(System.Boolean)
extern "C"  ObjectU5BU5D_t11523773* MonoCMethod_GetCustomAttributes_m3440607709 (MonoCMethod_t1488000239 * __this, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoCMethod::GetCustomAttributes(System.Type,System.Boolean)
extern "C"  ObjectU5BU5D_t11523773* MonoCMethod_GetCustomAttributes_m2022749770 (MonoCMethod_t1488000239 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoCMethod::ToString()
extern "C"  String_t* MonoCMethod_ToString_m1692535926 (MonoCMethod_t1488000239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoCMethod::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void MonoCMethod_GetObjectData_m3949447925 (MonoCMethod_t1488000239 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
