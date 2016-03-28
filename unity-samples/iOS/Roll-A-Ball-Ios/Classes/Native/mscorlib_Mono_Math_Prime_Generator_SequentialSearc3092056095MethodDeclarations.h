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

// Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase
struct SequentialSearchPrimeGeneratorBase_t3092056095;
// Mono.Math.BigInteger
struct BigInteger_t1694088927;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_Mono_Math_BigInteger1694088927.h"

// System.Void Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::.ctor()
extern "C"  void SequentialSearchPrimeGeneratorBase__ctor_m2757499105 (SequentialSearchPrimeGeneratorBase_t3092056095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::GenerateSearchBase(System.Int32,System.Object)
extern "C"  BigInteger_t1694088927 * SequentialSearchPrimeGeneratorBase_GenerateSearchBase_m2793952994 (SequentialSearchPrimeGeneratorBase_t3092056095 * __this, int32_t ___bits, Il2CppObject * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::GenerateNewPrime(System.Int32)
extern "C"  BigInteger_t1694088927 * SequentialSearchPrimeGeneratorBase_GenerateNewPrime_m1129470714 (SequentialSearchPrimeGeneratorBase_t3092056095 * __this, int32_t ___bits, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::GenerateNewPrime(System.Int32,System.Object)
extern "C"  BigInteger_t1694088927 * SequentialSearchPrimeGeneratorBase_GenerateNewPrime_m220784712 (SequentialSearchPrimeGeneratorBase_t3092056095 * __this, int32_t ___bits, Il2CppObject * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::IsPrimeAcceptable(Mono.Math.BigInteger,System.Object)
extern "C"  bool SequentialSearchPrimeGeneratorBase_IsPrimeAcceptable_m465227145 (SequentialSearchPrimeGeneratorBase_t3092056095 * __this, BigInteger_t1694088927 * ___bi, Il2CppObject * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
