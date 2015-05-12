#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// UnityTest.TestResultState
#include "AssemblyU2DCSharp_UnityTest_TestResultState.h"
// UnityTest.SerializableTestResult
struct SerializableTestResult_t248  : public Object_t
{
	// UnityTest.TestResultState UnityTest.SerializableTestResult::resultState
	uint8_t ___resultState_0;
	// System.String UnityTest.SerializableTestResult::message
	String_t* ___message_1;
	// System.Boolean UnityTest.SerializableTestResult::executed
	bool ___executed_2;
	// System.String UnityTest.SerializableTestResult::name
	String_t* ___name_3;
	// System.String UnityTest.SerializableTestResult::fullName
	String_t* ___fullName_4;
	// System.String UnityTest.SerializableTestResult::id
	String_t* ___id_5;
	// System.Boolean UnityTest.SerializableTestResult::isSuccess
	bool ___isSuccess_6;
	// System.Double UnityTest.SerializableTestResult::duration
	double ___duration_7;
	// System.String UnityTest.SerializableTestResult::stackTrace
	String_t* ___stackTrace_8;
	// System.Boolean UnityTest.SerializableTestResult::isIgnored
	bool ___isIgnored_9;
};
