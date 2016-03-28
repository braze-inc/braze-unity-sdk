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

// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t11523773;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void System.Security.Cryptography.CryptoConfig::.cctor()
extern "C"  void CryptoConfig__cctor_m3908597263 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoConfig::Initialize()
extern "C"  void CryptoConfig_Initialize_m2703294454 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.Cryptography.CryptoConfig::CreateFromName(System.String)
extern "C"  Il2CppObject * CryptoConfig_CreateFromName_m3477093824 (Il2CppObject * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.Cryptography.CryptoConfig::CreateFromName(System.String,System.Object[])
extern "C"  Il2CppObject * CryptoConfig_CreateFromName_m3520877612 (Il2CppObject * __this /* static, unused */, String_t* ___name, ObjectU5BU5D_t11523773* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.CryptoConfig::MapNameToOID(System.String)
extern "C"  String_t* CryptoConfig_MapNameToOID_m2965471927 (Il2CppObject * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.CryptoConfig::EncodeOID(System.String)
extern "C"  ByteU5BU5D_t58506160* CryptoConfig_EncodeOID_m3599780936 (Il2CppObject * __this /* static, unused */, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.CryptoConfig::EncodeLongNumber(System.Int64)
extern "C"  ByteU5BU5D_t58506160* CryptoConfig_EncodeLongNumber_m2423541609 (Il2CppObject * __this /* static, unused */, int64_t ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
