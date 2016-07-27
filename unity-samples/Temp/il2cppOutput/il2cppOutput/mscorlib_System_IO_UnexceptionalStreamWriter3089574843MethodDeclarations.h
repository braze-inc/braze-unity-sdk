#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.IO.UnexceptionalStreamWriter
struct UnexceptionalStreamWriter_t3089574843;
// System.IO.Stream
struct Stream_t219029575;
// System.Text.Encoding
struct Encoding_t180559927;
// System.Char[]
struct CharU5BU5D_t3416858730;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream219029575.h"
#include "mscorlib_System_Text_Encoding180559927.h"
#include "mscorlib_System_String968488902.h"

// System.Void System.IO.UnexceptionalStreamWriter::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C"  void UnexceptionalStreamWriter__ctor_m2951022641 (UnexceptionalStreamWriter_t3089574843 * __this, Stream_t219029575 * ___stream0, Encoding_t180559927 * ___encoding1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Flush()
extern "C"  void UnexceptionalStreamWriter_Flush_m3488853355 (UnexceptionalStreamWriter_t3089574843 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char[],System.Int32,System.Int32)
extern "C"  void UnexceptionalStreamWriter_Write_m2144061973 (UnexceptionalStreamWriter_t3089574843 * __this, CharU5BU5D_t3416858730* ___buffer0, int32_t ___index1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char)
extern "C"  void UnexceptionalStreamWriter_Write_m2227220375 (UnexceptionalStreamWriter_t3089574843 * __this, uint16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char[])
extern "C"  void UnexceptionalStreamWriter_Write_m1465117941 (UnexceptionalStreamWriter_t3089574843 * __this, CharU5BU5D_t3416858730* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.String)
extern "C"  void UnexceptionalStreamWriter_Write_m3139275068 (UnexceptionalStreamWriter_t3089574843 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
