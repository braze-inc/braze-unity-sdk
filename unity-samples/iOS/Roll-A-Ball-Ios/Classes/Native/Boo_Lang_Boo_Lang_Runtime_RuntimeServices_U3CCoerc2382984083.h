#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Boo.Lang.Runtime.RuntimeServices/<Coerce>c__AnonStorey1D
struct  U3CCoerceU3Ec__AnonStorey1D_t2382984083  : public Il2CppObject
{
public:
	// System.Object Boo.Lang.Runtime.RuntimeServices/<Coerce>c__AnonStorey1D::value
	Il2CppObject * ___value_0;
	// System.Type Boo.Lang.Runtime.RuntimeServices/<Coerce>c__AnonStorey1D::toType
	Type_t * ___toType_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(U3CCoerceU3Ec__AnonStorey1D_t2382984083, ___value_0)); }
	inline Il2CppObject * get_value_0() const { return ___value_0; }
	inline Il2CppObject ** get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Il2CppObject * value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier(&___value_0, value);
	}

	inline static int32_t get_offset_of_toType_1() { return static_cast<int32_t>(offsetof(U3CCoerceU3Ec__AnonStorey1D_t2382984083, ___toType_1)); }
	inline Type_t * get_toType_1() const { return ___toType_1; }
	inline Type_t ** get_address_of_toType_1() { return &___toType_1; }
	inline void set_toType_1(Type_t * value)
	{
		___toType_1 = value;
		Il2CppCodeGenWriteBarrier(&___toType_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
