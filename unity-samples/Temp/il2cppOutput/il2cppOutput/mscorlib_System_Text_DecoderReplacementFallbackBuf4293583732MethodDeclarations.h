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

// System.Text.DecoderReplacementFallbackBuffer
struct DecoderReplacementFallbackBuffer_t4293583732;
// System.Text.DecoderReplacementFallback
struct DecoderReplacementFallback_t1303633684;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Text_DecoderReplacementFallback1303633684.h"

// System.Void System.Text.DecoderReplacementFallbackBuffer::.ctor(System.Text.DecoderReplacementFallback)
extern "C"  void DecoderReplacementFallbackBuffer__ctor_m1088992558 (DecoderReplacementFallbackBuffer_t4293583732 * __this, DecoderReplacementFallback_t1303633684 * ___fallback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.DecoderReplacementFallbackBuffer::get_Remaining()
extern "C"  int32_t DecoderReplacementFallbackBuffer_get_Remaining_m3834625199 (DecoderReplacementFallbackBuffer_t4293583732 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.DecoderReplacementFallbackBuffer::Fallback(System.Byte[],System.Int32)
extern "C"  bool DecoderReplacementFallbackBuffer_Fallback_m4123943606 (DecoderReplacementFallbackBuffer_t4293583732 * __this, ByteU5BU5D_t58506160* ___bytesUnknown0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Text.DecoderReplacementFallbackBuffer::GetNextChar()
extern "C"  uint16_t DecoderReplacementFallbackBuffer_GetNextChar_m581213919 (DecoderReplacementFallbackBuffer_t4293583732 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.DecoderReplacementFallbackBuffer::Reset()
extern "C"  void DecoderReplacementFallbackBuffer_Reset_m4105085133 (DecoderReplacementFallbackBuffer_t4293583732 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
