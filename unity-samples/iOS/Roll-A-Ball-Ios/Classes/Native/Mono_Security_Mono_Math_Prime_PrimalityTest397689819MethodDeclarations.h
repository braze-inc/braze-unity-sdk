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

// Mono.Math.Prime.PrimalityTest
struct PrimalityTest_t397689820;
// System.Object
struct Il2CppObject;
// Mono.Math.BigInteger
struct BigInteger_t1694088928;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "Mono_Security_Mono_Math_BigInteger1694088927.h"
#include "Mono_Security_Mono_Math_Prime_ConfidenceFactor2428357797.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void Mono.Math.Prime.PrimalityTest::.ctor(System.Object,System.IntPtr)
extern "C"  void PrimalityTest__ctor_m2328223289 (PrimalityTest_t397689820 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.Prime.PrimalityTest::Invoke(Mono.Math.BigInteger,Mono.Math.Prime.ConfidenceFactor)
extern "C"  bool PrimalityTest_Invoke_m1898501111 (PrimalityTest_t397689820 * __this, BigInteger_t1694088928 * ___bi, int32_t ___confidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool pinvoke_delegate_wrapper_PrimalityTest_t397689820(Il2CppObject* delegate, BigInteger_t1694088928 * ___bi, int32_t ___confidence);
// System.IAsyncResult Mono.Math.Prime.PrimalityTest::BeginInvoke(Mono.Math.BigInteger,Mono.Math.Prime.ConfidenceFactor,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * PrimalityTest_BeginInvoke_m3294511682 (PrimalityTest_t397689820 * __this, BigInteger_t1694088928 * ___bi, int32_t ___confidence, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.Prime.PrimalityTest::EndInvoke(System.IAsyncResult)
extern "C"  bool PrimalityTest_EndInvoke_m1090214203 (PrimalityTest_t397689820 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
