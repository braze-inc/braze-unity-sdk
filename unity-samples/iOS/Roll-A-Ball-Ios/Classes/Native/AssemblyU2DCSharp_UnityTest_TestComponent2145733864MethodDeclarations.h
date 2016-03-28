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

// UnityTest.TestComponent
struct TestComponent_t2145733864;
// System.Type
struct Type_t;
// System.String
struct String_t;
// UnityTest.ITestComponent
struct ITestComponent_t3894659903;
// System.Object
struct Il2CppObject;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// System.Collections.Generic.List`1<UnityTest.TestComponent>
struct List_1_t2942692833;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_t1356416995;
// System.Reflection.Assembly
struct Assembly_t1882292308;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"
#include "AssemblyU2DCSharp_UnityTest_TestComponent2145733864.h"
#include "mscorlib_System_Reflection_Assembly1882292308.h"

// System.Void UnityTest.TestComponent::.ctor()
extern "C"  void TestComponent__ctor_m1857998759 (TestComponent_t2145733864 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestComponent::.cctor()
extern "C"  void TestComponent__cctor_m1281290470 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestComponent::IsExludedOnThisPlatform()
extern "C"  bool TestComponent_IsExludedOnThisPlatform_m1881464006 (TestComponent_t2145733864 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestComponent::IsAssignableFrom(System.Type,System.Type)
extern "C"  bool TestComponent_IsAssignableFrom_m3945631814 (Il2CppObject * __this /* static, unused */, Type_t * ___a, Type_t * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestComponent::IsExceptionExpected(System.String)
extern "C"  bool TestComponent_IsExceptionExpected_m3737674860 (TestComponent_t2145733864 * __this, String_t* ___exception, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestComponent::ShouldSucceedOnException()
extern "C"  bool TestComponent_ShouldSucceedOnException_m4180743146 (TestComponent_t2145733864 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double UnityTest.TestComponent::GetTimeout()
extern "C"  double TestComponent_GetTimeout_m3921229221 (TestComponent_t2145733864 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestComponent::IsIgnored()
extern "C"  bool TestComponent_IsIgnored_m3920980417 (TestComponent_t2145733864 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestComponent::ShouldSucceedOnAssertions()
extern "C"  bool TestComponent_ShouldSucceedOnAssertions_m973986648 (TestComponent_t2145733864 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type UnityTest.TestComponent::GetTypeByName(System.String)
extern "C"  Type_t * TestComponent_GetTypeByName_m3663410673 (Il2CppObject * __this /* static, unused */, String_t* ___className, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestComponent::OnValidate()
extern "C"  void TestComponent_OnValidate_m2163055250 (TestComponent_t2145733864 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestComponent::EnableTest(System.Boolean)
extern "C"  void TestComponent_EnableTest_m2834387241 (TestComponent_t2145733864 * __this, bool ___enable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityTest.TestComponent::CompareTo(UnityTest.ITestComponent)
extern "C"  int32_t TestComponent_CompareTo_m3672827178 (TestComponent_t2145733864 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestComponent::IsTestGroup()
extern "C"  bool TestComponent_IsTestGroup_m4030788540 (TestComponent_t2145733864 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityTest.TestComponent::get_Name()
extern "C"  String_t* TestComponent_get_Name_m2095054478 (TestComponent_t2145733864 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityTest.ITestComponent UnityTest.TestComponent::GetTestGroup()
extern "C"  Il2CppObject * TestComponent_GetTestGroup_m2762023168 (TestComponent_t2145733864 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestComponent::Equals(System.Object)
extern "C"  bool TestComponent_Equals_m2097179916 (TestComponent_t2145733864 * __this, Il2CppObject * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityTest.TestComponent::GetHashCode()
extern "C"  int32_t TestComponent_GetHashCode_m800277156 (TestComponent_t2145733864 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityTest.TestComponent UnityTest.TestComponent::CreateDynamicTest(System.Type)
extern "C"  TestComponent_t2145733864 * TestComponent_CreateDynamicTest_m2635407024 (Il2CppObject * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityTest.TestComponent::CreateTest()
extern "C"  GameObject_t4012695102 * TestComponent_CreateTest_m2661857878 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityTest.TestComponent::CreateTest(System.String)
extern "C"  GameObject_t4012695102 * TestComponent_CreateTest_m1303961708 (Il2CppObject * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityTest.TestComponent> UnityTest.TestComponent::FindAllTestsOnScene()
extern "C"  List_1_t2942692833 * TestComponent_FindAllTestsOnScene_m2963263902 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityTest.TestComponent> UnityTest.TestComponent::FindAllTopTestsOnScene()
extern "C"  List_1_t2942692833 * TestComponent_FindAllTopTestsOnScene_m174670481 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityTest.TestComponent> UnityTest.TestComponent::FindAllDynamicTestsOnScene()
extern "C"  List_1_t2942692833 * TestComponent_FindAllDynamicTestsOnScene_m1826832507 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestComponent::DestroyAllDynamicTests()
extern "C"  void TestComponent_DestroyAllDynamicTests_m3519221126 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestComponent::DisableAllTests()
extern "C"  void TestComponent_DisableAllTests_m2827832781 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestComponent::AnyTestsOnScene()
extern "C"  bool TestComponent_AnyTestsOnScene_m1656841233 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestComponent::AnyDynamicTestForCurrentScene()
extern "C"  bool TestComponent_AnyDynamicTestForCurrentScene_m276154640 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Type> UnityTest.TestComponent::GetTypesWithHelpAttribute(System.String)
extern "C"  Il2CppObject* TestComponent_GetTypesWithHelpAttribute_m3196228198 (Il2CppObject * __this /* static, unused */, String_t* ___sceneName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestComponent::op_Equality(UnityTest.TestComponent,UnityTest.TestComponent)
extern "C"  bool TestComponent_op_Equality_m424273573 (Il2CppObject * __this /* static, unused */, TestComponent_t2145733864 * ___a, TestComponent_t2145733864 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestComponent::op_Inequality(UnityTest.TestComponent,UnityTest.TestComponent)
extern "C"  bool TestComponent_op_Inequality_m1138532000 (Il2CppObject * __this /* static, unused */, TestComponent_t2145733864 * ___a, TestComponent_t2145733864 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestComponent::<IsExludedOnThisPlatform>m__5(System.String)
extern "C"  bool TestComponent_U3CIsExludedOnThisPlatformU3Em__5_m114035060 (Il2CppObject * __this /* static, unused */, String_t* ___platform, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityTest.TestComponent::<IsExceptionExpected>m__6(System.String)
extern "C"  String_t* TestComponent_U3CIsExceptionExpectedU3Em__6_m2364227924 (Il2CppObject * __this /* static, unused */, String_t* ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Type> UnityTest.TestComponent::<GetTypeByName>m__7(System.Reflection.Assembly)
extern "C"  Il2CppObject* TestComponent_U3CGetTypeByNameU3Em__7_m1449817330 (Il2CppObject * __this /* static, unused */, Assembly_t1882292308 * ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestComponent::<FindAllTopTestsOnScene>m__9(UnityTest.TestComponent)
extern "C"  bool TestComponent_U3CFindAllTopTestsOnSceneU3Em__9_m642863920 (Il2CppObject * __this /* static, unused */, TestComponent_t2145733864 * ___component, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestComponent::<FindAllDynamicTestsOnScene>m__A(UnityTest.TestComponent)
extern "C"  bool TestComponent_U3CFindAllDynamicTestsOnSceneU3Em__A_m1906184338 (Il2CppObject * __this /* static, unused */, TestComponent_t2145733864 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityTest.TestComponent::UnityTest.ITestComponent.get_gameObject()
extern "C"  GameObject_t4012695102 * TestComponent_UnityTest_ITestComponent_get_gameObject_m1822130809 (TestComponent_t2145733864 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
