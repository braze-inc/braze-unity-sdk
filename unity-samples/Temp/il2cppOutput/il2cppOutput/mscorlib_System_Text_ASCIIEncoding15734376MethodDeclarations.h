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

// System.Text.ASCIIEncoding
struct ASCIIEncoding_t15734376;
// System.Char[]
struct CharU5BU5D_t3416858730;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Text.EncoderFallbackBuffer
struct EncoderFallbackBuffer_t2042758306;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t1215858122;
// System.Text.Decoder
struct Decoder_t1611780840;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Text_EncoderFallbackBuffer2042758306.h"
#include "mscorlib_System_Text_DecoderFallbackBuffer1215858122.h"

// System.Void System.Text.ASCIIEncoding::.ctor()
extern "C"  void ASCIIEncoding__ctor_m3312307762 (ASCIIEncoding_t15734376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetByteCount(System.Char[],System.Int32,System.Int32)
extern "C"  int32_t ASCIIEncoding_GetByteCount_m2816111956 (ASCIIEncoding_t15734376 * __this, CharU5BU5D_t3416858730* ___chars0, int32_t ___index1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetByteCount(System.String)
extern "C"  int32_t ASCIIEncoding_GetByteCount_m3333440827 (ASCIIEncoding_t15734376 * __this, String_t* ___chars0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t ASCIIEncoding_GetBytes_m1888860132 (ASCIIEncoding_t15734376 * __this, CharU5BU5D_t3416858730* ___chars0, int32_t ___charIndex1, int32_t ___charCount2, ByteU5BU5D_t58506160* ___bytes3, int32_t ___byteIndex4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Text.EncoderFallbackBuffer&,System.Char[]&)
extern "C"  int32_t ASCIIEncoding_GetBytes_m1102371839 (ASCIIEncoding_t15734376 * __this, CharU5BU5D_t3416858730* ___chars0, int32_t ___charIndex1, int32_t ___charCount2, ByteU5BU5D_t58506160* ___bytes3, int32_t ___byteIndex4, EncoderFallbackBuffer_t2042758306 ** ___buffer5, CharU5BU5D_t3416858730** ___fallback_chars6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t ASCIIEncoding_GetBytes_m1463138813 (ASCIIEncoding_t15734376 * __this, String_t* ___chars0, int32_t ___charIndex1, int32_t ___charCount2, ByteU5BU5D_t58506160* ___bytes3, int32_t ___byteIndex4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32,System.Text.EncoderFallbackBuffer&,System.Char[]&)
extern "C"  int32_t ASCIIEncoding_GetBytes_m4012262872 (ASCIIEncoding_t15734376 * __this, String_t* ___chars0, int32_t ___charIndex1, int32_t ___charCount2, ByteU5BU5D_t58506160* ___bytes3, int32_t ___byteIndex4, EncoderFallbackBuffer_t2042758306 ** ___buffer5, CharU5BU5D_t3416858730** ___fallback_chars6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t ASCIIEncoding_GetCharCount_m1617524400 (ASCIIEncoding_t15734376 * __this, ByteU5BU5D_t58506160* ___bytes0, int32_t ___index1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C"  int32_t ASCIIEncoding_GetChars_m4229110870 (ASCIIEncoding_t15734376 * __this, ByteU5BU5D_t58506160* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t3416858730* ___chars3, int32_t ___charIndex4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32,System.Text.DecoderFallbackBuffer&)
extern "C"  int32_t ASCIIEncoding_GetChars_m608322798 (ASCIIEncoding_t15734376 * __this, ByteU5BU5D_t58506160* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t3416858730* ___chars3, int32_t ___charIndex4, DecoderFallbackBuffer_t1215858122 ** ___buffer5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetMaxByteCount(System.Int32)
extern "C"  int32_t ASCIIEncoding_GetMaxByteCount_m2951644310 (ASCIIEncoding_t15734376 * __this, int32_t ___charCount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetMaxCharCount(System.Int32)
extern "C"  int32_t ASCIIEncoding_GetMaxCharCount_m3743179656 (ASCIIEncoding_t15734376 * __this, int32_t ___byteCount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.ASCIIEncoding::GetString(System.Byte[],System.Int32,System.Int32)
extern "C"  String_t* ASCIIEncoding_GetString_m3750474735 (ASCIIEncoding_t15734376 * __this, ByteU5BU5D_t58506160* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32)
extern "C"  int32_t ASCIIEncoding_GetBytes_m1886644629 (ASCIIEncoding_t15734376 * __this, uint16_t* ___chars0, int32_t ___charCount1, uint8_t* ___bytes2, int32_t ___byteCount3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetByteCount(System.Char*,System.Int32)
extern "C"  int32_t ASCIIEncoding_GetByteCount_m858235493 (ASCIIEncoding_t15734376 * __this, uint16_t* ___chars0, int32_t ___count1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Decoder System.Text.ASCIIEncoding::GetDecoder()
extern "C"  Decoder_t1611780840 * ASCIIEncoding_GetDecoder_m3592483183 (ASCIIEncoding_t15734376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
