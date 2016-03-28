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

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t948575272;
// Mono.Math.BigInteger
struct BigInteger_t1694088928;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Math_BigInteger1694088927.h"

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C"  void ModulusRing__ctor_m2037212078 (ModulusRing_t948575272 * __this, BigInteger_t1694088928 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C"  void ModulusRing_BarrettReduction_m1160185617 (ModulusRing_t948575272 * __this, BigInteger_t1694088928 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  BigInteger_t1694088928 * ModulusRing_Multiply_m1902123335 (ModulusRing_t948575272 * __this, BigInteger_t1694088928 * ___a, BigInteger_t1694088928 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  BigInteger_t1694088928 * ModulusRing_Difference_m2583958286 (ModulusRing_t948575272 * __this, BigInteger_t1694088928 * ___a, BigInteger_t1694088928 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  BigInteger_t1694088928 * ModulusRing_Pow_m668600583 (ModulusRing_t948575272 * __this, BigInteger_t1694088928 * ___a, BigInteger_t1694088928 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C"  BigInteger_t1694088928 * ModulusRing_Pow_m3374554770 (ModulusRing_t948575272 * __this, uint32_t ___b, BigInteger_t1694088928 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
