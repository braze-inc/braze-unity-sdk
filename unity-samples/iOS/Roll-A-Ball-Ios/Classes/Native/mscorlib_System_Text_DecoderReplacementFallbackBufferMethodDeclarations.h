#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.DecoderReplacementFallbackBuffer
struct DecoderReplacementFallbackBuffer_t2194;
// System.Text.DecoderReplacementFallback
struct DecoderReplacementFallback_t2193;
// System.Byte[]
struct ByteU5BU5D_t97;

// System.Void System.Text.DecoderReplacementFallbackBuffer::.ctor(System.Text.DecoderReplacementFallback)
 void DecoderReplacementFallbackBuffer__ctor_m10988 (DecoderReplacementFallbackBuffer_t2194 * __this, DecoderReplacementFallback_t2193 * ___fallback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.DecoderReplacementFallbackBuffer::get_Remaining()
 int32_t DecoderReplacementFallbackBuffer_get_Remaining_m10989 (DecoderReplacementFallbackBuffer_t2194 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.DecoderReplacementFallbackBuffer::Fallback(System.Byte[],System.Int32)
 bool DecoderReplacementFallbackBuffer_Fallback_m10990 (DecoderReplacementFallbackBuffer_t2194 * __this, ByteU5BU5D_t97* ___bytesUnknown, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Text.DecoderReplacementFallbackBuffer::GetNextChar()
 uint16_t DecoderReplacementFallbackBuffer_GetNextChar_m10991 (DecoderReplacementFallbackBuffer_t2194 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.DecoderReplacementFallbackBuffer::Reset()
 void DecoderReplacementFallbackBuffer_Reset_m10992 (DecoderReplacementFallbackBuffer_t2194 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
