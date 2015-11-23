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
struct TestResultRenderer_t229;
// System.String
struct String_t;
// ITestResult
struct ITestResult_t209;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3.h"

// System.Void TestResultRenderer::.ctor()
extern "C" void TestResultRenderer__ctor_m947 (TestResultRenderer_t229 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TestResultRenderer::ShowResults()
extern "C" void TestResultRenderer_ShowResults_m948 (TestResultRenderer_t229 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TestResultRenderer::AddResults(System.String,ITestResult)
extern "C" void TestResultRenderer_AddResults_m949 (TestResultRenderer_t229 * __this, String_t* ___sceneName, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TestResultRenderer::Draw()
extern "C" void TestResultRenderer_Draw_m950 (TestResultRenderer_t229 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TestResultRenderer::FailureCount()
extern "C" int32_t TestResultRenderer_FailureCount_m951 (TestResultRenderer_t229 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TestResultRenderer::<Draw>m__B(System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<ITestResult>>)
extern "C" int32_t TestResultRenderer_U3CDrawU3Em__B_m952 (Object_t * __this /* static, unused */, KeyValuePair_2_t266  ___testGroup, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TestResultRenderer::<Draw>m__C(ITestResult)
extern "C" bool TestResultRenderer_U3CDrawU3Em__C_m953 (Object_t * __this /* static, unused */, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String TestResultRenderer::<Draw>m__D(ITestResult)
extern "C" String_t* TestResultRenderer_U3CDrawU3Em__D_m954 (Object_t * __this /* static, unused */, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
