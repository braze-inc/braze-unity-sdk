#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<ITestResult>>
struct Dictionary_2_t230;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<ITestResult>>,System.Int32>
struct Func_2_t232;
// System.Func`2<ITestResult,System.Boolean>
struct Func_2_t233;
// System.Func`2<ITestResult,System.String>
struct Func_2_t234;

#include "mscorlib_System_Object.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// TestResultRenderer
struct  TestResultRenderer_t229  : public Object_t
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<ITestResult>> TestResultRenderer::m_TestCollection
	Dictionary_2_t230 * ___m_TestCollection_0;
	// System.Boolean TestResultRenderer::m_ShowResults
	bool ___m_ShowResults_1;
	// UnityEngine.Vector2 TestResultRenderer::m_ScrollPosition
	Vector2_t231  ___m_ScrollPosition_2;
	// System.Int32 TestResultRenderer::m_FailureCount
	int32_t ___m_FailureCount_3;
};
struct TestResultRenderer_t229_StaticFields{
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<ITestResult>>,System.Int32> TestResultRenderer::<>f__am$cache4
	Func_2_t232 * ___U3CU3Ef__amU24cache4_4;
	// System.Func`2<ITestResult,System.Boolean> TestResultRenderer::<>f__am$cache5
	Func_2_t233 * ___U3CU3Ef__amU24cache5_5;
	// System.Func`2<ITestResult,System.String> TestResultRenderer::<>f__am$cache6
	Func_2_t234 * ___U3CU3Ef__amU24cache6_6;
};
