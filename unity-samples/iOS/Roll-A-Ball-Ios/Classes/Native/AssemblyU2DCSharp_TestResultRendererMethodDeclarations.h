#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TestResultRenderer
struct TestResultRenderer_t256;
// System.String
struct String_t;
// ITestResult
struct ITestResult_t234;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<ITestResult>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_2.h"

// System.Void TestResultRenderer::.ctor()
 void TestResultRenderer__ctor_m965 (TestResultRenderer_t256 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TestResultRenderer::ShowResults()
 void TestResultRenderer_ShowResults_m966 (TestResultRenderer_t256 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TestResultRenderer::AddResults(System.String,ITestResult)
 void TestResultRenderer_AddResults_m967 (TestResultRenderer_t256 * __this, String_t* ___sceneName, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TestResultRenderer::Draw()
 void TestResultRenderer_Draw_m968 (TestResultRenderer_t256 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TestResultRenderer::FailureCount()
 int32_t TestResultRenderer_FailureCount_m969 (TestResultRenderer_t256 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TestResultRenderer::<Draw>m__B(System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<ITestResult>>)
 int32_t TestResultRenderer_U3CDrawU3Em__B_m970 (Object_t * __this/* static, unused */, KeyValuePair_2_t257  ___testGroup, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TestResultRenderer::<Draw>m__C(ITestResult)
 bool TestResultRenderer_U3CDrawU3Em__C_m971 (Object_t * __this/* static, unused */, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String TestResultRenderer::<Draw>m__D(ITestResult)
 String_t* TestResultRenderer_U3CDrawU3Em__D_m972 (Object_t * __this/* static, unused */, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
