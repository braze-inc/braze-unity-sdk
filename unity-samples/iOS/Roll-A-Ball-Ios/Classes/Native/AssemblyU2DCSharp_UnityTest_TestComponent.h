#pragma once
#include <stdint.h>
// UnityTest.ITestComponent
struct ITestComponent_t224;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t3;
// System.Func`2<System.String,System.Boolean>
struct Func_2_t243;
// System.Func`2<System.String,System.String>
struct Func_2_t244;
// System.Func`2<System.Reflection.Assembly,System.Collections.Generic.IEnumerable`1<System.Type>>
struct Func_2_t245;
// System.Func`2<UnityTest.TestComponent,System.Boolean>
struct Func_2_t246;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityTest.TestComponent/IncludedPlatforms
#include "AssemblyU2DCSharp_UnityTest_TestComponent_IncludedPlatforms.h"
// UnityTest.TestComponent
struct TestComponent_t247  : public MonoBehaviour_t2
{
	// System.Single UnityTest.TestComponent::timeout
	float ___timeout_3;
	// System.Boolean UnityTest.TestComponent::ignored
	bool ___ignored_4;
	// System.Boolean UnityTest.TestComponent::succeedAfterAllAssertionsAreExecuted
	bool ___succeedAfterAllAssertionsAreExecuted_5;
	// System.Boolean UnityTest.TestComponent::expectException
	bool ___expectException_6;
	// System.String UnityTest.TestComponent::expectedExceptionList
	String_t* ___expectedExceptionList_7;
	// System.Boolean UnityTest.TestComponent::succeedWhenExceptionIsThrown
	bool ___succeedWhenExceptionIsThrown_8;
	// UnityTest.TestComponent/IncludedPlatforms UnityTest.TestComponent::includedPlatforms
	int32_t ___includedPlatforms_9;
	// System.String[] UnityTest.TestComponent::platformsToIgnore
	StringU5BU5D_t3* ___platformsToIgnore_10;
	// System.Boolean UnityTest.TestComponent::dynamic
	bool ___dynamic_11;
	// System.String UnityTest.TestComponent::dynamicTypeName
	String_t* ___dynamicTypeName_12;
};
struct TestComponent_t247_StaticFields{
	// UnityTest.ITestComponent UnityTest.TestComponent::NullTestComponent
	Object_t * ___NullTestComponent_2;
	// System.Func`2<System.String,System.Boolean> UnityTest.TestComponent::<>f__am$cacheB
	Func_2_t243 * ___U3CU3Ef__am$cacheB_13;
	// System.Func`2<System.String,System.String> UnityTest.TestComponent::<>f__am$cacheC
	Func_2_t244 * ___U3CU3Ef__am$cacheC_14;
	// System.Func`2<System.Reflection.Assembly,System.Collections.Generic.IEnumerable`1<System.Type>> UnityTest.TestComponent::<>f__am$cacheD
	Func_2_t245 * ___U3CU3Ef__am$cacheD_15;
	// System.Func`2<UnityTest.TestComponent,System.Boolean> UnityTest.TestComponent::<>f__am$cacheE
	Func_2_t246 * ___U3CU3Ef__am$cacheE_16;
	// System.Func`2<UnityTest.TestComponent,System.Boolean> UnityTest.TestComponent::<>f__am$cacheF
	Func_2_t246 * ___U3CU3Ef__am$cacheF_17;
};
