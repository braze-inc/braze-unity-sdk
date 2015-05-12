#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.MonoField
struct MonoField_t1993;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t96;
// System.Object
struct Object_t;
// System.Reflection.FieldInfo
struct FieldInfo_t162;
// System.Reflection.Binder
struct Binder_t1073;
// System.Globalization.CultureInfo
struct CultureInfo_t1076;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t971;
// System.Reflection.FieldAttributes
#include "mscorlib_System_Reflection_FieldAttributes.h"
// System.RuntimeFieldHandle
#include "mscorlib_System_RuntimeFieldHandle.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Reflection.MonoField::.ctor()
 void MonoField__ctor_m10100 (MonoField_t1993 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldAttributes System.Reflection.MonoField::get_Attributes()
 int32_t MonoField_get_Attributes_m10101 (MonoField_t1993 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeFieldHandle System.Reflection.MonoField::get_FieldHandle()
 RuntimeFieldHandle_t1767  MonoField_get_FieldHandle_m10102 (MonoField_t1993 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoField::get_FieldType()
 Type_t * MonoField_get_FieldType_m10103 (MonoField_t1993 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoField::GetParentType(System.Boolean)
 Type_t * MonoField_GetParentType_m10104 (MonoField_t1993 * __this, bool ___declaring, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoField::get_ReflectedType()
 Type_t * MonoField_get_ReflectedType_m10105 (MonoField_t1993 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoField::get_DeclaringType()
 Type_t * MonoField_get_DeclaringType_m10106 (MonoField_t1993 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoField::get_Name()
 String_t* MonoField_get_Name_m10107 (MonoField_t1993 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoField::IsDefined(System.Type,System.Boolean)
 bool MonoField_IsDefined_m10108 (MonoField_t1993 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoField::GetCustomAttributes(System.Boolean)
 ObjectU5BU5D_t96* MonoField_GetCustomAttributes_m10109 (MonoField_t1993 * __this, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoField::GetCustomAttributes(System.Type,System.Boolean)
 ObjectU5BU5D_t96* MonoField_GetCustomAttributes_m10110 (MonoField_t1993 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.MonoField::GetFieldOffset()
 int32_t MonoField_GetFieldOffset_m10111 (MonoField_t1993 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoField::GetValueInternal(System.Object)
 Object_t * MonoField_GetValueInternal_m10112 (MonoField_t1993 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoField::GetValue(System.Object)
 Object_t * MonoField_GetValue_m10113 (MonoField_t1993 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoField::ToString()
 String_t* MonoField_ToString_m10114 (MonoField_t1993 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoField::SetValueInternal(System.Reflection.FieldInfo,System.Object,System.Object)
 void MonoField_SetValueInternal_m10115 (Object_t * __this/* static, unused */, FieldInfo_t162 * ___fi, Object_t * ___obj, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoField::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Globalization.CultureInfo)
 void MonoField_SetValue_m10116 (MonoField_t1993 * __this, Object_t * ___obj, Object_t * ___val, int32_t ___invokeAttr, Binder_t1073 * ___binder, CultureInfo_t1076 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoField::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void MonoField_GetObjectData_m10117 (MonoField_t1993 * __this, SerializationInfo_t971 * ___info, StreamingContext_t972  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoField::CheckGeneric()
 void MonoField_CheckGeneric_m10118 (MonoField_t1993 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
