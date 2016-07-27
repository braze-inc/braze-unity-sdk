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
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2174318432;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_Mono_Math_BigInteger_Sign2576861.h"
#include "mscorlib_Mono_Math_BigInteger1694088927.h"
#include "mscorlib_System_Security_Cryptography_RandomNumber2174318432.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"

// System.Void Mono.Math.BigInteger::.ctor(Mono.Math.BigInteger/Sign,System.UInt32)
extern "C"  void BigInteger__ctor_m3704863258 (BigInteger_t1694088927 * __this, int32_t ___sign0, uint32_t ___len1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::.ctor(Mono.Math.BigInteger)
extern "C"  void BigInteger__ctor_m2711034688 (BigInteger_t1694088927 * __this, BigInteger_t1694088927 * ___bi0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::.ctor(Mono.Math.BigInteger,System.UInt32)
extern "C"  void BigInteger__ctor_m1494705524 (BigInteger_t1694088927 * __this, BigInteger_t1694088927 * ___bi0, uint32_t ___len1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::.ctor(System.Byte[])
extern "C"  void BigInteger__ctor_m504969840 (BigInteger_t1694088927 * __this, ByteU5BU5D_t58506160* ___inData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::.ctor(System.UInt32)
extern "C"  void BigInteger__ctor_m3103304609 (BigInteger_t1694088927 * __this, uint32_t ___ui0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::.cctor()
extern "C"  void BigInteger__cctor_m2648738004 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RandomNumberGenerator Mono.Math.BigInteger::get_Rng()
extern "C"  RandomNumberGenerator_t2174318432 * BigInteger_get_Rng_m765650082 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::GenerateRandom(System.Int32,System.Security.Cryptography.RandomNumberGenerator)
extern "C"  BigInteger_t1694088927 * BigInteger_GenerateRandom_m2802147052 (Il2CppObject * __this /* static, unused */, int32_t ___bits0, RandomNumberGenerator_t2174318432 * ___rng1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::GenerateRandom(System.Int32)
extern "C"  BigInteger_t1694088927 * BigInteger_GenerateRandom_m4253307430 (Il2CppObject * __this /* static, unused */, int32_t ___bits0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::Randomize(System.Security.Cryptography.RandomNumberGenerator)
extern "C"  void BigInteger_Randomize_m2896043860 (BigInteger_t1694088927 * __this, RandomNumberGenerator_t2174318432 * ___rng0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::Randomize()
extern "C"  void BigInteger_Randomize_m939072904 (BigInteger_t1694088927 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Math.BigInteger::BitCount()
extern "C"  int32_t BigInteger_BitCount_m2806782665 (BigInteger_t1694088927 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::TestBit(System.UInt32)
extern "C"  bool BigInteger_TestBit_m1773572170 (BigInteger_t1694088927 * __this, uint32_t ___bitNum0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::TestBit(System.Int32)
extern "C"  bool BigInteger_TestBit_m2795990017 (BigInteger_t1694088927 * __this, int32_t ___bitNum0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::SetBit(System.UInt32)
extern "C"  void BigInteger_SetBit_m2279269508 (BigInteger_t1694088927 * __this, uint32_t ___bitNum0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::SetBit(System.UInt32,System.Boolean)
extern "C"  void BigInteger_SetBit_m3438761593 (BigInteger_t1694088927 * __this, uint32_t ___bitNum0, bool ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Math.BigInteger::LowestSetBit()
extern "C"  int32_t BigInteger_LowestSetBit_m2480304804 (BigInteger_t1694088927 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Math.BigInteger::GetBytes()
extern "C"  ByteU5BU5D_t58506160* BigInteger_GetBytes_m1628218698 (BigInteger_t1694088927 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Math.BigInteger::ToString(System.UInt32)
extern "C"  String_t* BigInteger_ToString_m1883360448 (BigInteger_t1694088927 * __this, uint32_t ___radix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Math.BigInteger::ToString(System.UInt32,System.String)
extern "C"  String_t* BigInteger_ToString_m3090523388 (BigInteger_t1694088927 * __this, uint32_t ___radix0, String_t* ___characterSet1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::Normalize()
extern "C"  void BigInteger_Normalize_m1377483748 (BigInteger_t1694088927 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::Clear()
extern "C"  void BigInteger_Clear_m2771926564 (BigInteger_t1694088927 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Math.BigInteger::GetHashCode()
extern "C"  int32_t BigInteger_GetHashCode_m1746556492 (BigInteger_t1694088927 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Math.BigInteger::ToString()
extern "C"  String_t* BigInteger_ToString_m2572155514 (BigInteger_t1694088927 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::Equals(System.Object)
extern "C"  bool BigInteger_Equals_m2754111464 (BigInteger_t1694088927 * __this, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::ModInverse(Mono.Math.BigInteger)
extern "C"  BigInteger_t1694088927 * BigInteger_ModInverse_m2802984018 (BigInteger_t1694088927 * __this, BigInteger_t1694088927 * ___modulus0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::ModPow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  BigInteger_t1694088927 * BigInteger_ModPow_m3768768275 (BigInteger_t1694088927 * __this, BigInteger_t1694088927 * ___exp0, BigInteger_t1694088927 * ___n1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::IsProbablePrime()
extern "C"  bool BigInteger_IsProbablePrime_m1415542107 (BigInteger_t1694088927 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::GeneratePseudoPrime(System.Int32)
extern "C"  BigInteger_t1694088927 * BigInteger_GeneratePseudoPrime_m1117071170 (Il2CppObject * __this /* static, unused */, int32_t ___bits0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::Incr2()
extern "C"  void BigInteger_Incr2_m3857837557 (BigInteger_t1694088927 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Implicit(System.UInt32)
extern "C"  BigInteger_t1694088927 * BigInteger_op_Implicit_m3211779122 (Il2CppObject * __this /* static, unused */, uint32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Implicit(System.Int32)
extern "C"  BigInteger_t1694088927 * BigInteger_op_Implicit_m2149647129 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Addition(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  BigInteger_t1694088927 * BigInteger_op_Addition_m1794246055 (Il2CppObject * __this /* static, unused */, BigInteger_t1694088927 * ___bi10, BigInteger_t1694088927 * ___bi21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Subtraction(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  BigInteger_t1694088927 * BigInteger_op_Subtraction_m3817287731 (Il2CppObject * __this /* static, unused */, BigInteger_t1694088927 * ___bi10, BigInteger_t1694088927 * ___bi21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger::op_Modulus(Mono.Math.BigInteger,System.UInt32)
extern "C"  uint32_t BigInteger_op_Modulus_m4020058202 (Il2CppObject * __this /* static, unused */, BigInteger_t1694088927 * ___bi0, uint32_t ___ui1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Modulus(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  BigInteger_t1694088927 * BigInteger_op_Modulus_m3137058896 (Il2CppObject * __this /* static, unused */, BigInteger_t1694088927 * ___bi10, BigInteger_t1694088927 * ___bi21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Division(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  BigInteger_t1694088927 * BigInteger_op_Division_m1880509270 (Il2CppObject * __this /* static, unused */, BigInteger_t1694088927 * ___bi10, BigInteger_t1694088927 * ___bi21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  BigInteger_t1694088927 * BigInteger_op_Multiply_m2953359743 (Il2CppObject * __this /* static, unused */, BigInteger_t1694088927 * ___bi10, BigInteger_t1694088927 * ___bi21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Multiply(Mono.Math.BigInteger,System.Int32)
extern "C"  BigInteger_t1694088927 * BigInteger_op_Multiply_m1950895881 (Il2CppObject * __this /* static, unused */, BigInteger_t1694088927 * ___bi0, int32_t ___i1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_LeftShift(Mono.Math.BigInteger,System.Int32)
extern "C"  BigInteger_t1694088927 * BigInteger_op_LeftShift_m43331734 (Il2CppObject * __this /* static, unused */, BigInteger_t1694088927 * ___bi10, int32_t ___shiftVal1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_RightShift(Mono.Math.BigInteger,System.Int32)
extern "C"  BigInteger_t1694088927 * BigInteger_op_RightShift_m1514227367 (Il2CppObject * __this /* static, unused */, BigInteger_t1694088927 * ___bi10, int32_t ___shiftVal1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_Equality(Mono.Math.BigInteger,System.UInt32)
extern "C"  bool BigInteger_op_Equality_m2978468520 (Il2CppObject * __this /* static, unused */, BigInteger_t1694088927 * ___bi10, uint32_t ___ui1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_Inequality(Mono.Math.BigInteger,System.UInt32)
extern "C"  bool BigInteger_op_Inequality_m3358209997 (Il2CppObject * __this /* static, unused */, BigInteger_t1694088927 * ___bi10, uint32_t ___ui1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_Equality(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  bool BigInteger_op_Equality_m3743829593 (Il2CppObject * __this /* static, unused */, BigInteger_t1694088927 * ___bi10, BigInteger_t1694088927 * ___bi21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_Inequality(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  bool BigInteger_op_Inequality_m1216595348 (Il2CppObject * __this /* static, unused */, BigInteger_t1694088927 * ___bi10, BigInteger_t1694088927 * ___bi21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_GreaterThan(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  bool BigInteger_op_GreaterThan_m2626925084 (Il2CppObject * __this /* static, unused */, BigInteger_t1694088927 * ___bi10, BigInteger_t1694088927 * ___bi21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_LessThan(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  bool BigInteger_op_LessThan_m3727321209 (Il2CppObject * __this /* static, unused */, BigInteger_t1694088927 * ___bi10, BigInteger_t1694088927 * ___bi21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_GreaterThanOrEqual(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  bool BigInteger_op_GreaterThanOrEqual_m1000888957 (Il2CppObject * __this /* static, unused */, BigInteger_t1694088927 * ___bi10, BigInteger_t1694088927 * ___bi21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_LessThanOrEqual(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  bool BigInteger_op_LessThanOrEqual_m4161155456 (Il2CppObject * __this /* static, unused */, BigInteger_t1694088927 * ___bi10, BigInteger_t1694088927 * ___bi21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
