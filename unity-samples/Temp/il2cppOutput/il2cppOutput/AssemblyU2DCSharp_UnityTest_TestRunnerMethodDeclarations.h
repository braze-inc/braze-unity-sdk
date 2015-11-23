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

// UnityTest.TestRunner
struct TestRunner_t238;
// System.Collections.Generic.List`1<UnityTest.TestComponent>
struct List_1_t242;
// System.Collections.Generic.List`1<System.String>
struct List_1_t64;
// System.Collections.Generic.IEnumerable`1<UnityTest.TestComponent>
struct IEnumerable_1_t268;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t66;
// UnityEngine.GameObject
struct GameObject_t141;
// System.Type
struct Type_t;
// UnityTest.TestResult
struct TestResult_t226;
// UnityTest.TestComponent
struct TestComponent_t220;
// UnityTest.ITestComponent
struct ITestComponent_t204;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_LogType.h"
#include "AssemblyU2DCSharp_UnityTest_TestResult_ResultType.h"

// System.Void UnityTest.TestRunner::.ctor()
extern "C" void TestRunner__ctor_m965 (TestRunner_t238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestRunner::.cctor()
extern "C" void TestRunner__cctor_m966 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestRunner::get_isInitializedByRunner()
extern "C" bool TestRunner_get_isInitializedByRunner_m967 (TestRunner_t238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestRunner::Awake()
extern "C" void TestRunner_Awake_m968 (TestRunner_t238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestRunner::Start()
extern "C" void TestRunner_Start_m969 (TestRunner_t238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestRunner::InitRunner(System.Collections.Generic.List`1<UnityTest.TestComponent>,System.Collections.Generic.List`1<System.String>)
extern "C" void TestRunner_InitRunner_m970 (TestRunner_t238 * __this, List_1_t242 * ___tests, List_1_t64 * ___dynamicTestsToRun, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<UnityTest.TestComponent> UnityTest.TestRunner::ParseListForGroups(System.Collections.Generic.IEnumerable`1<UnityTest.TestComponent>)
extern "C" Object_t* TestRunner_ParseListForGroups_m971 (Object_t * __this /* static, unused */, Object_t* ___tests, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestRunner::Update()
extern "C" void TestRunner_Update_m972 (TestRunner_t238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestRunner::OnDestroy()
extern "C" void TestRunner_OnDestroy_m973 (TestRunner_t238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestRunner::LogHandler(System.String,System.String,UnityEngine.LogType)
extern "C" void TestRunner_LogHandler_m974 (TestRunner_t238 * __this, String_t* ___condition, String_t* ___stacktrace, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityTest.TestRunner::StateMachine()
extern "C" Object_t * TestRunner_StateMachine_m975 (TestRunner_t238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestRunner::LogMessage(System.String)
extern "C" void TestRunner_LogMessage_m976 (TestRunner_t238 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestRunner::FinishTestRun()
extern "C" void TestRunner_FinishTestRun_m977 (TestRunner_t238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestRunner::PrintResultToLog()
extern "C" void TestRunner_PrintResultToLog_m978 (TestRunner_t238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestRunner::LoadNextLevelOrQuit()
extern "C" void TestRunner_LoadNextLevelOrQuit_m979 (TestRunner_t238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestRunner::OnGUI()
extern "C" void TestRunner_OnGUI_m980 (TestRunner_t238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestRunner::StartNewTest()
extern "C" void TestRunner_StartNewTest_m981 (TestRunner_t238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestRunner::FinishTest(UnityTest.TestResult/ResultType)
extern "C" void TestRunner_FinishTest_m982 (TestRunner_t238 * __this, int32_t ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityTest.TestRunner UnityTest.TestRunner::GetTestRunner()
extern "C" TestRunner_t238 * TestRunner_GetTestRunner_m983 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityTest.TestRunner::Create()
extern "C" GameObject_t141 * TestRunner_Create_m984 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestRunner::IsBatchMode()
extern "C" bool TestRunner_IsBatchMode_m985 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityTest.TestRunner::<Start>m__E(System.Type)
extern "C" String_t* TestRunner_U3CStartU3Em__E_m986 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityTest.TestResult UnityTest.TestRunner::<InitRunner>m__F(UnityTest.TestComponent)
extern "C" TestResult_t226 * TestRunner_U3CInitRunnerU3Em__F_m987 (Object_t * __this /* static, unused */, TestComponent_t220 * ___component, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityTest.ITestComponent UnityTest.TestRunner::<InitRunner>m__10(UnityTest.TestResult)
extern "C" Object_t * TestRunner_U3CInitRunnerU3Em__10_m988 (Object_t * __this /* static, unused */, TestResult_t226 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestRunner::<OnDestroy>m__12(UnityTest.TestResult)
extern "C" bool TestRunner_U3COnDestroyU3Em__12_m989 (TestRunner_t238 * __this, TestResult_t226 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestRunner::<PrintResultToLog>m__13(UnityTest.TestResult)
extern "C" bool TestRunner_U3CPrintResultToLogU3Em__13_m990 (Object_t * __this /* static, unused */, TestResult_t226 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestRunner::<PrintResultToLog>m__14(UnityTest.TestResult)
extern "C" bool TestRunner_U3CPrintResultToLogU3Em__14_m991 (Object_t * __this /* static, unused */, TestResult_t226 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestRunner::<PrintResultToLog>m__15(UnityTest.TestResult)
extern "C" bool TestRunner_U3CPrintResultToLogU3Em__15_m992 (Object_t * __this /* static, unused */, TestResult_t226 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestRunner::<PrintResultToLog>m__16(UnityTest.TestResult)
extern "C" bool TestRunner_U3CPrintResultToLogU3Em__16_m993 (Object_t * __this /* static, unused */, TestResult_t226 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityTest.TestRunner::<PrintResultToLog>m__17(UnityTest.TestResult)
extern "C" String_t* TestRunner_U3CPrintResultToLogU3Em__17_m994 (Object_t * __this /* static, unused */, TestResult_t226 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestRunner::<PrintResultToLog>m__18(UnityTest.TestResult)
extern "C" bool TestRunner_U3CPrintResultToLogU3Em__18_m995 (Object_t * __this /* static, unused */, TestResult_t226 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestRunner::<PrintResultToLog>m__19(UnityTest.TestResult)
extern "C" bool TestRunner_U3CPrintResultToLogU3Em__19_m996 (Object_t * __this /* static, unused */, TestResult_t226 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestRunner::<PrintResultToLog>m__1A(UnityTest.TestResult)
extern "C" bool TestRunner_U3CPrintResultToLogU3Em__1A_m997 (Object_t * __this /* static, unused */, TestResult_t226 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityTest.TestRunner::<PrintResultToLog>m__1B(UnityTest.TestResult)
extern "C" String_t* TestRunner_U3CPrintResultToLogU3Em__1B_m998 (Object_t * __this /* static, unused */, TestResult_t226 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestRunner::<StartNewTest>m__1C(UnityTest.TestResult)
extern "C" bool TestRunner_U3CStartNewTestU3Em__1C_m999 (TestRunner_t238 * __this, TestResult_t226 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestRunner::<FinishTest>m__1D(UnityTest.TestResult)
extern "C" bool TestRunner_U3CFinishTestU3Em__1D_m1000 (TestRunner_t238 * __this, TestResult_t226 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
