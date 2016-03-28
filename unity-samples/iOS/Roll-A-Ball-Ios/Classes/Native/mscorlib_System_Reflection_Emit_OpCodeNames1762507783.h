#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String[]
struct StringU5BU5D_t2956870243;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.OpCodeNames
struct  OpCodeNames_t1762507783  : public Il2CppObject
{
public:

public:
};

struct OpCodeNames_t1762507783_StaticFields
{
public:
	// System.String[] System.Reflection.Emit.OpCodeNames::names
	StringU5BU5D_t2956870243* ___names_0;

public:
	inline static int32_t get_offset_of_names_0() { return static_cast<int32_t>(offsetof(OpCodeNames_t1762507783_StaticFields, ___names_0)); }
	inline StringU5BU5D_t2956870243* get_names_0() const { return ___names_0; }
	inline StringU5BU5D_t2956870243** get_address_of_names_0() { return &___names_0; }
	inline void set_names_0(StringU5BU5D_t2956870243* value)
	{
		___names_0 = value;
		Il2CppCodeGenWriteBarrier(&___names_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
