#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.HMAC
struct HMAC_t1516;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t97;
// Mono.Security.Cryptography.BlockProcessor
struct BlockProcessor_t1809;

// System.Void System.Security.Cryptography.HMAC::.ctor()
 void HMAC__ctor_m10639 (HMAC_t1516 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.HMAC::get_BlockSizeValue()
 int32_t HMAC_get_BlockSizeValue_m10640 (HMAC_t1516 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HMAC::set_BlockSizeValue(System.Int32)
 void HMAC_set_BlockSizeValue_m10641 (HMAC_t1516 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HMAC::set_HashName(System.String)
 void HMAC_set_HashName_m10642 (HMAC_t1516 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.HMAC::get_Key()
 ByteU5BU5D_t97* HMAC_get_Key_m10643 (HMAC_t1516 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HMAC::set_Key(System.Byte[])
 void HMAC_set_Key_m6474 (HMAC_t1516 * __this, ByteU5BU5D_t97* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Cryptography.BlockProcessor System.Security.Cryptography.HMAC::get_Block()
 BlockProcessor_t1809 * HMAC_get_Block_m10644 (HMAC_t1516 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.HMAC::KeySetup(System.Byte[],System.Byte)
 ByteU5BU5D_t97* HMAC_KeySetup_m10645 (HMAC_t1516 * __this, ByteU5BU5D_t97* ___key, uint8_t ___padding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HMAC::Dispose(System.Boolean)
 void HMAC_Dispose_m10646 (HMAC_t1516 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HMAC::HashCore(System.Byte[],System.Int32,System.Int32)
 void HMAC_HashCore_m10647 (HMAC_t1516 * __this, ByteU5BU5D_t97* ___rgb, int32_t ___ib, int32_t ___cb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.HMAC::HashFinal()
 ByteU5BU5D_t97* HMAC_HashFinal_m10648 (HMAC_t1516 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HMAC::Initialize()
 void HMAC_Initialize_m10649 (HMAC_t1516 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.HMAC System.Security.Cryptography.HMAC::Create()
 HMAC_t1516 * HMAC_Create_m6473 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.HMAC System.Security.Cryptography.HMAC::Create(System.String)
 HMAC_t1516 * HMAC_Create_m10650 (Object_t * __this/* static, unused */, String_t* ___algorithmName, MethodInfo* method) IL2CPP_METHOD_ATTR;
