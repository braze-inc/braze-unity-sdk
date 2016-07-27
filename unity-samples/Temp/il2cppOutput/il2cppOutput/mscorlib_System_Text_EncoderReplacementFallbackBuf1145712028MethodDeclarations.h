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

// System.Text.EncoderReplacementFallbackBuffer
struct EncoderReplacementFallbackBuffer_t1145712028;
// System.Text.EncoderReplacementFallback
struct EncoderReplacementFallback_t4114605884;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Text_EncoderReplacementFallback4114605884.h"

// System.Void System.Text.EncoderReplacementFallbackBuffer::.ctor(System.Text.EncoderReplacementFallback)
extern "C"  void EncoderReplacementFallbackBuffer__ctor_m1930588894 (EncoderReplacementFallbackBuffer_t1145712028 * __this, EncoderReplacementFallback_t4114605884 * ___fallback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.EncoderReplacementFallbackBuffer::get_Remaining()
extern "C"  int32_t EncoderReplacementFallbackBuffer_get_Remaining_m3963160455 (EncoderReplacementFallbackBuffer_t1145712028 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.EncoderReplacementFallbackBuffer::Fallback(System.Char,System.Int32)
extern "C"  bool EncoderReplacementFallbackBuffer_Fallback_m1355578442 (EncoderReplacementFallbackBuffer_t1145712028 * __this, uint16_t ___charUnknown0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.EncoderReplacementFallbackBuffer::Fallback(System.Char,System.Char,System.Int32)
extern "C"  bool EncoderReplacementFallbackBuffer_Fallback_m2465367699 (EncoderReplacementFallbackBuffer_t1145712028 * __this, uint16_t ___charUnknownHigh0, uint16_t ___charUnknownLow1, int32_t ___index2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.EncoderReplacementFallbackBuffer::Fallback(System.Int32)
extern "C"  bool EncoderReplacementFallbackBuffer_Fallback_m2505575553 (EncoderReplacementFallbackBuffer_t1145712028 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Text.EncoderReplacementFallbackBuffer::GetNextChar()
extern "C"  uint16_t EncoderReplacementFallbackBuffer_GetNextChar_m491962295 (EncoderReplacementFallbackBuffer_t1145712028 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
