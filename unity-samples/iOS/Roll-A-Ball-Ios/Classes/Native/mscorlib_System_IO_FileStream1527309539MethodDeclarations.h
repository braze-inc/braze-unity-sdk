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

// System.IO.FileStream
struct FileStream_t1527309539;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;
// System.Object
struct Il2CppObject;
// System.IO.Stream
struct Stream_t219029575;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_IO_FileAccess995838663.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_IO_FileMode1356058118.h"
#include "mscorlib_System_IO_FileShare2703391818.h"
#include "mscorlib_System_IO_FileOptions49336841.h"
#include "mscorlib_System_AsyncCallback1363551830.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IO_SeekOrigin3506139269.h"
#include "mscorlib_System_IO_Stream219029575.h"

// System.Void System.IO.FileStream::.ctor(System.IntPtr,System.IO.FileAccess,System.Boolean,System.Int32,System.Boolean,System.Boolean)
extern "C"  void FileStream__ctor_m3655381520 (FileStream_t1527309539 * __this, IntPtr_t ___handle, int32_t ___access, bool ___ownsHandle, int32_t ___bufferSize, bool ___isAsync, bool ___noBuffering, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode,System.IO.FileAccess)
extern "C"  void FileStream__ctor_m3377505172 (FileStream_t1527309539 * __this, String_t* ___path, int32_t ___mode, int32_t ___access, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare)
extern "C"  void FileStream__ctor_m3657053030 (FileStream_t1527309539 * __this, String_t* ___path, int32_t ___mode, int32_t ___access, int32_t ___share, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare,System.Int32,System.Boolean,System.Boolean)
extern "C"  void FileStream__ctor_m3446221265 (FileStream_t1527309539 * __this, String_t* ___path, int32_t ___mode, int32_t ___access, int32_t ___share, int32_t ___bufferSize, bool ___isAsync, bool ___anonymous, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare,System.Int32,System.Boolean,System.IO.FileOptions)
extern "C"  void FileStream__ctor_m1468472351 (FileStream_t1527309539 * __this, String_t* ___path, int32_t ___mode, int32_t ___access, int32_t ___share, int32_t ___bufferSize, bool ___anonymous, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.FileStream::get_CanRead()
extern "C"  bool FileStream_get_CanRead_m3703756390 (FileStream_t1527309539 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.FileStream::get_CanWrite()
extern "C"  bool FileStream_get_CanWrite_m3669951921 (FileStream_t1527309539 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.FileStream::get_CanSeek()
extern "C"  bool FileStream_get_CanSeek_m3732511432 (FileStream_t1527309539 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.FileStream::get_Length()
extern "C"  int64_t FileStream_get_Length_m755999491 (FileStream_t1527309539 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.FileStream::get_Position()
extern "C"  int64_t FileStream_get_Position_m887539078 (FileStream_t1527309539 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::set_Position(System.Int64)
extern "C"  void FileStream_set_Position_m4070848815 (FileStream_t1527309539 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FileStream::ReadByte()
extern "C"  int32_t FileStream_ReadByte_m3943171153 (FileStream_t1527309539 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::WriteByte(System.Byte)
extern "C"  void FileStream_WriteByte_m2721827737 (FileStream_t1527309539 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FileStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t FileStream_Read_m1809515168 (FileStream_t1527309539 * __this, ByteU5BU5D_t58506160* ___array, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FileStream::ReadInternal(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t FileStream_ReadInternal_m3757743203 (FileStream_t1527309539 * __this, ByteU5BU5D_t58506160* ___dest, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.IO.FileStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * FileStream_BeginRead_m4009855887 (FileStream_t1527309539 * __this, ByteU5BU5D_t58506160* ___array, int32_t ___offset, int32_t ___numBytes, AsyncCallback_t1363551830 * ___userCallback, Il2CppObject * ___stateObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FileStream::EndRead(System.IAsyncResult)
extern "C"  int32_t FileStream_EndRead_m1164505443 (FileStream_t1527309539 * __this, Il2CppObject * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void FileStream_Write_m445180607 (FileStream_t1527309539 * __this, ByteU5BU5D_t58506160* ___array, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::WriteInternal(System.Byte[],System.Int32,System.Int32)
extern "C"  void FileStream_WriteInternal_m2324297090 (FileStream_t1527309539 * __this, ByteU5BU5D_t58506160* ___src, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.IO.FileStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * FileStream_BeginWrite_m2223977498 (FileStream_t1527309539 * __this, ByteU5BU5D_t58506160* ___array, int32_t ___offset, int32_t ___numBytes, AsyncCallback_t1363551830 * ___userCallback, Il2CppObject * ___stateObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::EndWrite(System.IAsyncResult)
extern "C"  void FileStream_EndWrite_m3533551432 (FileStream_t1527309539 * __this, Il2CppObject * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.FileStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t FileStream_Seek_m4271693569 (FileStream_t1527309539 * __this, int64_t ___offset, int32_t ___origin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::SetLength(System.Int64)
extern "C"  void FileStream_SetLength_m922718469 (FileStream_t1527309539 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::Flush()
extern "C"  void FileStream_Flush_m134843343 (FileStream_t1527309539 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::Finalize()
extern "C"  void FileStream_Finalize_m223127701 (FileStream_t1527309539 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::Dispose(System.Boolean)
extern "C"  void FileStream_Dispose_m376280481 (FileStream_t1527309539 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FileStream::ReadSegment(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t FileStream_ReadSegment_m570180669 (FileStream_t1527309539 * __this, ByteU5BU5D_t58506160* ___dest, int32_t ___dest_offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FileStream::WriteSegment(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t FileStream_WriteSegment_m2559616418 (FileStream_t1527309539 * __this, ByteU5BU5D_t58506160* ___src, int32_t ___src_offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::FlushBuffer(System.IO.Stream)
extern "C"  void FileStream_FlushBuffer_m3897535046 (FileStream_t1527309539 * __this, Stream_t219029575 * ___st, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::FlushBuffer()
extern "C"  void FileStream_FlushBuffer_m3669139887 (FileStream_t1527309539 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::FlushBufferIfDirty()
extern "C"  void FileStream_FlushBufferIfDirty_m1568636904 (FileStream_t1527309539 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::RefillBuffer()
extern "C"  void FileStream_RefillBuffer_m3559191949 (FileStream_t1527309539 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FileStream::ReadData(System.IntPtr,System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t FileStream_ReadData_m410796132 (FileStream_t1527309539 * __this, IntPtr_t ___handle, ByteU5BU5D_t58506160* ___buf, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::InitBuffer(System.Int32,System.Boolean)
extern "C"  void FileStream_InitBuffer_m157631941 (FileStream_t1527309539 * __this, int32_t ___size, bool ___noBuffering, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.FileStream::GetSecureFileName(System.String)
extern "C"  String_t* FileStream_GetSecureFileName_m778676102 (FileStream_t1527309539 * __this, String_t* ___filename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.FileStream::GetSecureFileName(System.String,System.Boolean)
extern "C"  String_t* FileStream_GetSecureFileName_m1473113911 (FileStream_t1527309539 * __this, String_t* ___filename, bool ___full, const MethodInfo* method) IL2CPP_METHOD_ATTR;
