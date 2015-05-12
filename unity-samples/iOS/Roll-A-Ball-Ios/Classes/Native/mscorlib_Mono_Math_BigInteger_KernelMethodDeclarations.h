#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/Kernel
struct Kernel_t1817;
// Mono.Math.BigInteger
struct BigInteger_t1811;
// Mono.Math.BigInteger[]
struct BigIntegerU5BU5D_t1818;
// System.UInt32[]
struct UInt32U5BU5D_t1376;
// Mono.Math.BigInteger/Sign
#include "mscorlib_Mono_Math_BigInteger_Sign.h"

// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::AddSameSign(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t1811 * Kernel_AddSameSign_m8708 (Object_t * __this/* static, unused */, BigInteger_t1811 * ___bi1, BigInteger_t1811 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::Subtract(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t1811 * Kernel_Subtract_m8709 (Object_t * __this/* static, unused */, BigInteger_t1811 * ___big, BigInteger_t1811 * ___small, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::MinusEq(Mono.Math.BigInteger,Mono.Math.BigInteger)
 void Kernel_MinusEq_m8710 (Object_t * __this/* static, unused */, BigInteger_t1811 * ___big, BigInteger_t1811 * ___small, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::PlusEq(Mono.Math.BigInteger,Mono.Math.BigInteger)
 void Kernel_PlusEq_m8711 (Object_t * __this/* static, unused */, BigInteger_t1811 * ___bi1, BigInteger_t1811 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger/Sign Mono.Math.BigInteger/Kernel::Compare(Mono.Math.BigInteger,Mono.Math.BigInteger)
 int32_t Kernel_Compare_m8712 (Object_t * __this/* static, unused */, BigInteger_t1811 * ___bi1, BigInteger_t1811 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::SingleByteDivideInPlace(Mono.Math.BigInteger,System.UInt32)
 uint32_t Kernel_SingleByteDivideInPlace_m8713 (Object_t * __this/* static, unused */, BigInteger_t1811 * ___n, uint32_t ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::DwordMod(Mono.Math.BigInteger,System.UInt32)
 uint32_t Kernel_DwordMod_m8714 (Object_t * __this/* static, unused */, BigInteger_t1811 * ___n, uint32_t ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger[] Mono.Math.BigInteger/Kernel::DwordDivMod(Mono.Math.BigInteger,System.UInt32)
 BigIntegerU5BU5D_t1818* Kernel_DwordDivMod_m8715 (Object_t * __this/* static, unused */, BigInteger_t1811 * ___n, uint32_t ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger[] Mono.Math.BigInteger/Kernel::multiByteDivide(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigIntegerU5BU5D_t1818* Kernel_multiByteDivide_m8716 (Object_t * __this/* static, unused */, BigInteger_t1811 * ___bi1, BigInteger_t1811 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::LeftShift(Mono.Math.BigInteger,System.Int32)
 BigInteger_t1811 * Kernel_LeftShift_m8717 (Object_t * __this/* static, unused */, BigInteger_t1811 * ___bi, int32_t ___n, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::RightShift(Mono.Math.BigInteger,System.Int32)
 BigInteger_t1811 * Kernel_RightShift_m8718 (Object_t * __this/* static, unused */, BigInteger_t1811 * ___bi, int32_t ___n, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::MultiplyByDword(Mono.Math.BigInteger,System.UInt32)
 BigInteger_t1811 * Kernel_MultiplyByDword_m8719 (Object_t * __this/* static, unused */, BigInteger_t1811 * ___n, uint32_t ___f, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::Multiply(System.UInt32[],System.UInt32,System.UInt32,System.UInt32[],System.UInt32,System.UInt32,System.UInt32[],System.UInt32)
 void Kernel_Multiply_m8720 (Object_t * __this/* static, unused */, UInt32U5BU5D_t1376* ___x, uint32_t ___xOffset, uint32_t ___xLen, UInt32U5BU5D_t1376* ___y, uint32_t ___yOffset, uint32_t ___yLen, UInt32U5BU5D_t1376* ___d, uint32_t ___dOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::MultiplyMod2p32pmod(System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.Int32)
 void Kernel_MultiplyMod2p32pmod_m8721 (Object_t * __this/* static, unused */, UInt32U5BU5D_t1376* ___x, int32_t ___xOffset, int32_t ___xLen, UInt32U5BU5D_t1376* ___y, int32_t ___yOffest, int32_t ___yLen, UInt32U5BU5D_t1376* ___d, int32_t ___dOffset, int32_t ___mod, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::modInverse(Mono.Math.BigInteger,System.UInt32)
 uint32_t Kernel_modInverse_m8722 (Object_t * __this/* static, unused */, BigInteger_t1811 * ___bi, uint32_t ___modulus, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::modInverse(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t1811 * Kernel_modInverse_m8723 (Object_t * __this/* static, unused */, BigInteger_t1811 * ___bi, BigInteger_t1811 * ___modulus, MethodInfo* method) IL2CPP_METHOD_ATTR;
