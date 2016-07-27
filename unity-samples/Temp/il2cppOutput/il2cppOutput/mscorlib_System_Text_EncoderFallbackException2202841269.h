#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ArgumentException124305799.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderFallbackException
struct  EncoderFallbackException_t2202841269  : public ArgumentException_t124305799
{
public:
	// System.Char System.Text.EncoderFallbackException::char_unknown
	uint16_t ___char_unknown_13;
	// System.Char System.Text.EncoderFallbackException::char_unknown_high
	uint16_t ___char_unknown_high_14;
	// System.Char System.Text.EncoderFallbackException::char_unknown_low
	uint16_t ___char_unknown_low_15;
	// System.Int32 System.Text.EncoderFallbackException::index
	int32_t ___index_16;

public:
	inline static int32_t get_offset_of_char_unknown_13() { return static_cast<int32_t>(offsetof(EncoderFallbackException_t2202841269, ___char_unknown_13)); }
	inline uint16_t get_char_unknown_13() const { return ___char_unknown_13; }
	inline uint16_t* get_address_of_char_unknown_13() { return &___char_unknown_13; }
	inline void set_char_unknown_13(uint16_t value)
	{
		___char_unknown_13 = value;
	}

	inline static int32_t get_offset_of_char_unknown_high_14() { return static_cast<int32_t>(offsetof(EncoderFallbackException_t2202841269, ___char_unknown_high_14)); }
	inline uint16_t get_char_unknown_high_14() const { return ___char_unknown_high_14; }
	inline uint16_t* get_address_of_char_unknown_high_14() { return &___char_unknown_high_14; }
	inline void set_char_unknown_high_14(uint16_t value)
	{
		___char_unknown_high_14 = value;
	}

	inline static int32_t get_offset_of_char_unknown_low_15() { return static_cast<int32_t>(offsetof(EncoderFallbackException_t2202841269, ___char_unknown_low_15)); }
	inline uint16_t get_char_unknown_low_15() const { return ___char_unknown_low_15; }
	inline uint16_t* get_address_of_char_unknown_low_15() { return &___char_unknown_low_15; }
	inline void set_char_unknown_low_15(uint16_t value)
	{
		___char_unknown_low_15 = value;
	}

	inline static int32_t get_offset_of_index_16() { return static_cast<int32_t>(offsetof(EncoderFallbackException_t2202841269, ___index_16)); }
	inline int32_t get_index_16() const { return ___index_16; }
	inline int32_t* get_address_of_index_16() { return &___index_16; }
	inline void set_index_16(int32_t value)
	{
		___index_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
