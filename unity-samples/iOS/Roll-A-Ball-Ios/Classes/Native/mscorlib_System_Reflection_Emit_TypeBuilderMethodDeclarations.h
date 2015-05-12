#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t1945;
// System.Reflection.Assembly
struct Assembly_t239;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Reflection.Module
struct Module_t1752;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t1089;
// System.Reflection.Binder
struct Binder_t1062;
// System.Type[]
struct TypeU5BU5D_t146;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t1063;
// System.Object[]
struct ObjectU5BU5D_t112;
// System.Reflection.ConstructorInfo[]
struct ConstructorInfoU5BU5D_t1754;
// System.Reflection.EventInfo
struct EventInfo_t1753;
// System.Reflection.FieldInfo
struct FieldInfo_t148;
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t295;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t1163;
// System.Reflection.MethodInfo
struct MethodInfo_t198;
// System.Reflection.PropertyInfo
struct PropertyInfo_t197;
// System.Object
struct Object_t;
// System.Globalization.CultureInfo
struct CultureInfo_t1065;
// System.String[]
struct StringU5BU5D_t3;
// System.Exception
struct Exception_t71;
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Reflection.TypeAttributes
#include "mscorlib_System_Reflection_TypeAttributes.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"

// System.Reflection.TypeAttributes System.Reflection.Emit.TypeBuilder::GetAttributeFlagsImpl()
 int32_t TypeBuilder_GetAttributeFlagsImpl_m9821 (TypeBuilder_t1945 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Emit.TypeBuilder::get_Assembly()
 Assembly_t239 * TypeBuilder_get_Assembly_m9822 (TypeBuilder_t1945 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::get_AssemblyQualifiedName()
 String_t* TypeBuilder_get_AssemblyQualifiedName_m9823 (TypeBuilder_t1945 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::get_BaseType()
 Type_t * TypeBuilder_get_BaseType_m9824 (TypeBuilder_t1945 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::get_DeclaringType()
 Type_t * TypeBuilder_get_DeclaringType_m9825 (TypeBuilder_t1945 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::get_UnderlyingSystemType()
 Type_t * TypeBuilder_get_UnderlyingSystemType_m9826 (TypeBuilder_t1945 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::get_FullName()
 String_t* TypeBuilder_get_FullName_m9827 (TypeBuilder_t1945 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.TypeBuilder::get_Module()
 Module_t1752 * TypeBuilder_get_Module_m9828 (TypeBuilder_t1945 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::get_Name()
 String_t* TypeBuilder_get_Name_m9829 (TypeBuilder_t1945 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::get_Namespace()
 String_t* TypeBuilder_get_Namespace_m9830 (TypeBuilder_t1945 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::get_ReflectedType()
 Type_t * TypeBuilder_get_ReflectedType_m9831 (TypeBuilder_t1945 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Reflection.Emit.TypeBuilder::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
 ConstructorInfo_t1089 * TypeBuilder_GetConstructorImpl_m9832 (TypeBuilder_t1945 * __this, int32_t ___bindingAttr, Binder_t1062 * ___binder, int32_t ___callConvention, TypeU5BU5D_t146* ___types, ParameterModifierU5BU5D_t1063* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsDefined(System.Type,System.Boolean)
 bool TypeBuilder_IsDefined_m9833 (TypeBuilder_t1945 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.TypeBuilder::GetCustomAttributes(System.Boolean)
 ObjectU5BU5D_t112* TypeBuilder_GetCustomAttributes_m9834 (TypeBuilder_t1945 * __this, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.TypeBuilder::GetCustomAttributes(System.Type,System.Boolean)
 ObjectU5BU5D_t112* TypeBuilder_GetCustomAttributes_m9835 (TypeBuilder_t1945 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.TypeBuilder::GetConstructors(System.Reflection.BindingFlags)
 ConstructorInfoU5BU5D_t1754* TypeBuilder_GetConstructors_m9836 (TypeBuilder_t1945 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.TypeBuilder::GetConstructorsInternal(System.Reflection.BindingFlags)
 ConstructorInfoU5BU5D_t1754* TypeBuilder_GetConstructorsInternal_m9837 (TypeBuilder_t1945 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::GetElementType()
 Type_t * TypeBuilder_GetElementType_m9838 (TypeBuilder_t1945 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.Reflection.Emit.TypeBuilder::GetEvent(System.String,System.Reflection.BindingFlags)
 EventInfo_t1753 * TypeBuilder_GetEvent_m9839 (TypeBuilder_t1945 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.Reflection.Emit.TypeBuilder::GetField(System.String,System.Reflection.BindingFlags)
 FieldInfo_t148 * TypeBuilder_GetField_m9840 (TypeBuilder_t1945 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo[] System.Reflection.Emit.TypeBuilder::GetFields(System.Reflection.BindingFlags)
 FieldInfoU5BU5D_t295* TypeBuilder_GetFields_m9841 (TypeBuilder_t1945 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.TypeBuilder::GetInterfaces()
 TypeU5BU5D_t146* TypeBuilder_GetInterfaces_m9842 (TypeBuilder_t1945 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.Emit.TypeBuilder::GetMethodsByName(System.String,System.Reflection.BindingFlags,System.Boolean,System.Type)
 MethodInfoU5BU5D_t1163* TypeBuilder_GetMethodsByName_m9843 (TypeBuilder_t1945 * __this, String_t* ___name, int32_t ___bindingAttr, bool ___ignoreCase, Type_t * ___reflected_type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.Emit.TypeBuilder::GetMethods(System.Reflection.BindingFlags)
 MethodInfoU5BU5D_t1163* TypeBuilder_GetMethods_m9844 (TypeBuilder_t1945 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.TypeBuilder::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
 MethodInfo_t198 * TypeBuilder_GetMethodImpl_m9845 (TypeBuilder_t1945 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t1062 * ___binder, int32_t ___callConvention, TypeU5BU5D_t146* ___types, ParameterModifierU5BU5D_t1063* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Reflection.Emit.TypeBuilder::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
 PropertyInfo_t197 * TypeBuilder_GetPropertyImpl_m9846 (TypeBuilder_t1945 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t1062 * ___binder, Type_t * ___returnType, TypeU5BU5D_t146* ___types, ParameterModifierU5BU5D_t1063* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::HasElementTypeImpl()
 bool TypeBuilder_HasElementTypeImpl_m9847 (TypeBuilder_t1945 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.TypeBuilder::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
 Object_t * TypeBuilder_InvokeMember_m9848 (TypeBuilder_t1945 * __this, String_t* ___name, int32_t ___invokeAttr, Binder_t1062 * ___binder, Object_t * ___target, ObjectU5BU5D_t112* ___args, ParameterModifierU5BU5D_t1063* ___modifiers, CultureInfo_t1065 * ___culture, StringU5BU5D_t3* ___namedParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsArrayImpl()
 bool TypeBuilder_IsArrayImpl_m9849 (TypeBuilder_t1945 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsByRefImpl()
 bool TypeBuilder_IsByRefImpl_m9850 (TypeBuilder_t1945 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsPointerImpl()
 bool TypeBuilder_IsPointerImpl_m9851 (TypeBuilder_t1945 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsPrimitiveImpl()
 bool TypeBuilder_IsPrimitiveImpl_m9852 (TypeBuilder_t1945 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsValueTypeImpl()
 bool TypeBuilder_IsValueTypeImpl_m9853 (TypeBuilder_t1945 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::MakeGenericType(System.Type[])
 Type_t * TypeBuilder_MakeGenericType_m9854 (TypeBuilder_t1945 * __this, TypeU5BU5D_t146* ___typeArguments, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.Reflection.Emit.TypeBuilder::get_TypeHandle()
 RuntimeTypeHandle_t1751  TypeBuilder_get_TypeHandle_m9855 (TypeBuilder_t1945 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsCompilerContext()
 bool TypeBuilder_get_IsCompilerContext_m9856 (TypeBuilder_t1945 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_is_created()
 bool TypeBuilder_get_is_created_m9857 (TypeBuilder_t1945 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.TypeBuilder::not_supported()
 Exception_t71 * TypeBuilder_not_supported_m9858 (TypeBuilder_t1945 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.TypeBuilder::check_created()
 void TypeBuilder_check_created_m9859 (TypeBuilder_t1945 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::ToString()
 String_t* TypeBuilder_ToString_m9860 (TypeBuilder_t1945 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsAssignableFrom(System.Type)
 bool TypeBuilder_IsAssignableFrom_m9861 (TypeBuilder_t1945 * __this, Type_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsSubclassOf(System.Type)
 bool TypeBuilder_IsSubclassOf_m9862 (TypeBuilder_t1945 * __this, Type_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsAssignableTo(System.Type)
 bool TypeBuilder_IsAssignableTo_m9863 (TypeBuilder_t1945 * __this, Type_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.TypeBuilder::GetGenericArguments()
 TypeU5BU5D_t146* TypeBuilder_GetGenericArguments_m9864 (TypeBuilder_t1945 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::GetGenericTypeDefinition()
 Type_t * TypeBuilder_GetGenericTypeDefinition_m9865 (TypeBuilder_t1945 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_ContainsGenericParameters()
 bool TypeBuilder_get_ContainsGenericParameters_m9866 (TypeBuilder_t1945 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsGenericParameter()
 bool TypeBuilder_get_IsGenericParameter_m9867 (TypeBuilder_t1945 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsGenericTypeDefinition()
 bool TypeBuilder_get_IsGenericTypeDefinition_m9868 (TypeBuilder_t1945 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsGenericType()
 bool TypeBuilder_get_IsGenericType_m9869 (TypeBuilder_t1945 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
