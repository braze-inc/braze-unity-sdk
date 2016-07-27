#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;
// System.String
struct String_t;
// UnityTest.TestComponent
struct TestComponent_t2145733864;

#include "mscorlib_System_Object837106420.h"
#include "AssemblyU2DCSharp_UnityTest_TestResult_ResultType1421627671.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityTest.TestResult
struct  TestResult_t1460781036  : public Il2CppObject
{
public:
	// UnityEngine.GameObject UnityTest.TestResult::m_Go
	GameObject_t4012695102 * ___m_Go_0;
	// System.String UnityTest.TestResult::m_Name
	String_t* ___m_Name_1;
	// UnityTest.TestResult/ResultType UnityTest.TestResult::resultType
	int32_t ___resultType_2;
	// System.Double UnityTest.TestResult::duration
	double ___duration_3;
	// System.String UnityTest.TestResult::messages
	String_t* ___messages_4;
	// System.String UnityTest.TestResult::stacktrace
	String_t* ___stacktrace_5;
	// System.String UnityTest.TestResult::id
	String_t* ___id_6;
	// System.Boolean UnityTest.TestResult::dynamicTest
	bool ___dynamicTest_7;
	// UnityTest.TestComponent UnityTest.TestResult::TestComponent
	TestComponent_t2145733864 * ___TestComponent_8;

public:
	inline static int32_t get_offset_of_m_Go_0() { return static_cast<int32_t>(offsetof(TestResult_t1460781036, ___m_Go_0)); }
	inline GameObject_t4012695102 * get_m_Go_0() const { return ___m_Go_0; }
	inline GameObject_t4012695102 ** get_address_of_m_Go_0() { return &___m_Go_0; }
	inline void set_m_Go_0(GameObject_t4012695102 * value)
	{
		___m_Go_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_Go_0, value);
	}

	inline static int32_t get_offset_of_m_Name_1() { return static_cast<int32_t>(offsetof(TestResult_t1460781036, ___m_Name_1)); }
	inline String_t* get_m_Name_1() const { return ___m_Name_1; }
	inline String_t** get_address_of_m_Name_1() { return &___m_Name_1; }
	inline void set_m_Name_1(String_t* value)
	{
		___m_Name_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_Name_1, value);
	}

	inline static int32_t get_offset_of_resultType_2() { return static_cast<int32_t>(offsetof(TestResult_t1460781036, ___resultType_2)); }
	inline int32_t get_resultType_2() const { return ___resultType_2; }
	inline int32_t* get_address_of_resultType_2() { return &___resultType_2; }
	inline void set_resultType_2(int32_t value)
	{
		___resultType_2 = value;
	}

	inline static int32_t get_offset_of_duration_3() { return static_cast<int32_t>(offsetof(TestResult_t1460781036, ___duration_3)); }
	inline double get_duration_3() const { return ___duration_3; }
	inline double* get_address_of_duration_3() { return &___duration_3; }
	inline void set_duration_3(double value)
	{
		___duration_3 = value;
	}

	inline static int32_t get_offset_of_messages_4() { return static_cast<int32_t>(offsetof(TestResult_t1460781036, ___messages_4)); }
	inline String_t* get_messages_4() const { return ___messages_4; }
	inline String_t** get_address_of_messages_4() { return &___messages_4; }
	inline void set_messages_4(String_t* value)
	{
		___messages_4 = value;
		Il2CppCodeGenWriteBarrier(&___messages_4, value);
	}

	inline static int32_t get_offset_of_stacktrace_5() { return static_cast<int32_t>(offsetof(TestResult_t1460781036, ___stacktrace_5)); }
	inline String_t* get_stacktrace_5() const { return ___stacktrace_5; }
	inline String_t** get_address_of_stacktrace_5() { return &___stacktrace_5; }
	inline void set_stacktrace_5(String_t* value)
	{
		___stacktrace_5 = value;
		Il2CppCodeGenWriteBarrier(&___stacktrace_5, value);
	}

	inline static int32_t get_offset_of_id_6() { return static_cast<int32_t>(offsetof(TestResult_t1460781036, ___id_6)); }
	inline String_t* get_id_6() const { return ___id_6; }
	inline String_t** get_address_of_id_6() { return &___id_6; }
	inline void set_id_6(String_t* value)
	{
		___id_6 = value;
		Il2CppCodeGenWriteBarrier(&___id_6, value);
	}

	inline static int32_t get_offset_of_dynamicTest_7() { return static_cast<int32_t>(offsetof(TestResult_t1460781036, ___dynamicTest_7)); }
	inline bool get_dynamicTest_7() const { return ___dynamicTest_7; }
	inline bool* get_address_of_dynamicTest_7() { return &___dynamicTest_7; }
	inline void set_dynamicTest_7(bool value)
	{
		___dynamicTest_7 = value;
	}

	inline static int32_t get_offset_of_TestComponent_8() { return static_cast<int32_t>(offsetof(TestResult_t1460781036, ___TestComponent_8)); }
	inline TestComponent_t2145733864 * get_TestComponent_8() const { return ___TestComponent_8; }
	inline TestComponent_t2145733864 ** get_address_of_TestComponent_8() { return &___TestComponent_8; }
	inline void set_TestComponent_8(TestComponent_t2145733864 * value)
	{
		___TestComponent_8 = value;
		Il2CppCodeGenWriteBarrier(&___TestComponent_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
