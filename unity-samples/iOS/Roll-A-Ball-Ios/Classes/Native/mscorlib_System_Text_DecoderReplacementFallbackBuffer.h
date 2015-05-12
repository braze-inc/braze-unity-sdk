#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Text.DecoderFallbackBuffer
#include "mscorlib_System_Text_DecoderFallbackBuffer.h"
// System.Text.DecoderReplacementFallbackBuffer
struct DecoderReplacementFallbackBuffer_t2194  : public DecoderFallbackBuffer_t2188
{
	// System.Boolean System.Text.DecoderReplacementFallbackBuffer::fallback_assigned
	bool ___fallback_assigned_0;
	// System.Int32 System.Text.DecoderReplacementFallbackBuffer::current
	int32_t ___current_1;
	// System.String System.Text.DecoderReplacementFallbackBuffer::replacement
	String_t* ___replacement_2;
};
