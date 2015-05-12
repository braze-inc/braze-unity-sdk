#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityTest.MemberResolver
struct MemberResolver_t157;
// UnityEngine.GameObject
struct GameObject_t154;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Reflection.MemberInfo
struct MemberInfo_t131;
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t209;
// System.Reflection.FieldInfo
struct FieldInfo_t162;
// System.Reflection.PropertyInfo
struct PropertyInfo_t210;
// System.Reflection.MethodInfo
struct MethodInfo_t211;

// System.Void UnityTest.MemberResolver::.ctor(UnityEngine.GameObject,System.String)
 void MemberResolver__ctor_m867 (MemberResolver_t157 * __this, GameObject_t154 * ___gameObject, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object UnityTest.MemberResolver::GetValue(System.Boolean)
 Object_t * MemberResolver_GetValue_m868 (MemberResolver_t157 * __this, bool ___useCache, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type UnityTest.MemberResolver::GetMemberType()
 Type_t * MemberResolver_GetMemberType_m869 (MemberResolver_t157 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.MemberResolver::TryGetMemberType(UnityEngine.GameObject,System.String,System.Type&)
 bool MemberResolver_TryGetMemberType_m870 (Object_t * __this/* static, unused */, GameObject_t154 * ___gameObject, String_t* ___path, Type_t ** ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.MemberResolver::TryGetValue(UnityEngine.GameObject,System.String,System.Object&)
 bool MemberResolver_TryGetValue_m871 (Object_t * __this/* static, unused */, GameObject_t154 * ___gameObject, String_t* ___path, Object_t ** ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object UnityTest.MemberResolver::GetValueFromMember(System.Object,System.Reflection.MemberInfo)
 Object_t * MemberResolver_GetValueFromMember_m872 (MemberResolver_t157 * __this, Object_t * ___obj, MemberInfo_t131 * ___memberInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object UnityTest.MemberResolver::GetBaseObject()
 Object_t * MemberResolver_GetBaseObject_m873 (MemberResolver_t157 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberInfo[] UnityTest.MemberResolver::GetCallstack()
 MemberInfoU5BU5D_t209* MemberResolver_GetCallstack_m874 (MemberResolver_t157 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.MemberResolver::ValidatePath(System.String)
 void MemberResolver_ValidatePath_m875 (MemberResolver_t157 * __this, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.MemberResolver::IsValueType(System.Type)
 bool MemberResolver_IsValueType_m876 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo UnityTest.MemberResolver::GetField(System.Type,System.String)
 FieldInfo_t162 * MemberResolver_GetField_m877 (Object_t * __this/* static, unused */, Type_t * ___type, String_t* ___fieldName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo UnityTest.MemberResolver::GetProperty(System.Type,System.String)
 PropertyInfo_t210 * MemberResolver_GetProperty_m878 (Object_t * __this/* static, unused */, Type_t * ___type, String_t* ___propertyName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo UnityTest.MemberResolver::GetGetMethod(System.Reflection.PropertyInfo)
 MethodInfo_t211 * MemberResolver_GetGetMethod_m879 (Object_t * __this/* static, unused */, PropertyInfo_t210 * ___propertyInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
