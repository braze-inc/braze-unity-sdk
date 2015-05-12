#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t140;
// System.Object
struct Object_t;
// UnityTest.MemberResolver
struct MemberResolver_t143;
// System.String
struct String_t;
// System.Func`2<System.Reflection.FieldInfo,System.Boolean>
struct Func_2_t144;
// UnityEngine.ScriptableObject
#include "UnityEngine_UnityEngine_ScriptableObject.h"
// UnityTest.ActionBase
struct ActionBase_t137  : public ScriptableObject_t145
{
	// UnityEngine.GameObject UnityTest.ActionBase::go
	GameObject_t140 * ___go_2;
	// System.Object UnityTest.ActionBase::m_ObjVal
	Object_t * ___m_ObjVal_3;
	// UnityTest.MemberResolver UnityTest.ActionBase::m_MemberResolver
	MemberResolver_t143 * ___m_MemberResolver_4;
	// System.String UnityTest.ActionBase::thisPropertyPath
	String_t* ___thisPropertyPath_5;
};
struct ActionBase_t137_StaticFields{
	// System.Func`2<System.Reflection.FieldInfo,System.Boolean> UnityTest.ActionBase::<>f__am$cache4
	Func_2_t144 * ___U3CU3Ef__am$cache4_6;
};
