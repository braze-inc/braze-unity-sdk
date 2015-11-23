#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t141;
// System.Object
struct Object_t;
// UnityTest.MemberResolver
struct MemberResolver_t142;
// System.String
struct String_t;
// System.Func`2<System.Reflection.FieldInfo,System.Boolean>
struct Func_2_t143;

#include "UnityEngine_UnityEngine_ScriptableObject.h"

// UnityTest.ActionBase
struct  ActionBase_t136  : public ScriptableObject_t140
{
	// UnityEngine.GameObject UnityTest.ActionBase::go
	GameObject_t141 * ___go_2;
	// System.Object UnityTest.ActionBase::m_ObjVal
	Object_t * ___m_ObjVal_3;
	// UnityTest.MemberResolver UnityTest.ActionBase::m_MemberResolver
	MemberResolver_t142 * ___m_MemberResolver_4;
	// System.String UnityTest.ActionBase::thisPropertyPath
	String_t* ___thisPropertyPath_5;
};
struct ActionBase_t136_StaticFields{
	// System.Func`2<System.Reflection.FieldInfo,System.Boolean> UnityTest.ActionBase::<>f__am$cache4
	Func_2_t143 * ___U3CU3Ef__amU24cache4_6;
};
