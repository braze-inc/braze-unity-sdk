#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.RSAManaged
struct RSAManaged_t1819;
// Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler
struct KeyGeneratedEventHandler_t1818;
// System.Byte[]
struct ByteU5BU5D_t97;
// System.String
struct String_t;
// Mono.Math.BigInteger
struct BigInteger_t1799;
// System.Security.Cryptography.RSAParameters
#include "mscorlib_System_Security_Cryptography_RSAParameters.h"

// System.Void Mono.Security.Cryptography.RSAManaged::.ctor(System.Int32)
 void RSAManaged__ctor_m8779 (RSAManaged_t1819 * __this, int32_t ___keySize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged::add_KeyGenerated(Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler)
 void RSAManaged_add_KeyGenerated_m8780 (RSAManaged_t1819 * __this, KeyGeneratedEventHandler_t1818 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged::remove_KeyGenerated(Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler)
 void RSAManaged_remove_KeyGenerated_m8781 (RSAManaged_t1819 * __this, KeyGeneratedEventHandler_t1818 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged::Finalize()
 void RSAManaged_Finalize_m8782 (RSAManaged_t1819 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged::GenerateKeyPair()
 void RSAManaged_GenerateKeyPair_m8783 (RSAManaged_t1819 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Cryptography.RSAManaged::get_KeySize()
 int32_t RSAManaged_get_KeySize_m8784 (RSAManaged_t1819 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.RSAManaged::get_PublicOnly()
 bool RSAManaged_get_PublicOnly_m8785 (RSAManaged_t1819 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.RSAManaged::DecryptValue(System.Byte[])
 ByteU5BU5D_t97* RSAManaged_DecryptValue_m8786 (RSAManaged_t1819 * __this, ByteU5BU5D_t97* ___rgb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.RSAManaged::EncryptValue(System.Byte[])
 ByteU5BU5D_t97* RSAManaged_EncryptValue_m8787 (RSAManaged_t1819 * __this, ByteU5BU5D_t97* ___rgb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSAParameters Mono.Security.Cryptography.RSAManaged::ExportParameters(System.Boolean)
 RSAParameters_t1399  RSAManaged_ExportParameters_m8788 (RSAManaged_t1819 * __this, bool ___includePrivateParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged::ImportParameters(System.Security.Cryptography.RSAParameters)
 void RSAManaged_ImportParameters_m8789 (RSAManaged_t1819 * __this, RSAParameters_t1399  ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged::Dispose(System.Boolean)
 void RSAManaged_Dispose_m8790 (RSAManaged_t1819 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.RSAManaged::ToXmlString(System.Boolean)
 String_t* RSAManaged_ToXmlString_m8791 (RSAManaged_t1819 * __this, bool ___includePrivateParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.RSAManaged::get_IsCrtPossible()
 bool RSAManaged_get_IsCrtPossible_m8792 (RSAManaged_t1819 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.RSAManaged::GetPaddedValue(Mono.Math.BigInteger,System.Int32)
 ByteU5BU5D_t97* RSAManaged_GetPaddedValue_m8793 (RSAManaged_t1819 * __this, BigInteger_t1799 * ___value, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
