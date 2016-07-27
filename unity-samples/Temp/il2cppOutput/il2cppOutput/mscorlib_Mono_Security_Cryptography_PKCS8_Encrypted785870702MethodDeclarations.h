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

// Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo
struct EncryptedPrivateKeyInfo_t785870702;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::.ctor()
extern "C"  void EncryptedPrivateKeyInfo__ctor_m297039621 (EncryptedPrivateKeyInfo_t785870702 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::.ctor(System.Byte[])
extern "C"  void EncryptedPrivateKeyInfo__ctor_m814995684 (EncryptedPrivateKeyInfo_t785870702 * __this, ByteU5BU5D_t58506160* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::get_Algorithm()
extern "C"  String_t* EncryptedPrivateKeyInfo_get_Algorithm_m3460417254 (EncryptedPrivateKeyInfo_t785870702 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::get_EncryptedData()
extern "C"  ByteU5BU5D_t58506160* EncryptedPrivateKeyInfo_get_EncryptedData_m3098438110 (EncryptedPrivateKeyInfo_t785870702 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::get_Salt()
extern "C"  ByteU5BU5D_t58506160* EncryptedPrivateKeyInfo_get_Salt_m3294338600 (EncryptedPrivateKeyInfo_t785870702 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::get_IterationCount()
extern "C"  int32_t EncryptedPrivateKeyInfo_get_IterationCount_m3247856054 (EncryptedPrivateKeyInfo_t785870702 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::Decode(System.Byte[])
extern "C"  void EncryptedPrivateKeyInfo_Decode_m2270506076 (EncryptedPrivateKeyInfo_t785870702 * __this, ByteU5BU5D_t58506160* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
