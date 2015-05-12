#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.UnicodeEncoding/UnicodeDecoder
struct UnicodeDecoder_t2210;
// System.Byte[]
struct ByteU5BU5D_t97;
// System.Char[]
struct CharU5BU5D_t276;

// System.Void System.Text.UnicodeEncoding/UnicodeDecoder::.ctor(System.Boolean)
 void UnicodeDecoder__ctor_m11163 (UnicodeDecoder_t2210 * __this, bool ___bigEndian, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding/UnicodeDecoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
 int32_t UnicodeDecoder_GetChars_m11164 (UnicodeDecoder_t2210 * __this, ByteU5BU5D_t97* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t276* ___chars, int32_t ___charIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
