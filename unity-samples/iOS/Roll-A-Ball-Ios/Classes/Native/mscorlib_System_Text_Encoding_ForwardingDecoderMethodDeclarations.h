#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.Encoding/ForwardingDecoder
struct ForwardingDecoder_t2201;
// System.Text.Encoding
struct Encoding_t322;
// System.Byte[]
struct ByteU5BU5D_t97;
// System.Char[]
struct CharU5BU5D_t276;

// System.Void System.Text.Encoding/ForwardingDecoder::.ctor(System.Text.Encoding)
 void ForwardingDecoder__ctor_m11024 (ForwardingDecoder_t2201 * __this, Encoding_t322 * ___enc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Encoding/ForwardingDecoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
 int32_t ForwardingDecoder_GetChars_m11025 (ForwardingDecoder_t2201 * __this, ByteU5BU5D_t97* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t276* ___chars, int32_t ___charIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
