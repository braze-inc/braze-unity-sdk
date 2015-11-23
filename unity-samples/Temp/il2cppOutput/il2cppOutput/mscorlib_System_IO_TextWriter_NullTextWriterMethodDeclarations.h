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

// System.IO.TextWriter/NullTextWriter
struct NullTextWriter_t1580;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t270;

#include "codegen/il2cpp-codegen.h"

// System.Void System.IO.TextWriter/NullTextWriter::.ctor()
extern "C" void NullTextWriter__ctor_m9463 (NullTextWriter_t1580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter/NullTextWriter::Write(System.String)
extern "C" void NullTextWriter_Write_m9464 (NullTextWriter_t1580 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter/NullTextWriter::Write(System.Char)
extern "C" void NullTextWriter_Write_m9465 (NullTextWriter_t1580 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter/NullTextWriter::Write(System.Char[],System.Int32,System.Int32)
extern "C" void NullTextWriter_Write_m9466 (NullTextWriter_t1580 * __this, CharU5BU5D_t270* ___value, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
