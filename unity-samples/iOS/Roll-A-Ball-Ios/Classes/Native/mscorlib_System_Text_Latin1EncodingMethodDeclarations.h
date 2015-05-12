#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.Latin1Encoding
struct Latin1Encoding_t2202;
// System.Char[]
struct CharU5BU5D_t276;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t97;
// System.Text.EncoderFallbackBuffer
struct EncoderFallbackBuffer_t2187;

// System.Void System.Text.Latin1Encoding::.ctor()
 void Latin1Encoding__ctor_m11057 (Latin1Encoding_t2202 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetByteCount(System.Char[],System.Int32,System.Int32)
 int32_t Latin1Encoding_GetByteCount_m11058 (Latin1Encoding_t2202 * __this, CharU5BU5D_t276* ___chars, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetByteCount(System.String)
 int32_t Latin1Encoding_GetByteCount_m11059 (Latin1Encoding_t2202 * __this, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
 int32_t Latin1Encoding_GetBytes_m11060 (Latin1Encoding_t2202 * __this, CharU5BU5D_t276* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t97* ___bytes, int32_t ___byteIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Text.EncoderFallbackBuffer&,System.Char[]&)
 int32_t Latin1Encoding_GetBytes_m11061 (Latin1Encoding_t2202 * __this, CharU5BU5D_t276* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t97* ___bytes, int32_t ___byteIndex, EncoderFallbackBuffer_t2187 ** ___buffer, CharU5BU5D_t276** ___fallback_chars, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32)
 int32_t Latin1Encoding_GetBytes_m11062 (Latin1Encoding_t2202 * __this, String_t* ___s, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t97* ___bytes, int32_t ___byteIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32,System.Text.EncoderFallbackBuffer&,System.Char[]&)
 int32_t Latin1Encoding_GetBytes_m11063 (Latin1Encoding_t2202 * __this, String_t* ___s, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t97* ___bytes, int32_t ___byteIndex, EncoderFallbackBuffer_t2187 ** ___buffer, CharU5BU5D_t276** ___fallback_chars, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
 int32_t Latin1Encoding_GetCharCount_m11064 (Latin1Encoding_t2202 * __this, ByteU5BU5D_t97* ___bytes, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
 int32_t Latin1Encoding_GetChars_m11065 (Latin1Encoding_t2202 * __this, ByteU5BU5D_t97* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t276* ___chars, int32_t ___charIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetMaxByteCount(System.Int32)
 int32_t Latin1Encoding_GetMaxByteCount_m11066 (Latin1Encoding_t2202 * __this, int32_t ___charCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetMaxCharCount(System.Int32)
 int32_t Latin1Encoding_GetMaxCharCount_m11067 (Latin1Encoding_t2202 * __this, int32_t ___byteCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Latin1Encoding::GetString(System.Byte[],System.Int32,System.Int32)
 String_t* Latin1Encoding_GetString_m11068 (Latin1Encoding_t2202 * __this, ByteU5BU5D_t97* ___bytes, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Latin1Encoding::GetString(System.Byte[])
 String_t* Latin1Encoding_GetString_m11069 (Latin1Encoding_t2202 * __this, ByteU5BU5D_t97* ___bytes, MethodInfo* method) IL2CPP_METHOD_ATTR;
