#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.UnexceptionalStreamReader
struct UnexceptionalStreamReader_t1939;
// System.IO.Stream
struct Stream_t27;
// System.Text.Encoding
struct Encoding_t322;
// System.Char[]
struct CharU5BU5D_t276;
// System.String
struct String_t;

// System.Void System.IO.UnexceptionalStreamReader::.ctor(System.IO.Stream,System.Text.Encoding)
 void UnexceptionalStreamReader__ctor_m9660 (UnexceptionalStreamReader_t1939 * __this, Stream_t27 * ___stream, Encoding_t322 * ___encoding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamReader::.cctor()
 void UnexceptionalStreamReader__cctor_m9661 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.UnexceptionalStreamReader::Peek()
 int32_t UnexceptionalStreamReader_Peek_m9662 (UnexceptionalStreamReader_t1939 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.UnexceptionalStreamReader::Read()
 int32_t UnexceptionalStreamReader_Read_m9663 (UnexceptionalStreamReader_t1939 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.UnexceptionalStreamReader::Read(System.Char[],System.Int32,System.Int32)
 int32_t UnexceptionalStreamReader_Read_m9664 (UnexceptionalStreamReader_t1939 * __this, CharU5BU5D_t276* ___dest_buffer, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.UnexceptionalStreamReader::CheckEOL(System.Char)
 bool UnexceptionalStreamReader_CheckEOL_m9665 (UnexceptionalStreamReader_t1939 * __this, uint16_t ___current, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.UnexceptionalStreamReader::ReadLine()
 String_t* UnexceptionalStreamReader_ReadLine_m9666 (UnexceptionalStreamReader_t1939 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.UnexceptionalStreamReader::ReadToEnd()
 String_t* UnexceptionalStreamReader_ReadToEnd_m9667 (UnexceptionalStreamReader_t1939 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
