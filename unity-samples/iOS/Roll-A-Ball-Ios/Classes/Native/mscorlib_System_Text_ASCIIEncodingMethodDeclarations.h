#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.ASCIIEncoding
struct ASCIIEncoding_t2186;
// System.Char[]
struct CharU5BU5D_t276;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t97;
// System.Text.EncoderFallbackBuffer
struct EncoderFallbackBuffer_t2187;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t2188;
// System.Text.Decoder
struct Decoder_t1910;

// System.Void System.Text.ASCIIEncoding::.ctor()
 void ASCIIEncoding__ctor_m10945 (ASCIIEncoding_t2186 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetByteCount(System.Char[],System.Int32,System.Int32)
 int32_t ASCIIEncoding_GetByteCount_m10946 (ASCIIEncoding_t2186 * __this, CharU5BU5D_t276* ___chars, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetByteCount(System.String)
 int32_t ASCIIEncoding_GetByteCount_m10947 (ASCIIEncoding_t2186 * __this, String_t* ___chars, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
 int32_t ASCIIEncoding_GetBytes_m10948 (ASCIIEncoding_t2186 * __this, CharU5BU5D_t276* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t97* ___bytes, int32_t ___byteIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Text.EncoderFallbackBuffer&,System.Char[]&)
 int32_t ASCIIEncoding_GetBytes_m10949 (ASCIIEncoding_t2186 * __this, CharU5BU5D_t276* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t97* ___bytes, int32_t ___byteIndex, EncoderFallbackBuffer_t2187 ** ___buffer, CharU5BU5D_t276** ___fallback_chars, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32)
 int32_t ASCIIEncoding_GetBytes_m10950 (ASCIIEncoding_t2186 * __this, String_t* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t97* ___bytes, int32_t ___byteIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32,System.Text.EncoderFallbackBuffer&,System.Char[]&)
 int32_t ASCIIEncoding_GetBytes_m10951 (ASCIIEncoding_t2186 * __this, String_t* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t97* ___bytes, int32_t ___byteIndex, EncoderFallbackBuffer_t2187 ** ___buffer, CharU5BU5D_t276** ___fallback_chars, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
 int32_t ASCIIEncoding_GetCharCount_m10952 (ASCIIEncoding_t2186 * __this, ByteU5BU5D_t97* ___bytes, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
 int32_t ASCIIEncoding_GetChars_m10953 (ASCIIEncoding_t2186 * __this, ByteU5BU5D_t97* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t276* ___chars, int32_t ___charIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32,System.Text.DecoderFallbackBuffer&)
 int32_t ASCIIEncoding_GetChars_m10954 (ASCIIEncoding_t2186 * __this, ByteU5BU5D_t97* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t276* ___chars, int32_t ___charIndex, DecoderFallbackBuffer_t2188 ** ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetMaxByteCount(System.Int32)
 int32_t ASCIIEncoding_GetMaxByteCount_m10955 (ASCIIEncoding_t2186 * __this, int32_t ___charCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetMaxCharCount(System.Int32)
 int32_t ASCIIEncoding_GetMaxCharCount_m10956 (ASCIIEncoding_t2186 * __this, int32_t ___byteCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.ASCIIEncoding::GetString(System.Byte[],System.Int32,System.Int32)
 String_t* ASCIIEncoding_GetString_m10957 (ASCIIEncoding_t2186 * __this, ByteU5BU5D_t97* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32)
 int32_t ASCIIEncoding_GetBytes_m10958 (ASCIIEncoding_t2186 * __this, uint16_t* ___chars, int32_t ___charCount, uint8_t* ___bytes, int32_t ___byteCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetByteCount(System.Char*,System.Int32)
 int32_t ASCIIEncoding_GetByteCount_m10959 (ASCIIEncoding_t2186 * __this, uint16_t* ___chars, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Decoder System.Text.ASCIIEncoding::GetDecoder()
 Decoder_t1910 * ASCIIEncoding_GetDecoder_m10960 (ASCIIEncoding_t2186 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
