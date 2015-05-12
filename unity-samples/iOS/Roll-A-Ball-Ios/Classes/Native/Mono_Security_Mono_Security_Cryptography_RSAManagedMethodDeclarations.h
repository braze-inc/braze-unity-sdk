#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.RSAManaged
struct RSAManaged_t1398;
// System.Byte[]
struct ByteU5BU5D_t97;
// System.String
struct String_t;
// Mono.Math.BigInteger
struct BigInteger_t1361;
// System.Security.Cryptography.RSAParameters
#include "mscorlib_System_Security_Cryptography_RSAParameters.h"

// System.Void Mono.Security.Cryptography.RSAManaged::.ctor()
 void RSAManaged__ctor_m5687 (RSAManaged_t1398 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged::.ctor(System.Int32)
 void RSAManaged__ctor_m5688 (RSAManaged_t1398 * __this, int32_t ___keySize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged::Finalize()
 void RSAManaged_Finalize_m5689 (RSAManaged_t1398 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged::GenerateKeyPair()
 void RSAManaged_GenerateKeyPair_m5690 (RSAManaged_t1398 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Cryptography.RSAManaged::get_KeySize()
 int32_t RSAManaged_get_KeySize_m5691 (RSAManaged_t1398 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.RSAManaged::get_PublicOnly()
 bool RSAManaged_get_PublicOnly_m5692 (RSAManaged_t1398 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.RSAManaged::DecryptValue(System.Byte[])
 ByteU5BU5D_t97* RSAManaged_DecryptValue_m5693 (RSAManaged_t1398 * __this, ByteU5BU5D_t97* ___rgb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.RSAManaged::EncryptValue(System.Byte[])
 ByteU5BU5D_t97* RSAManaged_EncryptValue_m5694 (RSAManaged_t1398 * __this, ByteU5BU5D_t97* ___rgb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSAParameters Mono.Security.Cryptography.RSAManaged::ExportParameters(System.Boolean)
 RSAParameters_t1399  RSAManaged_ExportParameters_m5695 (RSAManaged_t1398 * __this, bool ___includePrivateParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged::ImportParameters(System.Security.Cryptography.RSAParameters)
 void RSAManaged_ImportParameters_m5696 (RSAManaged_t1398 * __this, RSAParameters_t1399  ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged::Dispose(System.Boolean)
 void RSAManaged_Dispose_m5697 (RSAManaged_t1398 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.RSAManaged::ToXmlString(System.Boolean)
 String_t* RSAManaged_ToXmlString_m5698 (RSAManaged_t1398 * __this, bool ___includePrivateParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.RSAManaged::GetPaddedValue(Mono.Math.BigInteger,System.Int32)
 ByteU5BU5D_t97* RSAManaged_GetPaddedValue_m5699 (RSAManaged_t1398 * __this, BigInteger_t1361 * ___value, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
