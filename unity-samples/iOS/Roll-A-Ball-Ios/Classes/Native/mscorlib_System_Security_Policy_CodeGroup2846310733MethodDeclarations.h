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

// System.Security.Policy.CodeGroup
struct CodeGroup_t2846310733;
// System.String
struct String_t;
// System.Security.Policy.IMembershipCondition
struct IMembershipCondition_t590969783;
// System.Collections.IList
struct IList_t1612618265;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Security_Policy_CodeGroup2846310733.h"

// System.String System.Security.Policy.CodeGroup::get_Description()
extern "C"  String_t* CodeGroup_get_Description_m3483375035 (CodeGroup_t2846310733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.IMembershipCondition System.Security.Policy.CodeGroup::get_MembershipCondition()
extern "C"  Il2CppObject * CodeGroup_get_MembershipCondition_m1069806301 (CodeGroup_t2846310733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.CodeGroup::get_Name()
extern "C"  String_t* CodeGroup_get_Name_m2286683854 (CodeGroup_t2846310733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IList System.Security.Policy.CodeGroup::get_Children()
extern "C"  Il2CppObject * CodeGroup_get_Children_m3916364187 (CodeGroup_t2846310733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.CodeGroup::Equals(System.Object)
extern "C"  bool CodeGroup_Equals_m3162055676 (CodeGroup_t2846310733 * __this, Il2CppObject * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.CodeGroup::Equals(System.Security.Policy.CodeGroup,System.Boolean)
extern "C"  bool CodeGroup_Equals_m1198507690 (CodeGroup_t2846310733 * __this, CodeGroup_t2846310733 * ___cg, bool ___compareChildren, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.CodeGroup::GetHashCode()
extern "C"  int32_t CodeGroup_GetHashCode_m2557386080 (CodeGroup_t2846310733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
