#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.Formatters.Binary.BinaryCommon
struct BinaryCommon_t2101;
// System.Type
struct Type_t;
// System.Byte[]
struct ByteU5BU5D_t97;

// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryCommon::.cctor()
 void BinaryCommon__cctor_m10448 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.Formatters.Binary.BinaryCommon::IsPrimitive(System.Type)
 bool BinaryCommon_IsPrimitive_m10449 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Serialization.Formatters.Binary.BinaryCommon::GetTypeFromCode(System.Int32)
 Type_t * BinaryCommon_GetTypeFromCode_m10450 (Object_t * __this/* static, unused */, int32_t ___code, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryCommon::SwapBytes(System.Byte[],System.Int32,System.Int32)
 void BinaryCommon_SwapBytes_m10451 (Object_t * __this/* static, unused */, ByteU5BU5D_t97* ___byteArray, int32_t ___size, int32_t ___dataSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
