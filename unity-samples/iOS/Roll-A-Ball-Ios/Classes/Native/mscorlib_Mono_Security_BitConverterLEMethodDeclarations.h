#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.BitConverterLE
struct BitConverterLE_t1833;
// System.Byte[]
struct ByteU5BU5D_t97;

// System.Byte[] Mono.Security.BitConverterLE::GetUIntBytes(System.Byte*)
 ByteU5BU5D_t97* BitConverterLE_GetUIntBytes_m8904 (Object_t * __this/* static, unused */, uint8_t* ___bytes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.BitConverterLE::GetULongBytes(System.Byte*)
 ByteU5BU5D_t97* BitConverterLE_GetULongBytes_m8905 (Object_t * __this/* static, unused */, uint8_t* ___bytes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.BitConverterLE::GetBytes(System.Int32)
 ByteU5BU5D_t97* BitConverterLE_GetBytes_m8906 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.BitConverterLE::GetBytes(System.Single)
 ByteU5BU5D_t97* BitConverterLE_GetBytes_m8907 (Object_t * __this/* static, unused */, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.BitConverterLE::GetBytes(System.Double)
 ByteU5BU5D_t97* BitConverterLE_GetBytes_m8908 (Object_t * __this/* static, unused */, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.BitConverterLE::UShortFromBytes(System.Byte*,System.Byte[],System.Int32)
 void BitConverterLE_UShortFromBytes_m8909 (Object_t * __this/* static, unused */, uint8_t* ___dst, ByteU5BU5D_t97* ___src, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.BitConverterLE::UIntFromBytes(System.Byte*,System.Byte[],System.Int32)
 void BitConverterLE_UIntFromBytes_m8910 (Object_t * __this/* static, unused */, uint8_t* ___dst, ByteU5BU5D_t97* ___src, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.BitConverterLE::ULongFromBytes(System.Byte*,System.Byte[],System.Int32)
 void BitConverterLE_ULongFromBytes_m8911 (Object_t * __this/* static, unused */, uint8_t* ___dst, ByteU5BU5D_t97* ___src, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 Mono.Security.BitConverterLE::ToInt16(System.Byte[],System.Int32)
 int16_t BitConverterLE_ToInt16_m8912 (Object_t * __this/* static, unused */, ByteU5BU5D_t97* ___value, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.BitConverterLE::ToInt32(System.Byte[],System.Int32)
 int32_t BitConverterLE_ToInt32_m8913 (Object_t * __this/* static, unused */, ByteU5BU5D_t97* ___value, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Mono.Security.BitConverterLE::ToSingle(System.Byte[],System.Int32)
 float BitConverterLE_ToSingle_m8914 (Object_t * __this/* static, unused */, ByteU5BU5D_t97* ___value, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double Mono.Security.BitConverterLE::ToDouble(System.Byte[],System.Int32)
 double BitConverterLE_ToDouble_m8915 (Object_t * __this/* static, unused */, ByteU5BU5D_t97* ___value, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
