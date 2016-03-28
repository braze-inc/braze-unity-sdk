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

// System.Text.DecoderExceptionFallbackBuffer
struct DecoderExceptionFallbackBuffer_t2938508785;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Text.DecoderExceptionFallbackBuffer::.ctor()
extern "C"  void DecoderExceptionFallbackBuffer__ctor_m1509764995 (DecoderExceptionFallbackBuffer_t2938508785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.DecoderExceptionFallbackBuffer::get_Remaining()
extern "C"  int32_t DecoderExceptionFallbackBuffer_get_Remaining_m629320722 (DecoderExceptionFallbackBuffer_t2938508785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.DecoderExceptionFallbackBuffer::Fallback(System.Byte[],System.Int32)
extern "C"  bool DecoderExceptionFallbackBuffer_Fallback_m3367248051 (DecoderExceptionFallbackBuffer_t2938508785 * __this, ByteU5BU5D_t58506160* ___bytesUnknown, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Text.DecoderExceptionFallbackBuffer::GetNextChar()
extern "C"  uint16_t DecoderExceptionFallbackBuffer_GetNextChar_m3794963074 (DecoderExceptionFallbackBuffer_t2938508785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
