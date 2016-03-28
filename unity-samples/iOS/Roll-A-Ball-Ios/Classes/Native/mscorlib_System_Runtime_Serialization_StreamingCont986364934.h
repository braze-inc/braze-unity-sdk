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

#include "mscorlib_System_ValueType4014882752.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2964666472.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContext
struct  StreamingContext_t986364934 
{
public:
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::state
	int32_t ___state_0;
	// System.Object System.Runtime.Serialization.StreamingContext::additional
	Il2CppObject * ___additional_1;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(StreamingContext_t986364934, ___state_0)); }
	inline int32_t get_state_0() const { return ___state_0; }
	inline int32_t* get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(int32_t value)
	{
		___state_0 = value;
	}

	inline static int32_t get_offset_of_additional_1() { return static_cast<int32_t>(offsetof(StreamingContext_t986364934, ___additional_1)); }
	inline Il2CppObject * get_additional_1() const { return ___additional_1; }
	inline Il2CppObject ** get_address_of_additional_1() { return &___additional_1; }
	inline void set_additional_1(Il2CppObject * value)
	{
		___additional_1 = value;
		Il2CppCodeGenWriteBarrier(&___additional_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: System.Runtime.Serialization.StreamingContext
struct StreamingContext_t986364934_marshaled_com
{
	int32_t ___state_0;
	Il2CppIUnknown* ___additional_1;
};
