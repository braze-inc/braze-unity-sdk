#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.EnumBuilder
struct EnumBuilder_t1949;
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
// System.Reflection.ConstructorInfo[]
struct ConstructorInfoU5BU5D_t1754;
// System.Object[]
struct ObjectU5BU5D_t112;
// System.Reflection.EventInfo
struct EventInfo_t1753;
// System.Reflection.FieldInfo
struct FieldInfo_t148;
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t295;
// System.Reflection.MethodInfo
struct MethodInfo_t198;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t1163;
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

// System.Reflection.Assembly System.Reflection.Emit.EnumBuilder::get_Assembly()
 Assembly_t239 * EnumBuilder_get_Assembly_m9699 (EnumBuilder_t1949 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.EnumBuilder::get_AssemblyQualifiedName()
 String_t* EnumBuilder_get_AssemblyQualifiedName_m9700 (EnumBuilder_t1949 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.EnumBuilder::get_BaseType()
 Type_t * EnumBuilder_get_BaseType_m9701 (EnumBuilder_t1949 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.EnumBuilder::get_DeclaringType()
 Type_t * EnumBuilder_get_DeclaringType_m9702 (EnumBuilder_t1949 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.EnumBuilder::get_FullName()
 String_t* EnumBuilder_get_FullName_m9703 (EnumBuilder_t1949 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.EnumBuilder::get_Module()
 Module_t1752 * EnumBuilder_get_Module_m9704 (EnumBuilder_t1949 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.EnumBuilder::get_Name()
 String_t* EnumBuilder_get_Name_m9705 (EnumBuilder_t1949 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.EnumBuilder::get_Namespace()
 String_t* EnumBuilder_get_Namespace_m9706 (EnumBuilder_t1949 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.EnumBuilder::get_ReflectedType()
 Type_t * EnumBuilder_get_ReflectedType_m9707 (EnumBuilder_t1949 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.Reflection.Emit.EnumBuilder::get_TypeHandle()
 RuntimeTypeHandle_t1751  EnumBuilder_get_TypeHandle_m9708 (EnumBuilder_t1949 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.EnumBuilder::get_UnderlyingSystemType()
 Type_t * EnumBuilder_get_UnderlyingSystemType_m9709 (EnumBuilder_t1949 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.TypeAttributes System.Reflection.Emit.EnumBuilder::GetAttributeFlagsImpl()
 int32_t EnumBuilder_GetAttributeFlagsImpl_m9710 (EnumBuilder_t1949 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Reflection.Emit.EnumBuilder::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
 ConstructorInfo_t1089 * EnumBuilder_GetConstructorImpl_m9711 (EnumBuilder_t1949 * __this, int32_t ___bindingAttr, Binder_t1062 * ___binder, int32_t ___callConvention, TypeU5BU5D_t146* ___types, ParameterModifierU5BU5D_t1063* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.EnumBuilder::GetConstructors(System.Reflection.BindingFlags)
 ConstructorInfoU5BU5D_t1754* EnumBuilder_GetConstructors_m9712 (EnumBuilder_t1949 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.EnumBuilder::GetCustomAttributes(System.Boolean)
 ObjectU5BU5D_t112* EnumBuilder_GetCustomAttributes_m9713 (EnumBuilder_t1949 * __this, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.EnumBuilder::GetCustomAttributes(System.Type,System.Boolean)
 ObjectU5BU5D_t112* EnumBuilder_GetCustomAttributes_m9714 (EnumBuilder_t1949 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.EnumBuilder::GetElementType()
 Type_t * EnumBuilder_GetElementType_m9715 (EnumBuilder_t1949 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.Reflection.Emit.EnumBuilder::GetEvent(System.String,System.Reflection.BindingFlags)
 EventInfo_t1753 * EnumBuilder_GetEvent_m9716 (EnumBuilder_t1949 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.Reflection.Emit.EnumBuilder::GetField(System.String,System.Reflection.BindingFlags)
 FieldInfo_t148 * EnumBuilder_GetField_m9717 (EnumBuilder_t1949 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo[] System.Reflection.Emit.EnumBuilder::GetFields(System.Reflection.BindingFlags)
 FieldInfoU5BU5D_t295* EnumBuilder_GetFields_m9718 (EnumBuilder_t1949 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.EnumBuilder::GetInterfaces()
 TypeU5BU5D_t146* EnumBuilder_GetInterfaces_m9719 (EnumBuilder_t1949 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.EnumBuilder::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
 MethodInfo_t198 * EnumBuilder_GetMethodImpl_m9720 (EnumBuilder_t1949 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t1062 * ___binder, int32_t ___callConvention, TypeU5BU5D_t146* ___types, ParameterModifierU5BU5D_t1063* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.Emit.EnumBuilder::GetMethods(System.Reflection.BindingFlags)
 MethodInfoU5BU5D_t1163* EnumBuilder_GetMethods_m9721 (EnumBuilder_t1949 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Reflection.Emit.EnumBuilder::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
 PropertyInfo_t197 * EnumBuilder_GetPropertyImpl_m9722 (EnumBuilder_t1949 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t1062 * ___binder, Type_t * ___returnType, TypeU5BU5D_t146* ___types, ParameterModifierU5BU5D_t1063* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::HasElementTypeImpl()
 bool EnumBuilder_HasElementTypeImpl_m9723 (EnumBuilder_t1949 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.EnumBuilder::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
 Object_t * EnumBuilder_InvokeMember_m9724 (EnumBuilder_t1949 * __this, String_t* ___name, int32_t ___invokeAttr, Binder_t1062 * ___binder, Object_t * ___target, ObjectU5BU5D_t112* ___args, ParameterModifierU5BU5D_t1063* ___modifiers, CultureInfo_t1065 * ___culture, StringU5BU5D_t3* ___namedParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsArrayImpl()
 bool EnumBuilder_IsArrayImpl_m9725 (EnumBuilder_t1949 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsByRefImpl()
 bool EnumBuilder_IsByRefImpl_m9726 (EnumBuilder_t1949 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsPointerImpl()
 bool EnumBuilder_IsPointerImpl_m9727 (EnumBuilder_t1949 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsPrimitiveImpl()
 bool EnumBuilder_IsPrimitiveImpl_m9728 (EnumBuilder_t1949 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsValueTypeImpl()
 bool EnumBuilder_IsValueTypeImpl_m9729 (EnumBuilder_t1949 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsDefined(System.Type,System.Boolean)
 bool EnumBuilder_IsDefined_m9730 (EnumBuilder_t1949 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.EnumBuilder::CreateNotSupportedException()
 Exception_t71 * EnumBuilder_CreateNotSupportedException_m9731 (EnumBuilder_t1949 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
