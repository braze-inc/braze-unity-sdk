#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.MethodInfo
struct MethodInfo_t;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Boo.Lang.Runtime.RuntimeServices/<EmitImplicitConversionDispatcher>c__AnonStorey1E
struct  U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t2708364206  : public Il2CppObject
{
public:
	// System.Reflection.MethodInfo Boo.Lang.Runtime.RuntimeServices/<EmitImplicitConversionDispatcher>c__AnonStorey1E::method
	MethodInfo_t * ___method_0;

public:
	inline static int32_t get_offset_of_method_0() { return static_cast<int32_t>(offsetof(U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t2708364206, ___method_0)); }
	inline MethodInfo_t * get_method_0() const { return ___method_0; }
	inline MethodInfo_t ** get_address_of_method_0() { return &___method_0; }
	inline void set_method_0(MethodInfo_t * value)
	{
		___method_0 = value;
		Il2CppCodeGenWriteBarrier(&___method_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
