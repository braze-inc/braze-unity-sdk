#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.DirectoryInfo
struct DirectoryInfo_t101;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t960;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.IO.DirectoryInfo::.ctor(System.String)
 void DirectoryInfo__ctor_m9402 (DirectoryInfo_t101 * __this, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.DirectoryInfo::.ctor(System.String,System.Boolean)
 void DirectoryInfo__ctor_m9403 (DirectoryInfo_t101 * __this, String_t* ___path, bool ___simpleOriginalPath, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.DirectoryInfo::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void DirectoryInfo__ctor_m9404 (DirectoryInfo_t101 * __this, SerializationInfo_t960 * ___info, StreamingContext_t961  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.DirectoryInfo::Initialize()
 void DirectoryInfo_Initialize_m9405 (DirectoryInfo_t101 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.DirectoryInfo::get_Exists()
 bool DirectoryInfo_get_Exists_m9406 (DirectoryInfo_t101 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.DirectoryInfo::get_Name()
 String_t* DirectoryInfo_get_Name_m9407 (DirectoryInfo_t101 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.DirectoryInfo System.IO.DirectoryInfo::get_Parent()
 DirectoryInfo_t101 * DirectoryInfo_get_Parent_m9408 (DirectoryInfo_t101 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.DirectoryInfo::Create()
 void DirectoryInfo_Create_m9409 (DirectoryInfo_t101 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.DirectoryInfo::ToString()
 String_t* DirectoryInfo_ToString_m9410 (DirectoryInfo_t101 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
