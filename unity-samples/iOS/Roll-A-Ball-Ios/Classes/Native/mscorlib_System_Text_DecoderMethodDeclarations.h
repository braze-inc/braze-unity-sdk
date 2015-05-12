#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.Decoder
struct Decoder_t1910;
// System.Text.DecoderFallback
struct DecoderFallback_t2189;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t2188;
// System.Byte[]
struct ByteU5BU5D_t97;
// System.Char[]
struct CharU5BU5D_t276;

// System.Void System.Text.Decoder::.ctor()
 void Decoder__ctor_m10961 (Decoder_t1910 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.Decoder::set_Fallback(System.Text.DecoderFallback)
 void Decoder_set_Fallback_m10962 (Decoder_t1910 * __this, DecoderFallback_t2189 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.DecoderFallbackBuffer System.Text.Decoder::get_FallbackBuffer()
 DecoderFallbackBuffer_t2188 * Decoder_get_FallbackBuffer_m10963 (Decoder_t1910 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
