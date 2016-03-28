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

// Mono.Math.BigInteger
struct BigInteger_t1694088927;
// Mono.Math.BigInteger[]
struct BigIntegerU5BU5D_t909469382;
// System.UInt32[]
struct UInt32U5BU5D_t2133601851;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_Mono_Math_BigInteger1694088927.h"
#include "mscorlib_Mono_Math_BigInteger_Sign2576861.h"

// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::AddSameSign(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  BigInteger_t1694088927 * Kernel_AddSameSign_m3215396177 (Il2CppObject * __this /* static, unused */, BigInteger_t1694088927 * ___bi1, BigInteger_t1694088927 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::Subtract(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  BigInteger_t1694088927 * Kernel_Subtract_m3798488993 (Il2CppObject * __this /* static, unused */, BigInteger_t1694088927 * ___big, BigInteger_t1694088927 * ___small, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::MinusEq(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  void Kernel_MinusEq_m327282667 (Il2CppObject * __this /* static, unused */, BigInteger_t1694088927 * ___big, BigInteger_t1694088927 * ___small, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::PlusEq(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  void Kernel_PlusEq_m3333254525 (Il2CppObject * __this /* static, unused */, BigInteger_t1694088927 * ___bi1, BigInteger_t1694088927 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger/Sign Mono.Math.BigInteger/Kernel::Compare(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  int32_t Kernel_Compare_m2163492354 (Il2CppObject * __this /* static, unused */, BigInteger_t1694088927 * ___bi1, BigInteger_t1694088927 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::SingleByteDivideInPlace(Mono.Math.BigInteger,System.UInt32)
extern "C"  uint32_t Kernel_SingleByteDivideInPlace_m1308374798 (Il2CppObject * __this /* static, unused */, BigInteger_t1694088927 * ___n, uint32_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::DwordMod(Mono.Math.BigInteger,System.UInt32)
extern "C"  uint32_t Kernel_DwordMod_m1976612823 (Il2CppObject * __this /* static, unused */, BigInteger_t1694088927 * ___n, uint32_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger[] Mono.Math.BigInteger/Kernel::DwordDivMod(Mono.Math.BigInteger,System.UInt32)
extern "C"  BigIntegerU5BU5D_t909469382* Kernel_DwordDivMod_m1857966345 (Il2CppObject * __this /* static, unused */, BigInteger_t1694088927 * ___n, uint32_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger[] Mono.Math.BigInteger/Kernel::multiByteDivide(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  BigIntegerU5BU5D_t909469382* Kernel_multiByteDivide_m3174393565 (Il2CppObject * __this /* static, unused */, BigInteger_t1694088927 * ___bi1, BigInteger_t1694088927 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::LeftShift(Mono.Math.BigInteger,System.Int32)
extern "C"  BigInteger_t1694088927 * Kernel_LeftShift_m2845478852 (Il2CppObject * __this /* static, unused */, BigInteger_t1694088927 * ___bi, int32_t ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::RightShift(Mono.Math.BigInteger,System.Int32)
extern "C"  BigInteger_t1694088927 * Kernel_RightShift_m2481442105 (Il2CppObject * __this /* static, unused */, BigInteger_t1694088927 * ___bi, int32_t ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::MultiplyByDword(Mono.Math.BigInteger,System.UInt32)
extern "C"  BigInteger_t1694088927 * Kernel_MultiplyByDword_m254641343 (Il2CppObject * __this /* static, unused */, BigInteger_t1694088927 * ___n, uint32_t ___f, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::Multiply(System.UInt32[],System.UInt32,System.UInt32,System.UInt32[],System.UInt32,System.UInt32,System.UInt32[],System.UInt32)
extern "C"  void Kernel_Multiply_m1732433625 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t2133601851* ___x, uint32_t ___xOffset, uint32_t ___xLen, UInt32U5BU5D_t2133601851* ___y, uint32_t ___yOffset, uint32_t ___yLen, UInt32U5BU5D_t2133601851* ___d, uint32_t ___dOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::MultiplyMod2p32pmod(System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.Int32)
extern "C"  void Kernel_MultiplyMod2p32pmod_m3017282768 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t2133601851* ___x, int32_t ___xOffset, int32_t ___xLen, UInt32U5BU5D_t2133601851* ___y, int32_t ___yOffest, int32_t ___yLen, UInt32U5BU5D_t2133601851* ___d, int32_t ___dOffset, int32_t ___mod, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::modInverse(Mono.Math.BigInteger,System.UInt32)
extern "C"  uint32_t Kernel_modInverse_m293471249 (Il2CppObject * __this /* static, unused */, BigInteger_t1694088927 * ___bi, uint32_t ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::modInverse(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  BigInteger_t1694088927 * Kernel_modInverse_m2730926279 (Il2CppObject * __this /* static, unused */, BigInteger_t1694088927 * ___bi, BigInteger_t1694088927 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
