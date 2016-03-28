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

// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t2902591373;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t273828613;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t4287420181;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t4236534322;
// System.Security.Cryptography.Oid
struct Oid_t1557563107;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Security.Cryptography.DSA
struct DSA_t1557551819;
// System.Security.Cryptography.RSA
struct RSA_t1557565273;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_X509_X509Certificate273828612.h"

// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
extern "C"  void PublicKey__ctor_m1299060097 (PublicKey_t2902591373 * __this, X509Certificate_t273828613 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
extern "C"  AsnEncodedData_t4287420181 * PublicKey_get_EncodedKeyValue_m334858790 (PublicKey_t2902591373 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
extern "C"  AsnEncodedData_t4287420181 * PublicKey_get_EncodedParameters_m3678410494 (PublicKey_t2902591373 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
extern "C"  AsymmetricAlgorithm_t4236534322 * PublicKey_get_Key_m2294273754 (PublicKey_t2902591373 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
extern "C"  Oid_t1557563107 * PublicKey_get_Oid_m100819764 (PublicKey_t2902591373 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
extern "C"  ByteU5BU5D_t58506160* PublicKey_GetUnsignedBigInteger_m2731897515 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
extern "C"  DSA_t1557551819 * PublicKey_DecodeDSA_m2700844317 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___rawPublicKey, ByteU5BU5D_t58506160* ___rawParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
extern "C"  RSA_t1557565273 * PublicKey_DecodeRSA_m3835708506 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___rawPublicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
