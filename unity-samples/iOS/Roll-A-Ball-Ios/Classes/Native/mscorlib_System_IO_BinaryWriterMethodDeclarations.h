#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.BinaryWriter
struct BinaryWriter_t24;
// System.IO.Stream
struct Stream_t25;
// System.Text.Encoding
struct Encoding_t335;
// System.String
struct String_t;

// System.Void System.IO.BinaryWriter::.ctor()
 void BinaryWriter__ctor_m9488 (BinaryWriter_t24 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::.ctor(System.IO.Stream)
 void BinaryWriter__ctor_m580 (BinaryWriter_t24 * __this, Stream_t25 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::.ctor(System.IO.Stream,System.Text.Encoding)
 void BinaryWriter__ctor_m9489 (BinaryWriter_t24 * __this, Stream_t25 * ___output, Encoding_t335 * ___encoding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::.cctor()
 void BinaryWriter__cctor_m9490 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::System.IDisposable.Dispose()
 void BinaryWriter_System_IDisposable_Dispose_m9491 (BinaryWriter_t24 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Dispose(System.Boolean)
 void BinaryWriter_Dispose_m9492 (BinaryWriter_t24 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Boolean)
 void BinaryWriter_Write_m639 (BinaryWriter_t24 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Byte)
 void BinaryWriter_Write_m612 (BinaryWriter_t24 * __this, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Double)
 void BinaryWriter_Write_m638 (BinaryWriter_t24 * __this, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Int32)
 void BinaryWriter_Write_m613 (BinaryWriter_t24 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Single)
 void BinaryWriter_Write_m637 (BinaryWriter_t24 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.String)
 void BinaryWriter_Write_m634 (BinaryWriter_t24 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write7BitEncodedInt(System.Int32)
 void BinaryWriter_Write7BitEncodedInt_m9493 (BinaryWriter_t24 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
