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

// System.Text.UnicodeEncoding/UnicodeDecoder
struct UnicodeDecoder_t3369145031;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Char[]
struct CharU5BU5D_t3416858730;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Text.UnicodeEncoding/UnicodeDecoder::.ctor(System.Boolean)
extern "C"  void UnicodeDecoder__ctor_m1607892801 (UnicodeDecoder_t3369145031 * __this, bool ___bigEndian, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding/UnicodeDecoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C"  int32_t UnicodeDecoder_GetChars_m4249510390 (UnicodeDecoder_t3369145031 * __this, ByteU5BU5D_t58506160* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t3416858730* ___chars, int32_t ___charIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
