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

// System.Exception
struct Exception_t1967233988;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t2956870243;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_MonoIOError2381806790.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_IO_FileAttributes2606923962.h"
#include "mscorlib_System_IO_MonoFileType1906974624.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_IO_MonoIOStat1346274820.h"
#include "mscorlib_System_IO_FileMode1356058118.h"
#include "mscorlib_System_IO_FileAccess995838663.h"
#include "mscorlib_System_IO_FileShare2703391818.h"
#include "mscorlib_System_IO_FileOptions49336841.h"
#include "mscorlib_System_IO_SeekOrigin3506139269.h"

// System.Void System.IO.MonoIO::.cctor()
extern "C"  void MonoIO__cctor_m3474878605 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.IO.MonoIO::GetException(System.IO.MonoIOError)
extern "C"  Exception_t1967233988 * MonoIO_GetException_m1380825636 (Il2CppObject * __this /* static, unused */, int32_t ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.IO.MonoIO::GetException(System.String,System.IO.MonoIOError)
extern "C"  Exception_t1967233988 * MonoIO_GetException_m973090016 (Il2CppObject * __this /* static, unused */, String_t* ___path, int32_t ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.MonoIO::CreateDirectory(System.String,System.IO.MonoIOError&)
extern "C"  bool MonoIO_CreateDirectory_m510494529 (Il2CppObject * __this /* static, unused */, String_t* ___path, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.IO.MonoIO::GetFileSystemEntries(System.String,System.String,System.Int32,System.Int32,System.IO.MonoIOError&)
extern "C"  StringU5BU5D_t2956870243* MonoIO_GetFileSystemEntries_m809643788 (Il2CppObject * __this /* static, unused */, String_t* ___path, String_t* ___path_with_pattern, int32_t ___attrs, int32_t ___mask, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.MonoIO::GetCurrentDirectory(System.IO.MonoIOError&)
extern "C"  String_t* MonoIO_GetCurrentDirectory_m2958295317 (Il2CppObject * __this /* static, unused */, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.MonoIO::DeleteFile(System.String,System.IO.MonoIOError&)
extern "C"  bool MonoIO_DeleteFile_m991567969 (Il2CppObject * __this /* static, unused */, String_t* ___path, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.FileAttributes System.IO.MonoIO::GetFileAttributes(System.String,System.IO.MonoIOError&)
extern "C"  int32_t MonoIO_GetFileAttributes_m3774473836 (Il2CppObject * __this /* static, unused */, String_t* ___path, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.MonoFileType System.IO.MonoIO::GetFileType(System.IntPtr,System.IO.MonoIOError&)
extern "C"  int32_t MonoIO_GetFileType_m2747902883 (Il2CppObject * __this /* static, unused */, IntPtr_t ___handle, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.MonoIO::ExistsFile(System.String,System.IO.MonoIOError&)
extern "C"  bool MonoIO_ExistsFile_m4276986322 (Il2CppObject * __this /* static, unused */, String_t* ___path, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.MonoIO::ExistsDirectory(System.String,System.IO.MonoIOError&)
extern "C"  bool MonoIO_ExistsDirectory_m2166720481 (Il2CppObject * __this /* static, unused */, String_t* ___path, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.MonoIO::GetFileStat(System.String,System.IO.MonoIOStat&,System.IO.MonoIOError&)
extern "C"  bool MonoIO_GetFileStat_m3422900554 (Il2CppObject * __this /* static, unused */, String_t* ___path, MonoIOStat_t1346274820 * ___stat, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.IO.MonoIO::Open(System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare,System.IO.FileOptions,System.IO.MonoIOError&)
extern "C"  IntPtr_t MonoIO_Open_m1906428851 (Il2CppObject * __this /* static, unused */, String_t* ___filename, int32_t ___mode, int32_t ___access, int32_t ___share, int32_t ___options, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.MonoIO::Close(System.IntPtr,System.IO.MonoIOError&)
extern "C"  bool MonoIO_Close_m3125785430 (Il2CppObject * __this /* static, unused */, IntPtr_t ___handle, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.MonoIO::Read(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.IO.MonoIOError&)
extern "C"  int32_t MonoIO_Read_m1938045749 (Il2CppObject * __this /* static, unused */, IntPtr_t ___handle, ByteU5BU5D_t58506160* ___dest, int32_t ___dest_offset, int32_t ___count, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.MonoIO::Write(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.IO.MonoIOError&)
extern "C"  int32_t MonoIO_Write_m4276992032 (Il2CppObject * __this /* static, unused */, IntPtr_t ___handle, ByteU5BU5D_t58506160* ___src, int32_t ___src_offset, int32_t ___count, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.MonoIO::Seek(System.IntPtr,System.Int64,System.IO.SeekOrigin,System.IO.MonoIOError&)
extern "C"  int64_t MonoIO_Seek_m1717806132 (Il2CppObject * __this /* static, unused */, IntPtr_t ___handle, int64_t ___offset, int32_t ___origin, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.MonoIO::GetLength(System.IntPtr,System.IO.MonoIOError&)
extern "C"  int64_t MonoIO_GetLength_m235623807 (Il2CppObject * __this /* static, unused */, IntPtr_t ___handle, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.MonoIO::SetLength(System.IntPtr,System.Int64,System.IO.MonoIOError&)
extern "C"  bool MonoIO_SetLength_m3949156942 (Il2CppObject * __this /* static, unused */, IntPtr_t ___handle, int64_t ___length, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.IO.MonoIO::get_ConsoleOutput()
extern "C"  IntPtr_t MonoIO_get_ConsoleOutput_m238060792 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.IO.MonoIO::get_ConsoleInput()
extern "C"  IntPtr_t MonoIO_get_ConsoleInput_m851882069 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.IO.MonoIO::get_ConsoleError()
extern "C"  IntPtr_t MonoIO_get_ConsoleError_m1713017619 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.IO.MonoIO::get_VolumeSeparatorChar()
extern "C"  uint16_t MonoIO_get_VolumeSeparatorChar_m497168440 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.IO.MonoIO::get_DirectorySeparatorChar()
extern "C"  uint16_t MonoIO_get_DirectorySeparatorChar_m3870760857 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.IO.MonoIO::get_AltDirectorySeparatorChar()
extern "C"  uint16_t MonoIO_get_AltDirectorySeparatorChar_m2585277134 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.IO.MonoIO::get_PathSeparator()
extern "C"  uint16_t MonoIO_get_PathSeparator_m608723543 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
