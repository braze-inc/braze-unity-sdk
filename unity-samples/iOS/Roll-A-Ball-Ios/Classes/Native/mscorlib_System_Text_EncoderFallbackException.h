#pragma once
#include <stdint.h>
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.Text.EncoderFallbackException
struct EncoderFallbackException_t2198  : public ArgumentException_t116
{
	// System.Char System.Text.EncoderFallbackException::char_unknown
	uint16_t ___char_unknown_13;
	// System.Char System.Text.EncoderFallbackException::char_unknown_high
	uint16_t ___char_unknown_high_14;
	// System.Char System.Text.EncoderFallbackException::char_unknown_low
	uint16_t ___char_unknown_low_15;
	// System.Int32 System.Text.EncoderFallbackException::index
	int32_t ___index_16;
};
