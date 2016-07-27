#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Type[]
struct TypeU5BU5D_t3431720054;
// System.Reflection.MemberFilter
struct MemberFilter_t1585748256;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Reflection_MemberInfo2843033814.h"
#include "mscorlib_System_Reflection_BindingFlags2090192240.h"
#include "mscorlib_System_RuntimeTypeHandle1864875887.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t1864875887  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t1864875887  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t1864875887 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t1864875887  value)
	{
		____impl_1 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Char System.Type::Delimiter
	uint16_t ___Delimiter_2;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t3431720054* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t1585748256 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t1585748256 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t1585748256 * ___FilterNameIgnoreCase_6;
	// System.Object System.Type::Missing
	Il2CppObject * ___Missing_7;

public:
	inline static int32_t get_offset_of_Delimiter_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_2)); }
	inline uint16_t get_Delimiter_2() const { return ___Delimiter_2; }
	inline uint16_t* get_address_of_Delimiter_2() { return &___Delimiter_2; }
	inline void set_Delimiter_2(uint16_t value)
	{
		___Delimiter_2 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_3)); }
	inline TypeU5BU5D_t3431720054* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t3431720054** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t3431720054* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier(&___EmptyTypes_3, value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t1585748256 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t1585748256 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t1585748256 * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier(&___FilterAttribute_4, value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t1585748256 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t1585748256 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t1585748256 * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier(&___FilterName_5, value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t1585748256 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t1585748256 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t1585748256 * value)
	{
		___FilterNameIgnoreCase_6 = value;
		Il2CppCodeGenWriteBarrier(&___FilterNameIgnoreCase_6, value);
	}

	inline static int32_t get_offset_of_Missing_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_7)); }
	inline Il2CppObject * get_Missing_7() const { return ___Missing_7; }
	inline Il2CppObject ** get_address_of_Missing_7() { return &___Missing_7; }
	inline void set_Missing_7(Il2CppObject * value)
	{
		___Missing_7 = value;
		Il2CppCodeGenWriteBarrier(&___Missing_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
