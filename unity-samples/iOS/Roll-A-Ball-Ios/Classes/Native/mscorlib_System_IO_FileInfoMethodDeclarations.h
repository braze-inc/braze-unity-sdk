#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.FileInfo
struct FileInfo_t109;
// System.String
struct String_t;
// System.IO.DirectoryInfo
struct DirectoryInfo_t114;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t971;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.IO.FileInfo::.ctor(System.String)
 void FileInfo__ctor_m581 (FileInfo_t109 * __this, String_t* ___fileName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileInfo::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void FileInfo__ctor_m9515 (FileInfo_t109 * __this, SerializationInfo_t971 * ___info, StreamingContext_t972  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileInfo::InternalRefresh()
 void FileInfo_InternalRefresh_m9516 (FileInfo_t109 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.FileInfo::get_Exists()
 bool FileInfo_get_Exists_m9517 (FileInfo_t109 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.FileInfo::get_Name()
 String_t* FileInfo_get_Name_m9518 (FileInfo_t109 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.FileInfo::get_DirectoryName()
 String_t* FileInfo_get_DirectoryName_m9519 (FileInfo_t109 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.DirectoryInfo System.IO.FileInfo::get_Directory()
 DirectoryInfo_t114 * FileInfo_get_Directory_m582 (FileInfo_t109 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.FileInfo::ToString()
 String_t* FileInfo_ToString_m9520 (FileInfo_t109 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
