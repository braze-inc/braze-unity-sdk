#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.GenericTypeParameterBuilder
struct GenericTypeParameterBuilder_t1953;
// System.Type
struct Type_t;
// System.Reflection.Assembly
struct Assembly_t239;
// System.String
struct String_t;
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
// System.Object[]
struct ObjectU5BU5D_t112;
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

// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsSubclassOf(System.Type)
 bool GenericTypeParameterBuilder_IsSubclassOf_m9747 (GenericTypeParameterBuilder_t1953 * __this, Type_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.TypeAttributes System.Reflection.Emit.GenericTypeParameterBuilder::GetAttributeFlagsImpl()
 int32_t GenericTypeParameterBuilder_GetAttributeFlagsImpl_m9748 (GenericTypeParameterBuilder_t1953 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
 ConstructorInfo_t1089 * GenericTypeParameterBuilder_GetConstructorImpl_m9749 (GenericTypeParameterBuilder_t1953 * __this, int32_t ___bindingAttr, Binder_t1062 * ___binder, int32_t ___callConvention, TypeU5BU5D_t146* ___types, ParameterModifierU5BU5D_t1063* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.GenericTypeParameterBuilder::GetConstructors(System.Reflection.BindingFlags)
 ConstructorInfoU5BU5D_t1754* GenericTypeParameterBuilder_GetConstructors_m9750 (GenericTypeParameterBuilder_t1953 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetEvent(System.String,System.Reflection.BindingFlags)
 EventInfo_t1753 * GenericTypeParameterBuilder_GetEvent_m9751 (GenericTypeParameterBuilder_t1953 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetField(System.String,System.Reflection.BindingFlags)
 FieldInfo_t148 * GenericTypeParameterBuilder_GetField_m9752 (GenericTypeParameterBuilder_t1953 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo[] System.Reflection.Emit.GenericTypeParameterBuilder::GetFields(System.Reflection.BindingFlags)
 FieldInfoU5BU5D_t295* GenericTypeParameterBuilder_GetFields_m9753 (GenericTypeParameterBuilder_t1953 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.GenericTypeParameterBuilder::GetInterfaces()
 TypeU5BU5D_t146* GenericTypeParameterBuilder_GetInterfaces_m9754 (GenericTypeParameterBuilder_t1953 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.Emit.GenericTypeParameterBuilder::GetMethods(System.Reflection.BindingFlags)
 MethodInfoU5BU5D_t1163* GenericTypeParameterBuilder_GetMethods_m9755 (GenericTypeParameterBuilder_t1953 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
 MethodInfo_t198 * GenericTypeParameterBuilder_GetMethodImpl_m9756 (GenericTypeParameterBuilder_t1953 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t1062 * ___binder, int32_t ___callConvention, TypeU5BU5D_t146* ___types, ParameterModifierU5BU5D_t1063* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
 PropertyInfo_t197 * GenericTypeParameterBuilder_GetPropertyImpl_m9757 (GenericTypeParameterBuilder_t1953 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t1062 * ___binder, Type_t * ___returnType, TypeU5BU5D_t146* ___types, ParameterModifierU5BU5D_t1063* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::HasElementTypeImpl()
 bool GenericTypeParameterBuilder_HasElementTypeImpl_m9758 (GenericTypeParameterBuilder_t1953 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsAssignableFrom(System.Type)
 bool GenericTypeParameterBuilder_IsAssignableFrom_m9759 (GenericTypeParameterBuilder_t1953 * __this, Type_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsInstanceOfType(System.Object)
 bool GenericTypeParameterBuilder_IsInstanceOfType_m9760 (GenericTypeParameterBuilder_t1953 * __this, Object_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsArrayImpl()
 bool GenericTypeParameterBuilder_IsArrayImpl_m9761 (GenericTypeParameterBuilder_t1953 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsByRefImpl()
 bool GenericTypeParameterBuilder_IsByRefImpl_m9762 (GenericTypeParameterBuilder_t1953 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsPointerImpl()
 bool GenericTypeParameterBuilder_IsPointerImpl_m9763 (GenericTypeParameterBuilder_t1953 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsPrimitiveImpl()
 bool GenericTypeParameterBuilder_IsPrimitiveImpl_m9764 (GenericTypeParameterBuilder_t1953 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsValueTypeImpl()
 bool GenericTypeParameterBuilder_IsValueTypeImpl_m9765 (GenericTypeParameterBuilder_t1953 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.GenericTypeParameterBuilder::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
 Object_t * GenericTypeParameterBuilder_InvokeMember_m9766 (GenericTypeParameterBuilder_t1953 * __this, String_t* ___name, int32_t ___invokeAttr, Binder_t1062 * ___binder, Object_t * ___target, ObjectU5BU5D_t112* ___args, ParameterModifierU5BU5D_t1063* ___modifiers, CultureInfo_t1065 * ___culture, StringU5BU5D_t3* ___namedParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::GetElementType()
 Type_t * GenericTypeParameterBuilder_GetElementType_m9767 (GenericTypeParameterBuilder_t1953 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_UnderlyingSystemType()
 Type_t * GenericTypeParameterBuilder_get_UnderlyingSystemType_m9768 (GenericTypeParameterBuilder_t1953 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Emit.GenericTypeParameterBuilder::get_Assembly()
 Assembly_t239 * GenericTypeParameterBuilder_get_Assembly_m9769 (GenericTypeParameterBuilder_t1953 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::get_AssemblyQualifiedName()
 String_t* GenericTypeParameterBuilder_get_AssemblyQualifiedName_m9770 (GenericTypeParameterBuilder_t1953 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_BaseType()
 Type_t * GenericTypeParameterBuilder_get_BaseType_m9771 (GenericTypeParameterBuilder_t1953 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::get_FullName()
 String_t* GenericTypeParameterBuilder_get_FullName_m9772 (GenericTypeParameterBuilder_t1953 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsDefined(System.Type,System.Boolean)
 bool GenericTypeParameterBuilder_IsDefined_m9773 (GenericTypeParameterBuilder_t1953 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.GenericTypeParameterBuilder::GetCustomAttributes(System.Boolean)
 ObjectU5BU5D_t112* GenericTypeParameterBuilder_GetCustomAttributes_m9774 (GenericTypeParameterBuilder_t1953 * __this, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.GenericTypeParameterBuilder::GetCustomAttributes(System.Type,System.Boolean)
 ObjectU5BU5D_t112* GenericTypeParameterBuilder_GetCustomAttributes_m9775 (GenericTypeParameterBuilder_t1953 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::get_Name()
 String_t* GenericTypeParameterBuilder_get_Name_m9776 (GenericTypeParameterBuilder_t1953 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::get_Namespace()
 String_t* GenericTypeParameterBuilder_get_Namespace_m9777 (GenericTypeParameterBuilder_t1953 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.GenericTypeParameterBuilder::get_Module()
 Module_t1752 * GenericTypeParameterBuilder_get_Module_m9778 (GenericTypeParameterBuilder_t1953 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_DeclaringType()
 Type_t * GenericTypeParameterBuilder_get_DeclaringType_m9779 (GenericTypeParameterBuilder_t1953 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_ReflectedType()
 Type_t * GenericTypeParameterBuilder_get_ReflectedType_m9780 (GenericTypeParameterBuilder_t1953 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.Reflection.Emit.GenericTypeParameterBuilder::get_TypeHandle()
 RuntimeTypeHandle_t1751  GenericTypeParameterBuilder_get_TypeHandle_m9781 (GenericTypeParameterBuilder_t1953 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.GenericTypeParameterBuilder::GetGenericArguments()
 TypeU5BU5D_t146* GenericTypeParameterBuilder_GetGenericArguments_m9782 (GenericTypeParameterBuilder_t1953 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::GetGenericTypeDefinition()
 Type_t * GenericTypeParameterBuilder_GetGenericTypeDefinition_m9783 (GenericTypeParameterBuilder_t1953 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::get_ContainsGenericParameters()
 bool GenericTypeParameterBuilder_get_ContainsGenericParameters_m9784 (GenericTypeParameterBuilder_t1953 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::get_IsGenericParameter()
 bool GenericTypeParameterBuilder_get_IsGenericParameter_m9785 (GenericTypeParameterBuilder_t1953 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::get_IsGenericType()
 bool GenericTypeParameterBuilder_get_IsGenericType_m9786 (GenericTypeParameterBuilder_t1953 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::get_IsGenericTypeDefinition()
 bool GenericTypeParameterBuilder_get_IsGenericTypeDefinition_m9787 (GenericTypeParameterBuilder_t1953 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.GenericTypeParameterBuilder::not_supported()
 Exception_t71 * GenericTypeParameterBuilder_not_supported_m9788 (GenericTypeParameterBuilder_t1953 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::ToString()
 String_t* GenericTypeParameterBuilder_ToString_m9789 (GenericTypeParameterBuilder_t1953 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::Equals(System.Object)
 bool GenericTypeParameterBuilder_Equals_m9790 (GenericTypeParameterBuilder_t1953 * __this, Object_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.GenericTypeParameterBuilder::GetHashCode()
 int32_t GenericTypeParameterBuilder_GetHashCode_m9791 (GenericTypeParameterBuilder_t1953 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::MakeGenericType(System.Type[])
 Type_t * GenericTypeParameterBuilder_MakeGenericType_m9792 (GenericTypeParameterBuilder_t1953 * __this, TypeU5BU5D_t146* ___typeArguments, MethodInfo* method) IL2CPP_METHOD_ATTR;
