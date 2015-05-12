#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityTest.AssertionException
struct AssertionException_t152;
// System.String
struct String_t;
// UnityTest.AssertionComponent
struct AssertionComponent_t148;

// System.Void UnityTest.AssertionException::.ctor(UnityTest.AssertionComponent)
 void AssertionException__ctor_m813 (AssertionException_t152 * __this, AssertionComponent_t148 * ___assertion, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityTest.AssertionException::get_StackTrace()
 String_t* AssertionException_get_StackTrace_m814 (AssertionException_t152 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
