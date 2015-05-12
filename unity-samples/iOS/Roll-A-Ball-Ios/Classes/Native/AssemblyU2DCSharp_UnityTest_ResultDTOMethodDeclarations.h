#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityTest.ResultDTO
struct ResultDTO_t222;
// System.Collections.Generic.List`1<UnityTest.TestResult>
struct List_1_t244;
// UnityTest.TestResult
struct TestResult_t245;
// ITestResult
struct ITestResult_t247;
// UnityTest.ResultDTO/MessageType
#include "AssemblyU2DCSharp_UnityTest_ResultDTO_MessageType.h"

// System.Void UnityTest.ResultDTO::.ctor(UnityTest.ResultDTO/MessageType)
 void ResultDTO__ctor_m970 (ResultDTO_t222 * __this, uint8_t ___messageType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityTest.ResultDTO UnityTest.ResultDTO::CreatePing()
 ResultDTO_t222 * ResultDTO_CreatePing_m971 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityTest.ResultDTO UnityTest.ResultDTO::CreateRunStarted()
 ResultDTO_t222 * ResultDTO_CreateRunStarted_m972 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityTest.ResultDTO UnityTest.ResultDTO::CreateRunFinished(System.Collections.Generic.List`1<UnityTest.TestResult>)
 ResultDTO_t222 * ResultDTO_CreateRunFinished_m973 (Object_t * __this/* static, unused */, List_1_t244 * ___testResults, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityTest.ResultDTO UnityTest.ResultDTO::CreateTestStarted(UnityTest.TestResult)
 ResultDTO_t222 * ResultDTO_CreateTestStarted_m974 (Object_t * __this/* static, unused */, TestResult_t245 * ___test, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityTest.ResultDTO UnityTest.ResultDTO::CreateTestFinished(UnityTest.TestResult)
 ResultDTO_t222 * ResultDTO_CreateTestFinished_m975 (Object_t * __this/* static, unused */, TestResult_t245 * ___test, MethodInfo* method) IL2CPP_METHOD_ATTR;
// ITestResult UnityTest.ResultDTO::GetSerializableTestResult(UnityTest.TestResult)
 Object_t * ResultDTO_GetSerializableTestResult_m976 (Object_t * __this/* static, unused */, TestResult_t245 * ___test, MethodInfo* method) IL2CPP_METHOD_ATTR;
