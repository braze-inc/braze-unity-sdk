#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger
struct BigInteger_t1799;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t1366;
// System.Byte[]
struct ByteU5BU5D_t97;
// System.String
struct String_t;
// System.Object
struct Object_t;
// Mono.Math.BigInteger/Sign
#include "mscorlib_Mono_Math_BigInteger_Sign.h"

// System.Void Mono.Math.BigInteger::.ctor(Mono.Math.BigInteger/Sign,System.UInt32)
 void BigInteger__ctor_m8629 (BigInteger_t1799 * __this, int32_t ___sign, uint32_t ___len, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::.ctor(Mono.Math.BigInteger)
 void BigInteger__ctor_m8630 (BigInteger_t1799 * __this, BigInteger_t1799 * ___bi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::.ctor(Mono.Math.BigInteger,System.UInt32)
 void BigInteger__ctor_m8631 (BigInteger_t1799 * __this, BigInteger_t1799 * ___bi, uint32_t ___len, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::.ctor(System.Byte[])
 void BigInteger__ctor_m8632 (BigInteger_t1799 * __this, ByteU5BU5D_t97* ___inData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::.ctor(System.UInt32)
 void BigInteger__ctor_m8633 (BigInteger_t1799 * __this, uint32_t ___ui, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::.cctor()
 void BigInteger__cctor_m8634 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RandomNumberGenerator Mono.Math.BigInteger::get_Rng()
 RandomNumberGenerator_t1366 * BigInteger_get_Rng_m8635 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::GenerateRandom(System.Int32,System.Security.Cryptography.RandomNumberGenerator)
 BigInteger_t1799 * BigInteger_GenerateRandom_m8636 (Object_t * __this/* static, unused */, int32_t ___bits, RandomNumberGenerator_t1366 * ___rng, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::GenerateRandom(System.Int32)
 BigInteger_t1799 * BigInteger_GenerateRandom_m8637 (Object_t * __this/* static, unused */, int32_t ___bits, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::Randomize(System.Security.Cryptography.RandomNumberGenerator)
 void BigInteger_Randomize_m8638 (BigInteger_t1799 * __this, RandomNumberGenerator_t1366 * ___rng, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::Randomize()
 void BigInteger_Randomize_m8639 (BigInteger_t1799 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Math.BigInteger::BitCount()
 int32_t BigInteger_BitCount_m8640 (BigInteger_t1799 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::TestBit(System.UInt32)
 bool BigInteger_TestBit_m8641 (BigInteger_t1799 * __this, uint32_t ___bitNum, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::TestBit(System.Int32)
 bool BigInteger_TestBit_m8642 (BigInteger_t1799 * __this, int32_t ___bitNum, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::SetBit(System.UInt32)
 void BigInteger_SetBit_m8643 (BigInteger_t1799 * __this, uint32_t ___bitNum, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::SetBit(System.UInt32,System.Boolean)
 void BigInteger_SetBit_m8644 (BigInteger_t1799 * __this, uint32_t ___bitNum, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Math.BigInteger::LowestSetBit()
 int32_t BigInteger_LowestSetBit_m8645 (BigInteger_t1799 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Math.BigInteger::GetBytes()
 ByteU5BU5D_t97* BigInteger_GetBytes_m8646 (BigInteger_t1799 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Math.BigInteger::ToString(System.UInt32)
 String_t* BigInteger_ToString_m8647 (BigInteger_t1799 * __this, uint32_t ___radix, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Math.BigInteger::ToString(System.UInt32,System.String)
 String_t* BigInteger_ToString_m8648 (BigInteger_t1799 * __this, uint32_t ___radix, String_t* ___characterSet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::Normalize()
 void BigInteger_Normalize_m8649 (BigInteger_t1799 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::Clear()
 void BigInteger_Clear_m8650 (BigInteger_t1799 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Math.BigInteger::GetHashCode()
 int32_t BigInteger_GetHashCode_m8651 (BigInteger_t1799 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Math.BigInteger::ToString()
 String_t* BigInteger_ToString_m8652 (BigInteger_t1799 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::Equals(System.Object)
 bool BigInteger_Equals_m8653 (BigInteger_t1799 * __this, Object_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::ModInverse(Mono.Math.BigInteger)
 BigInteger_t1799 * BigInteger_ModInverse_m8654 (BigInteger_t1799 * __this, BigInteger_t1799 * ___modulus, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::ModPow(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t1799 * BigInteger_ModPow_m8655 (BigInteger_t1799 * __this, BigInteger_t1799 * ___exp, BigInteger_t1799 * ___n, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::IsProbablePrime()
 bool BigInteger_IsProbablePrime_m8656 (BigInteger_t1799 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::GeneratePseudoPrime(System.Int32)
 BigInteger_t1799 * BigInteger_GeneratePseudoPrime_m8657 (Object_t * __this/* static, unused */, int32_t ___bits, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::Incr2()
 void BigInteger_Incr2_m8658 (BigInteger_t1799 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Implicit(System.UInt32)
 BigInteger_t1799 * BigInteger_op_Implicit_m8659 (Object_t * __this/* static, unused */, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Implicit(System.Int32)
 BigInteger_t1799 * BigInteger_op_Implicit_m8660 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Addition(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t1799 * BigInteger_op_Addition_m8661 (Object_t * __this/* static, unused */, BigInteger_t1799 * ___bi1, BigInteger_t1799 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Subtraction(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t1799 * BigInteger_op_Subtraction_m8662 (Object_t * __this/* static, unused */, BigInteger_t1799 * ___bi1, BigInteger_t1799 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger::op_Modulus(Mono.Math.BigInteger,System.UInt32)
 uint32_t BigInteger_op_Modulus_m8663 (Object_t * __this/* static, unused */, BigInteger_t1799 * ___bi, uint32_t ___ui, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Modulus(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t1799 * BigInteger_op_Modulus_m8664 (Object_t * __this/* static, unused */, BigInteger_t1799 * ___bi1, BigInteger_t1799 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Division(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t1799 * BigInteger_op_Division_m8665 (Object_t * __this/* static, unused */, BigInteger_t1799 * ___bi1, BigInteger_t1799 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t1799 * BigInteger_op_Multiply_m8666 (Object_t * __this/* static, unused */, BigInteger_t1799 * ___bi1, BigInteger_t1799 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Multiply(Mono.Math.BigInteger,System.Int32)
 BigInteger_t1799 * BigInteger_op_Multiply_m8667 (Object_t * __this/* static, unused */, BigInteger_t1799 * ___bi, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_LeftShift(Mono.Math.BigInteger,System.Int32)
 BigInteger_t1799 * BigInteger_op_LeftShift_m8668 (Object_t * __this/* static, unused */, BigInteger_t1799 * ___bi1, int32_t ___shiftVal, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_RightShift(Mono.Math.BigInteger,System.Int32)
 BigInteger_t1799 * BigInteger_op_RightShift_m8669 (Object_t * __this/* static, unused */, BigInteger_t1799 * ___bi1, int32_t ___shiftVal, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_Equality(Mono.Math.BigInteger,System.UInt32)
 bool BigInteger_op_Equality_m8670 (Object_t * __this/* static, unused */, BigInteger_t1799 * ___bi1, uint32_t ___ui, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_Inequality(Mono.Math.BigInteger,System.UInt32)
 bool BigInteger_op_Inequality_m8671 (Object_t * __this/* static, unused */, BigInteger_t1799 * ___bi1, uint32_t ___ui, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_Equality(Mono.Math.BigInteger,Mono.Math.BigInteger)
 bool BigInteger_op_Equality_m8672 (Object_t * __this/* static, unused */, BigInteger_t1799 * ___bi1, BigInteger_t1799 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_Inequality(Mono.Math.BigInteger,Mono.Math.BigInteger)
 bool BigInteger_op_Inequality_m8673 (Object_t * __this/* static, unused */, BigInteger_t1799 * ___bi1, BigInteger_t1799 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_GreaterThan(Mono.Math.BigInteger,Mono.Math.BigInteger)
 bool BigInteger_op_GreaterThan_m8674 (Object_t * __this/* static, unused */, BigInteger_t1799 * ___bi1, BigInteger_t1799 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_LessThan(Mono.Math.BigInteger,Mono.Math.BigInteger)
 bool BigInteger_op_LessThan_m8675 (Object_t * __this/* static, unused */, BigInteger_t1799 * ___bi1, BigInteger_t1799 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_GreaterThanOrEqual(Mono.Math.BigInteger,Mono.Math.BigInteger)
 bool BigInteger_op_GreaterThanOrEqual_m8676 (Object_t * __this/* static, unused */, BigInteger_t1799 * ___bi1, BigInteger_t1799 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_LessThanOrEqual(Mono.Math.BigInteger,Mono.Math.BigInteger)
 bool BigInteger_op_LessThanOrEqual_m8677 (Object_t * __this/* static, unused */, BigInteger_t1799 * ___bi1, BigInteger_t1799 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
