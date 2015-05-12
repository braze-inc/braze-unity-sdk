#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.Stream
struct Stream_t27;
// System.Byte[]
struct ByteU5BU5D_t97;
// System.IAsyncResult
struct IAsyncResult_t472;
// System.AsyncCallback
struct AsyncCallback_t473;
// System.Object
struct Object_t;
// System.IO.SeekOrigin
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Void System.IO.Stream::.ctor()
 void Stream__ctor_m6614 (Stream_t27 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Stream::.cctor()
 void Stream__cctor_m9545 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.Stream::get_CanRead()
// System.Boolean System.IO.Stream::get_CanSeek()
// System.Boolean System.IO.Stream::get_CanWrite()
// System.Int64 System.IO.Stream::get_Length()
// System.Int64 System.IO.Stream::get_Position()
// System.Void System.IO.Stream::set_Position(System.Int64)
// System.Void System.IO.Stream::Dispose()
 void Stream_Dispose_m6589 (Stream_t27 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Stream::Dispose(System.Boolean)
 void Stream_Dispose_m6631 (Stream_t27 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Stream::Close()
 void Stream_Close_m6526 (Stream_t27 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Stream::Flush()
// System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32)
// System.Int32 System.IO.Stream::ReadByte()
 int32_t Stream_ReadByte_m1342 (Stream_t27 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin)
// System.Void System.IO.Stream::SetLength(System.Int64)
// System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32)
// System.Void System.IO.Stream::WriteByte(System.Byte)
 void Stream_WriteByte_m1335 (Stream_t27 * __this, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.IO.Stream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
 Object_t * Stream_BeginRead_m6595 (Stream_t27 * __this, ByteU5BU5D_t97* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t473 * ___callback, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.IO.Stream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
 Object_t * Stream_BeginWrite_m6604 (Stream_t27 * __this, ByteU5BU5D_t97* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t473 * ___callback, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Stream::EndRead(System.IAsyncResult)
 int32_t Stream_EndRead_m6597 (Stream_t27 * __this, Object_t * ___asyncResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Stream::EndWrite(System.IAsyncResult)
 void Stream_EndWrite_m6605 (Stream_t27 * __this, Object_t * ___asyncResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
