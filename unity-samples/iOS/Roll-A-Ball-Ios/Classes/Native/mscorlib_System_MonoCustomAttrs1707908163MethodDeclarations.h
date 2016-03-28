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

// System.Object
struct Il2CppObject;
// System.Object[]
struct ObjectU5BU5D_t11523773;
// System.Reflection.ICustomAttributeProvider
struct ICustomAttributeProvider_t2334200065;
// System.Type
struct Type_t;
// System.Attribute
struct Attribute_t498693649;
// System.Reflection.CustomAttributeData[]
struct CustomAttributeDataU5BU5D_t895074162;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeData>
struct IList_1_t456169277;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.AttributeUsageAttribute
struct AttributeUsageAttribute_t1025395500;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Reflection_PropertyInfo1490548369.h"

// System.Void System.MonoCustomAttrs::.cctor()
extern "C"  void MonoCustomAttrs__cctor_m3384027722 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoCustomAttrs::IsUserCattrProvider(System.Object)
extern "C"  bool MonoCustomAttrs_IsUserCattrProvider_m151684613 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.MonoCustomAttrs::GetCustomAttributesInternal(System.Reflection.ICustomAttributeProvider,System.Type,System.Boolean)
extern "C"  ObjectU5BU5D_t11523773* MonoCustomAttrs_GetCustomAttributesInternal_m349185144 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj, Type_t * ___attributeType, bool ___pseudoAttrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.MonoCustomAttrs::GetPseudoCustomAttributes(System.Reflection.ICustomAttributeProvider,System.Type)
extern "C"  ObjectU5BU5D_t11523773* MonoCustomAttrs_GetPseudoCustomAttributes_m3877754150 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj, Type_t * ___attributeType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.MonoCustomAttrs::GetCustomAttributesBase(System.Reflection.ICustomAttributeProvider,System.Type)
extern "C"  ObjectU5BU5D_t11523773* MonoCustomAttrs_GetCustomAttributesBase_m4161804793 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj, Type_t * ___attributeType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Attribute System.MonoCustomAttrs::GetCustomAttribute(System.Reflection.ICustomAttributeProvider,System.Type,System.Boolean)
extern "C"  Attribute_t498693649 * MonoCustomAttrs_GetCustomAttribute_m1376894045 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.MonoCustomAttrs::GetCustomAttributes(System.Reflection.ICustomAttributeProvider,System.Type,System.Boolean)
extern "C"  ObjectU5BU5D_t11523773* MonoCustomAttrs_GetCustomAttributes_m3020328693 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.MonoCustomAttrs::GetCustomAttributes(System.Reflection.ICustomAttributeProvider,System.Boolean)
extern "C"  ObjectU5BU5D_t11523773* MonoCustomAttrs_GetCustomAttributes_m3210789640 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.CustomAttributeData[] System.MonoCustomAttrs::GetCustomAttributesDataInternal(System.Reflection.ICustomAttributeProvider)
extern "C"  CustomAttributeDataU5BU5D_t895074162* MonoCustomAttrs_GetCustomAttributesDataInternal_m1332961551 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeData> System.MonoCustomAttrs::GetCustomAttributesData(System.Reflection.ICustomAttributeProvider)
extern "C"  Il2CppObject* MonoCustomAttrs_GetCustomAttributesData_m954311775 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoCustomAttrs::IsDefined(System.Reflection.ICustomAttributeProvider,System.Type,System.Boolean)
extern "C"  bool MonoCustomAttrs_IsDefined_m1052740451 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoCustomAttrs::IsDefinedInternal(System.Reflection.ICustomAttributeProvider,System.Type)
extern "C"  bool MonoCustomAttrs_IsDefinedInternal_m386120631 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj, Type_t * ___AttributeType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.MonoCustomAttrs::GetBasePropertyDefinition(System.Reflection.PropertyInfo)
extern "C"  PropertyInfo_t * MonoCustomAttrs_GetBasePropertyDefinition_m1612293317 (Il2CppObject * __this /* static, unused */, PropertyInfo_t * ___property, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ICustomAttributeProvider System.MonoCustomAttrs::GetBase(System.Reflection.ICustomAttributeProvider)
extern "C"  Il2CppObject * MonoCustomAttrs_GetBase_m1327587805 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AttributeUsageAttribute System.MonoCustomAttrs::RetrieveAttributeUsage(System.Type)
extern "C"  AttributeUsageAttribute_t1025395500 * MonoCustomAttrs_RetrieveAttributeUsage_m2136597604 (Il2CppObject * __this /* static, unused */, Type_t * ___attributeType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
