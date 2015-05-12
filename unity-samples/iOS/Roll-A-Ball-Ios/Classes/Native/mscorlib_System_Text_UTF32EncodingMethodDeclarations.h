#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.UTF32Encoding
struct UTF32Encoding_t2216;
// System.Char[]
struct CharU5BU5D_t289;
// System.Byte[]
struct ByteU5BU5D_t112;
// System.Text.Decoder
struct Decoder_t1922;
// System.Object
struct Object_t;
// System.String
struct String_t;

// System.Void System.Text.UTF32Encoding::.ctor()
 void UTF32Encoding__ctor_m11187 (UTF32Encoding_t2216 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.UTF32Encoding::.ctor(System.Boolean,System.Boolean)
 void UTF32Encoding__ctor_m11188 (UTF32Encoding_t2216 * __this, bool ___bigEndian, bool ___byteOrderMark, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.UTF32Encoding::.ctor(System.Boolean,System.Boolean,System.Boolean)
 void UTF32Encoding__ctor_m11189 (UTF32Encoding_t2216 * __this, bool ___bigEndian, bool ___byteOrderMark, bool ___throwOnInvalidCharacters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF32Encoding::GetByteCount(System.Char[],System.Int32,System.Int32)
 int32_t UTF32Encoding_GetByteCount_m11190 (UTF32Encoding_t2216 * __this, CharU5BU5D_t289* ___chars, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF32Encoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
 int32_t UTF32Encoding_GetBytes_m11191 (UTF32Encoding_t2216 * __this, CharU5BU5D_t289* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t112* ___bytes, int32_t ___byteIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF32Encoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
 int32_t UTF32Encoding_GetCharCount_m11192 (UTF32Encoding_t2216 * __this, ByteU5BU5D_t112* ___bytes, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF32Encoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
 int32_t UTF32Encoding_GetChars_m11193 (UTF32Encoding_t2216 * __this, ByteU5BU5D_t112* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t289* ___chars, int32_t ___charIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF32Encoding::GetMaxByteCount(System.Int32)
 int32_t UTF32Encoding_GetMaxByteCount_m11194 (UTF32Encoding_t2216 * __this, int32_t ___charCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF32Encoding::GetMaxCharCount(System.Int32)
 int32_t UTF32Encoding_GetMaxCharCount_m11195 (UTF32Encoding_t2216 * __this, int32_t ___byteCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Decoder System.Text.UTF32Encoding::GetDecoder()
 Decoder_t1922 * UTF32Encoding_GetDecoder_m11196 (UTF32Encoding_t2216 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Text.UTF32Encoding::GetPreamble()
 ByteU5BU5D_t112* UTF32Encoding_GetPreamble_m11197 (UTF32Encoding_t2216 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.UTF32Encoding::Equals(System.Object)
 bool UTF32Encoding_Equals_m11198 (UTF32Encoding_t2216 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF32Encoding::GetHashCode()
 int32_t UTF32Encoding_GetHashCode_m11199 (UTF32Encoding_t2216 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF32Encoding::GetByteCount(System.Char*,System.Int32)
 int32_t UTF32Encoding_GetByteCount_m11200 (UTF32Encoding_t2216 * __this, uint16_t* ___chars, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF32Encoding::GetByteCount(System.String)
 int32_t UTF32Encoding_GetByteCount_m11201 (UTF32Encoding_t2216 * __this, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF32Encoding::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32)
 int32_t UTF32Encoding_GetBytes_m11202 (UTF32Encoding_t2216 * __this, uint16_t* ___chars, int32_t ___charCount, uint8_t* ___bytes, int32_t ___byteCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF32Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32)
 int32_t UTF32Encoding_GetBytes_m11203 (UTF32Encoding_t2216 * __this, String_t* ___s, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t112* ___bytes, int32_t ___byteIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.UTF32Encoding::GetString(System.Byte[],System.Int32,System.Int32)
 String_t* UTF32Encoding_GetString_m11204 (UTF32Encoding_t2216 * __this, ByteU5BU5D_t112* ___bytes, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
