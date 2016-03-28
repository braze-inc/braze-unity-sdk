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
struct TestRunner_t1475401471;
// System.Collections.Generic.List`1<UnityTest.TestComponent>
struct List_1_t2942692833;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1765447871;
// System.Collections.Generic.IEnumerable`1<UnityTest.TestComponent>
struct IEnumerable_1_t722920924;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// System.Type
struct Type_t;
// UnityTest.TestResult
struct TestResult_t1460781036;
// UnityTest.TestComponent
struct TestComponent_t2145733864;
// UnityTest.ITestComponent
struct ITestComponent_t3894659903;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_LogType3529269451.h"
#include "AssemblyU2DCSharp_UnityTest_TestResult_ResultType1421627671.h"
#include "mscorlib_System_Type2779229935.h"
#include "AssemblyU2DCSharp_UnityTest_TestComponent2145733864.h"
#include "AssemblyU2DCSharp_UnityTest_TestResult1460781036.h"

// System.Void UnityTest.TestRunner::.ctor()
extern "C"  void TestRunner__ctor_m2762784626 (TestRunner_t1475401471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestRunner::.cctor()
extern "C"  void TestRunner__cctor_m3559848571 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestRunner::get_isInitializedByRunner()
extern "C"  bool TestRunner_get_isInitializedByRunner_m1036187812 (TestRunner_t1475401471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestRunner::Awake()
extern "C"  void TestRunner_Awake_m3000389845 (TestRunner_t1475401471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestRunner::Start()
extern "C"  void TestRunner_Start_m1709922418 (TestRunner_t1475401471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestRunner::InitRunner(System.Collections.Generic.List`1<UnityTest.TestComponent>,System.Collections.Generic.List`1<System.String>)
extern "C"  void TestRunner_InitRunner_m2469826496 (TestRunner_t1475401471 * __this, List_1_t2942692833 * ___tests, List_1_t1765447871 * ___dynamicTestsToRun, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<UnityTest.TestComponent> UnityTest.TestRunner::ParseListForGroups(System.Collections.Generic.IEnumerable`1<UnityTest.TestComponent>)
extern "C"  Il2CppObject* TestRunner_ParseListForGroups_m4012122049 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___tests, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestRunner::Update()
extern "C"  void TestRunner_Update_m1473839579 (TestRunner_t1475401471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestRunner::OnDestroy()
extern "C"  void TestRunner_OnDestroy_m2286783339 (TestRunner_t1475401471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestRunner::LogHandler(System.String,System.String,UnityEngine.LogType)
extern "C"  void TestRunner_LogHandler_m1065549579 (TestRunner_t1475401471 * __this, String_t* ___condition, String_t* ___stacktrace, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityTest.TestRunner::StateMachine()
extern "C"  Il2CppObject * TestRunner_StateMachine_m1541295568 (TestRunner_t1475401471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestRunner::LogMessage(System.String)
extern "C"  void TestRunner_LogMessage_m1496273645 (TestRunner_t1475401471 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestRunner::FinishTestRun()
extern "C"  void TestRunner_FinishTestRun_m1496270998 (TestRunner_t1475401471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestRunner::PrintResultToLog()
extern "C"  void TestRunner_PrintResultToLog_m2968486417 (TestRunner_t1475401471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestRunner::LoadNextLevelOrQuit()
extern "C"  void TestRunner_LoadNextLevelOrQuit_m1869706189 (TestRunner_t1475401471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestRunner::OnGUI()
extern "C"  void TestRunner_OnGUI_m2258183276 (TestRunner_t1475401471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestRunner::StartNewTest()
extern "C"  void TestRunner_StartNewTest_m1551402530 (TestRunner_t1475401471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestRunner::FinishTest(UnityTest.TestResult/ResultType)
extern "C"  void TestRunner_FinishTest_m3960774827 (TestRunner_t1475401471 * __this, int32_t ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityTest.TestRunner UnityTest.TestRunner::GetTestRunner()
extern "C"  TestRunner_t1475401471 * TestRunner_GetTestRunner_m561685844 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityTest.TestRunner::Create()
extern "C"  GameObject_t4012695102 * TestRunner_Create_m1170135363 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestRunner::IsBatchMode()
extern "C"  bool TestRunner_IsBatchMode_m3019299663 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityTest.TestRunner::<Start>m__E(System.Type)
extern "C"  String_t* TestRunner_U3CStartU3Em__E_m205965980 (Il2CppObject * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityTest.TestResult UnityTest.TestRunner::<InitRunner>m__F(UnityTest.TestComponent)
extern "C"  TestResult_t1460781036 * TestRunner_U3CInitRunnerU3Em__F_m2534900826 (Il2CppObject * __this /* static, unused */, TestComponent_t2145733864 * ___component, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityTest.ITestComponent UnityTest.TestRunner::<InitRunner>m__10(UnityTest.TestResult)
extern "C"  Il2CppObject * TestRunner_U3CInitRunnerU3Em__10_m4110202768 (Il2CppObject * __this /* static, unused */, TestResult_t1460781036 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestRunner::<OnDestroy>m__12(UnityTest.TestResult)
extern "C"  bool TestRunner_U3COnDestroyU3Em__12_m3835212511 (TestRunner_t1475401471 * __this, TestResult_t1460781036 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestRunner::<PrintResultToLog>m__13(UnityTest.TestResult)
extern "C"  bool TestRunner_U3CPrintResultToLogU3Em__13_m3453339666 (Il2CppObject * __this /* static, unused */, TestResult_t1460781036 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestRunner::<PrintResultToLog>m__14(UnityTest.TestResult)
extern "C"  bool TestRunner_U3CPrintResultToLogU3Em__14_m403136851 (Il2CppObject * __this /* static, unused */, TestResult_t1460781036 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestRunner::<PrintResultToLog>m__15(UnityTest.TestResult)
extern "C"  bool TestRunner_U3CPrintResultToLogU3Em__15_m1647901332 (Il2CppObject * __this /* static, unused */, TestResult_t1460781036 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestRunner::<PrintResultToLog>m__16(UnityTest.TestResult)
extern "C"  bool TestRunner_U3CPrintResultToLogU3Em__16_m2892665813 (Il2CppObject * __this /* static, unused */, TestResult_t1460781036 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityTest.TestRunner::<PrintResultToLog>m__17(UnityTest.TestResult)
extern "C"  String_t* TestRunner_U3CPrintResultToLogU3Em__17_m476639047 (Il2CppObject * __this /* static, unused */, TestResult_t1460781036 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestRunner::<PrintResultToLog>m__18(UnityTest.TestResult)
extern "C"  bool TestRunner_U3CPrintResultToLogU3Em__18_m1087227479 (Il2CppObject * __this /* static, unused */, TestResult_t1460781036 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestRunner::<PrintResultToLog>m__19(UnityTest.TestResult)
extern "C"  bool TestRunner_U3CPrintResultToLogU3Em__19_m2331991960 (Il2CppObject * __this /* static, unused */, TestResult_t1460781036 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestRunner::<PrintResultToLog>m__1A(UnityTest.TestResult)
extern "C"  bool TestRunner_U3CPrintResultToLogU3Em__1A_m3700173216 (Il2CppObject * __this /* static, unused */, TestResult_t1460781036 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityTest.TestRunner::<PrintResultToLog>m__1B(UnityTest.TestResult)
extern "C"  String_t* TestRunner_U3CPrintResultToLogU3Em__1B_m1284146450 (Il2CppObject * __this /* static, unused */, TestResult_t1460781036 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestRunner::<StartNewTest>m__1C(UnityTest.TestResult)
extern "C"  bool TestRunner_U3CStartNewTestU3Em__1C_m71258099 (TestRunner_t1475401471 * __this, TestResult_t1460781036 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestRunner::<FinishTest>m__1D(UnityTest.TestResult)
extern "C"  bool TestRunner_U3CFinishTestU3Em__1D_m1133035945 (TestRunner_t1475401471 * __this, TestResult_t1460781036 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
