#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/Kernel
struct Kernel_t1374;
// Mono.Math.BigInteger
struct BigInteger_t1372;
// Mono.Math.BigInteger[]
struct BigIntegerU5BU5D_t1375;
// System.UInt32[]
struct UInt32U5BU5D_t1376;
// Mono.Math.BigInteger/Sign
#include "Mono_Security_Mono_Math_BigInteger_Sign.h"

// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::AddSameSign(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t1372 * Kernel_AddSameSign_m5615 (Object_t * __this/* static, unused */, BigInteger_t1372 * ___bi1, BigInteger_t1372 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::Subtract(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t1372 * Kernel_Subtract_m5616 (Object_t * __this/* static, unused */, BigInteger_t1372 * ___big, BigInteger_t1372 * ___small, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::MinusEq(Mono.Math.BigInteger,Mono.Math.BigInteger)
 void Kernel_MinusEq_m5617 (Object_t * __this/* static, unused */, BigInteger_t1372 * ___big, BigInteger_t1372 * ___small, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::PlusEq(Mono.Math.BigInteger,Mono.Math.BigInteger)
 void Kernel_PlusEq_m5618 (Object_t * __this/* static, unused */, BigInteger_t1372 * ___bi1, BigInteger_t1372 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger/Sign Mono.Math.BigInteger/Kernel::Compare(Mono.Math.BigInteger,Mono.Math.BigInteger)
 int32_t Kernel_Compare_m5619 (Object_t * __this/* static, unused */, BigInteger_t1372 * ___bi1, BigInteger_t1372 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::SingleByteDivideInPlace(Mono.Math.BigInteger,System.UInt32)
 uint32_t Kernel_SingleByteDivideInPlace_m5620 (Object_t * __this/* static, unused */, BigInteger_t1372 * ___n, uint32_t ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::DwordMod(Mono.Math.BigInteger,System.UInt32)
 uint32_t Kernel_DwordMod_m5621 (Object_t * __this/* static, unused */, BigInteger_t1372 * ___n, uint32_t ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger[] Mono.Math.BigInteger/Kernel::DwordDivMod(Mono.Math.BigInteger,System.UInt32)
 BigIntegerU5BU5D_t1375* Kernel_DwordDivMod_m5622 (Object_t * __this/* static, unused */, BigInteger_t1372 * ___n, uint32_t ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger[] Mono.Math.BigInteger/Kernel::multiByteDivide(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigIntegerU5BU5D_t1375* Kernel_multiByteDivide_m5623 (Object_t * __this/* static, unused */, BigInteger_t1372 * ___bi1, BigInteger_t1372 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::LeftShift(Mono.Math.BigInteger,System.Int32)
 BigInteger_t1372 * Kernel_LeftShift_m5624 (Object_t * __this/* static, unused */, BigInteger_t1372 * ___bi, int32_t ___n, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::RightShift(Mono.Math.BigInteger,System.Int32)
 BigInteger_t1372 * Kernel_RightShift_m5625 (Object_t * __this/* static, unused */, BigInteger_t1372 * ___bi, int32_t ___n, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::Multiply(System.UInt32[],System.UInt32,System.UInt32,System.UInt32[],System.UInt32,System.UInt32,System.UInt32[],System.UInt32)
 void Kernel_Multiply_m5626 (Object_t * __this/* static, unused */, UInt32U5BU5D_t1376* ___x, uint32_t ___xOffset, uint32_t ___xLen, UInt32U5BU5D_t1376* ___y, uint32_t ___yOffset, uint32_t ___yLen, UInt32U5BU5D_t1376* ___d, uint32_t ___dOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::MultiplyMod2p32pmod(System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.Int32)
 void Kernel_MultiplyMod2p32pmod_m5627 (Object_t * __this/* static, unused */, UInt32U5BU5D_t1376* ___x, int32_t ___xOffset, int32_t ___xLen, UInt32U5BU5D_t1376* ___y, int32_t ___yOffest, int32_t ___yLen, UInt32U5BU5D_t1376* ___d, int32_t ___dOffset, int32_t ___mod, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::modInverse(Mono.Math.BigInteger,System.UInt32)
 uint32_t Kernel_modInverse_m5628 (Object_t * __this/* static, unused */, BigInteger_t1372 * ___bi, uint32_t ___modulus, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::modInverse(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t1372 * Kernel_modInverse_m5629 (Object_t * __this/* static, unused */, BigInteger_t1372 * ___bi, BigInteger_t1372 * ___modulus, MethodInfo* method) IL2CPP_METHOD_ATTR;
