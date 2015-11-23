#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.BinaryWriter
struct BinaryWriter_t67;
// System.IO.Stream
struct Stream_t68;
// System.Text.Encoding
struct Encoding_t284;
// System.Byte[]
struct ByteU5BU5D_t98;

#include "mscorlib_System_Object.h"

// System.IO.BinaryWriter
struct  BinaryWriter_t67  : public Object_t
{
	// System.IO.Stream System.IO.BinaryWriter::OutStream
	Stream_t68 * ___OutStream_1;
	// System.Text.Encoding System.IO.BinaryWriter::m_encoding
	Encoding_t284 * ___m_encoding_2;
	// System.Byte[] System.IO.BinaryWriter::buffer
	ByteU5BU5D_t98* ___buffer_3;
	// System.Boolean System.IO.BinaryWriter::disposed
	bool ___disposed_4;
	// System.Byte[] System.IO.BinaryWriter::stringBuffer
	ByteU5BU5D_t98* ___stringBuffer_5;
	// System.Int32 System.IO.BinaryWriter::maxCharsPerRound
	int32_t ___maxCharsPerRound_6;
};
struct BinaryWriter_t67_StaticFields{
	// System.IO.BinaryWriter System.IO.BinaryWriter::Null
	BinaryWriter_t67 * ___Null_0;
};
