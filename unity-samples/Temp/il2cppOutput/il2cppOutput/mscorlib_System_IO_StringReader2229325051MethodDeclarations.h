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

// System.IO.StringReader
struct StringReader_t2229325051;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t3416858730;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void System.IO.StringReader::.ctor(System.String)
extern "C"  void StringReader__ctor_m1181104909 (StringReader_t2229325051 * __this, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringReader::Dispose(System.Boolean)
extern "C"  void StringReader_Dispose_m3317487369 (StringReader_t2229325051 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StringReader::Peek()
extern "C"  int32_t StringReader_Peek_m2304275014 (StringReader_t2229325051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StringReader::Read()
extern "C"  int32_t StringReader_Read_m2361407425 (StringReader_t2229325051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StringReader::Read(System.Char[],System.Int32,System.Int32)
extern "C"  int32_t StringReader_Read_m11867514 (StringReader_t2229325051 * __this, CharU5BU5D_t3416858730* ___buffer0, int32_t ___index1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.StringReader::ReadLine()
extern "C"  String_t* StringReader_ReadLine_m1484911836 (StringReader_t2229325051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.StringReader::ReadToEnd()
extern "C"  String_t* StringReader_ReadToEnd_m1726925146 (StringReader_t2229325051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringReader::CheckObjectDisposedException()
extern "C"  void StringReader_CheckObjectDisposedException_m2098659794 (StringReader_t2229325051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
