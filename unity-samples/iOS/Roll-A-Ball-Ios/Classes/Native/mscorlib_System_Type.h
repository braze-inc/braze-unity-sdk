#pragma once
#include <stdint.h>
// System.Type[]
struct TypeU5BU5D_t160;
// System.Reflection.MemberFilter
struct MemberFilter_t1762;
// System.Object
struct Object_t;
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfo.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Type
struct Type_t  : public MemberInfo_t131
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t1763  ____impl_1;
};
struct Type_t_StaticFields{
	// System.Reflection.BindingFlags System.Type::DefaultBindingFlags
	int32_t ___DefaultBindingFlags_0;
	// System.Char System.Type::Delimiter
	uint16_t ___Delimiter_2;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t160* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t1762 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t1762 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t1762 * ___FilterNameIgnoreCase_6;
	// System.Object System.Type::Missing
	Object_t * ___Missing_7;
};
