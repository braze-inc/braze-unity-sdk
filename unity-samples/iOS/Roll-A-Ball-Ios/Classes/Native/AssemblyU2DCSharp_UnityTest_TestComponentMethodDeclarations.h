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
struct TestComponent_t220;
// System.Type
struct Type_t;
// System.String
struct String_t;
// UnityTest.ITestComponent
struct ITestComponent_t204;
// System.Object
struct Object_t;
// UnityEngine.GameObject
struct GameObject_t141;
// System.Collections.Generic.List`1<UnityTest.TestComponent>
struct List_1_t242;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_t265;
// System.Reflection.Assembly
struct Assembly_t215;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityTest.TestComponent::.ctor()
extern "C" void TestComponent__ctor_m889 (TestComponent_t220 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestComponent::.cctor()
extern "C" void TestComponent__cctor_m890 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestComponent::IsExludedOnThisPlatform()
extern "C" bool TestComponent_IsExludedOnThisPlatform_m891 (TestComponent_t220 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestComponent::IsAssignableFrom(System.Type,System.Type)
extern "C" bool TestComponent_IsAssignableFrom_m892 (Object_t * __this /* static, unused */, Type_t * ___a, Type_t * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestComponent::IsExceptionExpected(System.String)
extern "C" bool TestComponent_IsExceptionExpected_m893 (TestComponent_t220 * __this, String_t* ___exception, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestComponent::ShouldSucceedOnException()
extern "C" bool TestComponent_ShouldSucceedOnException_m894 (TestComponent_t220 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double UnityTest.TestComponent::GetTimeout()
extern "C" double TestComponent_GetTimeout_m895 (TestComponent_t220 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestComponent::IsIgnored()
extern "C" bool TestComponent_IsIgnored_m896 (TestComponent_t220 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestComponent::ShouldSucceedOnAssertions()
extern "C" bool TestComponent_ShouldSucceedOnAssertions_m897 (TestComponent_t220 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type UnityTest.TestComponent::GetTypeByName(System.String)
extern "C" Type_t * TestComponent_GetTypeByName_m898 (Object_t * __this /* static, unused */, String_t* ___className, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestComponent::OnValidate()
extern "C" void TestComponent_OnValidate_m899 (TestComponent_t220 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestComponent::EnableTest(System.Boolean)
extern "C" void TestComponent_EnableTest_m900 (TestComponent_t220 * __this, bool ___enable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityTest.TestComponent::CompareTo(UnityTest.ITestComponent)
extern "C" int32_t TestComponent_CompareTo_m901 (TestComponent_t220 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestComponent::IsTestGroup()
extern "C" bool TestComponent_IsTestGroup_m902 (TestComponent_t220 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityTest.TestComponent::get_Name()
extern "C" String_t* TestComponent_get_Name_m903 (TestComponent_t220 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityTest.ITestComponent UnityTest.TestComponent::GetTestGroup()
extern "C" Object_t * TestComponent_GetTestGroup_m904 (TestComponent_t220 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestComponent::Equals(System.Object)
extern "C" bool TestComponent_Equals_m905 (TestComponent_t220 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityTest.TestComponent::GetHashCode()
extern "C" int32_t TestComponent_GetHashCode_m906 (TestComponent_t220 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityTest.TestComponent UnityTest.TestComponent::CreateDynamicTest(System.Type)
extern "C" TestComponent_t220 * TestComponent_CreateDynamicTest_m907 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityTest.TestComponent::CreateTest()
extern "C" GameObject_t141 * TestComponent_CreateTest_m908 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityTest.TestComponent::CreateTest(System.String)
extern "C" GameObject_t141 * TestComponent_CreateTest_m909 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityTest.TestComponent> UnityTest.TestComponent::FindAllTestsOnScene()
extern "C" List_1_t242 * TestComponent_FindAllTestsOnScene_m910 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityTest.TestComponent> UnityTest.TestComponent::FindAllTopTestsOnScene()
extern "C" List_1_t242 * TestComponent_FindAllTopTestsOnScene_m911 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityTest.TestComponent> UnityTest.TestComponent::FindAllDynamicTestsOnScene()
extern "C" List_1_t242 * TestComponent_FindAllDynamicTestsOnScene_m912 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestComponent::DestroyAllDynamicTests()
extern "C" void TestComponent_DestroyAllDynamicTests_m913 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestComponent::DisableAllTests()
extern "C" void TestComponent_DisableAllTests_m914 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestComponent::AnyTestsOnScene()
extern "C" bool TestComponent_AnyTestsOnScene_m915 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestComponent::AnyDynamicTestForCurrentScene()
extern "C" bool TestComponent_AnyDynamicTestForCurrentScene_m916 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Type> UnityTest.TestComponent::GetTypesWithHelpAttribute(System.String)
extern "C" Object_t* TestComponent_GetTypesWithHelpAttribute_m917 (Object_t * __this /* static, unused */, String_t* ___sceneName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestComponent::op_Equality(UnityTest.TestComponent,UnityTest.TestComponent)
extern "C" bool TestComponent_op_Equality_m918 (Object_t * __this /* static, unused */, TestComponent_t220 * ___a, TestComponent_t220 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestComponent::op_Inequality(UnityTest.TestComponent,UnityTest.TestComponent)
extern "C" bool TestComponent_op_Inequality_m919 (Object_t * __this /* static, unused */, TestComponent_t220 * ___a, TestComponent_t220 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestComponent::<IsExludedOnThisPlatform>m__5(System.String)
extern "C" bool TestComponent_U3CIsExludedOnThisPlatformU3Em__5_m920 (Object_t * __this /* static, unused */, String_t* ___platform, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityTest.TestComponent::<IsExceptionExpected>m__6(System.String)
extern "C" String_t* TestComponent_U3CIsExceptionExpectedU3Em__6_m921 (Object_t * __this /* static, unused */, String_t* ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Type> UnityTest.TestComponent::<GetTypeByName>m__7(System.Reflection.Assembly)
extern "C" Object_t* TestComponent_U3CGetTypeByNameU3Em__7_m922 (Object_t * __this /* static, unused */, Assembly_t215 * ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestComponent::<FindAllTopTestsOnScene>m__9(UnityTest.TestComponent)
extern "C" bool TestComponent_U3CFindAllTopTestsOnSceneU3Em__9_m923 (Object_t * __this /* static, unused */, TestComponent_t220 * ___component, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestComponent::<FindAllDynamicTestsOnScene>m__A(UnityTest.TestComponent)
extern "C" bool TestComponent_U3CFindAllDynamicTestsOnSceneU3Em__A_m924 (Object_t * __this /* static, unused */, TestComponent_t220 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityTest.TestComponent::UnityTest.ITestComponent.get_gameObject()
extern "C" GameObject_t141 * TestComponent_UnityTest_ITestComponent_get_gameObject_m925 (TestComponent_t220 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
