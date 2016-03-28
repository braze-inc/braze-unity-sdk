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

// System.Text.UTF32Encoding
struct UTF32Encoding_t420914269;
// System.Char[]
struct CharU5BU5D_t3416858730;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Text.Decoder
struct Decoder_t1611780840;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_String968488902.h"

// System.Void System.Text.UTF32Encoding::.ctor()
extern "C"  void UTF32Encoding__ctor_m3047105501 (UTF32Encoding_t420914269 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.UTF32Encoding::.ctor(System.Boolean,System.Boolean)
extern "C"  void UTF32Encoding__ctor_m1611597417 (UTF32Encoding_t420914269 * __this, bool ___bigEndian, bool ___byteOrderMark, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.UTF32Encoding::.ctor(System.Boolean,System.Boolean,System.Boolean)
extern "C"  void UTF32Encoding__ctor_m2606271988 (UTF32Encoding_t420914269 * __this, bool ___bigEndian, bool ___byteOrderMark, bool ___throwOnInvalidCharacters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF32Encoding::GetByteCount(System.Char[],System.Int32,System.Int32)
extern "C"  int32_t UTF32Encoding_GetByteCount_m4053178303 (UTF32Encoding_t420914269 * __this, CharU5BU5D_t3416858730* ___chars, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF32Encoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t UTF32Encoding_GetBytes_m2096762137 (UTF32Encoding_t420914269 * __this, CharU5BU5D_t3416858730* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t58506160* ___bytes, int32_t ___byteIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF32Encoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t UTF32Encoding_GetCharCount_m2854590747 (UTF32Encoding_t420914269 * __this, ByteU5BU5D_t58506160* ___bytes, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF32Encoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C"  int32_t UTF32Encoding_GetChars_m142045579 (UTF32Encoding_t420914269 * __this, ByteU5BU5D_t58506160* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t3416858730* ___chars, int32_t ___charIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF32Encoding::GetMaxByteCount(System.Int32)
extern "C"  int32_t UTF32Encoding_GetMaxByteCount_m4234377217 (UTF32Encoding_t420914269 * __this, int32_t ___charCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF32Encoding::GetMaxCharCount(System.Int32)
extern "C"  int32_t UTF32Encoding_GetMaxCharCount_m730945267 (UTF32Encoding_t420914269 * __this, int32_t ___byteCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Decoder System.Text.UTF32Encoding::GetDecoder()
extern "C"  Decoder_t1611780840 * UTF32Encoding_GetDecoder_m2353622692 (UTF32Encoding_t420914269 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Text.UTF32Encoding::GetPreamble()
extern "C"  ByteU5BU5D_t58506160* UTF32Encoding_GetPreamble_m4266568199 (UTF32Encoding_t420914269 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.UTF32Encoding::Equals(System.Object)
extern "C"  bool UTF32Encoding_Equals_m2030004752 (UTF32Encoding_t420914269 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF32Encoding::GetHashCode()
extern "C"  int32_t UTF32Encoding_GetHashCode_m224607976 (UTF32Encoding_t420914269 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF32Encoding::GetByteCount(System.Char*,System.Int32)
extern "C"  int32_t UTF32Encoding_GetByteCount_m3487534096 (UTF32Encoding_t420914269 * __this, uint16_t* ___chars, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF32Encoding::GetByteCount(System.String)
extern "C"  int32_t UTF32Encoding_GetByteCount_m3893434214 (UTF32Encoding_t420914269 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF32Encoding::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32)
extern "C"  int32_t UTF32Encoding_GetBytes_m1300787456 (UTF32Encoding_t420914269 * __this, uint16_t* ___chars, int32_t ___charCount, uint8_t* ___bytes, int32_t ___byteCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF32Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t UTF32Encoding_GetBytes_m1671040818 (UTF32Encoding_t420914269 * __this, String_t* ___s, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t58506160* ___bytes, int32_t ___byteIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.UTF32Encoding::GetString(System.Byte[],System.Int32,System.Int32)
extern "C"  String_t* UTF32Encoding_GetString_m3449921892 (UTF32Encoding_t420914269 * __this, ByteU5BU5D_t58506160* ___bytes, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
