#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t1591;
// System.Type
struct Type_t;

#include "mscorlib_System_Type.h"

// System.Reflection.Emit.EnumBuilder
struct  EnumBuilder_t1594  : public Type_t
{
	// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.EnumBuilder::_tb
	TypeBuilder_t1591 * ____tb_8;
	// System.Type System.Reflection.Emit.EnumBuilder::_underlyingType
	Type_t * ____underlyingType_9;
};
