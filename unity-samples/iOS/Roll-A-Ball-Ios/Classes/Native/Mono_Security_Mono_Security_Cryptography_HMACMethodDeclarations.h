#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.HMAC
struct HMAC_t1427;
// System.Byte[]
struct ByteU5BU5D_t97;
// System.String
struct String_t;

// System.Void Mono.Security.Cryptography.HMAC::.ctor(System.String,System.Byte[])
 void HMAC__ctor_m5876 (HMAC_t1427 * __this, String_t* ___hashName, ByteU5BU5D_t97* ___rgbKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.HMAC::get_Key()
 ByteU5BU5D_t97* HMAC_get_Key_m5877 (HMAC_t1427 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.HMAC::set_Key(System.Byte[])
 void HMAC_set_Key_m5878 (HMAC_t1427 * __this, ByteU5BU5D_t97* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.HMAC::Initialize()
 void HMAC_Initialize_m5879 (HMAC_t1427 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.HMAC::HashFinal()
 ByteU5BU5D_t97* HMAC_HashFinal_m5880 (HMAC_t1427 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.HMAC::HashCore(System.Byte[],System.Int32,System.Int32)
 void HMAC_HashCore_m5881 (HMAC_t1427 * __this, ByteU5BU5D_t97* ___array, int32_t ___ibStart, int32_t ___cbSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.HMAC::initializePad()
 void HMAC_initializePad_m5882 (HMAC_t1427 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
