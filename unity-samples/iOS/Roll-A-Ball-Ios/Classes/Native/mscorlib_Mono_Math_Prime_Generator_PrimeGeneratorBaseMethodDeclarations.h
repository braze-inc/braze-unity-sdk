#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.Prime.Generator.PrimeGeneratorBase
struct PrimeGeneratorBase_t1797;
// Mono.Math.Prime.PrimalityTest
struct PrimalityTest_t1798;
// Mono.Math.BigInteger
struct BigInteger_t1799;
// Mono.Math.Prime.ConfidenceFactor
#include "mscorlib_Mono_Math_Prime_ConfidenceFactor.h"

// System.Void Mono.Math.Prime.Generator.PrimeGeneratorBase::.ctor()
 void PrimeGeneratorBase__ctor_m8594 (PrimeGeneratorBase_t1797 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.Prime.ConfidenceFactor Mono.Math.Prime.Generator.PrimeGeneratorBase::get_Confidence()
 int32_t PrimeGeneratorBase_get_Confidence_m8595 (PrimeGeneratorBase_t1797 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.Prime.PrimalityTest Mono.Math.Prime.Generator.PrimeGeneratorBase::get_PrimalityTest()
 PrimalityTest_t1798 * PrimeGeneratorBase_get_PrimalityTest_m8596 (PrimeGeneratorBase_t1797 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Math.Prime.Generator.PrimeGeneratorBase::get_TrialDivisionBounds()
 int32_t PrimeGeneratorBase_get_TrialDivisionBounds_m8597 (PrimeGeneratorBase_t1797 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.Prime.Generator.PrimeGeneratorBase::GenerateNewPrime(System.Int32)
