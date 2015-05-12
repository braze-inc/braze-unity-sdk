#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityTest.TestComponent
struct TestComponent_t247;
// System.String
struct String_t;
// System.Type
struct Type_t;
// UnityTest.ITestComponent
struct ITestComponent_t224;
// System.Object
struct Object_t;
// UnityEngine.GameObject
struct GameObject_t140;
// System.Collections.Generic.List`1<UnityTest.TestComponent>
struct List_1_t230;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_t248;
// System.Reflection.Assembly
struct Assembly_t239;

// System.Void UnityTest.TestComponent::.ctor()
 void TestComponent__ctor_m907 (TestComponent_t247 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestComponent::.cctor()
 void TestComponent__cctor_m908 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestComponent::IsExludedOnThisPlatform()
 bool TestComponent_IsExludedOnThisPlatform_m909 (TestComponent_t247 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestComponent::IsAssignableFrom(System.Type,System.Type)
 bool TestComponent_IsAssignableFrom_m910 (Object_t * __this/* static, unused */, Type_t * ___a, Type_t * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestComponent::IsExceptionExpected(System.String)
 bool TestComponent_IsExceptionExpected_m911 (TestComponent_t247 * __this, String_t* ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestComponent::ShouldSucceedOnException()
 bool TestComponent_ShouldSucceedOnException_m912 (TestComponent_t247 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double UnityTest.TestComponent::GetTimeout()
 double TestComponent_GetTimeout_m913 (TestComponent_t247 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestComponent::IsIgnored()
 bool TestComponent_IsIgnored_m914 (TestComponent_t247 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestComponent::ShouldSucceedOnAssertions()
 bool TestComponent_ShouldSucceedOnAssertions_m915 (TestComponent_t247 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type UnityTest.TestComponent::GetTypeByName(System.String)
 Type_t * TestComponent_GetTypeByName_m916 (Object_t * __this/* static, unused */, String_t* ___className, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestComponent::OnValidate()
 void TestComponent_OnValidate_m917 (TestComponent_t247 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestComponent::EnableTest(System.Boolean)
 void TestComponent_EnableTest_m918 (TestComponent_t247 * __this, bool ___enable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityTest.TestComponent::CompareTo(UnityTest.ITestComponent)
 int32_t TestComponent_CompareTo_m919 (TestComponent_t247 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestComponent::IsTestGroup()
 bool TestComponent_IsTestGroup_m920 (TestComponent_t247 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityTest.TestComponent::get_Name()
 String_t* TestComponent_get_Name_m921 (TestComponent_t247 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityTest.ITestComponent UnityTest.TestComponent::GetTestGroup()
 Object_t * TestComponent_GetTestGroup_m922 (TestComponent_t247 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestComponent::Equals(System.Object)
 bool TestComponent_Equals_m923 (TestComponent_t247 * __this, Object_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityTest.TestComponent::GetHashCode()
 int32_t TestComponent_GetHashCode_m924 (TestComponent_t247 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityTest.TestComponent UnityTest.TestComponent::CreateDynamicTest(System.Type)
 TestComponent_t247 * TestComponent_CreateDynamicTest_m925 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityTest.TestComponent::CreateTest()
 GameObject_t140 * TestComponent_CreateTest_m926 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityTest.TestComponent::CreateTest(System.String)
 GameObject_t140 * TestComponent_CreateTest_m927 (Object_t * __this/* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityTest.TestComponent> UnityTest.TestComponent::FindAllTestsOnScene()
 List_1_t230 * TestComponent_FindAllTestsOnScene_m928 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityTest.TestComponent> UnityTest.TestComponent::FindAllTopTestsOnScene()
 List_1_t230 * TestComponent_FindAllTopTestsOnScene_m929 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityTest.TestComponent> UnityTest.TestComponent::FindAllDynamicTestsOnScene()
 List_1_t230 * TestComponent_FindAllDynamicTestsOnScene_m930 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestComponent::DestroyAllDynamicTests()
 void TestComponent_DestroyAllDynamicTests_m931 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestComponent::DisableAllTests()
 void TestComponent_DisableAllTests_m932 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestComponent::AnyTestsOnScene()
 bool TestComponent_AnyTestsOnScene_m933 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestComponent::AnyDynamicTestForCurrentScene()
 bool TestComponent_AnyDynamicTestForCurrentScene_m934 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Type> UnityTest.TestComponent::GetTypesWithHelpAttribute(System.String)
 Object_t* TestComponent_GetTypesWithHelpAttribute_m935 (Object_t * __this/* static, unused */, String_t* ___sceneName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestComponent::op_Equality(UnityTest.TestComponent,UnityTest.TestComponent)
 bool TestComponent_op_Equality_m936 (Object_t * __this/* static, unused */, TestComponent_t247 * ___a, TestComponent_t247 * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestComponent::op_Inequality(UnityTest.TestComponent,UnityTest.TestComponent)
 bool TestComponent_op_Inequality_m937 (Object_t * __this/* static, unused */, TestComponent_t247 * ___a, TestComponent_t247 * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestComponent::<IsExludedOnThisPlatform>m__5(System.String)
 bool TestComponent_U3CIsExludedOnThisPlatformU3Em__5_m938 (Object_t * __this/* static, unused */, String_t* ___platform, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityTest.TestComponent::<IsExceptionExpected>m__6(System.String)
 String_t* TestComponent_U3CIsExceptionExpectedU3Em__6_m939 (Object_t * __this/* static, unused */, String_t* ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Type> UnityTest.TestComponent::<GetTypeByName>m__7(System.Reflection.Assembly)
 Object_t* TestComponent_U3CGetTypeByNameU3Em__7_m940 (Object_t * __this/* static, unused */, Assembly_t239 * ___a, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestComponent::<FindAllTopTestsOnScene>m__9(UnityTest.TestComponent)
 bool TestComponent_U3CFindAllTopTestsOnSceneU3Em__9_m941 (Object_t * __this/* static, unused */, TestComponent_t247 * ___component, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestComponent::<FindAllDynamicTestsOnScene>m__A(UnityTest.TestComponent)
 bool TestComponent_U3CFindAllDynamicTestsOnSceneU3Em__A_m942 (Object_t * __this/* static, unused */, TestComponent_t247 * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityTest.TestComponent::UnityTest.ITestComponent.get_gameObject()
 GameObject_t140 * TestComponent_UnityTest_ITestComponent_get_gameObject_m943 (TestComponent_t247 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
