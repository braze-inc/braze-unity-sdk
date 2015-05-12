#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.BitConverter
struct BitConverter_t321;
// System.Byte[]
struct ByteU5BU5D_t97;
// System.String
struct String_t;

// System.Void System.BitConverter::.cctor()
 void BitConverter__cctor_m11281 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.BitConverter::AmILittleEndian()
 bool BitConverter_AmILittleEndian_m11282 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.BitConverter::DoubleWordsAreSwapped()
 bool BitConverter_DoubleWordsAreSwapped_m11283 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.BitConverter::DoubleToInt64Bits(System.Double)
 int64_t BitConverter_DoubleToInt64Bits_m11284 (Object_t * __this/* static, unused */, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.BitConverter::GetBytes(System.Byte*,System.Int32)
 ByteU5BU5D_t97* BitConverter_GetBytes_m11285 (Object_t * __this/* static, unused */, uint8_t* ___ptr, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.BitConverter::GetBytes(System.Int32)
 ByteU5BU5D_t97* BitConverter_GetBytes_m1336 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.BitConverter::GetBytes(System.Single)
 ByteU5BU5D_t97* BitConverter_GetBytes_m1337 (Object_t * __this/* static, unused */, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.BitConverter::GetBytes(System.Double)
 ByteU5BU5D_t97* BitConverter_GetBytes_m1338 (Object_t * __this/* static, unused */, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.BitConverter::PutBytes(System.Byte*,System.Byte[],System.Int32,System.Int32)
 void BitConverter_PutBytes_m11286 (Object_t * __this/* static, unused */, uint8_t* ___dst, ByteU5BU5D_t97* ___src, int32_t ___start_index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.BitConverter::ToInt32(System.Byte[],System.Int32)
 int32_t BitConverter_ToInt32_m1343 (Object_t * __this/* static, unused */, ByteU5BU5D_t97* ___value, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.BitConverter::ToInt64(System.Byte[],System.Int32)
 int64_t BitConverter_ToInt64_m11287 (Object_t * __this/* static, unused */, ByteU5BU5D_t97* ___value, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.BitConverter::ToSingle(System.Byte[],System.Int32)
 float BitConverter_ToSingle_m1344 (Object_t * __this/* static, unused */, ByteU5BU5D_t97* ___value, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.BitConverter::ToDouble(System.Byte[],System.Int32)
 double BitConverter_ToDouble_m1345 (Object_t * __this/* static, unused */, ByteU5BU5D_t97* ___value, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.BitConverter::ToString(System.Byte[])
 String_t* BitConverter_ToString_m6568 (Object_t * __this/* static, unused */, ByteU5BU5D_t97* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.BitConverter::ToString(System.Byte[],System.Int32,System.Int32)
 String_t* BitConverter_ToString_m11288 (Object_t * __this/* static, unused */, ByteU5BU5D_t97* ___value, int32_t ___startIndex, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
