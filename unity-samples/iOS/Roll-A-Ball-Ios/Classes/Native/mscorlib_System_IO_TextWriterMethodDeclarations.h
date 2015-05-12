#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.TextWriter
struct TextWriter_t1745;
// System.Char[]
struct CharU5BU5D_t289;
// System.String
struct String_t;

// System.Void System.IO.TextWriter::.ctor()
 void TextWriter__ctor_m9734 (TextWriter_t1745 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::.cctor()
 void TextWriter__cctor_m9735 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Close()
 void TextWriter_Close_m9736 (TextWriter_t1745 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Dispose(System.Boolean)
 void TextWriter_Dispose_m9737 (TextWriter_t1745 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Dispose()
 void TextWriter_Dispose_m9738 (TextWriter_t1745 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Flush()
 void TextWriter_Flush_m9739 (TextWriter_t1745 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.TextWriter System.IO.TextWriter::Synchronized(System.IO.TextWriter,System.Boolean)
 TextWriter_t1745 * TextWriter_Synchronized_m9740 (Object_t * __this/* static, unused */, TextWriter_t1745 * ___writer, bool ___neverClose, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Write(System.Char)
 void TextWriter_Write_m9741 (TextWriter_t1745 * __this, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Write(System.Char[])
 void TextWriter_Write_m9742 (TextWriter_t1745 * __this, CharU5BU5D_t289* ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Write(System.String)
 void TextWriter_Write_m9743 (TextWriter_t1745 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Write(System.Char[],System.Int32,System.Int32)
 void TextWriter_Write_m9744 (TextWriter_t1745 * __this, CharU5BU5D_t289* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::WriteLine()
 void TextWriter_WriteLine_m9745 (TextWriter_t1745 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::WriteLine(System.String)
 void TextWriter_WriteLine_m7782 (TextWriter_t1745 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
