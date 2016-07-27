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
struct AssertionException_t2411100170;
// UnityTest.AssertionComponent
struct AssertionComponent_t3824534712;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_UnityTest_AssertionComponent3824534712.h"

// System.Void UnityTest.AssertionException::.ctor(UnityTest.AssertionComponent)
extern "C"  void AssertionException__ctor_m3275599109 (AssertionException_t2411100170 * __this, AssertionComponent_t3824534712 * ___assertion0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityTest.AssertionException::get_StackTrace()
extern "C"  String_t* AssertionException_get_StackTrace_m3923625766 (AssertionException_t2411100170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
