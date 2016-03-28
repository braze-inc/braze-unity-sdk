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
struct SequentialSearchPrimeGeneratorBase_t3092056096;
// Mono.Math.BigInteger
struct BigInteger_t1694088928;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "Mono_Security_Mono_Math_BigInteger1694088927.h"

// System.Void Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::.ctor()
extern "C"  void SequentialSearchPrimeGeneratorBase__ctor_m3197013479 (SequentialSearchPrimeGeneratorBase_t3092056096 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::GenerateSearchBase(System.Int32,System.Object)
extern "C"  BigInteger_t1694088928 * SequentialSearchPrimeGeneratorBase_GenerateSearchBase_m3042338792 (SequentialSearchPrimeGeneratorBase_t3092056096 * __this, int32_t ___bits, Il2CppObject * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::GenerateNewPrime(System.Int32)
extern "C"  BigInteger_t1694088928 * SequentialSearchPrimeGeneratorBase_GenerateNewPrime_m2709469184 (SequentialSearchPrimeGeneratorBase_t3092056096 * __this, int32_t ___bits, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::GenerateNewPrime(System.Int32,System.Object)
extern "C"  BigInteger_t1694088928 * SequentialSearchPrimeGeneratorBase_GenerateNewPrime_m3023274702 (SequentialSearchPrimeGeneratorBase_t3092056096 * __this, int32_t ___bits, Il2CppObject * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::IsPrimeAcceptable(Mono.Math.BigInteger,System.Object)
extern "C"  bool SequentialSearchPrimeGeneratorBase_IsPrimeAcceptable_m3870219587 (SequentialSearchPrimeGeneratorBase_t3092056096 * __this, BigInteger_t1694088928 * ___bi, Il2CppObject * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
