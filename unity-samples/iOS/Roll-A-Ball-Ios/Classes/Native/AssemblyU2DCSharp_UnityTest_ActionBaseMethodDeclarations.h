#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityTest.ActionBase
struct ActionBase_t137;
// System.Type[]
struct TypeU5BU5D_t146;
// System.String[]
struct StringU5BU5D_t3;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo>
struct IEnumerable_1_t147;
// UnityEngine.GameObject
struct GameObject_t140;
// UnityTest.AssertionComponent
struct AssertionComponent_t135;
// System.Reflection.FieldInfo
struct FieldInfo_t148;

// System.Void UnityTest.ActionBase::.ctor()
 void ActionBase__ctor_m714 (ActionBase_t137 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] UnityTest.ActionBase::GetAccepatbleTypesForA()
 TypeU5BU5D_t146* ActionBase_GetAccepatbleTypesForA_m715 (ActionBase_t137 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityTest.ActionBase::GetDepthOfSearch()
 int32_t ActionBase_GetDepthOfSearch_m716 (ActionBase_t137 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] UnityTest.ActionBase::GetExcludedFieldNames()
 StringU5BU5D_t3* ActionBase_GetExcludedFieldNames_m717 (ActionBase_t137 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.ActionBase::Compare()
 bool ActionBase_Compare_m718 (ActionBase_t137 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.ActionBase::Compare(System.Object)
// System.Boolean UnityTest.ActionBase::get_UseCache()
 bool ActionBase_get_UseCache_m719 (ActionBase_t137 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type UnityTest.ActionBase::GetParameterType()
 Type_t * ActionBase_GetParameterType_m720 (ActionBase_t137 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityTest.ActionBase::GetConfigurationDescription()
 String_t* ActionBase_GetConfigurationDescription_m721 (ActionBase_t137 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo> UnityTest.ActionBase::GetFields(System.Type)
 Object_t* ActionBase_GetFields_m722 (ActionBase_t137 * __this, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityTest.ActionBase UnityTest.ActionBase::CreateCopy(UnityEngine.GameObject,UnityEngine.GameObject)
 ActionBase_t137 * ActionBase_CreateCopy_m723 (ActionBase_t137 * __this, GameObject_t140 * ___oldGameObject, GameObject_t140 * ___newGameObject, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.ActionBase::Fail(UnityTest.AssertionComponent)
 void ActionBase_Fail_m724 (ActionBase_t137 * __this, AssertionComponent_t135 * ___assertion, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityTest.ActionBase::GetFailureMessage()
 String_t* ActionBase_GetFailureMessage_m725 (ActionBase_t137 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.ActionBase::<GetConfigurationDescription>m__1(System.Reflection.FieldInfo)
 bool ActionBase_U3CGetConfigurationDescriptionU3Em__1_m726 (Object_t * __this/* static, unused */, FieldInfo_t148 * ___info, MethodInfo* method) IL2CPP_METHOD_ATTR;
