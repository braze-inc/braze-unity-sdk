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

// System.IO.UnmanagedMemoryStream
struct UnmanagedMemoryStream_t1584;
// System.Byte[]
struct ByteU5BU5D_t98;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Boolean System.IO.UnmanagedMemoryStream::get_CanRead()
extern "C" bool UnmanagedMemoryStream_get_CanRead_m9503 (UnmanagedMemoryStream_t1584 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.UnmanagedMemoryStream::get_CanSeek()
extern "C" bool UnmanagedMemoryStream_get_CanSeek_m9504 (UnmanagedMemoryStream_t1584 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.UnmanagedMemoryStream::get_CanWrite()
extern "C" bool UnmanagedMemoryStream_get_CanWrite_m9505 (UnmanagedMemoryStream_t1584 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.UnmanagedMemoryStream::get_Length()
extern "C" int64_t UnmanagedMemoryStream_get_Length_m9506 (UnmanagedMemoryStream_t1584 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.UnmanagedMemoryStream::get_Position()
extern "C" int64_t UnmanagedMemoryStream_get_Position_m9507 (UnmanagedMemoryStream_t1584 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnmanagedMemoryStream::set_Position(System.Int64)
extern "C" void UnmanagedMemoryStream_set_Position_m9508 (UnmanagedMemoryStream_t1584 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.UnmanagedMemoryStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t UnmanagedMemoryStream_Read_m9509 (UnmanagedMemoryStream_t1584 * __this, ByteU5BU5D_t98* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.UnmanagedMemoryStream::ReadByte()
extern "C" int32_t UnmanagedMemoryStream_ReadByte_m9510 (UnmanagedMemoryStream_t1584 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.UnmanagedMemoryStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C" int64_t UnmanagedMemoryStream_Seek_m9511 (UnmanagedMemoryStream_t1584 * __this, int64_t ___offset, int32_t ___loc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnmanagedMemoryStream::SetLength(System.Int64)
extern "C" void UnmanagedMemoryStream_SetLength_m9512 (UnmanagedMemoryStream_t1584 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnmanagedMemoryStream::Flush()
extern "C" void UnmanagedMemoryStream_Flush_m9513 (UnmanagedMemoryStream_t1584 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnmanagedMemoryStream::Dispose(System.Boolean)
extern "C" void UnmanagedMemoryStream_Dispose_m9514 (UnmanagedMemoryStream_t1584 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnmanagedMemoryStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C" void UnmanagedMemoryStream_Write_m9515 (UnmanagedMemoryStream_t1584 * __this, ByteU5BU5D_t98* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnmanagedMemoryStream::WriteByte(System.Byte)
extern "C" void UnmanagedMemoryStream_WriteByte_m9516 (UnmanagedMemoryStream_t1584 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
