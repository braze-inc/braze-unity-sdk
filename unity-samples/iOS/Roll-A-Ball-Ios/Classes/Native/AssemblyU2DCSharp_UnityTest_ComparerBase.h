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
// System.String
struct String_t;
// UnityTest.MemberResolver
struct MemberResolver_t142;

#include "AssemblyU2DCSharp_UnityTest_ActionBase.h"
#include "AssemblyU2DCSharp_UnityTest_ComparerBase_CompareToType.h"

// UnityTest.ComparerBase
struct  ComparerBase_t150  : public ActionBase_t136
{
	// UnityTest.ComparerBase/CompareToType UnityTest.ComparerBase::compareToType
	int32_t ___compareToType_7;
	// UnityEngine.GameObject UnityTest.ComparerBase::other
	GameObject_t141 * ___other_8;
	// System.Object UnityTest.ComparerBase::m_ObjOtherVal
	Object_t * ___m_ObjOtherVal_9;
	// System.String UnityTest.ComparerBase::otherPropertyPath
	String_t* ___otherPropertyPath_10;
	// UnityTest.MemberResolver UnityTest.ComparerBase::m_MemberResolverB
	MemberResolver_t142 * ___m_MemberResolverB_11;
	// System.Object UnityTest.ComparerBase::<ConstValue>k__BackingField
	Object_t * ___U3CConstValueU3Ek__BackingField_12;
};
