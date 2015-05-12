#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.UTF7Encoding
struct UTF7Encoding_t2219;
// System.Object
struct Object_t;
// System.Char[]
struct CharU5BU5D_t289;
// System.Byte[]
struct ByteU5BU5D_t112;
// System.Text.Decoder
struct Decoder_t1922;
// System.String
struct String_t;

// System.Void System.Text.UTF7Encoding::.ctor()
 void UTF7Encoding__ctor_m11207 (UTF7Encoding_t2219 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.UTF7Encoding::.ctor(System.Boolean)
 void UTF7Encoding__ctor_m11208 (UTF7Encoding_t2219 * __this, bool ___allowOptionals, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.UTF7Encoding::.cctor()
 void UTF7Encoding__cctor_m11209 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetHashCode()
 int32_t UTF7Encoding_GetHashCode_m11210 (UTF7Encoding_t2219 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.UTF7Encoding::Equals(System.Object)
 bool UTF7Encoding_Equals_m11211 (UTF7Encoding_t2219 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::InternalGetByteCount(System.Char[],System.Int32,System.Int32,System.Boolean,System.Int32,System.Boolean,System.Boolean)
 int32_t UTF7Encoding_InternalGetByteCount_m11212 (Object_t * __this/* static, unused */, CharU5BU5D_t289* ___chars, int32_t ___index, int32_t ___count, bool ___flush, int32_t ___leftOver, bool ___isInShifted, bool ___allowOptionals, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetByteCount(System.Char[],System.Int32,System.Int32)
 int32_t UTF7Encoding_GetByteCount_m11213 (UTF7Encoding_t2219 * __this, CharU5BU5D_t289* ___chars, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::InternalGetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Boolean,System.Int32&,System.Boolean&,System.Boolean)
 int32_t UTF7Encoding_InternalGetBytes_m11214 (Object_t * __this/* static, unused */, CharU5BU5D_t289* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t112* ___bytes, int32_t ___byteIndex, bool ___flush, int32_t* ___leftOver, bool* ___isInShifted, bool ___allowOptionals, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
 int32_t UTF7Encoding_GetBytes_m11215 (UTF7Encoding_t2219 * __this, CharU5BU5D_t289* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t112* ___bytes, int32_t ___byteIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::InternalGetCharCount(System.Byte[],System.Int32,System.Int32,System.Int32)
 int32_t UTF7Encoding_InternalGetCharCount_m11216 (Object_t * __this/* static, unused */, ByteU5BU5D_t112* ___bytes, int32_t ___index, int32_t ___count, int32_t ___leftOver, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
 int32_t UTF7Encoding_GetCharCount_m11217 (UTF7Encoding_t2219 * __this, ByteU5BU5D_t112* ___bytes, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::InternalGetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32,System.Int32&)
 int32_t UTF7Encoding_InternalGetChars_m11218 (Object_t * __this/* static, unused */, ByteU5BU5D_t112* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t289* ___chars, int32_t ___charIndex, int32_t* ___leftOver, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
 int32_t UTF7Encoding_GetChars_m11219 (UTF7Encoding_t2219 * __this, ByteU5BU5D_t112* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t289* ___chars, int32_t ___charIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetMaxByteCount(System.Int32)
 int32_t UTF7Encoding_GetMaxByteCount_m11220 (UTF7Encoding_t2219 * __this, int32_t ___charCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetMaxCharCount(System.Int32)
 int32_t UTF7Encoding_GetMaxCharCount_m11221 (UTF7Encoding_t2219 * __this, int32_t ___byteCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Decoder System.Text.UTF7Encoding::GetDecoder()
 Decoder_t1922 * UTF7Encoding_GetDecoder_m11222 (UTF7Encoding_t2219 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetByteCount(System.Char*,System.Int32)
 int32_t UTF7Encoding_GetByteCount_m11223 (UTF7Encoding_t2219 * __this, uint16_t* ___chars, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetByteCount(System.String)
 int32_t UTF7Encoding_GetByteCount_m11224 (UTF7Encoding_t2219 * __this, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32)
 int32_t UTF7Encoding_GetBytes_m11225 (UTF7Encoding_t2219 * __this, uint16_t* ___chars, int32_t ___charCount, uint8_t* ___bytes, int32_t ___byteCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32)
 int32_t UTF7Encoding_GetBytes_m11226 (UTF7Encoding_t2219 * __this, String_t* ___s, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t112* ___bytes, int32_t ___byteIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.UTF7Encoding::GetString(System.Byte[],System.Int32,System.Int32)
 String_t* UTF7Encoding_GetString_m11227 (UTF7Encoding_t2219 * __this, ByteU5BU5D_t112* ___bytes, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
