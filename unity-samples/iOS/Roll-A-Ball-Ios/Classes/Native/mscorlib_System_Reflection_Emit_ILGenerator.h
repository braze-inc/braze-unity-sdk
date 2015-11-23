#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Type
struct Type_t;
// System.Byte[]
struct ByteU5BU5D_t98;
// System.Reflection.Emit.ILTokenInfo[]
struct ILTokenInfoU5BU5D_t1602;
// System.Reflection.Emit.ILGenerator/LabelData[]
struct LabelDataU5BU5D_t1603;
// System.Reflection.Emit.ILGenerator/LabelFixup[]
struct LabelFixupU5BU5D_t1604;
// System.Reflection.Module
struct Module_t1605;
// System.Reflection.Emit.TokenGenerator
struct TokenGenerator_t1606;

#include "mscorlib_System_Object.h"

// System.Reflection.Emit.ILGenerator
struct  ILGenerator_t1590  : public Object_t
{
	// System.Byte[] System.Reflection.Emit.ILGenerator::code
	ByteU5BU5D_t98* ___code_1;
	// System.Int32 System.Reflection.Emit.ILGenerator::code_len
	int32_t ___code_len_2;
	// System.Int32 System.Reflection.Emit.ILGenerator::max_stack
	int32_t ___max_stack_3;
	// System.Int32 System.Reflection.Emit.ILGenerator::cur_stack
	int32_t ___cur_stack_4;
	// System.Int32 System.Reflection.Emit.ILGenerator::num_token_fixups
	int32_t ___num_token_fixups_5;
	// System.Reflection.Emit.ILTokenInfo[] System.Reflection.Emit.ILGenerator::token_fixups
	ILTokenInfoU5BU5D_t1602* ___token_fixups_6;
	// System.Reflection.Emit.ILGenerator/LabelData[] System.Reflection.Emit.ILGenerator::labels
	LabelDataU5BU5D_t1603* ___labels_7;
	// System.Reflection.Emit.ILGenerator/LabelFixup[] System.Reflection.Emit.ILGenerator::fixups
	LabelFixupU5BU5D_t1604* ___fixups_8;
	// System.Int32 System.Reflection.Emit.ILGenerator::num_fixups
	int32_t ___num_fixups_9;
	// System.Reflection.Module System.Reflection.Emit.ILGenerator::module
	Module_t1605 * ___module_10;
	// System.Reflection.Emit.TokenGenerator System.Reflection.Emit.ILGenerator::token_gen
	Object_t * ___token_gen_11;
};
struct ILGenerator_t1590_StaticFields{
	// System.Type System.Reflection.Emit.ILGenerator::void_type
	Type_t * ___void_type_0;
};
