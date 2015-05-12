#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.TextReader
struct TextReader_t1843;
// System.Char[]
struct CharU5BU5D_t276;
// System.String
struct String_t;

// System.Void System.IO.TextReader::.ctor()
 void TextReader__ctor_m9619 (TextReader_t1843 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextReader::.cctor()
 void TextReader__cctor_m9620 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextReader::Dispose()
 void TextReader_Dispose_m9621 (TextReader_t1843 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextReader::Dispose(System.Boolean)
 void TextReader_Dispose_m9622 (TextReader_t1843 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.TextReader::Peek()
 int32_t TextReader_Peek_m9623 (TextReader_t1843 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.TextReader::Read()
 int32_t TextReader_Read_m9624 (TextReader_t1843 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.TextReader::Read(System.Char[],System.Int32,System.Int32)
 int32_t TextReader_Read_m9625 (TextReader_t1843 * __this, CharU5BU5D_t276* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.TextReader::ReadLine()
 String_t* TextReader_ReadLine_m9626 (TextReader_t1843 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.TextReader::ReadToEnd()
 String_t* TextReader_ReadToEnd_m9627 (TextReader_t1843 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.TextReader System.IO.TextReader::Synchronized(System.IO.TextReader)
 TextReader_t1843 * TextReader_Synchronized_m9628 (Object_t * __this/* static, unused */, TextReader_t1843 * ___reader, MethodInfo* method) IL2CPP_METHOD_ATTR;
