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
struct ActionBase_t1626794692;
// System.Type[]
struct TypeU5BU5D_t3431720054;
// System.String[]
struct StringU5BU5D_t2956870243;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo>
struct IEnumerable_1_t4037084138;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityTest.AssertionComponent
struct AssertionComponent_t3824534712;
// System.Reflection.FieldInfo
struct FieldInfo_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"
#include "AssemblyU2DCSharp_UnityTest_AssertionComponent3824534712.h"
#include "mscorlib_System_Reflection_FieldInfo1164929782.h"

// System.Void UnityTest.ActionBase::.ctor()
extern "C"  void ActionBase__ctor_m3528464717 (ActionBase_t1626794692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] UnityTest.ActionBase::GetAccepatbleTypesForA()
extern "C"  TypeU5BU5D_t3431720054* ActionBase_GetAccepatbleTypesForA_m1339645070 (ActionBase_t1626794692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityTest.ActionBase::GetDepthOfSearch()
extern "C"  int32_t ActionBase_GetDepthOfSearch_m3787671793 (ActionBase_t1626794692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] UnityTest.ActionBase::GetExcludedFieldNames()
extern "C"  StringU5BU5D_t2956870243* ActionBase_GetExcludedFieldNames_m1498927640 (ActionBase_t1626794692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.ActionBase::Compare()
extern "C"  bool ActionBase_Compare_m4042497628 (ActionBase_t1626794692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.ActionBase::get_UseCache()
extern "C"  bool ActionBase_get_UseCache_m3366542607 (ActionBase_t1626794692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type UnityTest.ActionBase::GetParameterType()
extern "C"  Type_t * ActionBase_GetParameterType_m2724147710 (ActionBase_t1626794692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityTest.ActionBase::GetConfigurationDescription()
extern "C"  String_t* ActionBase_GetConfigurationDescription_m3657944964 (ActionBase_t1626794692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo> UnityTest.ActionBase::GetFields(System.Type)
extern "C"  Il2CppObject* ActionBase_GetFields_m588962351 (ActionBase_t1626794692 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityTest.ActionBase UnityTest.ActionBase::CreateCopy(UnityEngine.GameObject,UnityEngine.GameObject)
extern "C"  ActionBase_t1626794692 * ActionBase_CreateCopy_m2456480783 (ActionBase_t1626794692 * __this, GameObject_t4012695102 * ___oldGameObject, GameObject_t4012695102 * ___newGameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.ActionBase::Fail(UnityTest.AssertionComponent)
extern "C"  void ActionBase_Fail_m3714162739 (ActionBase_t1626794692 * __this, AssertionComponent_t3824534712 * ___assertion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityTest.ActionBase::GetFailureMessage()
extern "C"  String_t* ActionBase_GetFailureMessage_m2980578299 (ActionBase_t1626794692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.ActionBase::<GetConfigurationDescription>m__1(System.Reflection.FieldInfo)
extern "C"  bool ActionBase_U3CGetConfigurationDescriptionU3Em__1_m2840550837 (Il2CppObject * __this /* static, unused */, FieldInfo_t * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
