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

// System.IO.FileSystemInfo
struct FileSystemInfo_t2843833056;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"
#include "mscorlib_System_String968488902.h"

// System.Void System.IO.FileSystemInfo::.ctor()
extern "C"  void FileSystemInfo__ctor_m2002032720 (FileSystemInfo_t2843833056 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemInfo::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void FileSystemInfo__ctor_m3151315345 (FileSystemInfo_t2843833056 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemInfo::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void FileSystemInfo_GetObjectData_m4060637166 (FileSystemInfo_t2843833056 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.FileSystemInfo::get_FullName()
extern "C"  String_t* FileSystemInfo_get_FullName_m2636706970 (FileSystemInfo_t2843833056 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemInfo::Refresh(System.Boolean)
extern "C"  void FileSystemInfo_Refresh_m2264948736 (FileSystemInfo_t2843833056 * __this, bool ___force, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemInfo::InternalRefresh()
extern "C"  void FileSystemInfo_InternalRefresh_m567607052 (FileSystemInfo_t2843833056 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemInfo::CheckPath(System.String)
extern "C"  void FileSystemInfo_CheckPath_m1470264807 (FileSystemInfo_t2843833056 * __this, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
