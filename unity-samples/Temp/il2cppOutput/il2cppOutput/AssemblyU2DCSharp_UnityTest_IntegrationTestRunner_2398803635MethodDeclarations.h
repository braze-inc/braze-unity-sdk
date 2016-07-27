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
struct IntegrationTestsProvider_t2398803635;
// System.Collections.Generic.IEnumerable`1<UnityTest.ITestComponent>
struct IEnumerable_1_t2471846963;
// UnityTest.ITestComponent
struct ITestComponent_t3894659903;
// System.Collections.Generic.List`1<UnityTest.ITestComponent>
struct List_1_t396651576;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityTest.IntegrationTestRunner.IntegrationTestsProvider::.ctor(System.Collections.Generic.IEnumerable`1<UnityTest.ITestComponent>)
extern "C"  void IntegrationTestsProvider__ctor_m2931238098 (IntegrationTestsProvider_t2398803635 * __this, Il2CppObject* ___tests0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.IntegrationTestRunner.IntegrationTestsProvider::AddTestToList(UnityTest.ITestComponent)
extern "C"  void IntegrationTestsProvider_AddTestToList_m2060071935 (IntegrationTestsProvider_t2398803635 * __this, Il2CppObject * ___test0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityTest.ITestComponent UnityTest.IntegrationTestRunner.IntegrationTestsProvider::GetNextTest()
extern "C"  Il2CppObject * IntegrationTestsProvider_GetNextTest_m1666579395 (IntegrationTestsProvider_t2398803635 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.IntegrationTestRunner.IntegrationTestsProvider::FinishTest(UnityTest.ITestComponent)
extern "C"  void IntegrationTestsProvider_FinishTest_m532190978 (IntegrationTestsProvider_t2398803635 * __this, Il2CppObject * ___test0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityTest.ITestComponent UnityTest.IntegrationTestRunner.IntegrationTestsProvider::FindNextTestGroup(UnityTest.ITestComponent)
extern "C"  Il2CppObject * IntegrationTestsProvider_FindNextTestGroup_m3345503904 (IntegrationTestsProvider_t2398803635 * __this, Il2CppObject * ___testGroup0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityTest.ITestComponent UnityTest.IntegrationTestRunner.IntegrationTestsProvider::FindInnerTestGroup(UnityTest.ITestComponent)
extern "C"  Il2CppObject * IntegrationTestsProvider_FindInnerTestGroup_m451225281 (IntegrationTestsProvider_t2398803635 * __this, Il2CppObject * ___group0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.IntegrationTestRunner.IntegrationTestsProvider::AnyTestsLeft()
extern "C"  bool IntegrationTestsProvider_AnyTestsLeft_m1440070422 (IntegrationTestsProvider_t2398803635 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityTest.ITestComponent> UnityTest.IntegrationTestRunner.IntegrationTestsProvider::GetRemainingTests()
extern "C"  List_1_t396651576 * IntegrationTestsProvider_GetRemainingTests_m3673815393 (IntegrationTestsProvider_t2398803635 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityTest.ITestComponent UnityTest.IntegrationTestRunner.IntegrationTestsProvider::<IntegrationTestsProvider>m__4(UnityTest.ITestComponent)
extern "C"  Il2CppObject * IntegrationTestsProvider_U3CIntegrationTestsProviderU3Em__4_m4121357340 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___component0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
