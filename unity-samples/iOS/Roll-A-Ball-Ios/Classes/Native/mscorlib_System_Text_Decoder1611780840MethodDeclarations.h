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

// System.Text.Decoder
struct Decoder_t1611780840;
// System.Text.DecoderFallback
struct DecoderFallback_t4033313258;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t1215858122;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Text_DecoderFallback4033313258.h"

// System.Void System.Text.Decoder::.ctor()
extern "C"  void Decoder__ctor_m1448672242 (Decoder_t1611780840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.Decoder::set_Fallback(System.Text.DecoderFallback)
extern "C"  void Decoder_set_Fallback_m4287157405 (Decoder_t1611780840 * __this, DecoderFallback_t4033313258 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.DecoderFallbackBuffer System.Text.Decoder::get_FallbackBuffer()
extern "C"  DecoderFallbackBuffer_t1215858122 * Decoder_get_FallbackBuffer_m1620793422 (Decoder_t1611780840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
