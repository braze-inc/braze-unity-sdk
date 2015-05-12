#pragma once
#include <stdint.h>
// System.Collections.Generic.Dictionary`2<UnityTest.ITestComponent,System.Collections.Generic.HashSet`1<UnityTest.ITestComponent>>
struct Dictionary_2_t236;
// UnityTest.ITestComponent
struct ITestComponent_t237;
// System.Collections.Generic.IEnumerable`1<UnityTest.ITestComponent>
struct IEnumerable_1_t238;
// System.Func`2<UnityTest.ITestComponent,UnityTest.ITestComponent>
struct Func_2_t239;
// System.Object
#include "mscorlib_System_Object.h"
// UnityTest.IntegrationTestRunner.IntegrationTestsProvider
struct IntegrationTestsProvider_t240  : public Object_t
{
	// System.Collections.Generic.Dictionary`2<UnityTest.ITestComponent,System.Collections.Generic.HashSet`1<UnityTest.ITestComponent>> UnityTest.IntegrationTestRunner.IntegrationTestsProvider::testCollection
	Dictionary_2_t236 * ___testCollection_0;
	// UnityTest.ITestComponent UnityTest.IntegrationTestRunner.IntegrationTestsProvider::currentTestGroup
	Object_t * ___currentTestGroup_1;
	// System.Collections.Generic.IEnumerable`1<UnityTest.ITestComponent> UnityTest.IntegrationTestRunner.IntegrationTestsProvider::testToRun
	Object_t* ___testToRun_2;
};
struct IntegrationTestsProvider_t240_StaticFields{
	// System.Func`2<UnityTest.ITestComponent,UnityTest.ITestComponent> UnityTest.IntegrationTestRunner.IntegrationTestsProvider::<>f__am$cache3
	Func_2_t239 * ___U3CU3Ef__am$cache3_3;
};
