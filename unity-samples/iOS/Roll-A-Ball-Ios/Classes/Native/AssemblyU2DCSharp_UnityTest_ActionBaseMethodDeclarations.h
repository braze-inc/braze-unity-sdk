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

// UnityTest.ActionBase
struct ActionBase_t136;
// System.Type[]
struct TypeU5BU5D_t216;
// System.String[]
struct StringU5BU5D_t63;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo>
struct IEnumerable_1_t254;
// UnityEngine.GameObject
struct GameObject_t141;
// UnityTest.AssertionComponent
struct AssertionComponent_t135;
// System.Reflection.FieldInfo
struct FieldInfo_t;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityTest.ActionBase::.ctor()
extern "C" void ActionBase__ctor_m694 (ActionBase_t136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] UnityTest.ActionBase::GetAccepatbleTypesForA()
extern "C" TypeU5BU5D_t216* ActionBase_GetAccepatbleTypesForA_m695 (ActionBase_t136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityTest.ActionBase::GetDepthOfSearch()
extern "C" int32_t ActionBase_GetDepthOfSearch_m696 (ActionBase_t136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] UnityTest.ActionBase::GetExcludedFieldNames()
extern "C" StringU5BU5D_t63* ActionBase_GetExcludedFieldNames_m697 (ActionBase_t136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.ActionBase::Compare()
extern "C" bool ActionBase_Compare_m698 (ActionBase_t136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.ActionBase::get_UseCache()
extern "C" bool ActionBase_get_UseCache_m699 (ActionBase_t136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type UnityTest.ActionBase::GetParameterType()
extern "C" Type_t * ActionBase_GetParameterType_m700 (ActionBase_t136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityTest.ActionBase::GetConfigurationDescription()
extern "C" String_t* ActionBase_GetConfigurationDescription_m701 (ActionBase_t136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo> UnityTest.ActionBase::GetFields(System.Type)
extern "C" Object_t* ActionBase_GetFields_m702 (ActionBase_t136 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityTest.ActionBase UnityTest.ActionBase::CreateCopy(UnityEngine.GameObject,UnityEngine.GameObject)
extern "C" ActionBase_t136 * ActionBase_CreateCopy_m703 (ActionBase_t136 * __this, GameObject_t141 * ___oldGameObject, GameObject_t141 * ___newGameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.ActionBase::Fail(UnityTest.AssertionComponent)
extern "C" void ActionBase_Fail_m704 (ActionBase_t136 * __this, AssertionComponent_t135 * ___assertion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityTest.ActionBase::GetFailureMessage()
extern "C" String_t* ActionBase_GetFailureMessage_m705 (ActionBase_t136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.ActionBase::<GetConfigurationDescription>m__1(System.Reflection.FieldInfo)
extern "C" bool ActionBase_U3CGetConfigurationDescriptionU3Em__1_m706 (Object_t * __this /* static, unused */, FieldInfo_t * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
