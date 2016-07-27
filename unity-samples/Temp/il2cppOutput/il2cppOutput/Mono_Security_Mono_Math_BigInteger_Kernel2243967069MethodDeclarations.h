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
struct BigInteger_t1694088928;
// Mono.Math.BigInteger[]
struct BigIntegerU5BU5D_t909469383;
// System.UInt32[]
struct UInt32U5BU5D_t2133601851;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Math_BigInteger1694088927.h"
#include "Mono_Security_Mono_Math_BigInteger_Sign2576861.h"

// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::AddSameSign(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  BigInteger_t1694088928 * Kernel_AddSameSign_m3951710603 (Il2CppObject * __this /* static, unused */, BigInteger_t1694088928 * ___bi10, BigInteger_t1694088928 * ___bi21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::Subtract(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  BigInteger_t1694088928 * Kernel_Subtract_m593759655 (Il2CppObject * __this /* static, unused */, BigInteger_t1694088928 * ___big0, BigInteger_t1694088928 * ___small1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::MinusEq(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  void Kernel_MinusEq_m2588038513 (Il2CppObject * __this /* static, unused */, BigInteger_t1694088928 * ___big0, BigInteger_t1694088928 * ___small1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::PlusEq(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  void Kernel_PlusEq_m1327972151 (Il2CppObject * __this /* static, unused */, BigInteger_t1694088928 * ___bi10, BigInteger_t1694088928 * ___bi21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger/Sign Mono.Math.BigInteger/Kernel::Compare(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  int32_t Kernel_Compare_m3514403080 (Il2CppObject * __this /* static, unused */, BigInteger_t1694088928 * ___bi10, BigInteger_t1694088928 * ___bi21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::SingleByteDivideInPlace(Mono.Math.BigInteger,System.UInt32)
extern "C"  uint32_t Kernel_SingleByteDivideInPlace_m746013128 (Il2CppObject * __this /* static, unused */, BigInteger_t1694088928 * ___n0, uint32_t ___d1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::DwordMod(Mono.Math.BigInteger,System.UInt32)
extern "C"  uint32_t Kernel_DwordMod_m419221597 (Il2CppObject * __this /* static, unused */, BigInteger_t1694088928 * ___n0, uint32_t ___d1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger[] Mono.Math.BigInteger/Kernel::DwordDivMod(Mono.Math.BigInteger,System.UInt32)
extern "C"  BigIntegerU5BU5D_t909469383* Kernel_DwordDivMod_m3508261007 (Il2CppObject * __this /* static, unused */, BigInteger_t1694088928 * ___n0, uint32_t ___d1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger[] Mono.Math.BigInteger/Kernel::multiByteDivide(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  BigIntegerU5BU5D_t909469383* Kernel_multiByteDivide_m1455363991 (Il2CppObject * __this /* static, unused */, BigInteger_t1694088928 * ___bi10, BigInteger_t1694088928 * ___bi21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::LeftShift(Mono.Math.BigInteger,System.Int32)
extern "C"  BigInteger_t1694088928 * Kernel_LeftShift_m3640718462 (Il2CppObject * __this /* static, unused */, BigInteger_t1694088928 * ___bi0, int32_t ___n1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::RightShift(Mono.Math.BigInteger,System.Int32)
extern "C"  BigInteger_t1694088928 * Kernel_RightShift_m1364066239 (Il2CppObject * __this /* static, unused */, BigInteger_t1694088928 * ___bi0, int32_t ___n1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::Multiply(System.UInt32[],System.UInt32,System.UInt32,System.UInt32[],System.UInt32,System.UInt32,System.UInt32[],System.UInt32)
extern "C"  void Kernel_Multiply_m1952926483 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t2133601851* ___x0, uint32_t ___xOffset1, uint32_t ___xLen2, UInt32U5BU5D_t2133601851* ___y3, uint32_t ___yOffset4, uint32_t ___yLen5, UInt32U5BU5D_t2133601851* ___d6, uint32_t ___dOffset7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::MultiplyMod2p32pmod(System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.Int32)
extern "C"  void Kernel_MultiplyMod2p32pmod_m2080485974 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t2133601851* ___x0, int32_t ___xOffset1, int32_t ___xLen2, UInt32U5BU5D_t2133601851* ___y3, int32_t ___yOffest4, int32_t ___yLen5, UInt32U5BU5D_t2133601851* ___d6, int32_t ___dOffset7, int32_t ___mod8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::modInverse(Mono.Math.BigInteger,System.UInt32)
extern "C"  uint32_t Kernel_modInverse_m2584089367 (Il2CppObject * __this /* static, unused */, BigInteger_t1694088928 * ___bi0, uint32_t ___modulus1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::modInverse(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  BigInteger_t1694088928 * Kernel_modInverse_m2477583693 (Il2CppObject * __this /* static, unused */, BigInteger_t1694088928 * ___bi0, BigInteger_t1694088928 * ___modulus1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
