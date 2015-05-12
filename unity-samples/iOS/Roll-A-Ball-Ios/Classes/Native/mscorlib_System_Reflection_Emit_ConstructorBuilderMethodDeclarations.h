#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.ConstructorBuilder
struct ConstructorBuilder_t1947;
// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t1945;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.Module
struct Module_t1752;
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
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"
// System.RuntimeMethodHandle
#include "mscorlib_System_RuntimeMethodHandle.h"
// System.Reflection.MethodAttributes
#include "mscorlib_System_Reflection_MethodAttributes.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"

// System.Reflection.CallingConventions System.Reflection.Emit.ConstructorBuilder::get_CallingConvention()
 int32_t ConstructorBuilder_get_CallingConvention_m9680 (ConstructorBuilder_t1947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.ConstructorBuilder::get_TypeBuilder()
 TypeBuilder_t1945 * ConstructorBuilder_get_TypeBuilder_m9681 (ConstructorBuilder_t1947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.Emit.ConstructorBuilder::GetParameters()
 ParameterInfoU5BU5D_t1067* ConstructorBuilder_GetParameters_m9682 (ConstructorBuilder_t1947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.Emit.ConstructorBuilder::GetParametersInternal()
 ParameterInfoU5BU5D_t1067* ConstructorBuilder_GetParametersInternal_m9683 (ConstructorBuilder_t1947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.ConstructorBuilder::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
 Object_t * ConstructorBuilder_Invoke_m9684 (ConstructorBuilder_t1947 * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t1062 * ___binder, ObjectU5BU5D_t112* ___parameters, CultureInfo_t1065 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.ConstructorBuilder::Invoke(System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
 Object_t * ConstructorBuilder_Invoke_m9685 (ConstructorBuilder_t1947 * __this, int32_t ___invokeAttr, Binder_t1062 * ___binder, ObjectU5BU5D_t112* ___parameters, CultureInfo_t1065 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeMethodHandle System.Reflection.Emit.ConstructorBuilder::get_MethodHandle()
 RuntimeMethodHandle_t1948  ConstructorBuilder_get_MethodHandle_m9686 (ConstructorBuilder_t1947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodAttributes System.Reflection.Emit.ConstructorBuilder::get_Attributes()
 int32_t ConstructorBuilder_get_Attributes_m9687 (ConstructorBuilder_t1947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.ConstructorBuilder::get_ReflectedType()
 Type_t * ConstructorBuilder_get_ReflectedType_m9688 (ConstructorBuilder_t1947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.ConstructorBuilder::get_DeclaringType()
 Type_t * ConstructorBuilder_get_DeclaringType_m9689 (ConstructorBuilder_t1947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.ConstructorBuilder::get_Name()
 String_t* ConstructorBuilder_get_Name_m9690 (ConstructorBuilder_t1947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.ConstructorBuilder::IsDefined(System.Type,System.Boolean)
 bool ConstructorBuilder_IsDefined_m9691 (ConstructorBuilder_t1947 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.ConstructorBuilder::GetCustomAttributes(System.Boolean)
 ObjectU5BU5D_t112* ConstructorBuilder_GetCustomAttributes_m9692 (ConstructorBuilder_t1947 * __this, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.ConstructorBuilder::GetCustomAttributes(System.Type,System.Boolean)
 ObjectU5BU5D_t112* ConstructorBuilder_GetCustomAttributes_m9693 (ConstructorBuilder_t1947 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.ConstructorBuilder::get_Module()
 Module_t1752 * ConstructorBuilder_get_Module_m9694 (ConstructorBuilder_t1947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.ConstructorBuilder::ToString()
 String_t* ConstructorBuilder_ToString_m9695 (ConstructorBuilder_t1947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.ConstructorBuilder::get_IsCompilerContext()
 bool ConstructorBuilder_get_IsCompilerContext_m9696 (ConstructorBuilder_t1947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.ConstructorBuilder::not_supported()
 Exception_t71 * ConstructorBuilder_not_supported_m9697 (ConstructorBuilder_t1947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.ConstructorBuilder::not_created()
 Exception_t71 * ConstructorBuilder_not_created_m9698 (ConstructorBuilder_t1947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
