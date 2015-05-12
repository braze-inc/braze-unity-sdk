#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.MonoProperty
struct MonoProperty_t1988;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t1163;
// System.Reflection.MethodInfo
struct MethodInfo_t198;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t1067;
// System.Object[]
struct ObjectU5BU5D_t112;
// System.Reflection.MonoProperty/GetterAdapter
struct GetterAdapter_t1990;
// System.Object
struct Object_t;
// System.Reflection.Binder
struct Binder_t1062;
// System.Globalization.CultureInfo
struct CultureInfo_t1065;
// System.Type[]
struct TypeU5BU5D_t146;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t960;
// System.Reflection.PropertyAttributes
#include "mscorlib_System_Reflection_PropertyAttributes.h"
// System.Reflection.PInfo
#include "mscorlib_System_Reflection_PInfo.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Reflection.MonoProperty::.ctor()
 void MonoProperty__ctor_m10086 (MonoProperty_t1988 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoProperty::CachePropertyInfo(System.Reflection.PInfo)
 void MonoProperty_CachePropertyInfo_m10087 (MonoProperty_t1988 * __this, int32_t ___flags, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyAttributes System.Reflection.MonoProperty::get_Attributes()
 int32_t MonoProperty_get_Attributes_m10088 (MonoProperty_t1988 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoProperty::get_CanRead()
 bool MonoProperty_get_CanRead_m10089 (MonoProperty_t1988 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoProperty::get_CanWrite()
 bool MonoProperty_get_CanWrite_m10090 (MonoProperty_t1988 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoProperty::get_PropertyType()
 Type_t * MonoProperty_get_PropertyType_m10091 (MonoProperty_t1988 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoProperty::get_ReflectedType()
 Type_t * MonoProperty_get_ReflectedType_m10092 (MonoProperty_t1988 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoProperty::get_DeclaringType()
 Type_t * MonoProperty_get_DeclaringType_m10093 (MonoProperty_t1988 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoProperty::get_Name()
 String_t* MonoProperty_get_Name_m10094 (MonoProperty_t1988 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.MonoProperty::GetAccessors(System.Boolean)
 MethodInfoU5BU5D_t1163* MonoProperty_GetAccessors_m10095 (MonoProperty_t1988 * __this, bool ___nonPublic, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.MonoProperty::GetGetMethod(System.Boolean)
 MethodInfo_t198 * MonoProperty_GetGetMethod_m10096 (MonoProperty_t1988 * __this, bool ___nonPublic, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.MonoProperty::GetIndexParameters()
 ParameterInfoU5BU5D_t1067* MonoProperty_GetIndexParameters_m10097 (MonoProperty_t1988 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.MonoProperty::GetSetMethod(System.Boolean)
 MethodInfo_t198 * MonoProperty_GetSetMethod_m10098 (MonoProperty_t1988 * __this, bool ___nonPublic, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoProperty::IsDefined(System.Type,System.Boolean)
 bool MonoProperty_IsDefined_m10099 (MonoProperty_t1988 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoProperty::GetCustomAttributes(System.Boolean)
 ObjectU5BU5D_t112* MonoProperty_GetCustomAttributes_m10100 (MonoProperty_t1988 * __this, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoProperty::GetCustomAttributes(System.Type,System.Boolean)
 ObjectU5BU5D_t112* MonoProperty_GetCustomAttributes_m10101 (MonoProperty_t1988 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MonoProperty/GetterAdapter System.Reflection.MonoProperty::CreateGetterDelegate(System.Reflection.MethodInfo)
 GetterAdapter_t1990 * MonoProperty_CreateGetterDelegate_m10102 (Object_t * __this/* static, unused */, MethodInfo_t198 * ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoProperty::GetValue(System.Object,System.Object[])
 Object_t * MonoProperty_GetValue_m10103 (MonoProperty_t1988 * __this, Object_t * ___obj, ObjectU5BU5D_t112* ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoProperty::GetValue(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
 Object_t * MonoProperty_GetValue_m10104 (MonoProperty_t1988 * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t1062 * ___binder, ObjectU5BU5D_t112* ___index, CultureInfo_t1065 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoProperty::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
 void MonoProperty_SetValue_m10105 (MonoProperty_t1988 * __this, Object_t * ___obj, Object_t * ___value, int32_t ___invokeAttr, Binder_t1062 * ___binder, ObjectU5BU5D_t112* ___index, CultureInfo_t1065 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoProperty::ToString()
 String_t* MonoProperty_ToString_m10106 (MonoProperty_t1988 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.MonoProperty::GetOptionalCustomModifiers()
 TypeU5BU5D_t146* MonoProperty_GetOptionalCustomModifiers_m10107 (MonoProperty_t1988 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.MonoProperty::GetRequiredCustomModifiers()
 TypeU5BU5D_t146* MonoProperty_GetRequiredCustomModifiers_m10108 (MonoProperty_t1988 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoProperty::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void MonoProperty_GetObjectData_m10109 (MonoProperty_t1988 * __this, SerializationInfo_t960 * ___info, StreamingContext_t961  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
