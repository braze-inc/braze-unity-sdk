#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.StringReader
struct StringReader_t1934;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t276;

// System.Void System.IO.StringReader::.ctor(System.String)
 void StringReader__ctor_m9609 (StringReader_t1934 * __this, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringReader::Dispose(System.Boolean)
 void StringReader_Dispose_m9610 (StringReader_t1934 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StringReader::Peek()
 int32_t StringReader_Peek_m9611 (StringReader_t1934 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StringReader::Read()
 int32_t StringReader_Read_m9612 (StringReader_t1934 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StringReader::Read(System.Char[],System.Int32,System.Int32)
 int32_t StringReader_Read_m9613 (StringReader_t1934 * __this, CharU5BU5D_t276* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.StringReader::ReadLine()
 String_t* StringReader_ReadLine_m9614 (StringReader_t1934 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.StringReader::ReadToEnd()
 String_t* StringReader_ReadToEnd_m9615 (StringReader_t1934 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringReader::CheckObjectDisposedException()
 void StringReader_CheckObjectDisposedException_m9616 (StringReader_t1934 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
