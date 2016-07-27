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

// System.IO.StreamReader
struct StreamReader_t717565226;
// System.IO.Stream
struct Stream_t219029575;
// System.Text.Encoding
struct Encoding_t180559927;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t3416858730;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream219029575.h"
#include "mscorlib_System_Text_Encoding180559927.h"
#include "mscorlib_System_String968488902.h"

// System.Void System.IO.StreamReader::.ctor()
extern "C"  void StreamReader__ctor_m3256554182 (StreamReader_t717565226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C"  void StreamReader__ctor_m846704084 (StreamReader_t717565226 * __this, Stream_t219029575 * ___stream0, Encoding_t180559927 * ___encoding1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::.ctor(System.IO.Stream,System.Text.Encoding,System.Boolean,System.Int32)
extern "C"  void StreamReader__ctor_m4212687950 (StreamReader_t717565226 * __this, Stream_t219029575 * ___stream0, Encoding_t180559927 * ___encoding1, bool ___detectEncodingFromByteOrderMarks2, int32_t ___bufferSize3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::.ctor(System.String)
extern "C"  void StreamReader__ctor_m3789405692 (StreamReader_t717565226 * __this, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::.ctor(System.String,System.Text.Encoding,System.Boolean,System.Int32)
extern "C"  void StreamReader__ctor_m3796369807 (StreamReader_t717565226 * __this, String_t* ___path0, Encoding_t180559927 * ___encoding1, bool ___detectEncodingFromByteOrderMarks2, int32_t ___bufferSize3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::.cctor()
extern "C"  void StreamReader__cctor_m1686835623 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::Initialize(System.IO.Stream,System.Text.Encoding,System.Boolean,System.Int32)
extern "C"  void StreamReader_Initialize_m2919850118 (StreamReader_t717565226 * __this, Stream_t219029575 * ___stream0, Encoding_t180559927 * ___encoding1, bool ___detectEncodingFromByteOrderMarks2, int32_t ___bufferSize3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::Dispose(System.Boolean)
extern "C"  void StreamReader_Dispose_m2657794490 (StreamReader_t717565226 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader::DoChecks(System.Int32)
extern "C"  int32_t StreamReader_DoChecks_m2189019393 (StreamReader_t717565226 * __this, int32_t ___count0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader::ReadBuffer()
extern "C"  int32_t StreamReader_ReadBuffer_m2552623632 (StreamReader_t717565226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader::Peek()
extern "C"  int32_t StreamReader_Peek_m3983356789 (StreamReader_t717565226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader::Read()
extern "C"  int32_t StreamReader_Read_m4040489200 (StreamReader_t717565226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader::Read(System.Char[],System.Int32,System.Int32)
extern "C"  int32_t StreamReader_Read_m2134404459 (StreamReader_t717565226 * __this, CharU5BU5D_t3416858730* ___buffer0, int32_t ___index1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader::FindNextEOL()
extern "C"  int32_t StreamReader_FindNextEOL_m809222814 (StreamReader_t717565226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.StreamReader::ReadLine()
extern "C"  String_t* StreamReader_ReadLine_m887391883 (StreamReader_t717565226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.StreamReader::ReadToEnd()
extern "C"  String_t* StreamReader_ReadToEnd_m383675787 (StreamReader_t717565226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
