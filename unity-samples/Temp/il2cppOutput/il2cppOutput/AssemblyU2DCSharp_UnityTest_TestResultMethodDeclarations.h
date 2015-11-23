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

// UnityTest.TestResult
struct TestResult_t226;
// UnityTest.TestComponent
struct TestComponent_t220;
// UnityEngine.GameObject
struct GameObject_t141;
// System.String
struct String_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_UnityTest_TestResultState.h"

// System.Void UnityTest.TestResult::.ctor(UnityTest.TestComponent)
extern "C" void TestResult__ctor_m926 (TestResult_t226 * __this, TestComponent_t220 * ___testComponent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityTest.TestResult::get_GameObject()
extern "C" GameObject_t141 * TestResult_get_GameObject_m927 (TestResult_t226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestResult::Update(UnityTest.TestResult)
extern "C" void TestResult_Update_m928 (TestResult_t226 * __this, TestResult_t226 * ___oldResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestResult::Reset()
extern "C" void TestResult_Reset_m929 (TestResult_t226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityTest.TestResultState UnityTest.TestResult::get_ResultState()
extern "C" uint8_t TestResult_get_ResultState_m930 (TestResult_t226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityTest.TestResult::get_Message()
extern "C" String_t* TestResult_get_Message_m931 (TestResult_t226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityTest.TestResult::get_Logs()
extern "C" String_t* TestResult_get_Logs_m932 (TestResult_t226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestResult::get_Executed()
extern "C" bool TestResult_get_Executed_m933 (TestResult_t226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityTest.TestResult::get_Name()
extern "C" String_t* TestResult_get_Name_m934 (TestResult_t226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityTest.TestResult::get_Id()
extern "C" String_t* TestResult_get_Id_m935 (TestResult_t226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestResult::get_IsSuccess()
extern "C" bool TestResult_get_IsSuccess_m936 (TestResult_t226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestResult::get_IsTimeout()
extern "C" bool TestResult_get_IsTimeout_m937 (TestResult_t226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double UnityTest.TestResult::get_Duration()
extern "C" double TestResult_get_Duration_m938 (TestResult_t226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityTest.TestResult::get_StackTrace()
extern "C" String_t* TestResult_get_StackTrace_m939 (TestResult_t226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityTest.TestResult::get_FullName()
extern "C" String_t* TestResult_get_FullName_m940 (TestResult_t226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestResult::get_IsIgnored()
extern "C" bool TestResult_get_IsIgnored_m941 (TestResult_t226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestResult::get_IsFailure()
extern "C" bool TestResult_get_IsFailure_m942 (TestResult_t226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityTest.TestResult::GetHashCode()
extern "C" int32_t TestResult_GetHashCode_m943 (TestResult_t226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityTest.TestResult::CompareTo(UnityTest.TestResult)
extern "C" int32_t TestResult_CompareTo_m944 (TestResult_t226 * __this, TestResult_t226 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestResult::Equals(System.Object)
extern "C" bool TestResult_Equals_m945 (TestResult_t226 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
