#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityTest.IntegrationTestRunner.IntegrationTestsProvider
struct IntegrationTestsProvider_t227;
// System.Collections.Generic.IEnumerable`1<UnityTest.ITestComponent>
struct IEnumerable_1_t225;
// UnityTest.ITestComponent
struct ITestComponent_t224;
// System.Collections.Generic.List`1<UnityTest.ITestComponent>
struct List_1_t228;

// System.Void UnityTest.IntegrationTestRunner.IntegrationTestsProvider::.ctor(System.Collections.Generic.IEnumerable`1<UnityTest.ITestComponent>)
 void IntegrationTestsProvider__ctor_m847 (IntegrationTestsProvider_t227 * __this, Object_t* ___tests, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.IntegrationTestRunner.IntegrationTestsProvider::AddTestToList(UnityTest.ITestComponent)
 void IntegrationTestsProvider_AddTestToList_m848 (IntegrationTestsProvider_t227 * __this, Object_t * ___test, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityTest.ITestComponent UnityTest.IntegrationTestRunner.IntegrationTestsProvider::GetNextTest()
 Object_t * IntegrationTestsProvider_GetNextTest_m849 (IntegrationTestsProvider_t227 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.IntegrationTestRunner.IntegrationTestsProvider::FinishTest(UnityTest.ITestComponent)
 void IntegrationTestsProvider_FinishTest_m850 (IntegrationTestsProvider_t227 * __this, Object_t * ___test, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityTest.ITestComponent UnityTest.IntegrationTestRunner.IntegrationTestsProvider::FindNextTestGroup(UnityTest.ITestComponent)
 Object_t * IntegrationTestsProvider_FindNextTestGroup_m851 (IntegrationTestsProvider_t227 * __this, Object_t * ___testGroup, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityTest.ITestComponent UnityTest.IntegrationTestRunner.IntegrationTestsProvider::FindInnerTestGroup(UnityTest.ITestComponent)
 Object_t * IntegrationTestsProvider_FindInnerTestGroup_m852 (IntegrationTestsProvider_t227 * __this, Object_t * ___group, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.IntegrationTestRunner.IntegrationTestsProvider::AnyTestsLeft()
 bool IntegrationTestsProvider_AnyTestsLeft_m853 (IntegrationTestsProvider_t227 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityTest.ITestComponent> UnityTest.IntegrationTestRunner.IntegrationTestsProvider::GetRemainingTests()
 List_1_t228 * IntegrationTestsProvider_GetRemainingTests_m854 (IntegrationTestsProvider_t227 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityTest.ITestComponent UnityTest.IntegrationTestRunner.IntegrationTestsProvider::<IntegrationTestsProvider>m__4(UnityTest.ITestComponent)
 Object_t * IntegrationTestsProvider_U3CIntegrationTestsProviderU3Em__4_m855 (Object_t * __this/* static, unused */, Object_t * ___component, MethodInfo* method) IL2CPP_METHOD_ATTR;
