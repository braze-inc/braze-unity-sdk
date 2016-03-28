#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityTest.IntegrationTestRunner.ITestRunnerCallback>
struct List_1_t2154820286;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityTest.IntegrationTestRunner.TestRunnerCallbackList
struct  TestRunnerCallbackList_t3685272314  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<UnityTest.IntegrationTestRunner.ITestRunnerCallback> UnityTest.IntegrationTestRunner.TestRunnerCallbackList::m_CallbackList
	List_1_t2154820286 * ___m_CallbackList_0;

public:
	inline static int32_t get_offset_of_m_CallbackList_0() { return static_cast<int32_t>(offsetof(TestRunnerCallbackList_t3685272314, ___m_CallbackList_0)); }
	inline List_1_t2154820286 * get_m_CallbackList_0() const { return ___m_CallbackList_0; }
	inline List_1_t2154820286 ** get_address_of_m_CallbackList_0() { return &___m_CallbackList_0; }
	inline void set_m_CallbackList_0(List_1_t2154820286 * value)
	{
		___m_CallbackList_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_CallbackList_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
