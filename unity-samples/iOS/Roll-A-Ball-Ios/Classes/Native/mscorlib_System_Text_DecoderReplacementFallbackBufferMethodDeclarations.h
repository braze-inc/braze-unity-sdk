#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.DecoderReplacementFallbackBuffer
struct DecoderReplacementFallbackBuffer_t2206;
// System.Text.DecoderReplacementFallback
struct DecoderReplacementFallback_t2205;
// System.Byte[]
struct ByteU5BU5D_t112;

// System.Void System.Text.DecoderReplacementFallbackBuffer::.ctor(System.Text.DecoderReplacementFallback)
 void DecoderReplacementFallbackBuffer__ctor_m11083 (DecoderReplacementFallbackBuffer_t2206 * __this, DecoderReplacementFallback_t2205 * ___fallback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.DecoderReplacementFallbackBuffer::get_Remaining()
 int32_t DecoderReplacementFallbackBuffer_get_Remaining_m11084 (DecoderReplacementFallbackBuffer_t2206 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.DecoderReplacementFallbackBuffer::Fallback(System.Byte[],System.Int32)
 bool DecoderReplacementFallbackBuffer_Fallback_m11085 (DecoderReplacementFallbackBuffer_t2206 * __this, ByteU5BU5D_t112* ___bytesUnknown, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Text.DecoderReplacementFallbackBuffer::GetNextChar()
 uint16_t DecoderReplacementFallbackBuffer_GetNextChar_m11086 (DecoderReplacementFallbackBuffer_t2206 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.DecoderReplacementFallbackBuffer::Reset()
 void DecoderReplacementFallbackBuffer_Reset_m11087 (DecoderReplacementFallbackBuffer_t2206 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
