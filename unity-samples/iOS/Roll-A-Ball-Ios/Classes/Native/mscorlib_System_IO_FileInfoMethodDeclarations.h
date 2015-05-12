#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.FileInfo
struct FileInfo_t94;
// System.String
struct String_t;
// System.IO.DirectoryInfo
struct DirectoryInfo_t101;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t960;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.IO.FileInfo::.ctor(System.String)
 void FileInfo__ctor_m518 (FileInfo_t94 * __this, String_t* ___fileName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileInfo::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void FileInfo__ctor_m9420 (FileInfo_t94 * __this, SerializationInfo_t960 * ___info, StreamingContext_t961  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileInfo::InternalRefresh()
 void FileInfo_InternalRefresh_m9421 (FileInfo_t94 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.FileInfo::get_Exists()
 bool FileInfo_get_Exists_m9422 (FileInfo_t94 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.FileInfo::get_Name()
 String_t* FileInfo_get_Name_m9423 (FileInfo_t94 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.FileInfo::get_DirectoryName()
 String_t* FileInfo_get_DirectoryName_m9424 (FileInfo_t94 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.DirectoryInfo System.IO.FileInfo::get_Directory()
 DirectoryInfo_t101 * FileInfo_get_Directory_m519 (FileInfo_t94 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.FileInfo::ToString()
 String_t* FileInfo_ToString_m9425 (FileInfo_t94 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
