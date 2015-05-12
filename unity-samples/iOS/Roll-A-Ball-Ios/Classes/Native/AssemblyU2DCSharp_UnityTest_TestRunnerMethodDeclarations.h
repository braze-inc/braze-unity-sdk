#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityTest.TestRunner
struct TestRunner_t259;
// System.Collections.Generic.List`1<UnityTest.TestComponent>
struct List_1_t230;
// System.Collections.Generic.List`1<System.String>
struct List_1_t4;
// System.Collections.Generic.IEnumerable`1<UnityTest.TestComponent>
struct IEnumerable_1_t270;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// UnityEngine.GameObject
struct GameObject_t140;
// System.Type
struct Type_t;
// UnityTest.TestResult
struct TestResult_t232;
// UnityTest.TestComponent
struct TestComponent_t247;
// UnityTest.ITestComponent
struct ITestComponent_t224;
// UnityEngine.LogType
#include "UnityEngine_UnityEngine_LogType.h"
// UnityTest.TestResult/ResultType
#include "AssemblyU2DCSharp_UnityTest_TestResult_ResultType.h"

// System.Void UnityTest.TestRunner::.ctor()
 void TestRunner__ctor_m983 (TestRunner_t259 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestRunner::.cctor()
 void TestRunner__cctor_m984 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestRunner::get_isInitializedByRunner()
 bool TestRunner_get_isInitializedByRunner_m985 (TestRunner_t259 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestRunner::Awake()
 void TestRunner_Awake_m986 (TestRunner_t259 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestRunner::Start()
 void TestRunner_Start_m987 (TestRunner_t259 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestRunner::InitRunner(System.Collections.Generic.List`1<UnityTest.TestComponent>,System.Collections.Generic.List`1<System.String>)
 void TestRunner_InitRunner_m988 (TestRunner_t259 * __this, List_1_t230 * ___tests, List_1_t4 * ___dynamicTestsToRun, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<UnityTest.TestComponent> UnityTest.TestRunner::ParseListForGroups(System.Collections.Generic.IEnumerable`1<UnityTest.TestComponent>)
 Object_t* TestRunner_ParseListForGroups_m989 (Object_t * __this/* static, unused */, Object_t* ___tests, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestRunner::Update()
 void TestRunner_Update_m990 (TestRunner_t259 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestRunner::OnDestroy()
 void TestRunner_OnDestroy_m991 (TestRunner_t259 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestRunner::LogHandler(System.String,System.String,UnityEngine.LogType)
 void TestRunner_LogHandler_m992 (TestRunner_t259 * __this, String_t* ___condition, String_t* ___stacktrace, int32_t ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityTest.TestRunner::StateMachine()
 Object_t * TestRunner_StateMachine_m993 (TestRunner_t259 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestRunner::LogMessage(System.String)
 void TestRunner_LogMessage_m994 (TestRunner_t259 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestRunner::FinishTestRun()
 void TestRunner_FinishTestRun_m995 (TestRunner_t259 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestRunner::PrintResultToLog()
 void TestRunner_PrintResultToLog_m996 (TestRunner_t259 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestRunner::LoadNextLevelOrQuit()
 void TestRunner_LoadNextLevelOrQuit_m997 (TestRunner_t259 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestRunner::OnGUI()
 void TestRunner_OnGUI_m998 (TestRunner_t259 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestRunner::StartNewTest()
 void TestRunner_StartNewTest_m999 (TestRunner_t259 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestRunner::FinishTest(UnityTest.TestResult/ResultType)
 void TestRunner_FinishTest_m1000 (TestRunner_t259 * __this, int32_t ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityTest.TestRunner UnityTest.TestRunner::GetTestRunner()
 TestRunner_t259 * TestRunner_GetTestRunner_m1001 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityTest.TestRunner::Create()
 GameObject_t140 * TestRunner_Create_m1002 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestRunner::IsBatchMode()
 bool TestRunner_IsBatchMode_m1003 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityTest.TestRunner::<Start>m__E(System.Type)
 String_t* TestRunner_U3CStartU3Em__E_m1004 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityTest.TestResult UnityTest.TestRunner::<InitRunner>m__F(UnityTest.TestComponent)
 TestResult_t232 * TestRunner_U3CInitRunnerU3Em__F_m1005 (Object_t * __this/* static, unused */, TestComponent_t247 * ___component, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityTest.ITestComponent UnityTest.TestRunner::<InitRunner>m__10(UnityTest.TestResult)
 Object_t * TestRunner_U3CInitRunnerU3Em__10_m1006 (Object_t * __this/* static, unused */, TestResult_t232 * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestRunner::<OnDestroy>m__12(UnityTest.TestResult)
 bool TestRunner_U3COnDestroyU3Em__12_m1007 (TestRunner_t259 * __this, TestResult_t232 * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestRunner::<PrintResultToLog>m__13(UnityTest.TestResult)
 bool TestRunner_U3CPrintResultToLogU3Em__13_m1008 (Object_t * __this/* static, unused */, TestResult_t232 * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestRunner::<PrintResultToLog>m__14(UnityTest.TestResult)
 bool TestRunner_U3CPrintResultToLogU3Em__14_m1009 (Object_t * __this/* static, unused */, TestResult_t232 * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestRunner::<PrintResultToLog>m__15(UnityTest.TestResult)
 bool TestRunner_U3CPrintResultToLogU3Em__15_m1010 (Object_t * __this/* static, unused */, TestResult_t232 * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestRunner::<PrintResultToLog>m__16(UnityTest.TestResult)
 bool TestRunner_U3CPrintResultToLogU3Em__16_m1011 (Object_t * __this/* static, unused */, TestResult_t232 * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityTest.TestRunner::<PrintResultToLog>m__17(UnityTest.TestResult)
 String_t* TestRunner_U3CPrintResultToLogU3Em__17_m1012 (Object_t * __this/* static, unused */, TestResult_t232 * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestRunner::<PrintResultToLog>m__18(UnityTest.TestResult)
 bool TestRunner_U3CPrintResultToLogU3Em__18_m1013 (Object_t * __this/* static, unused */, TestResult_t232 * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestRunner::<PrintResultToLog>m__19(UnityTest.TestResult)
 bool TestRunner_U3CPrintResultToLogU3Em__19_m1014 (Object_t * __this/* static, unused */, TestResult_t232 * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestRunner::<PrintResultToLog>m__1A(UnityTest.TestResult)
 bool TestRunner_U3CPrintResultToLogU3Em__1A_m1015 (Object_t * __this/* static, unused */, TestResult_t232 * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityTest.TestRunner::<PrintResultToLog>m__1B(UnityTest.TestResult)
 String_t* TestRunner_U3CPrintResultToLogU3Em__1B_m1016 (Object_t * __this/* static, unused */, TestResult_t232 * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestRunner::<StartNewTest>m__1C(UnityTest.TestResult)
 bool TestRunner_U3CStartNewTestU3Em__1C_m1017 (TestRunner_t259 * __this, TestResult_t232 * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestRunner::<FinishTest>m__1D(UnityTest.TestResult)
 bool TestRunner_U3CFinishTestU3Em__1D_m1018 (TestRunner_t259 * __this, TestResult_t232 * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
