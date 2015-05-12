#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.DecoderExceptionFallbackBuffer
struct DecoderExceptionFallbackBuffer_t2191;
// System.Byte[]
struct ByteU5BU5D_t97;

// System.Void System.Text.DecoderExceptionFallbackBuffer::.ctor()
 void DecoderExceptionFallbackBuffer__ctor_m10968 (DecoderExceptionFallbackBuffer_t2191 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.DecoderExceptionFallbackBuffer::get_Remaining()
 int32_t DecoderExceptionFallbackBuffer_get_Remaining_m10969 (DecoderExceptionFallbackBuffer_t2191 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.DecoderExceptionFallbackBuffer::Fallback(System.Byte[],System.Int32)
 bool DecoderExceptionFallbackBuffer_Fallback_m10970 (DecoderExceptionFallbackBuffer_t2191 * __this, ByteU5BU5D_t97* ___bytesUnknown, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Text.DecoderExceptionFallbackBuffer::GetNextChar()
 uint16_t DecoderExceptionFallbackBuffer_GetNextChar_m10971 (DecoderExceptionFallbackBuffer_t2191 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
