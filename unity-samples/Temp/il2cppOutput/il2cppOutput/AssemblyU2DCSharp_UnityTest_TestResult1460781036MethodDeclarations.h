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
struct TestResult_t1460781036;
// UnityTest.TestComponent
struct TestComponent_t2145733864;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_UnityTest_TestComponent2145733864.h"
#include "AssemblyU2DCSharp_UnityTest_TestResult1460781036.h"
#include "AssemblyU2DCSharp_UnityTest_TestResultState4167279327.h"
#include "mscorlib_System_Object837106420.h"

// System.Void UnityTest.TestResult::.ctor(UnityTest.TestComponent)
extern "C"  void TestResult__ctor_m1844084713 (TestResult_t1460781036 * __this, TestComponent_t2145733864 * ___testComponent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityTest.TestResult::get_GameObject()
extern "C"  GameObject_t4012695102 * TestResult_get_GameObject_m953269454 (TestResult_t1460781036 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestResult::Update(UnityTest.TestResult)
extern "C"  void TestResult_Update_m2569527698 (TestResult_t1460781036 * __this, TestResult_t1460781036 * ___oldResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestResult::Reset()
extern "C"  void TestResult_Reset_m3552967634 (TestResult_t1460781036 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityTest.TestResultState UnityTest.TestResult::get_ResultState()
extern "C"  uint8_t TestResult_get_ResultState_m3513661782 (TestResult_t1460781036 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityTest.TestResult::get_Message()
extern "C"  String_t* TestResult_get_Message_m3776387166 (TestResult_t1460781036 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityTest.TestResult::get_Logs()
extern "C"  String_t* TestResult_get_Logs_m3519457690 (TestResult_t1460781036 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestResult::get_Executed()
extern "C"  bool TestResult_get_Executed_m2610593419 (TestResult_t1460781036 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityTest.TestResult::get_Name()
extern "C"  String_t* TestResult_get_Name_m3563951990 (TestResult_t1460781036 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityTest.TestResult::get_Id()
extern "C"  String_t* TestResult_get_Id_m942106758 (TestResult_t1460781036 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestResult::get_IsSuccess()
extern "C"  bool TestResult_get_IsSuccess_m1907597279 (TestResult_t1460781036 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestResult::get_IsTimeout()
extern "C"  bool TestResult_get_IsTimeout_m1012911549 (TestResult_t1460781036 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double UnityTest.TestResult::get_Duration()
extern "C"  double TestResult_get_Duration_m1267901311 (TestResult_t1460781036 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityTest.TestResult::get_StackTrace()
extern "C"  String_t* TestResult_get_StackTrace_m2950663304 (TestResult_t1460781036 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityTest.TestResult::get_FullName()
extern "C"  String_t* TestResult_get_FullName_m1843452389 (TestResult_t1460781036 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestResult::get_IsIgnored()
extern "C"  bool TestResult_get_IsIgnored_m1405494510 (TestResult_t1460781036 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestResult::get_IsFailure()
extern "C"  bool TestResult_get_IsFailure_m440683430 (TestResult_t1460781036 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityTest.TestResult::GetHashCode()
extern "C"  int32_t TestResult_GetHashCode_m3945199942 (TestResult_t1460781036 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityTest.TestResult::CompareTo(UnityTest.TestResult)
extern "C"  int32_t TestResult_CompareTo_m2528498111 (TestResult_t1460781036 * __this, TestResult_t1460781036 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestResult::Equals(System.Object)
extern "C"  bool TestResult_Equals_m2107887394 (TestResult_t1460781036 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
