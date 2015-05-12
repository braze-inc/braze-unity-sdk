#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityTest.ResultDTO
struct ResultDTO_t209;
// System.Collections.Generic.List`1<UnityTest.TestResult>
struct List_1_t231;
// UnityTest.TestResult
struct TestResult_t232;
// ITestResult
struct ITestResult_t234;
// UnityTest.ResultDTO/MessageType
#include "AssemblyU2DCSharp_UnityTest_ResultDTO_MessageType.h"

// System.Void UnityTest.ResultDTO::.ctor(UnityTest.ResultDTO/MessageType)
 void ResultDTO__ctor_m864 (ResultDTO_t209 * __this, uint8_t ___messageType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityTest.ResultDTO UnityTest.ResultDTO::CreatePing()
 ResultDTO_t209 * ResultDTO_CreatePing_m865 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityTest.ResultDTO UnityTest.ResultDTO::CreateRunStarted()
 ResultDTO_t209 * ResultDTO_CreateRunStarted_m866 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityTest.ResultDTO UnityTest.ResultDTO::CreateRunFinished(System.Collections.Generic.List`1<UnityTest.TestResult>)
 ResultDTO_t209 * ResultDTO_CreateRunFinished_m867 (Object_t * __this/* static, unused */, List_1_t231 * ___testResults, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityTest.ResultDTO UnityTest.ResultDTO::CreateTestStarted(UnityTest.TestResult)
 ResultDTO_t209 * ResultDTO_CreateTestStarted_m868 (Object_t * __this/* static, unused */, TestResult_t232 * ___test, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityTest.ResultDTO UnityTest.ResultDTO::CreateTestFinished(UnityTest.TestResult)
 ResultDTO_t209 * ResultDTO_CreateTestFinished_m869 (Object_t * __this/* static, unused */, TestResult_t232 * ___test, MethodInfo* method) IL2CPP_METHOD_ATTR;
// ITestResult UnityTest.ResultDTO::GetSerializableTestResult(UnityTest.TestResult)
 Object_t * ResultDTO_GetSerializableTestResult_m870 (Object_t * __this/* static, unused */, TestResult_t232 * ___test, MethodInfo* method) IL2CPP_METHOD_ATTR;
