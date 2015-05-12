#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.TextWriter
struct TextWriter_t1733;
// System.Char[]
struct CharU5BU5D_t276;
// System.String
struct String_t;

// System.Void System.IO.TextWriter::.ctor()
 void TextWriter__ctor_m9639 (TextWriter_t1733 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::.cctor()
 void TextWriter__cctor_m9640 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Close()
 void TextWriter_Close_m9641 (TextWriter_t1733 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Dispose(System.Boolean)
 void TextWriter_Dispose_m9642 (TextWriter_t1733 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Dispose()
 void TextWriter_Dispose_m9643 (TextWriter_t1733 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Flush()
 void TextWriter_Flush_m9644 (TextWriter_t1733 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.TextWriter System.IO.TextWriter::Synchronized(System.IO.TextWriter,System.Boolean)
 TextWriter_t1733 * TextWriter_Synchronized_m9645 (Object_t * __this/* static, unused */, TextWriter_t1733 * ___writer, bool ___neverClose, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Write(System.Char)
 void TextWriter_Write_m9646 (TextWriter_t1733 * __this, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Write(System.Char[])
 void TextWriter_Write_m9647 (TextWriter_t1733 * __this, CharU5BU5D_t276* ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Write(System.String)
 void TextWriter_Write_m9648 (TextWriter_t1733 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Write(System.Char[],System.Int32,System.Int32)
 void TextWriter_Write_m9649 (TextWriter_t1733 * __this, CharU5BU5D_t276* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::WriteLine()
 void TextWriter_WriteLine_m9650 (TextWriter_t1733 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::WriteLine(System.String)
 void TextWriter_WriteLine_m7686 (TextWriter_t1733 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
