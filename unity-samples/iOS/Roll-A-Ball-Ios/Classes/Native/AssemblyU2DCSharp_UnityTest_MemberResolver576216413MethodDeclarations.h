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
struct MemberResolver_t576216413;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t3813794579;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Reflection_MemberInfo2843033814.h"
#include "mscorlib_System_Reflection_PropertyInfo1490548369.h"

// System.Void UnityTest.MemberResolver::.ctor(UnityEngine.GameObject,System.String)
extern "C"  void MemberResolver__ctor_m2475953672 (MemberResolver_t576216413 * __this, GameObject_t4012695102 * ___gameObject, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object UnityTest.MemberResolver::GetValue(System.Boolean)
extern "C"  Il2CppObject * MemberResolver_GetValue_m1070061975 (MemberResolver_t576216413 * __this, bool ___useCache, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type UnityTest.MemberResolver::GetMemberType()
extern "C"  Type_t * MemberResolver_GetMemberType_m3248589570 (MemberResolver_t576216413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.MemberResolver::TryGetMemberType(UnityEngine.GameObject,System.String,System.Type&)
extern "C"  bool MemberResolver_TryGetMemberType_m2227228754 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___gameObject, String_t* ___path, Type_t ** ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.MemberResolver::TryGetValue(UnityEngine.GameObject,System.String,System.Object&)
extern "C"  bool MemberResolver_TryGetValue_m2057103222 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___gameObject, String_t* ___path, Il2CppObject ** ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object UnityTest.MemberResolver::GetValueFromMember(System.Object,System.Reflection.MemberInfo)
extern "C"  Il2CppObject * MemberResolver_GetValueFromMember_m867436586 (MemberResolver_t576216413 * __this, Il2CppObject * ___obj, MemberInfo_t * ___memberInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object UnityTest.MemberResolver::GetBaseObject()
extern "C"  Il2CppObject * MemberResolver_GetBaseObject_m955417923 (MemberResolver_t576216413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberInfo[] UnityTest.MemberResolver::GetCallstack()
extern "C"  MemberInfoU5BU5D_t3813794579* MemberResolver_GetCallstack_m3024419923 (MemberResolver_t576216413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.MemberResolver::ValidatePath(System.String)
extern "C"  void MemberResolver_ValidatePath_m4263603159 (MemberResolver_t576216413 * __this, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.MemberResolver::IsValueType(System.Type)
extern "C"  bool MemberResolver_IsValueType_m752501402 (Il2CppObject * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo UnityTest.MemberResolver::GetField(System.Type,System.String)
extern "C"  FieldInfo_t * MemberResolver_GetField_m2920995986 (Il2CppObject * __this /* static, unused */, Type_t * ___type, String_t* ___fieldName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo UnityTest.MemberResolver::GetProperty(System.Type,System.String)
extern "C"  PropertyInfo_t * MemberResolver_GetProperty_m2028443854 (Il2CppObject * __this /* static, unused */, Type_t * ___type, String_t* ___propertyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo UnityTest.MemberResolver::GetGetMethod(System.Reflection.PropertyInfo)
extern "C"  MethodInfo_t * MemberResolver_GetGetMethod_m629740916 (Il2CppObject * __this /* static, unused */, PropertyInfo_t * ___propertyInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
