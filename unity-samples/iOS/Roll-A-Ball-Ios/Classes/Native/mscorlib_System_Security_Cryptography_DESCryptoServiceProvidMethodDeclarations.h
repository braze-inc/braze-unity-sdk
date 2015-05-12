#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DESCryptoServiceProvider
struct DESCryptoServiceProvider_t2140;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t1381;
// System.Byte[]
struct ByteU5BU5D_t97;

// System.Void System.Security.Cryptography.DESCryptoServiceProvider::.ctor()
 void DESCryptoServiceProvider__ctor_m10612 (DESCryptoServiceProvider_t2140 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.DESCryptoServiceProvider::CreateDecryptor(System.Byte[],System.Byte[])
 Object_t * DESCryptoServiceProvider_CreateDecryptor_m10613 (DESCryptoServiceProvider_t2140 * __this, ByteU5BU5D_t97* ___rgbKey, ByteU5BU5D_t97* ___rgbIV, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.DESCryptoServiceProvider::CreateEncryptor(System.Byte[],System.Byte[])
 Object_t * DESCryptoServiceProvider_CreateEncryptor_m10614 (DESCryptoServiceProvider_t2140 * __this, ByteU5BU5D_t97* ___rgbKey, ByteU5BU5D_t97* ___rgbIV, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESCryptoServiceProvider::GenerateIV()
 void DESCryptoServiceProvider_GenerateIV_m10615 (DESCryptoServiceProvider_t2140 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESCryptoServiceProvider::GenerateKey()
 void DESCryptoServiceProvider_GenerateKey_m10616 (DESCryptoServiceProvider_t2140 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
