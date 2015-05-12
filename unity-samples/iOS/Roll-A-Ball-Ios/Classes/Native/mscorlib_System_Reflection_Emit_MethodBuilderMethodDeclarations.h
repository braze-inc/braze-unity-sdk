#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.MethodBuilder
struct MethodBuilder_t1952;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.Module
struct Module_t1752;
// System.Reflection.MethodInfo
struct MethodInfo_t198;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t1067;
// System.Object
struct Object_t;
// System.Reflection.Binder
struct Binder_t1062;
// System.Object[]
struct ObjectU5BU5D_t112;
// System.Globalization.CultureInfo
struct CultureInfo_t1065;
// System.Exception
struct Exception_t71;
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

// System.Boolean System.Reflection.Emit.MethodBuilder::get_ContainsGenericParameters()
 bool MethodBuilder_get_ContainsGenericParameters_m9793 (MethodBuilder_t1952 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeMethodHandle System.Reflection.Emit.MethodBuilder::get_MethodHandle()
 RuntimeMethodHandle_t1948  MethodBuilder_get_MethodHandle_m9794 (MethodBuilder_t1952 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.MethodBuilder::get_ReturnType()
 Type_t * MethodBuilder_get_ReturnType_m9795 (MethodBuilder_t1952 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.MethodBuilder::get_ReflectedType()
 Type_t * MethodBuilder_get_ReflectedType_m9796 (MethodBuilder_t1952 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.MethodBuilder::get_DeclaringType()
 Type_t * MethodBuilder_get_DeclaringType_m9797 (MethodBuilder_t1952 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.MethodBuilder::get_Name()
 String_t* MethodBuilder_get_Name_m9798 (MethodBuilder_t1952 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodAttributes System.Reflection.Emit.MethodBuilder::get_Attributes()
 int32_t MethodBuilder_get_Attributes_m9799 (MethodBuilder_t1952 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.CallingConventions System.Reflection.Emit.MethodBuilder::get_CallingConvention()
 int32_t MethodBuilder_get_CallingConvention_m9800 (MethodBuilder_t1952 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.MethodBuilder::GetBaseDefinition()
 MethodInfo_t198 * MethodBuilder_GetBaseDefinition_m9801 (MethodBuilder_t1952 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.Emit.MethodBuilder::GetParameters()
 ParameterInfoU5BU5D_t1067* MethodBuilder_GetParameters_m9802 (MethodBuilder_t1952 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.MethodBuilder::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
 Object_t * MethodBuilder_Invoke_m9803 (MethodBuilder_t1952 * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t1062 * ___binder, ObjectU5BU5D_t112* ___parameters, CultureInfo_t1065 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.MethodBuilder::IsDefined(System.Type,System.Boolean)
 bool MethodBuilder_IsDefined_m9804 (MethodBuilder_t1952 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.MethodBuilder::GetCustomAttributes(System.Boolean)
 ObjectU5BU5D_t112* MethodBuilder_GetCustomAttributes_m9805 (MethodBuilder_t1952 * __this, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.MethodBuilder::GetCustomAttributes(System.Type,System.Boolean)
 ObjectU5BU5D_t112* MethodBuilder_GetCustomAttributes_m9806 (MethodBuilder_t1952 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.MethodBuilder::ToString()
 String_t* MethodBuilder_ToString_m9807 (MethodBuilder_t1952 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.MethodBuilder::Equals(System.Object)
 bool MethodBuilder_Equals_m9808 (MethodBuilder_t1952 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.MethodBuilder::GetHashCode()
 int32_t MethodBuilder_GetHashCode_m9809 (MethodBuilder_t1952 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.MethodBuilder::NotSupported()
 Exception_t71 * MethodBuilder_NotSupported_m9810 (MethodBuilder_t1952 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.MethodBuilder::MakeGenericMethod(System.Type[])
 MethodInfo_t198 * MethodBuilder_MakeGenericMethod_m9811 (MethodBuilder_t1952 * __this, TypeU5BU5D_t146* ___typeArguments, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.MethodBuilder::get_IsGenericMethodDefinition()
 bool MethodBuilder_get_IsGenericMethodDefinition_m9812 (MethodBuilder_t1952 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.MethodBuilder::get_IsGenericMethod()
 bool MethodBuilder_get_IsGenericMethod_m9813 (MethodBuilder_t1952 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.MethodBuilder::GetGenericArguments()
 TypeU5BU5D_t146* MethodBuilder_GetGenericArguments_m9814 (MethodBuilder_t1952 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.MethodBuilder::get_Module()
 Module_t1752 * MethodBuilder_get_Module_m9815 (MethodBuilder_t1952 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
