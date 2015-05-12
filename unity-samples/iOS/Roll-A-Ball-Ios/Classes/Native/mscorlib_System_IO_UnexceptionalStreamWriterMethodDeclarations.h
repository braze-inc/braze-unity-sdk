#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.UnexceptionalStreamWriter
struct UnexceptionalStreamWriter_t1952;
// System.IO.Stream
struct Stream_t25;
// System.Text.Encoding
struct Encoding_t335;
// System.Char[]
struct CharU5BU5D_t289;
// System.String
struct String_t;

// System.Void System.IO.UnexceptionalStreamWriter::.ctor(System.IO.Stream,System.Text.Encoding)
 void UnexceptionalStreamWriter__ctor_m9763 (UnexceptionalStreamWriter_t1952 * __this, Stream_t25 * ___stream, Encoding_t335 * ___encoding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Flush()
 void UnexceptionalStreamWriter_Flush_m9764 (UnexceptionalStreamWriter_t1952 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char[],System.Int32,System.Int32)
 void UnexceptionalStreamWriter_Write_m9765 (UnexceptionalStreamWriter_t1952 * __this, CharU5BU5D_t289* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char)
 void UnexceptionalStreamWriter_Write_m9766 (UnexceptionalStreamWriter_t1952 * __this, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char[])
 void UnexceptionalStreamWriter_Write_m9767 (UnexceptionalStreamWriter_t1952 * __this, CharU5BU5D_t289* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.String)
 void UnexceptionalStreamWriter_Write_m9768 (UnexceptionalStreamWriter_t1952 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
