#pragma once
#include <stdint.h>
// System.IO.Stream
struct Stream_t27;
// System.Text.Encoding
struct Encoding_t322;
// System.Byte[]
struct ByteU5BU5D_t97;
// System.Text.Decoder
struct Decoder_t1910;
// System.Char[]
struct CharU5BU5D_t276;
// System.Object
#include "mscorlib_System_Object.h"
// System.IO.BinaryReader
struct BinaryReader_t28  : public Object_t
{
	// System.IO.Stream System.IO.BinaryReader::m_stream
	Stream_t27 * ___m_stream_0;
	// System.Text.Encoding System.IO.BinaryReader::m_encoding
	Encoding_t322 * ___m_encoding_1;
	// System.Byte[] System.IO.BinaryReader::m_buffer
	ByteU5BU5D_t97* ___m_buffer_2;
	// System.Text.Decoder System.IO.BinaryReader::decoder
	Decoder_t1910 * ___decoder_3;
	// System.Char[] System.IO.BinaryReader::charBuffer
	CharU5BU5D_t276* ___charBuffer_4;
	// System.Boolean System.IO.BinaryReader::m_disposed
	bool ___m_disposed_5;
};
