#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.FileNotFoundException
struct FileNotFoundException_t1918;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t960;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.IO.FileNotFoundException::.ctor()
 void FileNotFoundException__ctor_m9426 (FileNotFoundException_t1918 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileNotFoundException::.ctor(System.String,System.String)
 void FileNotFoundException__ctor_m9427 (FileNotFoundException_t1918 * __this, String_t* ___message, String_t* ___fileName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileNotFoundException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void FileNotFoundException__ctor_m9428 (FileNotFoundException_t1918 * __this, SerializationInfo_t960 * ___info, StreamingContext_t961  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.FileNotFoundException::get_Message()
 String_t* FileNotFoundException_get_Message_m9429 (FileNotFoundException_t1918 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileNotFoundException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void FileNotFoundException_GetObjectData_m9430 (FileNotFoundException_t1918 * __this, SerializationInfo_t960 * ___info, StreamingContext_t961  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.FileNotFoundException::ToString()
 String_t* FileNotFoundException_ToString_m9431 (FileNotFoundException_t1918 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
