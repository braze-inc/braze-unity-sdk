#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.StreamWriter
struct StreamWriter_t1933;
// System.IO.Stream
struct Stream_t27;
// System.Text.Encoding
struct Encoding_t322;
// System.Char[]
struct CharU5BU5D_t276;
// System.String
struct String_t;

// System.Void System.IO.StreamWriter::.ctor(System.IO.Stream,System.Text.Encoding)
 void StreamWriter__ctor_m9592 (StreamWriter_t1933 * __this, Stream_t27 * ___stream, Encoding_t322 * ___encoding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::.ctor(System.IO.Stream,System.Text.Encoding,System.Int32)
 void StreamWriter__ctor_m9593 (StreamWriter_t1933 * __this, Stream_t27 * ___stream, Encoding_t322 * ___encoding, int32_t ___bufferSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::.cctor()
 void StreamWriter__cctor_m9594 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Initialize(System.Text.Encoding,System.Int32)
 void StreamWriter_Initialize_m9595 (StreamWriter_t1933 * __this, Encoding_t322 * ___encoding, int32_t ___bufferSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::set_AutoFlush(System.Boolean)
 void StreamWriter_set_AutoFlush_m9596 (StreamWriter_t1933 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Dispose(System.Boolean)
 void StreamWriter_Dispose_m9597 (StreamWriter_t1933 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Flush()
 void StreamWriter_Flush_m9598 (StreamWriter_t1933 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::FlushBytes()
 void StreamWriter_FlushBytes_m9599 (StreamWriter_t1933 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Decode()
 void StreamWriter_Decode_m9600 (StreamWriter_t1933 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Write(System.Char[],System.Int32,System.Int32)
 void StreamWriter_Write_m9601 (StreamWriter_t1933 * __this, CharU5BU5D_t276* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::LowLevelWrite(System.Char[],System.Int32,System.Int32)
 void StreamWriter_LowLevelWrite_m9602 (StreamWriter_t1933 * __this, CharU5BU5D_t276* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::LowLevelWrite(System.String)
 void StreamWriter_LowLevelWrite_m9603 (StreamWriter_t1933 * __this, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Write(System.Char)
 void StreamWriter_Write_m9604 (StreamWriter_t1933 * __this, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Write(System.Char[])
 void StreamWriter_Write_m9605 (StreamWriter_t1933 * __this, CharU5BU5D_t276* ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Write(System.String)
 void StreamWriter_Write_m9606 (StreamWriter_t1933 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Close()
 void StreamWriter_Close_m9607 (StreamWriter_t1933 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Finalize()
 void StreamWriter_Finalize_m9608 (StreamWriter_t1933 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
