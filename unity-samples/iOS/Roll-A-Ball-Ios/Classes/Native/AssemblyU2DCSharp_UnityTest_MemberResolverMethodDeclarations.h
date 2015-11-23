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

// UnityTest.MemberResolver
struct MemberResolver_t142;
// UnityEngine.GameObject
struct GameObject_t141;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t179;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityTest.MemberResolver::.ctor(UnityEngine.GameObject,System.String)
extern "C" void MemberResolver__ctor_m742 (MemberResolver_t142 * __this, GameObject_t141 * ___gameObject, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object UnityTest.MemberResolver::GetValue(System.Boolean)
extern "C" Object_t * MemberResolver_GetValue_m743 (MemberResolver_t142 * __this, bool ___useCache, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type UnityTest.MemberResolver::GetMemberType()
extern "C" Type_t * MemberResolver_GetMemberType_m744 (MemberResolver_t142 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.MemberResolver::TryGetMemberType(UnityEngine.GameObject,System.String,System.Type&)
extern "C" bool MemberResolver_TryGetMemberType_m745 (Object_t * __this /* static, unused */, GameObject_t141 * ___gameObject, String_t* ___path, Type_t ** ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.MemberResolver::TryGetValue(UnityEngine.GameObject,System.String,System.Object&)
extern "C" bool MemberResolver_TryGetValue_m746 (Object_t * __this /* static, unused */, GameObject_t141 * ___gameObject, String_t* ___path, Object_t ** ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object UnityTest.MemberResolver::GetValueFromMember(System.Object,System.Reflection.MemberInfo)
extern "C" Object_t * MemberResolver_GetValueFromMember_m747 (MemberResolver_t142 * __this, Object_t * ___obj, MemberInfo_t * ___memberInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object UnityTest.MemberResolver::GetBaseObject()
extern "C" Object_t * MemberResolver_GetBaseObject_m748 (MemberResolver_t142 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberInfo[] UnityTest.MemberResolver::GetCallstack()
extern "C" MemberInfoU5BU5D_t179* MemberResolver_GetCallstack_m749 (MemberResolver_t142 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.MemberResolver::ValidatePath(System.String)
extern "C" void MemberResolver_ValidatePath_m750 (MemberResolver_t142 * __this, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.MemberResolver::IsValueType(System.Type)
extern "C" bool MemberResolver_IsValueType_m751 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo UnityTest.MemberResolver::GetField(System.Type,System.String)
extern "C" FieldInfo_t * MemberResolver_GetField_m752 (Object_t * __this /* static, unused */, Type_t * ___type, String_t* ___fieldName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo UnityTest.MemberResolver::GetProperty(System.Type,System.String)
extern "C" PropertyInfo_t * MemberResolver_GetProperty_m753 (Object_t * __this /* static, unused */, Type_t * ___type, String_t* ___propertyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo UnityTest.MemberResolver::GetGetMethod(System.Reflection.PropertyInfo)
extern "C" MethodInfo_t * MemberResolver_GetGetMethod_m754 (Object_t * __this /* static, unused */, PropertyInfo_t * ___propertyInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
