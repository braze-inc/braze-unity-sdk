#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityTest.MemberResolver
struct MemberResolver_t143;
// UnityEngine.GameObject
struct GameObject_t140;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Reflection.MemberInfo
struct MemberInfo_t196;
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t195;
// System.Reflection.FieldInfo
struct FieldInfo_t148;
// System.Reflection.PropertyInfo
struct PropertyInfo_t197;
// System.Reflection.MethodInfo
struct MethodInfo_t198;

// System.Void UnityTest.MemberResolver::.ctor(UnityEngine.GameObject,System.String)
 void MemberResolver__ctor_m762 (MemberResolver_t143 * __this, GameObject_t140 * ___gameObject, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object UnityTest.MemberResolver::GetValue(System.Boolean)
 Object_t * MemberResolver_GetValue_m763 (MemberResolver_t143 * __this, bool ___useCache, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type UnityTest.MemberResolver::GetMemberType()
 Type_t * MemberResolver_GetMemberType_m764 (MemberResolver_t143 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.MemberResolver::TryGetMemberType(UnityEngine.GameObject,System.String,System.Type&)
 bool MemberResolver_TryGetMemberType_m765 (Object_t * __this/* static, unused */, GameObject_t140 * ___gameObject, String_t* ___path, Type_t ** ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.MemberResolver::TryGetValue(UnityEngine.GameObject,System.String,System.Object&)
 bool MemberResolver_TryGetValue_m766 (Object_t * __this/* static, unused */, GameObject_t140 * ___gameObject, String_t* ___path, Object_t ** ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object UnityTest.MemberResolver::GetValueFromMember(System.Object,System.Reflection.MemberInfo)
 Object_t * MemberResolver_GetValueFromMember_m767 (MemberResolver_t143 * __this, Object_t * ___obj, MemberInfo_t196 * ___memberInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object UnityTest.MemberResolver::GetBaseObject()
 Object_t * MemberResolver_GetBaseObject_m768 (MemberResolver_t143 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberInfo[] UnityTest.MemberResolver::GetCallstack()
 MemberInfoU5BU5D_t195* MemberResolver_GetCallstack_m769 (MemberResolver_t143 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.MemberResolver::ValidatePath(System.String)
 void MemberResolver_ValidatePath_m770 (MemberResolver_t143 * __this, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.MemberResolver::IsValueType(System.Type)
 bool MemberResolver_IsValueType_m771 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo UnityTest.MemberResolver::GetField(System.Type,System.String)
 FieldInfo_t148 * MemberResolver_GetField_m772 (Object_t * __this/* static, unused */, Type_t * ___type, String_t* ___fieldName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo UnityTest.MemberResolver::GetProperty(System.Type,System.String)
 PropertyInfo_t197 * MemberResolver_GetProperty_m773 (Object_t * __this/* static, unused */, Type_t * ___type, String_t* ___propertyName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo UnityTest.MemberResolver::GetGetMethod(System.Reflection.PropertyInfo)
 MethodInfo_t198 * MemberResolver_GetGetMethod_m774 (Object_t * __this/* static, unused */, PropertyInfo_t197 * ___propertyInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
