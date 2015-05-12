#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.MonoType
struct MonoType_t2279;
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
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_t1969;
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
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t960;
// System.Reflection.MethodBase
struct MethodBase_t307;
// System.Reflection.MemberTypes
#include "mscorlib_System_Reflection_MemberTypes.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Reflection.TypeAttributes
#include "mscorlib_System_Reflection_TypeAttributes.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Reflection.TypeAttributes System.MonoType::get_attributes(System.Type)
 int32_t MonoType_get_attributes_m11733 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.MonoType::GetDefaultConstructor()
 ConstructorInfo_t1089 * MonoType_GetDefaultConstructor_m11734 (MonoType_t2279 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.TypeAttributes System.MonoType::GetAttributeFlagsImpl()
 int32_t MonoType_GetAttributeFlagsImpl_m11735 (MonoType_t2279 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.MonoType::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
 ConstructorInfo_t1089 * MonoType_GetConstructorImpl_m11736 (MonoType_t2279 * __this, int32_t ___bindingAttr, Binder_t1062 * ___binder, int32_t ___callConvention, TypeU5BU5D_t146* ___types, ParameterModifierU5BU5D_t1063* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.MonoType::GetConstructors_internal(System.Reflection.BindingFlags,System.Type)
 ConstructorInfoU5BU5D_t1754* MonoType_GetConstructors_internal_m11737 (MonoType_t2279 * __this, int32_t ___bindingAttr, Type_t * ___reflected_type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.MonoType::GetConstructors(System.Reflection.BindingFlags)
 ConstructorInfoU5BU5D_t1754* MonoType_GetConstructors_m11738 (MonoType_t2279 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.MonoType::InternalGetEvent(System.String,System.Reflection.BindingFlags)
 EventInfo_t1753 * MonoType_InternalGetEvent_m11739 (MonoType_t2279 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.MonoType::GetEvent(System.String,System.Reflection.BindingFlags)
 EventInfo_t1753 * MonoType_GetEvent_m11740 (MonoType_t2279 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.MonoType::GetField(System.String,System.Reflection.BindingFlags)
 FieldInfo_t148 * MonoType_GetField_m11741 (MonoType_t2279 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo[] System.MonoType::GetFields_internal(System.Reflection.BindingFlags,System.Type)
 FieldInfoU5BU5D_t295* MonoType_GetFields_internal_m11742 (MonoType_t2279 * __this, int32_t ___bindingAttr, Type_t * ___reflected_type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo[] System.MonoType::GetFields(System.Reflection.BindingFlags)
 FieldInfoU5BU5D_t295* MonoType_GetFields_m11743 (MonoType_t2279 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.MonoType::GetInterfaces()
 TypeU5BU5D_t146* MonoType_GetInterfaces_m11744 (MonoType_t2279 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.MonoType::GetMethodsByName(System.String,System.Reflection.BindingFlags,System.Boolean,System.Type)
 MethodInfoU5BU5D_t1163* MonoType_GetMethodsByName_m11745 (MonoType_t2279 * __this, String_t* ___name, int32_t ___bindingAttr, bool ___ignoreCase, Type_t * ___reflected_type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.MonoType::GetMethods(System.Reflection.BindingFlags)
 MethodInfoU5BU5D_t1163* MonoType_GetMethods_m11746 (MonoType_t2279 * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.MonoType::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
 MethodInfo_t198 * MonoType_GetMethodImpl_m11747 (MonoType_t2279 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t1062 * ___binder, int32_t ___callConvention, TypeU5BU5D_t146* ___types, ParameterModifierU5BU5D_t1063* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo[] System.MonoType::GetPropertiesByName(System.String,System.Reflection.BindingFlags,System.Boolean,System.Type)
 PropertyInfoU5BU5D_t1969* MonoType_GetPropertiesByName_m11748 (MonoType_t2279 * __this, String_t* ___name, int32_t ___bindingAttr, bool ___icase, Type_t * ___reflected_type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.MonoType::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
 PropertyInfo_t197 * MonoType_GetPropertyImpl_m11749 (MonoType_t2279 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t1062 * ___binder, Type_t * ___returnType, TypeU5BU5D_t146* ___types, ParameterModifierU5BU5D_t1063* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::HasElementTypeImpl()
 bool MonoType_HasElementTypeImpl_m11750 (MonoType_t2279 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::IsArrayImpl()
 bool MonoType_IsArrayImpl_m11751 (MonoType_t2279 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::IsByRefImpl()
 bool MonoType_IsByRefImpl_m11752 (MonoType_t2279 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::IsPointerImpl()
 bool MonoType_IsPointerImpl_m11753 (MonoType_t2279 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::IsPrimitiveImpl()
 bool MonoType_IsPrimitiveImpl_m11754 (MonoType_t2279 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::IsSubclassOf(System.Type)
 bool MonoType_IsSubclassOf_m11755 (MonoType_t2279 * __this, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.MonoType::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
 Object_t * MonoType_InvokeMember_m11756 (MonoType_t2279 * __this, String_t* ___name, int32_t ___invokeAttr, Binder_t1062 * ___binder, Object_t * ___target, ObjectU5BU5D_t112* ___args, ParameterModifierU5BU5D_t1063* ___modifiers, CultureInfo_t1065 * ___culture, StringU5BU5D_t3* ___namedParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.MonoType::GetElementType()
 Type_t * MonoType_GetElementType_m11757 (MonoType_t2279 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.MonoType::get_UnderlyingSystemType()
 Type_t * MonoType_get_UnderlyingSystemType_m11758 (MonoType_t2279 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.MonoType::get_Assembly()
 Assembly_t239 * MonoType_get_Assembly_m11759 (MonoType_t2279 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MonoType::get_AssemblyQualifiedName()
 String_t* MonoType_get_AssemblyQualifiedName_m11760 (MonoType_t2279 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MonoType::getFullName(System.Boolean,System.Boolean)
 String_t* MonoType_getFullName_m11761 (MonoType_t2279 * __this, bool ___full_name, bool ___assembly_qualified, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.MonoType::get_BaseType()
 Type_t * MonoType_get_BaseType_m11762 (MonoType_t2279 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MonoType::get_FullName()
 String_t* MonoType_get_FullName_m11763 (MonoType_t2279 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::IsDefined(System.Type,System.Boolean)
 bool MonoType_IsDefined_m11764 (MonoType_t2279 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.MonoType::GetCustomAttributes(System.Boolean)
 ObjectU5BU5D_t112* MonoType_GetCustomAttributes_m11765 (MonoType_t2279 * __this, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.MonoType::GetCustomAttributes(System.Type,System.Boolean)
 ObjectU5BU5D_t112* MonoType_GetCustomAttributes_m11766 (MonoType_t2279 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberTypes System.MonoType::get_MemberType()
 int32_t MonoType_get_MemberType_m11767 (MonoType_t2279 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MonoType::get_Name()
 String_t* MonoType_get_Name_m11768 (MonoType_t2279 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MonoType::get_Namespace()
 String_t* MonoType_get_Namespace_m11769 (MonoType_t2279 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.MonoType::get_Module()
 Module_t1752 * MonoType_get_Module_m11770 (MonoType_t2279 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.MonoType::get_DeclaringType()
 Type_t * MonoType_get_DeclaringType_m11771 (MonoType_t2279 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.MonoType::get_ReflectedType()
 Type_t * MonoType_get_ReflectedType_m11772 (MonoType_t2279 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.MonoType::get_TypeHandle()
 RuntimeTypeHandle_t1751  MonoType_get_TypeHandle_m11773 (MonoType_t2279 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MonoType::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void MonoType_GetObjectData_m11774 (MonoType_t2279 * __this, SerializationInfo_t960 * ___info, StreamingContext_t961  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MonoType::ToString()
 String_t* MonoType_ToString_m11775 (MonoType_t2279 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.MonoType::GetGenericArguments()
 TypeU5BU5D_t146* MonoType_GetGenericArguments_m11776 (MonoType_t2279 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::get_ContainsGenericParameters()
 bool MonoType_get_ContainsGenericParameters_m11777 (MonoType_t2279 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::get_IsGenericParameter()
 bool MonoType_get_IsGenericParameter_m11778 (MonoType_t2279 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.MonoType::GetGenericTypeDefinition()
 Type_t * MonoType_GetGenericTypeDefinition_m11779 (MonoType_t2279 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.MonoType::CheckMethodSecurity(System.Reflection.MethodBase)
 MethodBase_t307 * MonoType_CheckMethodSecurity_m11780 (MonoType_t2279 * __this, MethodBase_t307 * ___mb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MonoType::ReorderParamArrayArguments(System.Object[]&,System.Reflection.MethodBase)
 void MonoType_ReorderParamArrayArguments_m11781 (MonoType_t2279 * __this, ObjectU5BU5D_t112** ___args, MethodBase_t307 * ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
