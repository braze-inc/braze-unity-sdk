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
struct ResultDTO_t2261364959;
// System.Collections.Generic.List`1<UnityTest.TestResult>
struct List_1_t2257740005;
// UnityTest.TestResult
struct TestResult_t1460781036;
// ITestResult
struct ITestResult_t1350342776;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_UnityTest_ResultDTO_MessageType794775489.h"
#include "AssemblyU2DCSharp_UnityTest_TestResult1460781036.h"

// System.Void UnityTest.ResultDTO::.ctor(UnityTest.ResultDTO/MessageType)
extern "C"  void ResultDTO__ctor_m4073656213 (ResultDTO_t2261364959 * __this, uint8_t ___messageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityTest.ResultDTO UnityTest.ResultDTO::CreatePing()
extern "C"  ResultDTO_t2261364959 * ResultDTO_CreatePing_m3775781066 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityTest.ResultDTO UnityTest.ResultDTO::CreateRunStarted()
extern "C"  ResultDTO_t2261364959 * ResultDTO_CreateRunStarted_m3389678734 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityTest.ResultDTO UnityTest.ResultDTO::CreateRunFinished(System.Collections.Generic.List`1<UnityTest.TestResult>)
extern "C"  ResultDTO_t2261364959 * ResultDTO_CreateRunFinished_m3951803233 (Il2CppObject * __this /* static, unused */, List_1_t2257740005 * ___testResults, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityTest.ResultDTO UnityTest.ResultDTO::CreateTestStarted(UnityTest.TestResult)
extern "C"  ResultDTO_t2261364959 * ResultDTO_CreateTestStarted_m423107235 (Il2CppObject * __this /* static, unused */, TestResult_t1460781036 * ___test, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityTest.ResultDTO UnityTest.ResultDTO::CreateTestFinished(UnityTest.TestResult)
extern "C"  ResultDTO_t2261364959 * ResultDTO_CreateTestFinished_m1091722246 (Il2CppObject * __this /* static, unused */, TestResult_t1460781036 * ___test, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityTest.ResultDTO UnityTest.ResultDTO::CreateAllScenesFinished()
extern "C"  ResultDTO_t2261364959 * ResultDTO_CreateAllScenesFinished_m542866436 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ITestResult UnityTest.ResultDTO::GetSerializableTestResult(UnityTest.TestResult)
extern "C"  Il2CppObject * ResultDTO_GetSerializableTestResult_m2552207351 (Il2CppObject * __this /* static, unused */, TestResult_t1460781036 * ___test, const MethodInfo* method) IL2CPP_METHOD_ATTR;
