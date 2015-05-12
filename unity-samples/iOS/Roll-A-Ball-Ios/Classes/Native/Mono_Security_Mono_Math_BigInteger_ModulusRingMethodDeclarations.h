#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t1373;
// Mono.Math.BigInteger
struct BigInteger_t1372;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
 void ModulusRing__ctor_m5609 (ModulusRing_t1373 * __this, BigInteger_t1372 * ___modulus, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
 void ModulusRing_BarrettReduction_m5610 (ModulusRing_t1373 * __this, BigInteger_t1372 * ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t1372 * ModulusRing_Multiply_m5611 (ModulusRing_t1373 * __this, BigInteger_t1372 * ___a, BigInteger_t1372 * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t1372 * ModulusRing_Difference_m5612 (ModulusRing_t1373 * __this, BigInteger_t1372 * ___a, BigInteger_t1372 * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t1372 * ModulusRing_Pow_m5613 (ModulusRing_t1373 * __this, BigInteger_t1372 * ___a, BigInteger_t1372 * ___k, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
 BigInteger_t1372 * ModulusRing_Pow_m5614 (ModulusRing_t1373 * __this, uint32_t ___b, BigInteger_t1372 * ___exp, MethodInfo* method) IL2CPP_METHOD_ATTR;
