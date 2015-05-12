#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityTest.IntegrationTestRunner.IntegrationTestsProvider
struct IntegrationTestsProvider_t240;
// System.Collections.Generic.IEnumerable`1<UnityTest.ITestComponent>
struct IEnumerable_1_t238;
// UnityTest.ITestComponent
struct ITestComponent_t237;
// System.Collections.Generic.List`1<UnityTest.ITestComponent>
struct List_1_t241;

// System.Void UnityTest.IntegrationTestRunner.IntegrationTestsProvider::.ctor(System.Collections.Generic.IEnumerable`1<UnityTest.ITestComponent>)
 void IntegrationTestsProvider__ctor_m953 (IntegrationTestsProvider_t240 * __this, Object_t* ___tests, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.IntegrationTestRunner.IntegrationTestsProvider::AddTestToList(UnityTest.ITestComponent)
 void IntegrationTestsProvider_AddTestToList_m954 (IntegrationTestsProvider_t240 * __this, Object_t * ___test, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityTest.ITestComponent UnityTest.IntegrationTestRunner.IntegrationTestsProvider::GetNextTest()
 Object_t * IntegrationTestsProvider_GetNextTest_m955 (IntegrationTestsProvider_t240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.IntegrationTestRunner.IntegrationTestsProvider::FinishTest(UnityTest.ITestComponent)
 void IntegrationTestsProvider_FinishTest_m956 (IntegrationTestsProvider_t240 * __this, Object_t * ___test, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityTest.ITestComponent UnityTest.IntegrationTestRunner.IntegrationTestsProvider::FindNextTestGroup(UnityTest.ITestComponent)
 Object_t * IntegrationTestsProvider_FindNextTestGroup_m957 (IntegrationTestsProvider_t240 * __this, Object_t * ___testGroup, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityTest.ITestComponent UnityTest.IntegrationTestRunner.IntegrationTestsProvider::FindInnerTestGroup(UnityTest.ITestComponent)
 Object_t * IntegrationTestsProvider_FindInnerTestGroup_m958 (IntegrationTestsProvider_t240 * __this, Object_t * ___group, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.IntegrationTestRunner.IntegrationTestsProvider::AnyTestsLeft()
 bool IntegrationTestsProvider_AnyTestsLeft_m959 (IntegrationTestsProvider_t240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityTest.ITestComponent> UnityTest.IntegrationTestRunner.IntegrationTestsProvider::GetRemainingTests()
 List_1_t241 * IntegrationTestsProvider_GetRemainingTests_m960 (IntegrationTestsProvider_t240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityTest.ITestComponent UnityTest.IntegrationTestRunner.IntegrationTestsProvider::<IntegrationTestsProvider>m__4(UnityTest.ITestComponent)
 Object_t * IntegrationTestsProvider_U3CIntegrationTestsProviderU3Em__4_m961 (Object_t * __this/* static, unused */, Object_t * ___component, MethodInfo* method) IL2CPP_METHOD_ATTR;
