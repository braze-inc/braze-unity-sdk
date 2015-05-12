#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityTest.TestResult
struct TestResult_t232;
// UnityEngine.GameObject
struct GameObject_t140;
// System.String
struct String_t;
// UnityTest.TestComponent
struct TestComponent_t247;
// System.Object
struct Object_t;
// UnityTest.TestResultState
#include "AssemblyU2DCSharp_UnityTest_TestResultState.h"

// System.Void UnityTest.TestResult::.ctor(UnityTest.TestComponent)
 void TestResult__ctor_m944 (TestResult_t232 * __this, TestComponent_t247 * ___testComponent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityTest.TestResult::get_GameObject()
 GameObject_t140 * TestResult_get_GameObject_m945 (TestResult_t232 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestResult::Update(UnityTest.TestResult)
 void TestResult_Update_m946 (TestResult_t232 * __this, TestResult_t232 * ___oldResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestResult::Reset()
 void TestResult_Reset_m947 (TestResult_t232 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityTest.TestResultState UnityTest.TestResult::get_ResultState()
 uint8_t TestResult_get_ResultState_m948 (TestResult_t232 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityTest.TestResult::get_Message()
 String_t* TestResult_get_Message_m949 (TestResult_t232 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityTest.TestResult::get_Logs()
 String_t* TestResult_get_Logs_m950 (TestResult_t232 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestResult::get_Executed()
 bool TestResult_get_Executed_m951 (TestResult_t232 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityTest.TestResult::get_Name()
 String_t* TestResult_get_Name_m952 (TestResult_t232 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityTest.TestResult::get_Id()
 String_t* TestResult_get_Id_m953 (TestResult_t232 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestResult::get_IsSuccess()
 bool TestResult_get_IsSuccess_m954 (TestResult_t232 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestResult::get_IsTimeout()
 bool TestResult_get_IsTimeout_m955 (TestResult_t232 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double UnityTest.TestResult::get_Duration()
 double TestResult_get_Duration_m956 (TestResult_t232 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityTest.TestResult::get_StackTrace()
 String_t* TestResult_get_StackTrace_m957 (TestResult_t232 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityTest.TestResult::get_FullName()
 String_t* TestResult_get_FullName_m958 (TestResult_t232 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestResult::get_IsIgnored()
 bool TestResult_get_IsIgnored_m959 (TestResult_t232 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestResult::get_IsFailure()
 bool TestResult_get_IsFailure_m960 (TestResult_t232 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityTest.TestResult::GetHashCode()
 int32_t TestResult_GetHashCode_m961 (TestResult_t232 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityTest.TestResult::CompareTo(UnityTest.TestResult)
 int32_t TestResult_CompareTo_m962 (TestResult_t232 * __this, TestResult_t232 * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestResult::Equals(System.Object)
 bool TestResult_Equals_m963 (TestResult_t232 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
