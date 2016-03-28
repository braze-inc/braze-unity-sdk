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

// System.Security.Cryptography.RijndaelTransform
struct RijndaelTransform_t2468220198;
// System.Security.Cryptography.Rijndael
struct Rijndael_t277002104;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.UInt32[]
struct UInt32U5BU5D_t2133601851;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_Rijndael277002104.h"

// System.Void System.Security.Cryptography.RijndaelTransform::.ctor(System.Security.Cryptography.Rijndael,System.Boolean,System.Byte[],System.Byte[])
extern "C"  void RijndaelTransform__ctor_m4212591387 (RijndaelTransform_t2468220198 * __this, Rijndael_t277002104 * ___algo, bool ___encryption, ByteU5BU5D_t58506160* ___key, ByteU5BU5D_t58506160* ___iv, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::.cctor()
extern "C"  void RijndaelTransform__cctor_m2341284277 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Clear()
extern "C"  void RijndaelTransform_Clear_m4008934691 (RijndaelTransform_t2468220198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::ECB(System.Byte[],System.Byte[])
extern "C"  void RijndaelTransform_ECB_m759186162 (RijndaelTransform_t2468220198 * __this, ByteU5BU5D_t58506160* ___input, ByteU5BU5D_t58506160* ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.RijndaelTransform::SubByte(System.UInt32)
extern "C"  uint32_t RijndaelTransform_SubByte_m2002058519 (RijndaelTransform_t2468220198 * __this, uint32_t ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt128(System.Byte[],System.Byte[],System.UInt32[])
extern "C"  void RijndaelTransform_Encrypt128_m3918367840 (RijndaelTransform_t2468220198 * __this, ByteU5BU5D_t58506160* ___indata, ByteU5BU5D_t58506160* ___outdata, UInt32U5BU5D_t2133601851* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt192(System.Byte[],System.Byte[],System.UInt32[])
extern "C"  void RijndaelTransform_Encrypt192_m3340191341 (RijndaelTransform_t2468220198 * __this, ByteU5BU5D_t58506160* ___indata, ByteU5BU5D_t58506160* ___outdata, UInt32U5BU5D_t2133601851* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt256(System.Byte[],System.Byte[],System.UInt32[])
extern "C"  void RijndaelTransform_Encrypt256_m282559940 (RijndaelTransform_t2468220198 * __this, ByteU5BU5D_t58506160* ___indata, ByteU5BU5D_t58506160* ___outdata, UInt32U5BU5D_t2133601851* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt128(System.Byte[],System.Byte[],System.UInt32[])
extern "C"  void RijndaelTransform_Decrypt128_m3577856904 (RijndaelTransform_t2468220198 * __this, ByteU5BU5D_t58506160* ___indata, ByteU5BU5D_t58506160* ___outdata, UInt32U5BU5D_t2133601851* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt192(System.Byte[],System.Byte[],System.UInt32[])
extern "C"  void RijndaelTransform_Decrypt192_m2999680405 (RijndaelTransform_t2468220198 * __this, ByteU5BU5D_t58506160* ___indata, ByteU5BU5D_t58506160* ___outdata, UInt32U5BU5D_t2133601851* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt256(System.Byte[],System.Byte[],System.UInt32[])
extern "C"  void RijndaelTransform_Decrypt256_m4237016300 (RijndaelTransform_t2468220198 * __this, ByteU5BU5D_t58506160* ___indata, ByteU5BU5D_t58506160* ___outdata, UInt32U5BU5D_t2133601851* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
