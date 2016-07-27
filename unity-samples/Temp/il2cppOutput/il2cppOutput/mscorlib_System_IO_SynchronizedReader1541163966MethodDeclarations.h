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

// System.IO.SynchronizedReader
struct SynchronizedReader_t1541163966;
// System.IO.TextReader
struct TextReader_t1534522647;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t3416858730;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_TextReader1534522647.h"

// System.Void System.IO.SynchronizedReader::.ctor(System.IO.TextReader)
extern "C"  void SynchronizedReader__ctor_m2400239097 (SynchronizedReader_t1541163966 * __this, TextReader_t1534522647 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.SynchronizedReader::Peek()
extern "C"  int32_t SynchronizedReader_Peek_m2840653193 (SynchronizedReader_t1541163966 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.SynchronizedReader::ReadLine()
extern "C"  String_t* SynchronizedReader_ReadLine_m1313224031 (SynchronizedReader_t1541163966 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.SynchronizedReader::ReadToEnd()
extern "C"  String_t* SynchronizedReader_ReadToEnd_m699570487 (SynchronizedReader_t1541163966 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.SynchronizedReader::Read()
extern "C"  int32_t SynchronizedReader_Read_m2897785604 (SynchronizedReader_t1541163966 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.SynchronizedReader::Read(System.Char[],System.Int32,System.Int32)
extern "C"  int32_t SynchronizedReader_Read_m2303608023 (SynchronizedReader_t1541163966 * __this, CharU5BU5D_t3416858730* ___buffer0, int32_t ___index1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
