#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t1816;
// Mono.Math.BigInteger
struct BigInteger_t1811;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
 void ModulusRing__ctor_m8702 (ModulusRing_t1816 * __this, BigInteger_t1811 * ___modulus, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
 void ModulusRing_BarrettReduction_m8703 (ModulusRing_t1816 * __this, BigInteger_t1811 * ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t1811 * ModulusRing_Multiply_m8704 (ModulusRing_t1816 * __this, BigInteger_t1811 * ___a, BigInteger_t1811 * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t1811 * ModulusRing_Difference_m8705 (ModulusRing_t1816 * __this, BigInteger_t1811 * ___a, BigInteger_t1811 * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t1811 * ModulusRing_Pow_m8706 (ModulusRing_t1816 * __this, BigInteger_t1811 * ___a, BigInteger_t1811 * ___k, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
 BigInteger_t1811 * ModulusRing_Pow_m8707 (ModulusRing_t1816 * __this, uint32_t ___b, BigInteger_t1811 * ___exp, MethodInfo* method) IL2CPP_METHOD_ATTR;
