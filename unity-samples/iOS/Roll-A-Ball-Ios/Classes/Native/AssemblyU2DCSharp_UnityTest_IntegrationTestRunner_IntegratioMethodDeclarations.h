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

// UnityTest.IntegrationTestRunner.IntegrationTestsProvider
struct IntegrationTestsProvider_t201;
// System.Collections.Generic.IEnumerable`1<UnityTest.ITestComponent>
struct IEnumerable_1_t205;
// UnityTest.ITestComponent
struct ITestComponent_t204;
// System.Collections.Generic.List`1<UnityTest.ITestComponent>
struct List_1_t263;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityTest.IntegrationTestRunner.IntegrationTestsProvider::.ctor(System.Collections.Generic.IEnumerable`1<UnityTest.ITestComponent>)
extern "C" void IntegrationTestsProvider__ctor_m827 (IntegrationTestsProvider_t201 * __this, Object_t* ___tests, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.IntegrationTestRunner.IntegrationTestsProvider::AddTestToList(UnityTest.ITestComponent)
extern "C" void IntegrationTestsProvider_AddTestToList_m828 (IntegrationTestsProvider_t201 * __this, Object_t * ___test, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityTest.ITestComponent UnityTest.IntegrationTestRunner.IntegrationTestsProvider::GetNextTest()
extern "C" Object_t * IntegrationTestsProvider_GetNextTest_m829 (IntegrationTestsProvider_t201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.IntegrationTestRunner.IntegrationTestsProvider::FinishTest(UnityTest.ITestComponent)
extern "C" void IntegrationTestsProvider_FinishTest_m830 (IntegrationTestsProvider_t201 * __this, Object_t * ___test, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityTest.ITestComponent UnityTest.IntegrationTestRunner.IntegrationTestsProvider::FindNextTestGroup(UnityTest.ITestComponent)
extern "C" Object_t * IntegrationTestsProvider_FindNextTestGroup_m831 (IntegrationTestsProvider_t201 * __this, Object_t * ___testGroup, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityTest.ITestComponent UnityTest.IntegrationTestRunner.IntegrationTestsProvider::FindInnerTestGroup(UnityTest.ITestComponent)
extern "C" Object_t * IntegrationTestsProvider_FindInnerTestGroup_m832 (IntegrationTestsProvider_t201 * __this, Object_t * ___group, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.IntegrationTestRunner.IntegrationTestsProvider::AnyTestsLeft()
extern "C" bool IntegrationTestsProvider_AnyTestsLeft_m833 (IntegrationTestsProvider_t201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityTest.ITestComponent> UnityTest.IntegrationTestRunner.IntegrationTestsProvider::GetRemainingTests()
extern "C" List_1_t263 * IntegrationTestsProvider_GetRemainingTests_m834 (IntegrationTestsProvider_t201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityTest.ITestComponent UnityTest.IntegrationTestRunner.IntegrationTestsProvider::<IntegrationTestsProvider>m__4(UnityTest.ITestComponent)
extern "C" Object_t * IntegrationTestsProvider_U3CIntegrationTestsProviderU3Em__4_m835 (Object_t * __this /* static, unused */, Object_t * ___component, const MethodInfo* method) IL2CPP_METHOD_ATTR;
