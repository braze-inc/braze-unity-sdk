#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityTest.ResultDTO
struct ResultDTO_t208;
// System.Collections.Generic.List`1<UnityTest.TestResult>
struct List_1_t241;
// UnityTest.TestResult
struct TestResult_t226;
// ITestResult
struct ITestResult_t209;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_UnityTest_ResultDTO_MessageType.h"

// System.Void UnityTest.ResultDTO::.ctor(UnityTest.ResultDTO/MessageType)
extern "C" void ResultDTO__ctor_m845 (ResultDTO_t208 * __this, uint8_t ___messageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityTest.ResultDTO UnityTest.ResultDTO::CreatePing()
extern "C" ResultDTO_t208 * ResultDTO_CreatePing_m846 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityTest.ResultDTO UnityTest.ResultDTO::CreateRunStarted()
extern "C" ResultDTO_t208 * ResultDTO_CreateRunStarted_m847 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityTest.ResultDTO UnityTest.ResultDTO::CreateRunFinished(System.Collections.Generic.List`1<UnityTest.TestResult>)
extern "C" ResultDTO_t208 * ResultDTO_CreateRunFinished_m848 (Object_t * __this /* static, unused */, List_1_t241 * ___testResults, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityTest.ResultDTO UnityTest.ResultDTO::CreateTestStarted(UnityTest.TestResult)
extern "C" ResultDTO_t208 * ResultDTO_CreateTestStarted_m849 (Object_t * __this /* static, unused */, TestResult_t226 * ___test, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityTest.ResultDTO UnityTest.ResultDTO::CreateTestFinished(UnityTest.TestResult)
extern "C" ResultDTO_t208 * ResultDTO_CreateTestFinished_m850 (Object_t * __this /* static, unused */, TestResult_t226 * ___test, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityTest.ResultDTO UnityTest.ResultDTO::CreateAllScenesFinished()
extern "C" ResultDTO_t208 * ResultDTO_CreateAllScenesFinished_m851 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ITestResult UnityTest.ResultDTO::GetSerializableTestResult(UnityTest.TestResult)
extern "C" Object_t * ResultDTO_GetSerializableTestResult_m852 (Object_t * __this /* static, unused */, TestResult_t226 * ___test, const MethodInfo* method) IL2CPP_METHOD_ATTR;
