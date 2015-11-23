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

// UnityTest.AssertionException
struct AssertionException_t137;
// UnityTest.AssertionComponent
struct AssertionComponent_t135;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityTest.AssertionException::.ctor(UnityTest.AssertionComponent)
extern "C" void AssertionException__ctor_m688 (AssertionException_t137 * __this, AssertionComponent_t135 * ___assertion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityTest.AssertionException::get_StackTrace()
extern "C" String_t* AssertionException_get_StackTrace_m689 (AssertionException_t137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
