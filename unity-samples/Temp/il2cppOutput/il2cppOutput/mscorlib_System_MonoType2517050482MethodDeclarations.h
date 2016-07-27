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

// System.Type
struct Type_t;
// System.MonoType
struct MonoType_t;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t3542137334;
// System.Reflection.Binder
struct Binder_t4180926488;
// System.Type[]
struct TypeU5BU5D_t3431720054;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t3379147067;
// System.Reflection.ConstructorInfo[]
struct ConstructorInfoU5BU5D_t3572023667;
// System.Reflection.EventInfo
struct EventInfo_t;
// System.String
struct String_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t1144794227;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t1668237648;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_t1348579340;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Object
struct Il2CppObject;
// System.Object[]
struct ObjectU5BU5D_t11523773;
// System.Globalization.CultureInfo
struct CultureInfo_t3603717042;
// System.String[]
struct StringU5BU5D_t2956870243;
// System.Reflection.Assembly
struct Assembly_t1882292308;
// System.Reflection.Module
struct Module_t206139610;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;
// System.Reflection.MethodBase
struct MethodBase_t3461000640;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_TypeAttributes104824479.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Reflection_BindingFlags2090192240.h"
#include "mscorlib_System_Reflection_Binder4180926488.h"
#include "mscorlib_System_Reflection_CallingConventions3959446060.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Globalization_CultureInfo3603717042.h"
#include "mscorlib_System_Reflection_MemberTypes938013741.h"
#include "mscorlib_System_RuntimeTypeHandle1864875887.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"
#include "mscorlib_System_Reflection_MethodBase3461000640.h"

