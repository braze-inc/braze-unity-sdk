#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RC2CryptoServiceProvider
struct RC2CryptoServiceProvider_t2149;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t1381;
// System.Byte[]
struct ByteU5BU5D_t97;

// System.Void System.Security.Cryptography.RC2CryptoServiceProvider::.ctor()
 void RC2CryptoServiceProvider__ctor_m10699 (RC2CryptoServiceProvider_t2149 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.RC2CryptoServiceProvider::get_EffectiveKeySize()
 int32_t RC2CryptoServiceProvider_get_EffectiveKeySize_m10700 (RC2CryptoServiceProvider_t2149 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.RC2CryptoServiceProvider::CreateDecryptor(System.Byte[],System.Byte[])
 Object_t * RC2CryptoServiceProvider_CreateDecryptor_m10701 (RC2CryptoServiceProvider_t2149 * __this, ByteU5BU5D_t97* ___rgbKey, ByteU5BU5D_t97* ___rgbIV, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.RC2CryptoServiceProvider::CreateEncryptor(System.Byte[],System.Byte[])
 Object_t * RC2CryptoServiceProvider_CreateEncryptor_m10702 (RC2CryptoServiceProvider_t2149 * __this, ByteU5BU5D_t97* ___rgbKey, ByteU5BU5D_t97* ___rgbIV, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RC2CryptoServiceProvider::GenerateIV()
 void RC2CryptoServiceProvider_GenerateIV_m10703 (RC2CryptoServiceProvider_t2149 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RC2CryptoServiceProvider::GenerateKey()
 void RC2CryptoServiceProvider_GenerateKey_m10704 (RC2CryptoServiceProvider_t2149 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
