#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.BinaryWriter
struct BinaryWriter_t26;
// System.IO.Stream
struct Stream_t27;
// System.Text.Encoding
struct Encoding_t322;
// System.String
struct String_t;

// System.Void System.IO.BinaryWriter::.ctor()
 void BinaryWriter__ctor_m9393 (BinaryWriter_t26 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::.ctor(System.IO.Stream)
 void BinaryWriter__ctor_m517 (BinaryWriter_t26 * __this, Stream_t27 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::.ctor(System.IO.Stream,System.Text.Encoding)
 void BinaryWriter__ctor_m9394 (BinaryWriter_t26 * __this, Stream_t27 * ___output, Encoding_t322 * ___encoding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::.cctor()
 void BinaryWriter__cctor_m9395 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::System.IDisposable.Dispose()
 void BinaryWriter_System_IDisposable_Dispose_m9396 (BinaryWriter_t26 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Dispose(System.Boolean)
 void BinaryWriter_Dispose_m9397 (BinaryWriter_t26 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Boolean)
 void BinaryWriter_Write_m576 (BinaryWriter_t26 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Byte)
 void BinaryWriter_Write_m549 (BinaryWriter_t26 * __this, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Double)
 void BinaryWriter_Write_m575 (BinaryWriter_t26 * __this, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Int32)
 void BinaryWriter_Write_m550 (BinaryWriter_t26 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Single)
 void BinaryWriter_Write_m574 (BinaryWriter_t26 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.String)
 void BinaryWriter_Write_m571 (BinaryWriter_t26 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write7BitEncodedInt(System.Int32)
 void BinaryWriter_Write7BitEncodedInt_m9398 (BinaryWriter_t26 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
