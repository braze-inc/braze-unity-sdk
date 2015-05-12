#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.UTF7Encoding
struct UTF7Encoding_t2207;
// System.Object
struct Object_t;
// System.Char[]
struct CharU5BU5D_t276;
// System.Byte[]
struct ByteU5BU5D_t97;
// System.Text.Decoder
struct Decoder_t1910;
// System.String
struct String_t;

// System.Void System.Text.UTF7Encoding::.ctor()
 void UTF7Encoding__ctor_m11112 (UTF7Encoding_t2207 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.UTF7Encoding::.ctor(System.Boolean)
 void UTF7Encoding__ctor_m11113 (UTF7Encoding_t2207 * __this, bool ___allowOptionals, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.UTF7Encoding::.cctor()
 void UTF7Encoding__cctor_m11114 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetHashCode()
 int32_t UTF7Encoding_GetHashCode_m11115 (UTF7Encoding_t2207 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.UTF7Encoding::Equals(System.Object)
 bool UTF7Encoding_Equals_m11116 (UTF7Encoding_t2207 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::InternalGetByteCount(System.Char[],System.Int32,System.Int32,System.Boolean,System.Int32,System.Boolean,System.Boolean)
 int32_t UTF7Encoding_InternalGetByteCount_m11117 (Object_t * __this/* static, unused */, CharU5BU5D_t276* ___chars, int32_t ___index, int32_t ___count, bool ___flush, int32_t ___leftOver, bool ___isInShifted, bool ___allowOptionals, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetByteCount(System.Char[],System.Int32,System.Int32)
 int32_t UTF7Encoding_GetByteCount_m11118 (UTF7Encoding_t2207 * __this, CharU5BU5D_t276* ___chars, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::InternalGetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Boolean,System.Int32&,System.Boolean&,System.Boolean)
 int32_t UTF7Encoding_InternalGetBytes_m11119 (Object_t * __this/* static, unused */, CharU5BU5D_t276* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t97* ___bytes, int32_t ___byteIndex, bool ___flush, int32_t* ___leftOver, bool* ___isInShifted, bool ___allowOptionals, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
 int32_t UTF7Encoding_GetBytes_m11120 (UTF7Encoding_t2207 * __this, CharU5BU5D_t276* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t97* ___bytes, int32_t ___byteIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::InternalGetCharCount(System.Byte[],System.Int32,System.Int32,System.Int32)
 int32_t UTF7Encoding_InternalGetCharCount_m11121 (Object_t * __this/* static, unused */, ByteU5BU5D_t97* ___bytes, int32_t ___index, int32_t ___count, int32_t ___leftOver, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
 int32_t UTF7Encoding_GetCharCount_m11122 (UTF7Encoding_t2207 * __this, ByteU5BU5D_t97* ___bytes, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::InternalGetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32,System.Int32&)
 int32_t UTF7Encoding_InternalGetChars_m11123 (Object_t * __this/* static, unused */, ByteU5BU5D_t97* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t276* ___chars, int32_t ___charIndex, int32_t* ___leftOver, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
 int32_t UTF7Encoding_GetChars_m11124 (UTF7Encoding_t2207 * __this, ByteU5BU5D_t97* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t276* ___chars, int32_t ___charIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetMaxByteCount(System.Int32)
 int32_t UTF7Encoding_GetMaxByteCount_m11125 (UTF7Encoding_t2207 * __this, int32_t ___charCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetMaxCharCount(System.Int32)
 int32_t UTF7Encoding_GetMaxCharCount_m11126 (UTF7Encoding_t2207 * __this, int32_t ___byteCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Decoder System.Text.UTF7Encoding::GetDecoder()
 Decoder_t1910 * UTF7Encoding_GetDecoder_m11127 (UTF7Encoding_t2207 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetByteCount(System.Char*,System.Int32)
 int32_t UTF7Encoding_GetByteCount_m11128 (UTF7Encoding_t2207 * __this, uint16_t* ___chars, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetByteCount(System.String)
 int32_t UTF7Encoding_GetByteCount_m11129 (UTF7Encoding_t2207 * __this, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32)
 int32_t UTF7Encoding_GetBytes_m11130 (UTF7Encoding_t2207 * __this, uint16_t* ___chars, int32_t ___charCount, uint8_t* ___bytes, int32_t ___byteCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32)
 int32_t UTF7Encoding_GetBytes_m11131 (UTF7Encoding_t2207 * __this, String_t* ___s, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t97* ___bytes, int32_t ___byteIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.UTF7Encoding::GetString(System.Byte[],System.Int32,System.Int32)
 String_t* UTF7Encoding_GetString_m11132 (UTF7Encoding_t2207 * __this, ByteU5BU5D_t97* ___bytes, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
