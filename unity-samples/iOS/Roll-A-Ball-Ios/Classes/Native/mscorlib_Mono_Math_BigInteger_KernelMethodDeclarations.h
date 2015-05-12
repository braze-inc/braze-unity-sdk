#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/Kernel
struct Kernel_t1805;
// Mono.Math.BigInteger
struct BigInteger_t1799;
// Mono.Math.BigInteger[]
struct BigIntegerU5BU5D_t1806;
// System.UInt32[]
struct UInt32U5BU5D_t1365;
// Mono.Math.BigInteger/Sign
#include "mscorlib_Mono_Math_BigInteger_Sign.h"

// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::AddSameSign(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t1799 * Kernel_AddSameSign_m8613 (Object_t * __this/* static, unused */, BigInteger_t1799 * ___bi1, BigInteger_t1799 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::Subtract(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t1799 * Kernel_Subtract_m8614 (Object_t * __this/* static, unused */, BigInteger_t1799 * ___big, BigInteger_t1799 * ___small, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::MinusEq(Mono.Math.BigInteger,Mono.Math.BigInteger)
 void Kernel_MinusEq_m8615 (Object_t * __this/* static, unused */, BigInteger_t1799 * ___big, BigInteger_t1799 * ___small, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::PlusEq(Mono.Math.BigInteger,Mono.Math.BigInteger)
 void Kernel_PlusEq_m8616 (Object_t * __this/* static, unused */, BigInteger_t1799 * ___bi1, BigInteger_t1799 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger/Sign Mono.Math.BigInteger/Kernel::Compare(Mono.Math.BigInteger,Mono.Math.BigInteger)
 int32_t Kernel_Compare_m8617 (Object_t * __this/* static, unused */, BigInteger_t1799 * ___bi1, BigInteger_t1799 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::SingleByteDivideInPlace(Mono.Math.BigInteger,System.UInt32)
 uint32_t Kernel_SingleByteDivideInPlace_m8618 (Object_t * __this/* static, unused */, BigInteger_t1799 * ___n, uint32_t ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::DwordMod(Mono.Math.BigInteger,System.UInt32)
 uint32_t Kernel_DwordMod_m8619 (Object_t * __this/* static, unused */, BigInteger_t1799 * ___n, uint32_t ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger[] Mono.Math.BigInteger/Kernel::DwordDivMod(Mono.Math.BigInteger,System.UInt32)
 BigIntegerU5BU5D_t1806* Kernel_DwordDivMod_m8620 (Object_t * __this/* static, unused */, BigInteger_t1799 * ___n, uint32_t ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger[] Mono.Math.BigInteger/Kernel::multiByteDivide(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigIntegerU5BU5D_t1806* Kernel_multiByteDivide_m8621 (Object_t * __this/* static, unused */, BigInteger_t1799 * ___bi1, BigInteger_t1799 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::LeftShift(Mono.Math.BigInteger,System.Int32)
 BigInteger_t1799 * Kernel_LeftShift_m8622 (Object_t * __this/* static, unused */, BigInteger_t1799 * ___bi, int32_t ___n, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::RightShift(Mono.Math.BigInteger,System.Int32)
 BigInteger_t1799 * Kernel_RightShift_m8623 (Object_t * __this/* static, unused */, BigInteger_t1799 * ___bi, int32_t ___n, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::MultiplyByDword(Mono.Math.BigInteger,System.UInt32)
 BigInteger_t1799 * Kernel_MultiplyByDword_m8624 (Object_t * __this/* static, unused */, BigInteger_t1799 * ___n, uint32_t ___f, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::Multiply(System.UInt32[],System.UInt32,System.UInt32,System.UInt32[],System.UInt32,System.UInt32,System.UInt32[],System.UInt32)
 void Kernel_Multiply_m8625 (Object_t * __this/* static, unused */, UInt32U5BU5D_t1365* ___x, uint32_t ___xOffset, uint32_t ___xLen, UInt32U5BU5D_t1365* ___y, uint32_t ___yOffset, uint32_t ___yLen, UInt32U5BU5D_t1365* ___d, uint32_t ___dOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::MultiplyMod2p32pmod(System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.Int32)
 void Kernel_MultiplyMod2p32pmod_m8626 (Object_t * __this/* static, unused */, UInt32U5BU5D_t1365* ___x, int32_t ___xOffset, int32_t ___xLen, UInt32U5BU5D_t1365* ___y, int32_t ___yOffest, int32_t ___yLen, UInt32U5BU5D_t1365* ___d, int32_t ___dOffset, int32_t ___mod, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::modInverse(Mono.Math.BigInteger,System.UInt32)
 uint32_t Kernel_modInverse_m8627 (Object_t * __this/* static, unused */, BigInteger_t1799 * ___bi, uint32_t ___modulus, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::modInverse(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t1799 * Kernel_modInverse_m8628 (Object_t * __this/* static, unused */, BigInteger_t1799 * ___bi, BigInteger_t1799 * ___modulus, MethodInfo* method) IL2CPP_METHOD_ATTR;
