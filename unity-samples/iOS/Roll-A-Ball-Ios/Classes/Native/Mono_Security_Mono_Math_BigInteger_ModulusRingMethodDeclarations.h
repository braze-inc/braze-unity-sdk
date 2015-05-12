#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t1362;
// Mono.Math.BigInteger
struct BigInteger_t1361;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
 void ModulusRing__ctor_m5515 (ModulusRing_t1362 * __this, BigInteger_t1361 * ___modulus, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
 void ModulusRing_BarrettReduction_m5516 (ModulusRing_t1362 * __this, BigInteger_t1361 * ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t1361 * ModulusRing_Multiply_m5517 (ModulusRing_t1362 * __this, BigInteger_t1361 * ___a, BigInteger_t1361 * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t1361 * ModulusRing_Difference_m5518 (ModulusRing_t1362 * __this, BigInteger_t1361 * ___a, BigInteger_t1361 * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t1361 * ModulusRing_Pow_m5519 (ModulusRing_t1362 * __this, BigInteger_t1361 * ___a, BigInteger_t1361 * ___k, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
 BigInteger_t1361 * ModulusRing_Pow_m5520 (ModulusRing_t1362 * __this, uint32_t ___b, BigInteger_t1361 * ___exp, MethodInfo* method) IL2CPP_METHOD_ATTR;
