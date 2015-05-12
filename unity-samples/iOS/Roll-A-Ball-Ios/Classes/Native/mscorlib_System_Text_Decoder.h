#pragma once
#include <stdint.h>
// System.Text.DecoderFallback
struct DecoderFallback_t2189;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t2188;
// System.Object
#include "mscorlib_System_Object.h"
// System.Text.Decoder
struct Decoder_t1910  : public Object_t
{
	// System.Text.DecoderFallback System.Text.Decoder::fallback
	DecoderFallback_t2189 * ___fallback_0;
	// System.Text.DecoderFallbackBuffer System.Text.Decoder::fallback_buffer
	DecoderFallbackBuffer_t2188 * ___fallback_buffer_1;
};
