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

// System.Security.Cryptography.TripleDESCryptoServiceProvider
struct TripleDESCryptoServiceProvider_t635698090;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t4226691419;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.TripleDESCryptoServiceProvider::.ctor()
extern "C"  void TripleDESCryptoServiceProvider__ctor_m2538905264 (TripleDESCryptoServiceProvider_t635698090 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.TripleDESCryptoServiceProvider::GenerateIV()
extern "C"  void TripleDESCryptoServiceProvider_GenerateIV_m1507918646 (TripleDESCryptoServiceProvider_t635698090 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.TripleDESCryptoServiceProvider::GenerateKey()
extern "C"  void TripleDESCryptoServiceProvider_GenerateKey_m3798176824 (TripleDESCryptoServiceProvider_t635698090 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.TripleDESCryptoServiceProvider::CreateDecryptor(System.Byte[],System.Byte[])
extern "C"  Il2CppObject * TripleDESCryptoServiceProvider_CreateDecryptor_m3177241196 (TripleDESCryptoServiceProvider_t635698090 * __this, ByteU5BU5D_t58506160* ___rgbKey, ByteU5BU5D_t58506160* ___rgbIV, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.TripleDESCryptoServiceProvider::CreateEncryptor(System.Byte[],System.Byte[])
extern "C"  Il2CppObject * TripleDESCryptoServiceProvider_CreateEncryptor_m3482969748 (TripleDESCryptoServiceProvider_t635698090 * __this, ByteU5BU5D_t58506160* ___rgbKey, ByteU5BU5D_t58506160* ___rgbIV, const MethodInfo* method) IL2CPP_METHOD_ATTR;
