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

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityTest.TestComponent/<GetTypeByName>c__AnonStorey3
struct  U3CGetTypeByNameU3Ec__AnonStorey3_t1184648212  : public Il2CppObject
{
public:
	// System.String UnityTest.TestComponent/<GetTypeByName>c__AnonStorey3::className
	String_t* ___className_0;

public:
	inline static int32_t get_offset_of_className_0() { return static_cast<int32_t>(offsetof(U3CGetTypeByNameU3Ec__AnonStorey3_t1184648212, ___className_0)); }
	inline String_t* get_className_0() const { return ___className_0; }
	inline String_t** get_address_of_className_0() { return &___className_0; }
	inline void set_className_0(String_t* value)
	{
		___className_0 = value;
		Il2CppCodeGenWriteBarrier(&___className_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
