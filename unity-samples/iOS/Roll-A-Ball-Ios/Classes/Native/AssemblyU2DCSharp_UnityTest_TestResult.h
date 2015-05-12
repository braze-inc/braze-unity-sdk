#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t154;
// System.String
struct String_t;
// UnityTest.TestComponent
struct TestComponent_t260;
// System.Object
#include "mscorlib_System_Object.h"
// UnityTest.TestResult/ResultType
#include "AssemblyU2DCSharp_UnityTest_TestResult_ResultType.h"
// UnityTest.TestResult
struct TestResult_t245  : public Object_t
{
	// UnityEngine.GameObject UnityTest.TestResult::m_Go
	GameObject_t154 * ___m_Go_0;
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
	TestComponent_t260 * ___TestComponent_8;
};
