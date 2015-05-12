#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.CryptoConfig
struct CryptoConfig_t1506;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t112;
// System.Byte[]
struct ByteU5BU5D_t97;

// System.Void System.Security.Cryptography.CryptoConfig::.cctor()
 void CryptoConfig__cctor_m10584 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoConfig::Initialize()
 void CryptoConfig_Initialize_m10585 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.Cryptography.CryptoConfig::CreateFromName(System.String)
 Object_t * CryptoConfig_CreateFromName_m6428 (Object_t * __this/* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.Cryptography.CryptoConfig::CreateFromName(System.String,System.Object[])
 Object_t * CryptoConfig_CreateFromName_m7617 (Object_t * __this/* static, unused */, String_t* ___name, ObjectU5BU5D_t112* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.CryptoConfig::MapNameToOID(System.String)
 String_t* CryptoConfig_MapNameToOID_m6440 (Object_t * __this/* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.CryptoConfig::EncodeOID(System.String)
 ByteU5BU5D_t97* CryptoConfig_EncodeOID_m6401 (Object_t * __this/* static, unused */, String_t* ___str, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.CryptoConfig::EncodeLongNumber(System.Int64)
 ByteU5BU5D_t97* CryptoConfig_EncodeLongNumber_m10586 (Object_t * __this/* static, unused */, int64_t ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
