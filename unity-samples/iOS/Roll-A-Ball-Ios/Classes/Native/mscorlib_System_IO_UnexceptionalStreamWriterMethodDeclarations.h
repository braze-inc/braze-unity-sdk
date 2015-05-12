#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.UnexceptionalStreamWriter
struct UnexceptionalStreamWriter_t1940;
// System.IO.Stream
struct Stream_t27;
// System.Text.Encoding
struct Encoding_t322;
// System.Char[]
struct CharU5BU5D_t276;
// System.String
struct String_t;

// System.Void System.IO.UnexceptionalStreamWriter::.ctor(System.IO.Stream,System.Text.Encoding)
 void UnexceptionalStreamWriter__ctor_m9668 (UnexceptionalStreamWriter_t1940 * __this, Stream_t27 * ___stream, Encoding_t322 * ___encoding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Flush()
 void UnexceptionalStreamWriter_Flush_m9669 (UnexceptionalStreamWriter_t1940 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char[],System.Int32,System.Int32)
 void UnexceptionalStreamWriter_Write_m9670 (UnexceptionalStreamWriter_t1940 * __this, CharU5BU5D_t276* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char)
 void UnexceptionalStreamWriter_Write_m9671 (UnexceptionalStreamWriter_t1940 * __this, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char[])
 void UnexceptionalStreamWriter_Write_m9672 (UnexceptionalStreamWriter_t1940 * __this, CharU5BU5D_t276* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.String)
 void UnexceptionalStreamWriter_Write_m9673 (UnexceptionalStreamWriter_t1940 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
