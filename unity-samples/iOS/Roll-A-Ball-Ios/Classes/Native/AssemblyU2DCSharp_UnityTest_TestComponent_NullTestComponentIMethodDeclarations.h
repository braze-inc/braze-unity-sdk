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

// UnityTest.TestComponent/NullTestComponentImpl
struct NullTestComponentImpl_t212;
// UnityTest.ITestComponent
struct ITestComponent_t204;
// UnityEngine.GameObject
struct GameObject_t141;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityTest.TestComponent/NullTestComponentImpl::.ctor()
extern "C" void NullTestComponentImpl__ctor_m865 (NullTestComponentImpl_t212 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityTest.TestComponent/NullTestComponentImpl::CompareTo(UnityTest.ITestComponent)
extern "C" int32_t NullTestComponentImpl_CompareTo_m866 (NullTestComponentImpl_t212 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestComponent/NullTestComponentImpl::EnableTest(System.Boolean)
extern "C" void NullTestComponentImpl_EnableTest_m867 (NullTestComponentImpl_t212 * __this, bool ___enable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestComponent/NullTestComponentImpl::IsTestGroup()
extern "C" bool NullTestComponentImpl_IsTestGroup_m868 (NullTestComponentImpl_t212 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityTest.TestComponent/NullTestComponentImpl::get_gameObject()
extern "C" GameObject_t141 * NullTestComponentImpl_get_gameObject_m869 (NullTestComponentImpl_t212 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestComponent/NullTestComponentImpl::set_gameObject(UnityEngine.GameObject)
extern "C" void NullTestComponentImpl_set_gameObject_m870 (NullTestComponentImpl_t212 * __this, GameObject_t141 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityTest.TestComponent/NullTestComponentImpl::get_Name()
extern "C" String_t* NullTestComponentImpl_get_Name_m871 (NullTestComponentImpl_t212 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityTest.ITestComponent UnityTest.TestComponent/NullTestComponentImpl::GetTestGroup()
extern "C" Object_t * NullTestComponentImpl_GetTestGroup_m872 (NullTestComponentImpl_t212 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestComponent/NullTestComponentImpl::IsExceptionExpected(System.String)
extern "C" bool NullTestComponentImpl_IsExceptionExpected_m873 (NullTestComponentImpl_t212 * __this, String_t* ___exceptionType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestComponent/NullTestComponentImpl::ShouldSucceedOnException()
extern "C" bool NullTestComponentImpl_ShouldSucceedOnException_m874 (NullTestComponentImpl_t212 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double UnityTest.TestComponent/NullTestComponentImpl::GetTimeout()
extern "C" double NullTestComponentImpl_GetTimeout_m875 (NullTestComponentImpl_t212 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestComponent/NullTestComponentImpl::IsIgnored()
extern "C" bool NullTestComponentImpl_IsIgnored_m876 (NullTestComponentImpl_t212 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestComponent/NullTestComponentImpl::ShouldSucceedOnAssertions()
extern "C" bool NullTestComponentImpl_ShouldSucceedOnAssertions_m877 (NullTestComponentImpl_t212 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestComponent/NullTestComponentImpl::IsExludedOnThisPlatform()
extern "C" bool NullTestComponentImpl_IsExludedOnThisPlatform_m878 (NullTestComponentImpl_t212 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
