#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Security.Policy.PolicyStatement
struct PolicyStatement_t1896;
// System.Security.Policy.IMembershipCondition
struct IMembershipCondition_t1897;
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t1029;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t46;

#include "mscorlib_System_Object.h"

// System.Security.Policy.CodeGroup
struct  CodeGroup_t1895  : public Object_t
{
	// System.Security.Policy.PolicyStatement System.Security.Policy.CodeGroup::m_policy
	PolicyStatement_t1896 * ___m_policy_0;
	// System.Security.Policy.IMembershipCondition System.Security.Policy.CodeGroup::m_membershipCondition
	Object_t * ___m_membershipCondition_1;
	// System.String System.Security.Policy.CodeGroup::m_description
	String_t* ___m_description_2;
	// System.String System.Security.Policy.CodeGroup::m_name
	String_t* ___m_name_3;
	// System.Collections.ArrayList System.Security.Policy.CodeGroup::m_children
	ArrayList_t1029 * ___m_children_4;
};
struct CodeGroup_t1895_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Security.Policy.CodeGroup::<>f__switch$map2A
	Dictionary_2_t46 * ___U3CU3Ef__switchU24map2A_5;
};
