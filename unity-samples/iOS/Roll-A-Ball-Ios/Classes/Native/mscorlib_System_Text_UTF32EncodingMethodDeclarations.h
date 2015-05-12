#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.UTF32Encoding
struct UTF32Encoding_t2204;
// System.Char[]
struct CharU5BU5D_t276;
// System.Byte[]
struct ByteU5BU5D_t97;
// System.Text.Decoder
struct Decoder_t1910;
// System.Object
struct Object_t;
// System.String
struct String_t;

// System.Void System.Text.UTF32Encoding::.ctor()
 void UTF32Encoding__ctor_m11092 (UTF32Encoding_t2204 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.UTF32Encoding::.ctor(System.Boolean,System.Boolean)
 void UTF32Encoding__ctor_m11093 (UTF32Encoding_t2204 * __this, bool ___bigEndian, bool ___byteOrderMark, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.UTF32Encoding::.ctor(System.Boolean,System.Boolean,System.Boolean)
 void UTF32Encoding__ctor_m11094 (UTF32Encoding_t2204 * __this, bool ___bigEndian, bool ___byteOrderMark, bool ___throwOnInvalidCharacters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF32Encoding::GetByteCount(System.Char[],System.Int32,System.Int32)
 int32_t UTF32Encoding_GetByteCount_m11095 (UTF32Encoding_t2204 * __this, CharU5BU5D_t276* ___chars, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF32Encoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
 int32_t UTF32Encoding_GetBytes_m11096 (UTF32Encoding_t2204 * __this, CharU5BU5D_t276* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t97* ___bytes, int32_t ___byteIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF32Encoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
 int32_t UTF32Encoding_GetCharCount_m11097 (UTF32Encoding_t2204 * __this, ByteU5BU5D_t97* ___bytes, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF32Encoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
 int32_t UTF32Encoding_GetChars_m11098 (UTF32Encoding_t2204 * __this, ByteU5BU5D_t97* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t276* ___chars, int32_t ___charIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF32Encoding::GetMaxByteCount(System.Int32)
 int32_t UTF32Encoding_GetMaxByteCount_m11099 (UTF32Encoding_t2204 * __this, int32_t ___charCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF32Encoding::GetMaxCharCount(System.Int32)
 int32_t UTF32Encoding_GetMaxCharCount_m11100 (UTF32Encoding_t2204 * __this, int32_t ___byteCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Decoder System.Text.UTF32Encoding::GetDecoder()
 Decoder_t1910 * UTF32Encoding_GetDecoder_m11101 (UTF32Encoding_t2204 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Text.UTF32Encoding::GetPreamble()
 ByteU5BU5D_t97* UTF32Encoding_GetPreamble_m11102 (UTF32Encoding_t2204 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.UTF32Encoding::Equals(System.Object)
 bool UTF32Encoding_Equals_m11103 (UTF32Encoding_t2204 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF32Encoding::GetHashCode()
 int32_t UTF32Encoding_GetHashCode_m11104 (UTF32Encoding_t2204 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF32Encoding::GetByteCount(System.Char*,System.Int32)
 int32_t UTF32Encoding_GetByteCount_m11105 (UTF32Encoding_t2204 * __this, uint16_t* ___chars, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF32Encoding::GetByteCount(System.String)
 int32_t UTF32Encoding_GetByteCount_m11106 (UTF32Encoding_t2204 * __this, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF32Encoding::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32)
 int32_t UTF32Encoding_GetBytes_m11107 (UTF32Encoding_t2204 * __this, uint16_t* ___chars, int32_t ___charCount, uint8_t* ___bytes, int32_t ___byteCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF32Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32)
 int32_t UTF32Encoding_GetBytes_m11108 (UTF32Encoding_t2204 * __this, String_t* ___s, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t97* ___bytes, int32_t ___byteIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.UTF32Encoding::GetString(System.Byte[],System.Int32,System.Int32)
 String_t* UTF32Encoding_GetString_m11109 (UTF32Encoding_t2204 * __this, ByteU5BU5D_t97* ___bytes, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
