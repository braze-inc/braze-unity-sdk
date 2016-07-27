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
struct RSAManaged_t639738772;
// Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler
struct KeyGeneratedEventHandler_t1233396097;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.String
struct String_t;
// Mono.Math.BigInteger
struct BigInteger_t1694088927;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_Mono_Security_Cryptography_RSAManaged_Key1233396096.h"
#include "mscorlib_System_Security_Cryptography_RSAParameter2711684451.h"
#include "mscorlib_Mono_Math_BigInteger1694088927.h"

// System.Void Mono.Security.Cryptography.RSAManaged::.ctor(System.Int32)
extern "C"  void RSAManaged__ctor_m1958471367 (RSAManaged_t639738772 * __this, int32_t ___keySize0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged::add_KeyGenerated(Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler)
extern "C"  void RSAManaged_add_KeyGenerated_m3011900107 (RSAManaged_t639738772 * __this, KeyGeneratedEventHandler_t1233396097 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged::remove_KeyGenerated(Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler)
extern "C"  void RSAManaged_remove_KeyGenerated_m1973955406 (RSAManaged_t639738772 * __this, KeyGeneratedEventHandler_t1233396097 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged::Finalize()
extern "C"  void RSAManaged_Finalize_m570970668 (RSAManaged_t639738772 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged::GenerateKeyPair()
extern "C"  void RSAManaged_GenerateKeyPair_m1527592312 (RSAManaged_t639738772 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Cryptography.RSAManaged::get_KeySize()
extern "C"  int32_t RSAManaged_get_KeySize_m4283487431 (RSAManaged_t639738772 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.RSAManaged::get_PublicOnly()
extern "C"  bool RSAManaged_get_PublicOnly_m3109512522 (RSAManaged_t639738772 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.RSAManaged::DecryptValue(System.Byte[])
extern "C"  ByteU5BU5D_t58506160* RSAManaged_DecryptValue_m544963905 (RSAManaged_t639738772 * __this, ByteU5BU5D_t58506160* ___rgb0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.RSAManaged::EncryptValue(System.Byte[])
extern "C"  ByteU5BU5D_t58506160* RSAManaged_EncryptValue_m1785756185 (RSAManaged_t639738772 * __this, ByteU5BU5D_t58506160* ___rgb0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSAParameters Mono.Security.Cryptography.RSAManaged::ExportParameters(System.Boolean)
extern "C"  RSAParameters_t2711684451  RSAManaged_ExportParameters_m3006701455 (RSAManaged_t639738772 * __this, bool ___includePrivateParameters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged::ImportParameters(System.Security.Cryptography.RSAParameters)
extern "C"  void RSAManaged_ImportParameters_m1366434854 (RSAManaged_t639738772 * __this, RSAParameters_t2711684451  ___parameters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged::Dispose(System.Boolean)
extern "C"  void RSAManaged_Dispose_m1837005162 (RSAManaged_t639738772 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.RSAManaged::ToXmlString(System.Boolean)
extern "C"  String_t* RSAManaged_ToXmlString_m4064102331 (RSAManaged_t639738772 * __this, bool ___includePrivateParameters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.RSAManaged::get_IsCrtPossible()
extern "C"  bool RSAManaged_get_IsCrtPossible_m2743607449 (RSAManaged_t639738772 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.RSAManaged::GetPaddedValue(Mono.Math.BigInteger,System.Int32)
extern "C"  ByteU5BU5D_t58506160* RSAManaged_GetPaddedValue_m213320097 (RSAManaged_t639738772 * __this, BigInteger_t1694088927 * ___value0, int32_t ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
