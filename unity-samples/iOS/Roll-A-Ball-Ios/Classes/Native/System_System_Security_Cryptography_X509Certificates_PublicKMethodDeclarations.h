#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t1602;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t1600;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1407;
// System.Security.Cryptography.Oid
struct Oid_t1601;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t1406;
// System.Byte[]
struct ByteU5BU5D_t97;
// System.Security.Cryptography.DSA
struct DSA_t1390;
// System.Security.Cryptography.RSA
struct RSA_t1388;

// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
 void PublicKey__ctor_m6864 (PublicKey_t1602 * __this, X509Certificate_t1406 * ___certificate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
 AsnEncodedData_t1600 * PublicKey_get_EncodedKeyValue_m6865 (PublicKey_t1602 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
 AsnEncodedData_t1600 * PublicKey_get_EncodedParameters_m6866 (PublicKey_t1602 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
 AsymmetricAlgorithm_t1407 * PublicKey_get_Key_m6867 (PublicKey_t1602 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
 Oid_t1601 * PublicKey_get_Oid_m6868 (PublicKey_t1602 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
 ByteU5BU5D_t97* PublicKey_GetUnsignedBigInteger_m6869 (Object_t * __this/* static, unused */, ByteU5BU5D_t97* ___integer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
 DSA_t1390 * PublicKey_DecodeDSA_m6870 (Object_t * __this/* static, unused */, ByteU5BU5D_t97* ___rawPublicKey, ByteU5BU5D_t97* ___rawParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
 RSA_t1388 * PublicKey_DecodeRSA_m6871 (Object_t * __this/* static, unused */, ByteU5BU5D_t97* ___rawPublicKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
