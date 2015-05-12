#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.Decoder
struct Decoder_t1922;
// System.Text.DecoderFallback
struct DecoderFallback_t2201;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t2200;
// System.Byte[]
struct ByteU5BU5D_t112;
// System.Char[]
struct CharU5BU5D_t289;

// System.Void System.Text.Decoder::.ctor()
 void Decoder__ctor_m11056 (Decoder_t1922 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.Decoder::set_Fallback(System.Text.DecoderFallback)
 void Decoder_set_Fallback_m11057 (Decoder_t1922 * __this, DecoderFallback_t2201 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.DecoderFallbackBuffer System.Text.Decoder::get_FallbackBuffer()
 DecoderFallbackBuffer_t2200 * Decoder_get_FallbackBuffer_m11058 (Decoder_t1922 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
