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

// System.IO.FileInfo
struct FileInfo_t95;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t962;
// System.IO.DirectoryInfo
struct DirectoryInfo_t96;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.IO.FileInfo::.ctor(System.String)
extern "C" void FileInfo__ctor_m526 (FileInfo_t95 * __this, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileInfo::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void FileInfo__ctor_m9228 (FileInfo_t95 * __this, SerializationInfo_t962 * ___info, StreamingContext_t963  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileInfo::InternalRefresh()
extern "C" void FileInfo_InternalRefresh_m9229 (FileInfo_t95 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.FileInfo::get_Exists()
extern "C" bool FileInfo_get_Exists_m9230 (FileInfo_t95 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.FileInfo::get_Name()
extern "C" String_t* FileInfo_get_Name_m9231 (FileInfo_t95 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.FileInfo::get_DirectoryName()
extern "C" String_t* FileInfo_get_DirectoryName_m9232 (FileInfo_t95 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.DirectoryInfo System.IO.FileInfo::get_Directory()
extern "C" DirectoryInfo_t96 * FileInfo_get_Directory_m527 (FileInfo_t95 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.FileInfo::ToString()
extern "C" String_t* FileInfo_ToString_m9233 (FileInfo_t95 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
