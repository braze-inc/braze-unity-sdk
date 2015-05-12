#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.TripleDESCryptoServiceProvider
struct TripleDESCryptoServiceProvider_t2172;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t1381;
// System.Byte[]
struct ByteU5BU5D_t97;

// System.Void System.Security.Cryptography.TripleDESCryptoServiceProvider::.ctor()
 void TripleDESCryptoServiceProvider__ctor_m10874 (TripleDESCryptoServiceProvider_t2172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.TripleDESCryptoServiceProvider::GenerateIV()
 void TripleDESCryptoServiceProvider_GenerateIV_m10875 (TripleDESCryptoServiceProvider_t2172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.TripleDESCryptoServiceProvider::GenerateKey()
 void TripleDESCryptoServiceProvider_GenerateKey_m10876 (TripleDESCryptoServiceProvider_t2172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.TripleDESCryptoServiceProvider::CreateDecryptor(System.Byte[],System.Byte[])
 Object_t * TripleDESCryptoServiceProvider_CreateDecryptor_m10877 (TripleDESCryptoServiceProvider_t2172 * __this, ByteU5BU5D_t97* ___rgbKey, ByteU5BU5D_t97* ___rgbIV, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.TripleDESCryptoServiceProvider::CreateEncryptor(System.Byte[],System.Byte[])
 Object_t * TripleDESCryptoServiceProvider_CreateEncryptor_m10878 (TripleDESCryptoServiceProvider_t2172 * __this, ByteU5BU5D_t97* ___rgbKey, ByteU5BU5D_t97* ___rgbIV, MethodInfo* method) IL2CPP_METHOD_ATTR;