// System.Reflection.TypeAttributes System.MonoType::get_attributes(System.Type)
extern "C"  int32_t MonoType_get_attributes_m3858763267 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.MonoType::GetDefaultConstructor()
extern "C"  ConstructorInfo_t3542137334 * MonoType_GetDefaultConstructor_m209771828 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.TypeAttributes System.MonoType::GetAttributeFlagsImpl()
extern "C"  int32_t MonoType_GetAttributeFlagsImpl_m57896493 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.MonoType::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  ConstructorInfo_t3542137334 * MonoType_GetConstructorImpl_m2165817190 (MonoType_t * __this, int32_t ___bindingAttr0, Binder_t4180926488 * ___binder1, int32_t ___callConvention2, TypeU5BU5D_t3431720054* ___types3, ParameterModifierU5BU5D_t3379147067* ___modifiers4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.MonoType::GetConstructors_internal(System.Reflection.BindingFlags,System.Type)
extern "C"  ConstructorInfoU5BU5D_t3572023667* MonoType_GetConstructors_internal_m3333761497 (MonoType_t * __this, int32_t ___bindingAttr0, Type_t * ___reflected_type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.MonoType::GetConstructors(System.Reflection.BindingFlags)
extern "C"  ConstructorInfoU5BU5D_t3572023667* MonoType_GetConstructors_m2914995340 (MonoType_t * __this, int32_t ___bindingAttr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.MonoType::InternalGetEvent(System.String,System.Reflection.BindingFlags)
extern "C"  EventInfo_t * MonoType_InternalGetEvent_m3590335900 (MonoType_t * __this, String_t* ___name0, int32_t ___bindingAttr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.MonoType::GetEvent(System.String,System.Reflection.BindingFlags)
extern "C"  EventInfo_t * MonoType_GetEvent_m2496571007 (MonoType_t * __this, String_t* ___name0, int32_t ___bindingAttr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.MonoType::GetField(System.String,System.Reflection.BindingFlags)
extern "C"  FieldInfo_t * MonoType_GetField_m599214911 (MonoType_t * __this, String_t* ___name0, int32_t ___bindingAttr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo[] System.MonoType::GetFields_internal(System.Reflection.BindingFlags,System.Type)
extern "C"  FieldInfoU5BU5D_t1144794227* MonoType_GetFields_internal_m537795545 (MonoType_t * __this, int32_t ___bindingAttr0, Type_t * ___reflected_type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo[] System.MonoType::GetFields(System.Reflection.BindingFlags)
extern "C"  FieldInfoU5BU5D_t1144794227* MonoType_GetFields_m1853037196 (MonoType_t * __this, int32_t ___bindingAttr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.MonoType::GetInterfaces()
extern "C"  TypeU5BU5D_t3431720054* MonoType_GetInterfaces_m3250739582 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.MonoType::GetMethodsByName(System.String,System.Reflection.BindingFlags,System.Boolean,System.Type)
extern "C"  MethodInfoU5BU5D_t1668237648* MonoType_GetMethodsByName_m1576473598 (MonoType_t * __this, String_t* ___name0, int32_t ___bindingAttr1, bool ___ignoreCase2, Type_t * ___reflected_type3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.MonoType::GetMethods(System.Reflection.BindingFlags)
extern "C"  MethodInfoU5BU5D_t1668237648* MonoType_GetMethods_m254951756 (MonoType_t * __this, int32_t ___bindingAttr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.MonoType::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  MethodInfo_t * MonoType_GetMethodImpl_m2617796334 (MonoType_t * __this, String_t* ___name0, int32_t ___bindingAttr1, Binder_t4180926488 * ___binder2, int32_t ___callConvention3, TypeU5BU5D_t3431720054* ___types4, ParameterModifierU5BU5D_t3379147067* ___modifiers5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo[] System.MonoType::GetPropertiesByName(System.String,System.Reflection.BindingFlags,System.Boolean,System.Type)
extern "C"  PropertyInfoU5BU5D_t1348579340* MonoType_GetPropertiesByName_m3972083631 (MonoType_t * __this, String_t* ___name0, int32_t ___bindingAttr1, bool ___icase2, Type_t * ___reflected_type3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.MonoType::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  PropertyInfo_t * MonoType_GetPropertyImpl_m2349541479 (MonoType_t * __this, String_t* ___name0, int32_t ___bindingAttr1, Binder_t4180926488 * ___binder2, Type_t * ___returnType3, TypeU5BU5D_t3431720054* ___types4, ParameterModifierU5BU5D_t3379147067* ___modifiers5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::HasElementTypeImpl()
extern "C"  bool MonoType_HasElementTypeImpl_m3651013126 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::IsArrayImpl()
extern "C"  bool MonoType_IsArrayImpl_m2714061063 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::IsByRefImpl()
extern "C"  bool MonoType_IsByRefImpl_m244089130 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::IsPointerImpl()
extern "C"  bool MonoType_IsPointerImpl_m2437726891 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::IsPrimitiveImpl()
extern "C"  bool MonoType_IsPrimitiveImpl_m472277653 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::IsSubclassOf(System.Type)
extern "C"  bool MonoType_IsSubclassOf_m2439875510 (MonoType_t * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.MonoType::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
extern "C"  Il2CppObject * MonoType_InvokeMember_m397738839 (MonoType_t * __this, String_t* ___name0, int32_t ___invokeAttr1, Binder_t4180926488 * ___binder2, Il2CppObject * ___target3, ObjectU5BU5D_t11523773* ___args4, ParameterModifierU5BU5D_t3379147067* ___modifiers5, CultureInfo_t3603717042 * ___culture6, StringU5BU5D_t2956870243* ___namedParameters7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.MonoType::GetElementType()
extern "C"  Type_t * MonoType_GetElementType_m3405434354 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.MonoType::get_UnderlyingSystemType()
extern "C"  Type_t * MonoType_get_UnderlyingSystemType_m833788001 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.MonoType::get_Assembly()
extern "C"  Assembly_t1882292308 * MonoType_get_Assembly_m1158787034 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MonoType::get_AssemblyQualifiedName()
extern "C"  String_t* MonoType_get_AssemblyQualifiedName_m3709742257 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MonoType::getFullName(System.Boolean,System.Boolean)
extern "C"  String_t* MonoType_getFullName_m2683490973 (MonoType_t * __this, bool ___full_name0, bool ___assembly_qualified1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.MonoType::get_BaseType()
extern "C"  Type_t * MonoType_get_BaseType_m3982183046 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MonoType::get_FullName()
extern "C"  String_t* MonoType_get_FullName_m1705090284 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::IsDefined(System.Type,System.Boolean)
extern "C"  bool MonoType_IsDefined_m574655067 (MonoType_t * __this, Type_t * ___attributeType0, bool ___inherit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.MonoType::GetCustomAttributes(System.Boolean)
extern "C"  ObjectU5BU5D_t11523773* MonoType_GetCustomAttributes_m3219692190 (MonoType_t * __this, bool ___inherit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.MonoType::GetCustomAttributes(System.Type,System.Boolean)
extern "C"  ObjectU5BU5D_t11523773* MonoType_GetCustomAttributes_m3981030795 (MonoType_t * __this, Type_t * ___attributeType0, bool ___inherit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberTypes System.MonoType::get_MemberType()
extern "C"  int32_t MonoType_get_MemberType_m4102227249 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MonoType::get_Name()
extern "C"  String_t* MonoType_get_Name_m413070845 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MonoType::get_Namespace()
extern "C"  String_t* MonoType_get_Namespace_m1531779339 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.MonoType::get_Module()
extern "C"  Module_t206139610 * MonoType_get_Module_m3779621798 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.MonoType::get_DeclaringType()
extern "C"  Type_t * MonoType_get_DeclaringType_m3073537512 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.MonoType::get_ReflectedType()
extern "C"  Type_t * MonoType_get_ReflectedType_m2303984285 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.MonoType::get_TypeHandle()
extern "C"  RuntimeTypeHandle_t1864875887  MonoType_get_TypeHandle_m2428845255 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MonoType::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void MonoType_GetObjectData_m2425175414 (MonoType_t * __this, SerializationInfo_t2995724695 * ___info0, StreamingContext_t986364934  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MonoType::ToString()
extern "C"  String_t* MonoType_ToString_m4069763221 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.MonoType::GetGenericArguments()
extern "C"  TypeU5BU5D_t3431720054* MonoType_GetGenericArguments_m3677840611 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::get_ContainsGenericParameters()
extern "C"  bool MonoType_get_ContainsGenericParameters_m2126365649 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::get_IsGenericParameter()
extern "C"  bool MonoType_get_IsGenericParameter_m1374410255 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.MonoType::GetGenericTypeDefinition()
extern "C"  Type_t * MonoType_GetGenericTypeDefinition_m467429952 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.MonoType::CheckMethodSecurity(System.Reflection.MethodBase)
extern "C"  MethodBase_t3461000640 * MonoType_CheckMethodSecurity_m1994761406 (MonoType_t * __this, MethodBase_t3461000640 * ___mb0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MonoType::ReorderParamArrayArguments(System.Object[]&,System.Reflection.MethodBase)
extern "C"  void MonoType_ReorderParamArrayArguments_m3544296603 (MonoType_t * __this, ObjectU5BU5D_t11523773** ___args0, MethodBase_t3461000640 * ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
