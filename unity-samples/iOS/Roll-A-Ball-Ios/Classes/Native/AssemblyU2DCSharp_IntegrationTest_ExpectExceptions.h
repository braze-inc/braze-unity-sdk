#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String[]
struct StringU5BU5D_t63;
// System.Func`2<System.Type,System.String>
struct Func_2_t194;

#include "mscorlib_System_Attribute.h"

// IntegrationTest/ExpectExceptions
struct  ExpectExceptions_t193  : public Attribute_t191
{
	// System.String[] IntegrationTest/ExpectExceptions::exceptionTypeNames
	StringU5BU5D_t63* ___exceptionTypeNames_0;
	// System.Boolean IntegrationTest/ExpectExceptions::succeedOnException
	bool ___succeedOnException_1;
};
struct ExpectExceptions_t193_StaticFields{
	// System.Func`2<System.Type,System.String> IntegrationTest/ExpectExceptions::<>f__am$cache2
	Func_2_t194 * ___U3CU3Ef__amU24cache2_2;
};
