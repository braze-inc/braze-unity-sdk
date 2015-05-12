#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityTest.AssertionException
struct AssertionException_t138;
// System.String
struct String_t;
// UnityTest.AssertionComponent
struct AssertionComponent_t135;

// System.Void UnityTest.AssertionException::.ctor(UnityTest.AssertionComponent)
 void AssertionException__ctor_m708 (AssertionException_t138 * __this, AssertionComponent_t135 * ___assertion, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityTest.AssertionException::get_StackTrace()
 String_t* AssertionException_get_StackTrace_m709 (AssertionException_t138 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
