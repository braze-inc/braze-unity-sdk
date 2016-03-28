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
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2174318432;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Math_BigInteger_Sign2576861.h"
#include "Mono_Security_Mono_Math_BigInteger1694088927.h"
#include "mscorlib_System_Security_Cryptography_RandomNumber2174318432.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"

// System.Void Mono.Math.BigInteger::.ctor(Mono.Math.BigInteger/Sign,System.UInt32)
extern "C"  void BigInteger__ctor_m2610662484 (BigInteger_t1694088928 * __this, int32_t ___sign, uint32_t ___len, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::.ctor(Mono.Math.BigInteger)
extern "C"  void BigInteger__ctor_m1318440774 (BigInteger_t1694088928 * __this, BigInteger_t1694088928 * ___bi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::.ctor(Mono.Math.BigInteger,System.UInt32)
extern "C"  void BigInteger__ctor_m3547305722 (BigInteger_t1694088928 * __this, BigInteger_t1694088928 * ___bi, uint32_t ___len, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::.ctor(System.Byte[])
extern "C"  void BigInteger__ctor_m2747162922 (BigInteger_t1694088928 * __this, ByteU5BU5D_t58506160* ___inData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::.ctor(System.UInt32)
extern "C"  void BigInteger__ctor_m1050530395 (BigInteger_t1694088928 * __this, uint32_t ___ui, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::.cctor()
extern "C"  void BigInteger__cctor_m2261677710 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RandomNumberGenerator Mono.Math.BigInteger::get_Rng()
extern "C"  RandomNumberGenerator_t2174318432 * BigInteger_get_Rng_m1505693788 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::GenerateRandom(System.Int32,System.Security.Cryptography.RandomNumberGenerator)
extern "C"  BigInteger_t1694088928 * BigInteger_GenerateRandom_m2595866790 (Il2CppObject * __this /* static, unused */, int32_t ___bits, RandomNumberGenerator_t2174318432 * ___rng, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::GenerateRandom(System.Int32)
extern "C"  BigInteger_t1694088928 * BigInteger_GenerateRandom_m1343108780 (Il2CppObject * __this /* static, unused */, int32_t ___bits, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Math.BigInteger::BitCount()
extern "C"  int32_t BigInteger_BitCount_m3880753871 (BigInteger_t1694088928 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::TestBit(System.Int32)
extern "C"  bool BigInteger_TestBit_m4085687739 (BigInteger_t1694088928 * __this, int32_t ___bitNum, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::SetBit(System.UInt32)
extern "C"  void BigInteger_SetBit_m3067778314 (BigInteger_t1694088928 * __this, uint32_t ___bitNum, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::SetBit(System.UInt32,System.Boolean)
extern "C"  void BigInteger_SetBit_m989579571 (BigInteger_t1694088928 * __this, uint32_t ___bitNum, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Math.BigInteger::LowestSetBit()
extern "C"  int32_t BigInteger_LowestSetBit_m644775850 (BigInteger_t1694088928 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Math.BigInteger::GetBytes()
extern "C"  ByteU5BU5D_t58506160* BigInteger_GetBytes_m561587716 (BigInteger_t1694088928 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Math.BigInteger::ToString(System.UInt32)
extern "C"  String_t* BigInteger_ToString_m3209284166 (BigInteger_t1694088928 * __this, uint32_t ___radix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Math.BigInteger::ToString(System.UInt32,System.String)
extern "C"  String_t* BigInteger_ToString_m2413330434 (BigInteger_t1694088928 * __this, uint32_t ___radix, String_t* ___characterSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::Normalize()
extern "C"  void BigInteger_Normalize_m2451454954 (BigInteger_t1694088928 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::Clear()
extern "C"  void BigInteger_Clear_m542683434 (BigInteger_t1694088928 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Math.BigInteger::GetHashCode()
extern "C"  int32_t BigInteger_GetHashCode_m3211366534 (BigInteger_t1694088928 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Math.BigInteger::ToString()
extern "C"  String_t* BigInteger_ToString_m1505524532 (BigInteger_t1694088928 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::Equals(System.Object)
extern "C"  bool BigInteger_Equals_m4043809186 (BigInteger_t1694088928 * __this, Il2CppObject * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::ModInverse(Mono.Math.BigInteger)
extern "C"  BigInteger_t1694088928 * BigInteger_ModInverse_m560616920 (BigInteger_t1694088928 * __this, BigInteger_t1694088928 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::ModPow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  BigInteger_t1694088928 * BigInteger_ModPow_m837755469 (BigInteger_t1694088928 * __this, BigInteger_t1694088928 * ___exp, BigInteger_t1694088928 * ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::GeneratePseudoPrime(System.Int32)
extern "C"  BigInteger_t1694088928 * BigInteger_GeneratePseudoPrime_m323167868 (Il2CppObject * __this /* static, unused */, int32_t ___bits, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::Incr2()
extern "C"  void BigInteger_Incr2_m1628594427 (BigInteger_t1694088928 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Implicit(System.UInt32)
extern "C"  BigInteger_t1694088928 * BigInteger_op_Implicit_m638921272 (Il2CppObject * __this /* static, unused */, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Implicit(System.Int32)
extern "C"  BigInteger_t1694088928 * BigInteger_op_Implicit_m2620841043 (Il2CppObject * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Addition(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  BigInteger_t1694088928 * BigInteger_op_Addition_m1737862829 (Il2CppObject * __this /* static, unused */, BigInteger_t1694088928 * ___bi1, BigInteger_t1694088928 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Subtraction(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  BigInteger_t1694088928 * BigInteger_op_Subtraction_m3436814701 (Il2CppObject * __this /* static, unused */, BigInteger_t1694088928 * ___bi1, BigInteger_t1694088928 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger::op_Modulus(Mono.Math.BigInteger,System.UInt32)
extern "C"  uint32_t BigInteger_op_Modulus_m465134612 (Il2CppObject * __this /* static, unused */, BigInteger_t1694088928 * ___bi, uint32_t ___ui, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Modulus(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  BigInteger_t1694088928 * BigInteger_op_Modulus_m2858145418 (Il2CppObject * __this /* static, unused */, BigInteger_t1694088928 * ___bi1, BigInteger_t1694088928 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Division(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  BigInteger_t1694088928 * BigInteger_op_Division_m1824126044 (Il2CppObject * __this /* static, unused */, BigInteger_t1694088928 * ___bi1, BigInteger_t1694088928 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  BigInteger_t1694088928 * BigInteger_op_Multiply_m2896976517 (Il2CppObject * __this /* static, unused */, BigInteger_t1694088928 * ___bi1, BigInteger_t1694088928 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_LeftShift(Mono.Math.BigInteger,System.Int32)
extern "C"  BigInteger_t1694088928 * BigInteger_op_LeftShift_m2333016656 (Il2CppObject * __this /* static, unused */, BigInteger_t1694088928 * ___bi1, int32_t ___shiftVal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_RightShift(Mono.Math.BigInteger,System.Int32)
extern "C"  BigInteger_t1694088928 * BigInteger_op_RightShift_m3774983213 (Il2CppObject * __this /* static, unused */, BigInteger_t1694088928 * ___bi1, int32_t ___shiftVal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_Equality(Mono.Math.BigInteger,System.UInt32)
extern "C"  bool BigInteger_op_Equality_m1195898850 (Il2CppObject * __this /* static, unused */, BigInteger_t1694088928 * ___bi1, uint32_t ___ui, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_Inequality(Mono.Math.BigInteger,System.UInt32)
extern "C"  bool BigInteger_op_Inequality_m4000708231 (Il2CppObject * __this /* static, unused */, BigInteger_t1694088928 * ___bi1, uint32_t ___ui, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_Equality(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  bool BigInteger_op_Equality_m1709618143 (Il2CppObject * __this /* static, unused */, BigInteger_t1694088928 * ___bi1, BigInteger_t1694088928 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_Inequality(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  bool BigInteger_op_Inequality_m549511578 (Il2CppObject * __this /* static, unused */, BigInteger_t1694088928 * ___bi1, BigInteger_t1694088928 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_GreaterThan(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  bool BigInteger_op_GreaterThan_m3422164694 (Il2CppObject * __this /* static, unused */, BigInteger_t1694088928 * ___bi1, BigInteger_t1694088928 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_LessThan(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  bool BigInteger_op_LessThan_m1693109759 (Il2CppObject * __this /* static, unused */, BigInteger_t1694088928 * ___bi1, BigInteger_t1694088928 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_GreaterThanOrEqual(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  bool BigInteger_op_GreaterThanOrEqual_m2091126915 (Il2CppObject * __this /* static, unused */, BigInteger_t1694088928 * ___bi1, BigInteger_t1694088928 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_LessThanOrEqual(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  bool BigInteger_op_LessThanOrEqual_m2413275450 (Il2CppObject * __this /* static, unused */, BigInteger_t1694088928 * ___bi1, BigInteger_t1694088928 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
