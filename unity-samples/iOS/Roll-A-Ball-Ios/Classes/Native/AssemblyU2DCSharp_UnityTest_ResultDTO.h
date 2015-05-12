#pragma once
#include <stdint.h>
// System.String
struct String_t;
// ITestResult
struct ITestResult_t247;
// System.Object
#include "mscorlib_System_Object.h"
// UnityTest.ResultDTO/MessageType
#include "AssemblyU2DCSharp_UnityTest_ResultDTO_MessageType.h"
// UnityTest.ResultDTO
struct ResultDTO_t222  : public Object_t
{
	// UnityTest.ResultDTO/MessageType UnityTest.ResultDTO::messageType
	uint8_t ___messageType_0;
	// System.Int32 UnityTest.ResultDTO::levelCount
	int32_t ___levelCount_1;
	// System.Int32 UnityTest.ResultDTO::loadedLevel
	int32_t ___loadedLevel_2;
	// System.String UnityTest.ResultDTO::loadedLevelName
	String_t* ___loadedLevelName_3;
	// System.String UnityTest.ResultDTO::testName
	String_t* ___testName_4;
	// System.Single UnityTest.ResultDTO::testTimeout
	float ___testTimeout_5;
	// ITestResult UnityTest.ResultDTO::testResult
	Object_t * ___testResult_6;
};
