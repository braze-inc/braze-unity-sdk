#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.TextReader
struct TextReader_t1534522647;

#include "mscorlib_System_IO_TextReader1534522647.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.SynchronizedReader
struct  SynchronizedReader_t1541163966  : public TextReader_t1534522647
{
public:
	// System.IO.TextReader System.IO.SynchronizedReader::reader
	TextReader_t1534522647 * ___reader_1;

public:
	inline static int32_t get_offset_of_reader_1() { return static_cast<int32_t>(offsetof(SynchronizedReader_t1541163966, ___reader_1)); }
	inline TextReader_t1534522647 * get_reader_1() const { return ___reader_1; }
	inline TextReader_t1534522647 ** get_address_of_reader_1() { return &___reader_1; }
	inline void set_reader_1(TextReader_t1534522647 * value)
	{
		___reader_1 = value;
		Il2CppCodeGenWriteBarrier(&___reader_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
