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

// System.Security.Cryptography.HMAC
struct HMAC_t1559704864;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// Mono.Security.Cryptography.BlockProcessor
struct BlockProcessor_t4111311066;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void System.Security.Cryptography.HMAC::.ctor()
extern "C"  void HMAC__ctor_m1246202746 (HMAC_t1559704864 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.HMAC::get_BlockSizeValue()
extern "C"  int32_t HMAC_get_BlockSizeValue_m1165487130 (HMAC_t1559704864 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HMAC::set_BlockSizeValue(System.Int32)
extern "C"  void HMAC_set_BlockSizeValue_m2390739579 (HMAC_t1559704864 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HMAC::set_HashName(System.String)
extern "C"  void HMAC_set_HashName_m876988162 (HMAC_t1559704864 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.HMAC::get_Key()
extern "C"  ByteU5BU5D_t58506160* HMAC_get_Key_m1472198904 (HMAC_t1559704864 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HMAC::set_Key(System.Byte[])
extern "C"  void HMAC_set_Key_m2294913711 (HMAC_t1559704864 * __this, ByteU5BU5D_t58506160* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Cryptography.BlockProcessor System.Security.Cryptography.HMAC::get_Block()
extern "C"  BlockProcessor_t4111311066 * HMAC_get_Block_m1790455563 (HMAC_t1559704864 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.HMAC::KeySetup(System.Byte[],System.Byte)
extern "C"  ByteU5BU5D_t58506160* HMAC_KeySetup_m198221232 (HMAC_t1559704864 * __this, ByteU5BU5D_t58506160* ___key0, uint8_t ___padding1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HMAC::Dispose(System.Boolean)
extern "C"  void HMAC_Dispose_m2786544238 (HMAC_t1559704864 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HMAC::HashCore(System.Byte[],System.Int32,System.Int32)
extern "C"  void HMAC_HashCore_m2163573618 (HMAC_t1559704864 * __this, ByteU5BU5D_t58506160* ___rgb0, int32_t ___ib1, int32_t ___cb2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.HMAC::HashFinal()
extern "C"  ByteU5BU5D_t58506160* HMAC_HashFinal_m2672326474 (HMAC_t1559704864 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HMAC::Initialize()
extern "C"  void HMAC_Initialize_m1079175002 (HMAC_t1559704864 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.HMAC System.Security.Cryptography.HMAC::Create()
extern "C"  HMAC_t1559704864 * HMAC_Create_m3219387469 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.HMAC System.Security.Cryptography.HMAC::Create(System.String)
extern "C"  HMAC_t1559704864 * HMAC_Create_m2470432725 (Il2CppObject * __this /* static, unused */, String_t* ___algorithmName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
