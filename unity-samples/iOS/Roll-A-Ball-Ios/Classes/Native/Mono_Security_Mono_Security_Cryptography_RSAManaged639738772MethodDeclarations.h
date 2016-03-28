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

// Mono.Security.Cryptography.RSAManaged
struct RSAManaged_t639738773;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.String
struct String_t;
// Mono.Math.BigInteger
struct BigInteger_t1694088928;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_RSAParameter2711684451.h"
#include "Mono_Security_Mono_Math_BigInteger1694088927.h"

// System.Void Mono.Security.Cryptography.RSAManaged::.ctor()
extern "C"  void RSAManaged__ctor_m3378736176 (RSAManaged_t639738773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged::.ctor(System.Int32)
extern "C"  void RSAManaged__ctor_m3804256641 (RSAManaged_t639738773 * __this, int32_t ___keySize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged::Finalize()
extern "C"  void RSAManaged_Finalize_m3473344050 (RSAManaged_t639738773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged::GenerateKeyPair()
extern "C"  void RSAManaged_GenerateKeyPair_m1998786226 (RSAManaged_t639738773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Cryptography.RSAManaged::get_KeySize()
extern "C"  int32_t RSAManaged_get_KeySize_m3861517773 (RSAManaged_t639738773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.RSAManaged::get_PublicOnly()
extern "C"  bool RSAManaged_get_PublicOnly_m3066955040 (RSAManaged_t639738773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.RSAManaged::DecryptValue(System.Byte[])
extern "C"  ByteU5BU5D_t58506160* RSAManaged_DecryptValue_m3745730427 (RSAManaged_t639738773 * __this, ByteU5BU5D_t58506160* ___rgb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.RSAManaged::EncryptValue(System.Byte[])
extern "C"  ByteU5BU5D_t58506160* RSAManaged_EncryptValue_m691555411 (RSAManaged_t639738773 * __this, ByteU5BU5D_t58506160* ___rgb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSAParameters Mono.Security.Cryptography.RSAManaged::ExportParameters(System.Boolean)
extern "C"  RSAParameters_t2711684451  RSAManaged_ExportParameters_m447046473 (RSAManaged_t639738773 * __this, bool ___includePrivateParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged::ImportParameters(System.Security.Cryptography.RSAParameters)
extern "C"  void RSAManaged_ImportParameters_m3911092908 (RSAManaged_t639738773 * __this, RSAParameters_t2711684451  ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged::Dispose(System.Boolean)
extern "C"  void RSAManaged_Dispose_m2318860068 (RSAManaged_t639738773 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.RSAManaged::ToXmlString(System.Boolean)
extern "C"  String_t* RSAManaged_ToXmlString_m2969901557 (RSAManaged_t639738773 * __this, bool ___includePrivateParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.RSAManaged::GetPaddedValue(Mono.Math.BigInteger,System.Int32)
extern "C"  ByteU5BU5D_t58506160* RSAManaged_GetPaddedValue_m3945925723 (RSAManaged_t639738773 * __this, BigInteger_t1694088928 * ___value, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
