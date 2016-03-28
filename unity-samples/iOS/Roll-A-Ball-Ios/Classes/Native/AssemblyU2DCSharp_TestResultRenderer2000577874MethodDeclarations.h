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

// TestResultRenderer
struct TestResultRenderer_t2000577874;
// System.String
struct String_t;
// ITestResult
struct ITestResult_t1350342776;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23273530947.h"

// System.Void TestResultRenderer::.ctor()
extern "C"  void TestResultRenderer__ctor_m3754915721 (TestResultRenderer_t2000577874 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TestResultRenderer::ShowResults()
extern "C"  void TestResultRenderer_ShowResults_m2265083936 (TestResultRenderer_t2000577874 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TestResultRenderer::AddResults(System.String,ITestResult)
extern "C"  void TestResultRenderer_AddResults_m3171720262 (TestResultRenderer_t2000577874 * __this, String_t* ___sceneName, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TestResultRenderer::Draw()
extern "C"  void TestResultRenderer_Draw_m487165151 (TestResultRenderer_t2000577874 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TestResultRenderer::FailureCount()
extern "C"  int32_t TestResultRenderer_FailureCount_m3211937166 (TestResultRenderer_t2000577874 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TestResultRenderer::<Draw>m__B(System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<ITestResult>>)
extern "C"  int32_t TestResultRenderer_U3CDrawU3Em__B_m2038285031 (Il2CppObject * __this /* static, unused */, KeyValuePair_2_t3273530947  ___testGroup, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TestResultRenderer::<Draw>m__C(ITestResult)
extern "C"  bool TestResultRenderer_U3CDrawU3Em__C_m1332159863 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String TestResultRenderer::<Draw>m__D(ITestResult)
extern "C"  String_t* TestResultRenderer_U3CDrawU3Em__D_m793900103 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
