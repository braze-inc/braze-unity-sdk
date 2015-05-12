#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TestResultRenderer
struct TestResultRenderer_t269;
// System.String
struct String_t;
// ITestResult
struct ITestResult_t247;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<ITestResult>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_2.h"

// System.Void TestResultRenderer::.ctor()
 void TestResultRenderer__ctor_m1071 (TestResultRenderer_t269 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TestResultRenderer::ShowResults()
 void TestResultRenderer_ShowResults_m1072 (TestResultRenderer_t269 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TestResultRenderer::AddResults(System.String,ITestResult)
 void TestResultRenderer_AddResults_m1073 (TestResultRenderer_t269 * __this, String_t* ___sceneName, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TestResultRenderer::Draw()
 void TestResultRenderer_Draw_m1074 (TestResultRenderer_t269 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TestResultRenderer::FailureCount()
 int32_t TestResultRenderer_FailureCount_m1075 (TestResultRenderer_t269 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TestResultRenderer::<Draw>m__B(System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<ITestResult>>)
 int32_t TestResultRenderer_U3CDrawU3Em__B_m1076 (Object_t * __this/* static, unused */, KeyValuePair_2_t270  ___testGroup, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TestResultRenderer::<Draw>m__C(ITestResult)
 bool TestResultRenderer_U3CDrawU3Em__C_m1077 (Object_t * __this/* static, unused */, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String TestResultRenderer::<Draw>m__D(ITestResult)
 String_t* TestResultRenderer_U3CDrawU3Em__D_m1078 (Object_t * __this/* static, unused */, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
