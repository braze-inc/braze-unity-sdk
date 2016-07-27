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

// System.IO.StreamReader/NullStreamReader
struct NullStreamReader_t1719812010;
// System.Char[]
struct CharU5BU5D_t3416858730;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.IO.StreamReader/NullStreamReader::.ctor()
extern "C"  void NullStreamReader__ctor_m3675090663 (NullStreamReader_t1719812010 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader/NullStreamReader::Peek()
extern "C"  int32_t NullStreamReader_Peek_m2515952764 (NullStreamReader_t1719812010 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader/NullStreamReader::Read()
extern "C"  int32_t NullStreamReader_Read_m2573085175 (NullStreamReader_t1719812010 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader/NullStreamReader::Read(System.Char[],System.Int32,System.Int32)
extern "C"  int32_t NullStreamReader_Read_m3682316932 (NullStreamReader_t1719812010 * __this, CharU5BU5D_t3416858730* ___buffer0, int32_t ___index1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.StreamReader/NullStreamReader::ReadLine()
extern "C"  String_t* NullStreamReader_ReadLine_m1363373796 (NullStreamReader_t1719812010 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.StreamReader/NullStreamReader::ReadToEnd()
extern "C"  String_t* NullStreamReader_ReadToEnd_m2254213202 (NullStreamReader_t1719812010 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
