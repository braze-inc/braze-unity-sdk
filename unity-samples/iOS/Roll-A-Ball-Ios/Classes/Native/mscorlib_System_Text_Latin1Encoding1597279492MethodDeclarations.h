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

// System.Text.Latin1Encoding
struct Latin1Encoding_t1597279492;
// System.Char[]
struct CharU5BU5D_t3416858730;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Text.EncoderFallbackBuffer
struct EncoderFallbackBuffer_t2042758306;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Text_EncoderFallbackBuffer2042758306.h"

// System.Void System.Text.Latin1Encoding::.ctor()
extern "C"  void Latin1Encoding__ctor_m1980938192 (Latin1Encoding_t1597279492 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetByteCount(System.Char[],System.Int32,System.Int32)
extern "C"  int32_t Latin1Encoding_GetByteCount_m706721210 (Latin1Encoding_t1597279492 * __this, CharU5BU5D_t3416858730* ___chars, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetByteCount(System.String)
extern "C"  int32_t Latin1Encoding_GetByteCount_m4034541857 (Latin1Encoding_t1597279492 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t Latin1Encoding_GetBytes_m4245120190 (Latin1Encoding_t1597279492 * __this, CharU5BU5D_t3416858730* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t58506160* ___bytes, int32_t ___byteIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Text.EncoderFallbackBuffer&,System.Char[]&)
extern "C"  int32_t Latin1Encoding_GetBytes_m3965378137 (Latin1Encoding_t1597279492 * __this, CharU5BU5D_t3416858730* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t58506160* ___bytes, int32_t ___byteIndex, EncoderFallbackBuffer_t2042758306 ** ___buffer, CharU5BU5D_t3416858730** ___fallback_chars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t Latin1Encoding_GetBytes_m3819398871 (Latin1Encoding_t1597279492 * __this, String_t* ___s, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t58506160* ___bytes, int32_t ___byteIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32,System.Text.EncoderFallbackBuffer&,System.Char[]&)
extern "C"  int32_t Latin1Encoding_GetBytes_m2580301874 (Latin1Encoding_t1597279492 * __this, String_t* ___s, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t58506160* ___bytes, int32_t ___byteIndex, EncoderFallbackBuffer_t2042758306 ** ___buffer, CharU5BU5D_t3416858730** ___fallback_chars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t Latin1Encoding_GetCharCount_m3803100950 (Latin1Encoding_t1597279492 * __this, ByteU5BU5D_t58506160* ___bytes, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C"  int32_t Latin1Encoding_GetChars_m2290403632 (Latin1Encoding_t1597279492 * __this, ByteU5BU5D_t58506160* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t3416858730* ___chars, int32_t ___charIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetMaxByteCount(System.Int32)
extern "C"  int32_t Latin1Encoding_GetMaxByteCount_m2399868668 (Latin1Encoding_t1597279492 * __this, int32_t ___charCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetMaxCharCount(System.Int32)
extern "C"  int32_t Latin1Encoding_GetMaxCharCount_m3191404014 (Latin1Encoding_t1597279492 * __this, int32_t ___byteCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Latin1Encoding::GetString(System.Byte[],System.Int32,System.Int32)
extern "C"  String_t* Latin1Encoding_GetString_m1453607223 (Latin1Encoding_t1597279492 * __this, ByteU5BU5D_t58506160* ___bytes, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Latin1Encoding::GetString(System.Byte[])
extern "C"  String_t* Latin1Encoding_GetString_m2574520983 (Latin1Encoding_t1597279492 * __this, ByteU5BU5D_t58506160* ___bytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
