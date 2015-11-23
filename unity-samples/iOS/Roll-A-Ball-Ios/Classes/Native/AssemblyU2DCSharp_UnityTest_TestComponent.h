#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityTest.ITestComponent
struct ITestComponent_t204;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t63;
// System.Func`2<System.String,System.Boolean>
struct Func_2_t221;
// System.Func`2<System.String,System.String>
struct Func_2_t222;
// System.Func`2<System.Reflection.Assembly,System.Collections.Generic.IEnumerable`1<System.Type>>
struct Func_2_t223;
// System.Func`2<UnityTest.TestComponent,System.Boolean>
struct Func_2_t224;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "AssemblyU2DCSharp_UnityTest_TestComponent_IncludedPlatforms.h"

// UnityTest.TestComponent
struct  TestComponent_t220  : public MonoBehaviour_t2
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
	StringU5BU5D_t63* ___platformsToIgnore_10;
	// System.Boolean UnityTest.TestComponent::dynamic
	bool ___dynamic_11;
	// System.String UnityTest.TestComponent::dynamicTypeName
	String_t* ___dynamicTypeName_12;
};
struct TestComponent_t220_StaticFields{
	// UnityTest.ITestComponent UnityTest.TestComponent::NullTestComponent
	Object_t * ___NullTestComponent_2;
	// System.Func`2<System.String,System.Boolean> UnityTest.TestComponent::<>f__am$cacheB
	Func_2_t221 * ___U3CU3Ef__amU24cacheB_13;
	// System.Func`2<System.String,System.String> UnityTest.TestComponent::<>f__am$cacheC
	Func_2_t222 * ___U3CU3Ef__amU24cacheC_14;
	// System.Func`2<System.Reflection.Assembly,System.Collections.Generic.IEnumerable`1<System.Type>> UnityTest.TestComponent::<>f__am$cacheD
	Func_2_t223 * ___U3CU3Ef__amU24cacheD_15;
	// System.Func`2<UnityTest.TestComponent,System.Boolean> UnityTest.TestComponent::<>f__am$cacheE
	Func_2_t224 * ___U3CU3Ef__amU24cacheE_16;
	// System.Func`2<UnityTest.TestComponent,System.Boolean> UnityTest.TestComponent::<>f__am$cacheF
	Func_2_t224 * ___U3CU3Ef__amU24cacheF_17;
};
