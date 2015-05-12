#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.CipherSuite
struct CipherSuite_t1435;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t1381;
// System.Security.Cryptography.KeyedHashAlgorithm
struct KeyedHashAlgorithm_t1428;
// System.String
struct String_t;
// Mono.Security.Protocol.Tls.Context
struct Context_t1434;
// System.Byte[]
struct ByteU5BU5D_t97;
// Mono.Security.Protocol.Tls.CipherAlgorithmType
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherAlgorithmType.h"
// Mono.Security.Protocol.Tls.HashAlgorithmType
#include "Mono_Security_Mono_Security_Protocol_Tls_HashAlgorithmType.h"
// Mono.Security.Protocol.Tls.ExchangeAlgorithmType
#include "Mono_Security_Mono_Security_Protocol_Tls_ExchangeAlgorithmTy.h"
// System.Security.Cryptography.CipherMode
#include "mscorlib_System_Security_Cryptography_CipherMode.h"
// Mono.Security.Protocol.Tls.ContentType
#include "Mono_Security_Mono_Security_Protocol_Tls_ContentType.h"

// System.Void Mono.Security.Protocol.Tls.CipherSuite::.ctor(System.Int16,System.String,Mono.Security.Protocol.Tls.CipherAlgorithmType,Mono.Security.Protocol.Tls.HashAlgorithmType,Mono.Security.Protocol.Tls.ExchangeAlgorithmType,System.Boolean,System.Boolean,System.Byte,System.Byte,System.Int16,System.Byte,System.Byte)
 void CipherSuite__ctor_m5897 (CipherSuite_t1435 * __this, int16_t ___code, String_t* ___name, int32_t ___cipherAlgorithmType, int32_t ___hashAlgorithmType, int32_t ___exchangeAlgorithmType, bool ___exportable, bool ___blockMode, uint8_t ___keyMaterialSize, uint8_t ___expandedKeyMaterialSize, int16_t ___effectiveKeyBits, uint8_t ___ivSize, uint8_t ___blockSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::.cctor()
 void CipherSuite__cctor_m5898 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform Mono.Security.Protocol.Tls.CipherSuite::get_EncryptionCipher()
 Object_t * CipherSuite_get_EncryptionCipher_m5899 (CipherSuite_t1435 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform Mono.Security.Protocol.Tls.CipherSuite::get_DecryptionCipher()
 Object_t * CipherSuite_get_DecryptionCipher_m5900 (CipherSuite_t1435 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.KeyedHashAlgorithm Mono.Security.Protocol.Tls.CipherSuite::get_ClientHMAC()
 KeyedHashAlgorithm_t1428 * CipherSuite_get_ClientHMAC_m5901 (CipherSuite_t1435 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.KeyedHashAlgorithm Mono.Security.Protocol.Tls.CipherSuite::get_ServerHMAC()
 KeyedHashAlgorithm_t1428 * CipherSuite_get_ServerHMAC_m5902 (CipherSuite_t1435 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherAlgorithmType Mono.Security.Protocol.Tls.CipherSuite::get_CipherAlgorithmType()
 int32_t CipherSuite_get_CipherAlgorithmType_m5903 (CipherSuite_t1435 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Protocol.Tls.CipherSuite::get_HashAlgorithmName()
 String_t* CipherSuite_get_HashAlgorithmName_m5904 (CipherSuite_t1435 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.HashAlgorithmType Mono.Security.Protocol.Tls.CipherSuite::get_HashAlgorithmType()
 int32_t CipherSuite_get_HashAlgorithmType_m5905 (CipherSuite_t1435 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.CipherSuite::get_HashSize()
 int32_t CipherSuite_get_HashSize_m5906 (CipherSuite_t1435 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ExchangeAlgorithmType Mono.Security.Protocol.Tls.CipherSuite::get_ExchangeAlgorithmType()
 int32_t CipherSuite_get_ExchangeAlgorithmType_m5907 (CipherSuite_t1435 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.CipherMode Mono.Security.Protocol.Tls.CipherSuite::get_CipherMode()
 int32_t CipherSuite_get_CipherMode_m5908 (CipherSuite_t1435 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 Mono.Security.Protocol.Tls.CipherSuite::get_Code()
 int16_t CipherSuite_get_Code_m5909 (CipherSuite_t1435 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Protocol.Tls.CipherSuite::get_Name()
 String_t* CipherSuite_get_Name_m5910 (CipherSuite_t1435 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.CipherSuite::get_IsExportable()
 bool CipherSuite_get_IsExportable_m5911 (CipherSuite_t1435 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Security.Protocol.Tls.CipherSuite::get_KeyMaterialSize()
 uint8_t CipherSuite_get_KeyMaterialSize_m5912 (CipherSuite_t1435 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.CipherSuite::get_KeyBlockSize()
 int32_t CipherSuite_get_KeyBlockSize_m5913 (CipherSuite_t1435 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Security.Protocol.Tls.CipherSuite::get_ExpandedKeyMaterialSize()
 uint8_t CipherSuite_get_ExpandedKeyMaterialSize_m5914 (CipherSuite_t1435 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 Mono.Security.Protocol.Tls.CipherSuite::get_EffectiveKeyBits()
 int16_t CipherSuite_get_EffectiveKeyBits_m5915 (CipherSuite_t1435 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Security.Protocol.Tls.CipherSuite::get_IvSize()
 uint8_t CipherSuite_get_IvSize_m5916 (CipherSuite_t1435 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Context Mono.Security.Protocol.Tls.CipherSuite::get_Context()
 Context_t1434 * CipherSuite_get_Context_m5917 (CipherSuite_t1435 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::set_Context(Mono.Security.Protocol.Tls.Context)
 void CipherSuite_set_Context_m5918 (CipherSuite_t1435 * __this, Context_t1434 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::Write(System.Byte[],System.Int32,System.Int16)
 void CipherSuite_Write_m5919 (CipherSuite_t1435 * __this, ByteU5BU5D_t97* ___array, int32_t ___offset, int16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::Write(System.Byte[],System.Int32,System.UInt64)
 void CipherSuite_Write_m5920 (CipherSuite_t1435 * __this, ByteU5BU5D_t97* ___array, int32_t ___offset, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::InitializeCipher()
 void CipherSuite_InitializeCipher_m5921 (CipherSuite_t1435 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.CipherSuite::EncryptRecord(System.Byte[],System.Byte[])
 ByteU5BU5D_t97* CipherSuite_EncryptRecord_m5922 (CipherSuite_t1435 * __this, ByteU5BU5D_t97* ___fragment, ByteU5BU5D_t97* ___mac, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::DecryptRecord(System.Byte[],System.Byte[]&,System.Byte[]&)
 void CipherSuite_DecryptRecord_m5923 (CipherSuite_t1435 * __this, ByteU5BU5D_t97* ___fragment, ByteU5BU5D_t97** ___dcrFragment, ByteU5BU5D_t97** ___dcrMAC, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.CipherSuite::ComputeClientRecordMAC(Mono.Security.Protocol.Tls.ContentType,System.Byte[])
// System.Byte[] Mono.Security.Protocol.Tls.CipherSuite::ComputeServerRecordMAC(Mono.Security.Protocol.Tls.ContentType,System.Byte[])
// System.Void Mono.Security.Protocol.Tls.CipherSuite::ComputeMasterSecret(System.Byte[])
// System.Void Mono.Security.Protocol.Tls.CipherSuite::ComputeKeys()
// System.Byte[] Mono.Security.Protocol.Tls.CipherSuite::CreatePremasterSecret()
 ByteU5BU5D_t97* CipherSuite_CreatePremasterSecret_m5924 (CipherSuite_t1435 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.CipherSuite::PRF(System.Byte[],System.String,System.Byte[],System.Int32)
 ByteU5BU5D_t97* CipherSuite_PRF_m5925 (CipherSuite_t1435 * __this, ByteU5BU5D_t97* ___secret, String_t* ___label, ByteU5BU5D_t97* ___data, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.CipherSuite::Expand(System.String,System.Byte[],System.Byte[],System.Int32)
 ByteU5BU5D_t97* CipherSuite_Expand_m5926 (CipherSuite_t1435 * __this, String_t* ___hashName, ByteU5BU5D_t97* ___secret, ByteU5BU5D_t97* ___seed, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::createEncryptionCipher()
 void CipherSuite_createEncryptionCipher_m5927 (CipherSuite_t1435 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::createDecryptionCipher()
 void CipherSuite_createDecryptionCipher_m5928 (CipherSuite_t1435 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
