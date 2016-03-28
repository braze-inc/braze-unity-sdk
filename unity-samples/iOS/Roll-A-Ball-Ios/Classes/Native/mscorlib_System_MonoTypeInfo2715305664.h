#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t3542137334;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoTypeInfo
struct  MonoTypeInfo_t2715305664  : public Il2CppObject
{
public:
	// System.String System.MonoTypeInfo::full_name
	String_t* ___full_name_0;
	// System.Reflection.ConstructorInfo System.MonoTypeInfo::default_ctor
	ConstructorInfo_t3542137334 * ___default_ctor_1;

public:
	inline static int32_t get_offset_of_full_name_0() { return static_cast<int32_t>(offsetof(MonoTypeInfo_t2715305664, ___full_name_0)); }
	inline String_t* get_full_name_0() const { return ___full_name_0; }
	inline String_t** get_address_of_full_name_0() { return &___full_name_0; }
	inline void set_full_name_0(String_t* value)
	{
		___full_name_0 = value;
		Il2CppCodeGenWriteBarrier(&___full_name_0, value);
	}

	inline static int32_t get_offset_of_default_ctor_1() { return static_cast<int32_t>(offsetof(MonoTypeInfo_t2715305664, ___default_ctor_1)); }
	inline ConstructorInfo_t3542137334 * get_default_ctor_1() const { return ___default_ctor_1; }
	inline ConstructorInfo_t3542137334 ** get_address_of_default_ctor_1() { return &___default_ctor_1; }
	inline void set_default_ctor_1(ConstructorInfo_t3542137334 * value)
	{
		___default_ctor_1 = value;
		Il2CppCodeGenWriteBarrier(&___default_ctor_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
