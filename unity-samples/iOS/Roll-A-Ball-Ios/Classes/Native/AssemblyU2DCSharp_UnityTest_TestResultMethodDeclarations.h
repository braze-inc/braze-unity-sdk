#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityTest.TestResult
struct TestResult_t245;
// UnityEngine.GameObject
struct GameObject_t154;
// System.String
struct String_t;
// UnityTest.TestComponent
struct TestComponent_t260;
// System.Object
struct Object_t;
// UnityTest.TestResultState
#include "AssemblyU2DCSharp_UnityTest_TestResultState.h"

// System.Void UnityTest.TestResult::.ctor(UnityTest.TestComponent)
 void TestResult__ctor_m1050 (TestResult_t245 * __this, TestComponent_t260 * ___testComponent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityTest.TestResult::get_GameObject()
 GameObject_t154 * TestResult_get_GameObject_m1051 (TestResult_t245 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestResult::Update(UnityTest.TestResult)
 void TestResult_Update_m1052 (TestResult_t245 * __this, TestResult_t245 * ___oldResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestResult::Reset()
 void TestResult_Reset_m1053 (TestResult_t245 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityTest.TestResultState UnityTest.TestResult::get_ResultState()
 uint8_t TestResult_get_ResultState_m1054 (TestResult_t245 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityTest.TestResult::get_Message()
 String_t* TestResult_get_Message_m1055 (TestResult_t245 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityTest.TestResult::get_Logs()
 String_t* TestResult_get_Logs_m1056 (TestResult_t245 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestResult::get_Executed()
 bool TestResult_get_Executed_m1057 (TestResult_t245 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityTest.TestResult::get_Name()
 String_t* TestResult_get_Name_m1058 (TestResult_t245 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityTest.TestResult::get_Id()
 String_t* TestResult_get_Id_m1059 (TestResult_t245 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestResult::get_IsSuccess()
 bool TestResult_get_IsSuccess_m1060 (TestResult_t245 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestResult::get_IsTimeout()
 bool TestResult_get_IsTimeout_m1061 (TestResult_t245 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double UnityTest.TestResult::get_Duration()
 double TestResult_get_Duration_m1062 (TestResult_t245 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityTest.TestResult::get_StackTrace()
 String_t* TestResult_get_StackTrace_m1063 (TestResult_t245 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityTest.TestResult::get_FullName()
 String_t* TestResult_get_FullName_m1064 (TestResult_t245 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestResult::get_IsIgnored()
 bool TestResult_get_IsIgnored_m1065 (TestResult_t245 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestResult::get_IsFailure()
 bool TestResult_get_IsFailure_m1066 (TestResult_t245 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityTest.TestResult::GetHashCode()
 int32_t TestResult_GetHashCode_m1067 (TestResult_t245 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityTest.TestResult::CompareTo(UnityTest.TestResult)
 int32_t TestResult_CompareTo_m1068 (TestResult_t245 * __this, TestResult_t245 * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestResult::Equals(System.Object)
 bool TestResult_Equals_m1069 (TestResult_t245 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
