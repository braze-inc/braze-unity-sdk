#pragma once
#include <stdint.h>
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<ITestResult>>
struct Dictionary_2_t265;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<ITestResult>>,System.Int32>
struct Func_2_t266;
// System.Func`2<ITestResult,System.Boolean>
struct Func_2_t267;
// System.Func`2<ITestResult,System.String>
struct Func_2_t268;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// TestResultRenderer
struct TestResultRenderer_t269  : public Object_t
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<ITestResult>> TestResultRenderer::m_TestCollection
	Dictionary_2_t265 * ___m_TestCollection_0;
	// System.Boolean TestResultRenderer::m_ShowResults
	bool ___m_ShowResults_1;
	// UnityEngine.Vector2 TestResultRenderer::m_ScrollPosition
	Vector2_t198  ___m_ScrollPosition_2;
	// System.Int32 TestResultRenderer::m_FailureCount
	int32_t ___m_FailureCount_3;
};
struct TestResultRenderer_t269_StaticFields{
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<ITestResult>>,System.Int32> TestResultRenderer::<>f__am$cache4
	Func_2_t266 * ___U3CU3Ef__am$cache4_4;
	// System.Func`2<ITestResult,System.Boolean> TestResultRenderer::<>f__am$cache5
	Func_2_t267 * ___U3CU3Ef__am$cache5_5;
	// System.Func`2<ITestResult,System.String> TestResultRenderer::<>f__am$cache6
	Func_2_t268 * ___U3CU3Ef__am$cache6_6;
};
