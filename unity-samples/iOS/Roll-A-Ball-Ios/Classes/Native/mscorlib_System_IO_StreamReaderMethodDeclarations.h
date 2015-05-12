#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.StreamReader
struct StreamReader_t1915;
// System.IO.Stream
struct Stream_t27;
// System.Text.Encoding
struct Encoding_t322;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t276;

// System.Void System.IO.StreamReader::.ctor()
 void StreamReader__ctor_m9576 (StreamReader_t1915 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::.ctor(System.IO.Stream,System.Text.Encoding)
 void StreamReader__ctor_m9577 (StreamReader_t1915 * __this, Stream_t27 * ___stream, Encoding_t322 * ___encoding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::.ctor(System.IO.Stream,System.Text.Encoding,System.Boolean,System.Int32)
 void StreamReader__ctor_m9578 (StreamReader_t1915 * __this, Stream_t27 * ___stream, Encoding_t322 * ___encoding, bool ___detectEncodingFromByteOrderMarks, int32_t ___bufferSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::.ctor(System.String)
 void StreamReader__ctor_m9579 (StreamReader_t1915 * __this, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::.ctor(System.String,System.Text.Encoding,System.Boolean,System.Int32)
 void StreamReader__ctor_m9580 (StreamReader_t1915 * __this, String_t* ___path, Encoding_t322 * ___encoding, bool ___detectEncodingFromByteOrderMarks, int32_t ___bufferSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::.cctor()
 void StreamReader__cctor_m9581 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::Initialize(System.IO.Stream,System.Text.Encoding,System.Boolean,System.Int32)
 void StreamReader_Initialize_m9582 (StreamReader_t1915 * __this, Stream_t27 * ___stream, Encoding_t322 * ___encoding, bool ___detectEncodingFromByteOrderMarks, int32_t ___bufferSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::Dispose(System.Boolean)
 void StreamReader_Dispose_m9583 (StreamReader_t1915 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader::DoChecks(System.Int32)
 int32_t StreamReader_DoChecks_m9584 (StreamReader_t1915 * __this, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader::ReadBuffer()
 int32_t StreamReader_ReadBuffer_m9585 (StreamReader_t1915 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader::Peek()
 int32_t StreamReader_Peek_m9586 (StreamReader_t1915 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader::Read()
 int32_t StreamReader_Read_m9587 (StreamReader_t1915 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader::Read(System.Char[],System.Int32,System.Int32)
 int32_t StreamReader_Read_m9588 (StreamReader_t1915 * __this, CharU5BU5D_t276* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader::FindNextEOL()
 int32_t StreamReader_FindNextEOL_m9589 (StreamReader_t1915 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.StreamReader::ReadLine()
 String_t* StreamReader_ReadLine_m9590 (StreamReader_t1915 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.StreamReader::ReadToEnd()
 String_t* StreamReader_ReadToEnd_m9591 (StreamReader_t1915 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
