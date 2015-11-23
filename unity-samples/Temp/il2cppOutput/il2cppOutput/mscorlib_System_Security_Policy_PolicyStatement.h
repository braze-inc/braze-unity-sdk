#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Security.PermissionSet
struct PermissionSet_t1624;

#include "mscorlib_System_Object.h"
#include "mscorlib_System_Security_Policy_PolicyStatementAttribute.h"

// System.Security.Policy.PolicyStatement
struct  PolicyStatement_t1896  : public Object_t
{
	// System.Security.PermissionSet System.Security.Policy.PolicyStatement::perms
	PermissionSet_t1624 * ___perms_0;
	// System.Security.Policy.PolicyStatementAttribute System.Security.Policy.PolicyStatement::attrs
	int32_t ___attrs_1;
};
