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

#include "mscorlib_System_Attribute498693649.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IntegrationTest/DynamicTestAttribute
struct  DynamicTestAttribute_t1522674763  : public Attribute_t498693649
{
public:
	// System.String IntegrationTest/DynamicTestAttribute::m_SceneName
	String_t* ___m_SceneName_0;

public:
	inline static int32_t get_offset_of_m_SceneName_0() { return static_cast<int32_t>(offsetof(DynamicTestAttribute_t1522674763, ___m_SceneName_0)); }
	inline String_t* get_m_SceneName_0() const { return ___m_SceneName_0; }
	inline String_t** get_address_of_m_SceneName_0() { return &___m_SceneName_0; }
	inline void set_m_SceneName_0(String_t* value)
	{
		___m_SceneName_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_SceneName_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
