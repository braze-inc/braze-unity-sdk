#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Module
struct Module_t1752;
// System.Reflection.Assembly
struct Assembly_t239;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t112;
// System.Type
struct Type_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t960;
// System.Type[]
struct TypeU5BU5D_t146;
// System.Object
struct Object_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Reflection.Module::.ctor()
 void Module__ctor_m9979 (Module_t1752 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Module::.cctor()
 void Module__cctor_m9980 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Module::get_Assembly()
 Assembly_t239 * Module_get_Assembly_m9981 (Module_t1752 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Module::get_ScopeName()
 String_t* Module_get_ScopeName_m9982 (Module_t1752 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Module::GetCustomAttributes(System.Type,System.Boolean)
 ObjectU5BU5D_t112* Module_GetCustomAttributes_m9983 (Module_t1752 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Module::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Module_GetObjectData_m9984 (Module_t1752 * __this, SerializationInfo_t960 * ___info, StreamingContext_t961  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Module::InternalGetTypes()
 TypeU5BU5D_t146* Module_InternalGetTypes_m9985 (Module_t1752 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Module::GetTypes()
 TypeU5BU5D_t146* Module_GetTypes_m9986 (Module_t1752 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Module::IsDefined(System.Type,System.Boolean)
 bool Module_IsDefined_m9987 (Module_t1752 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Module::IsResource()
 bool Module_IsResource_m9988 (Module_t1752 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Module::ToString()
 String_t* Module_ToString_m9989 (Module_t1752 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Module::filter_by_type_name(System.Type,System.Object)
 bool Module_filter_by_type_name_m9990 (Object_t * __this/* static, unused */, Type_t * ___m, Object_t * ___filterCriteria, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Module::filter_by_type_name_ignore_case(System.Type,System.Object)
 bool Module_filter_by_type_name_ignore_case_m9991 (Object_t * __this/* static, unused */, Type_t * ___m, Object_t * ___filterCriteria, MethodInfo* method) IL2CPP_METHOD_ATTR;
