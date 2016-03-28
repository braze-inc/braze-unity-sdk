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

// System.Text.UTF7Encoding
struct UTF7Encoding_t445806535;
// System.Object
struct Il2CppObject;
// System.Char[]
struct CharU5BU5D_t3416858730;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Text.Decoder
struct Decoder_t1611780840;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_String968488902.h"

// System.Void System.Text.UTF7Encoding::.ctor()
extern "C"  void UTF7Encoding__ctor_m3219339181 (UTF7Encoding_t445806535 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.UTF7Encoding::.ctor(System.Boolean)
extern "C"  void UTF7Encoding__ctor_m2518973028 (UTF7Encoding_t445806535 * __this, bool ___allowOptionals, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.UTF7Encoding::.cctor()
extern "C"  void UTF7Encoding__cctor_m533170592 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetHashCode()
extern "C"  int32_t UTF7Encoding_GetHashCode_m3782877952 (UTF7Encoding_t445806535 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.UTF7Encoding::Equals(System.Object)
extern "C"  bool UTF7Encoding_Equals_m85066652 (UTF7Encoding_t445806535 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::InternalGetByteCount(System.Char[],System.Int32,System.Int32,System.Boolean,System.Int32,System.Boolean,System.Boolean)
extern "C"  int32_t UTF7Encoding_InternalGetByteCount_m2693580788 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t3416858730* ___chars, int32_t ___index, int32_t ___count, bool ___flush, int32_t ___leftOver, bool ___isInShifted, bool ___allowOptionals, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetByteCount(System.Char[],System.Int32,System.Int32)
extern "C"  int32_t UTF7Encoding_GetByteCount_m1291682775 (UTF7Encoding_t445806535 * __this, CharU5BU5D_t3416858730* ___chars, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::InternalGetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Boolean,System.Int32&,System.Boolean&,System.Boolean)
extern "C"  int32_t UTF7Encoding_InternalGetBytes_m3747805498 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t3416858730* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t58506160* ___bytes, int32_t ___byteIndex, bool ___flush, int32_t* ___leftOver, bool* ___isInShifted, bool ___allowOptionals, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t UTF7Encoding_GetBytes_m3199141377 (UTF7Encoding_t445806535 * __this, CharU5BU5D_t3416858730* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t58506160* ___bytes, int32_t ___byteIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::InternalGetCharCount(System.Byte[],System.Int32,System.Int32,System.Int32)
extern "C"  int32_t UTF7Encoding_InternalGetCharCount_m2327269409 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___bytes, int32_t ___index, int32_t ___count, int32_t ___leftOver, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t UTF7Encoding_GetCharCount_m93095219 (UTF7Encoding_t445806535 * __this, ByteU5BU5D_t58506160* ___bytes, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::InternalGetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32,System.Int32&)
extern "C"  int32_t UTF7Encoding_InternalGetChars_m504744357 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t3416858730* ___chars, int32_t ___charIndex, int32_t* ___leftOver, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C"  int32_t UTF7Encoding_GetChars_m1244424819 (UTF7Encoding_t445806535 * __this, ByteU5BU5D_t58506160* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t3416858730* ___chars, int32_t ___charIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetMaxByteCount(System.Int32)
extern "C"  int32_t UTF7Encoding_GetMaxByteCount_m3189713945 (UTF7Encoding_t445806535 * __this, int32_t ___charCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetMaxCharCount(System.Int32)
extern "C"  int32_t UTF7Encoding_GetMaxCharCount_m3981249291 (UTF7Encoding_t445806535 * __this, int32_t ___byteCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Decoder System.Text.UTF7Encoding::GetDecoder()
extern "C"  Decoder_t1611780840 * UTF7Encoding_GetDecoder_m292232534 (UTF7Encoding_t445806535 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetByteCount(System.Char*,System.Int32)
extern "C"  int32_t UTF7Encoding_GetByteCount_m2801467944 (UTF7Encoding_t445806535 * __this, uint16_t* ___chars, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetByteCount(System.String)
extern "C"  int32_t UTF7Encoding_GetByteCount_m3034247550 (UTF7Encoding_t445806535 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32)
extern "C"  int32_t UTF7Encoding_GetBytes_m3752707352 (UTF7Encoding_t445806535 * __this, uint16_t* ___chars, int32_t ___charCount, uint8_t* ___bytes, int32_t ___byteCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t UTF7Encoding_GetBytes_m2773420058 (UTF7Encoding_t445806535 * __this, String_t* ___s, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t58506160* ___bytes, int32_t ___byteIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.UTF7Encoding::GetString(System.Byte[],System.Int32,System.Int32)
extern "C"  String_t* UTF7Encoding_GetString_m138259962 (UTF7Encoding_t445806535 * __this, ByteU5BU5D_t58506160* ___bytes, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
