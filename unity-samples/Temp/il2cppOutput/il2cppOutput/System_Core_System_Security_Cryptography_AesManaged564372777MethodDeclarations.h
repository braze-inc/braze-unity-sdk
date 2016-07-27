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

// System.Security.Cryptography.AesManaged
struct AesManaged_t564372777;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t4226691419;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.AesManaged::.ctor()
extern "C"  void AesManaged__ctor_m1572578968 (AesManaged_t564372777 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AesManaged::GenerateIV()
extern "C"  void AesManaged_GenerateIV_m4188712014 (AesManaged_t564372777 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AesManaged::GenerateKey()
extern "C"  void AesManaged_GenerateKey_m1003425312 (AesManaged_t564372777 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.AesManaged::CreateDecryptor(System.Byte[],System.Byte[])
extern "C"  Il2CppObject * AesManaged_CreateDecryptor_m1952358980 (AesManaged_t564372777 * __this, ByteU5BU5D_t58506160* ___rgbKey0, ByteU5BU5D_t58506160* ___rgbIV1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.AesManaged::CreateEncryptor(System.Byte[],System.Byte[])
extern "C"  Il2CppObject * AesManaged_CreateEncryptor_m2258087532 (AesManaged_t564372777 * __this, ByteU5BU5D_t58506160* ___rgbKey0, ByteU5BU5D_t58506160* ___rgbIV1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.AesManaged::get_IV()
extern "C"  ByteU5BU5D_t58506160* AesManaged_get_IV_m3771642968 (AesManaged_t564372777 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AesManaged::set_IV(System.Byte[])
extern "C"  void AesManaged_set_IV_m2456625939 (AesManaged_t564372777 * __this, ByteU5BU5D_t58506160* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.AesManaged::get_Key()
extern "C"  ByteU5BU5D_t58506160* AesManaged_get_Key_m959186774 (AesManaged_t564372777 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AesManaged::set_Key(System.Byte[])
extern "C"  void AesManaged_set_Key_m1884561361 (AesManaged_t564372777 * __this, ByteU5BU5D_t58506160* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.AesManaged::get_KeySize()
extern "C"  int32_t AesManaged_get_KeySize_m1856785595 (AesManaged_t564372777 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AesManaged::set_KeySize(System.Int32)
extern "C"  void AesManaged_set_KeySize_m838068010 (AesManaged_t564372777 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.AesManaged::CreateDecryptor()
extern "C"  Il2CppObject * AesManaged_CreateDecryptor_m2733487560 (AesManaged_t564372777 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.AesManaged::CreateEncryptor()
extern "C"  Il2CppObject * AesManaged_CreateEncryptor_m3462881952 (AesManaged_t564372777 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AesManaged::Dispose(System.Boolean)
extern "C"  void AesManaged_Dispose_m2950523276 (AesManaged_t564372777 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
