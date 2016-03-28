#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityTest.AssertionComponent
struct AssertionComponent_t3824534712;

#include "mscorlib_System_Exception1967233988.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityTest.AssertionException
struct  AssertionException_t2411100170  : public Exception_t1967233988
{
public:
	// UnityTest.AssertionComponent UnityTest.AssertionException::m_Assertion
	AssertionComponent_t3824534712 * ___m_Assertion_11;

public:
	inline static int32_t get_offset_of_m_Assertion_11() { return static_cast<int32_t>(offsetof(AssertionException_t2411100170, ___m_Assertion_11)); }
	inline AssertionComponent_t3824534712 * get_m_Assertion_11() const { return ___m_Assertion_11; }
	inline AssertionComponent_t3824534712 ** get_address_of_m_Assertion_11() { return &___m_Assertion_11; }
	inline void set_m_Assertion_11(AssertionComponent_t3824534712 * value)
	{
		___m_Assertion_11 = value;
		Il2CppCodeGenWriteBarrier(&___m_Assertion_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
