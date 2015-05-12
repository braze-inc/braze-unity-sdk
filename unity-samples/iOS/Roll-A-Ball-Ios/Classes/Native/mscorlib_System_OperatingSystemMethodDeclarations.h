#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.OperatingSystem
struct OperatingSystem_t2260;
// System.Version
struct Version_t1587;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t960;
// System.String
struct String_t;
// System.PlatformID
#include "mscorlib_System_PlatformID.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.OperatingSystem::.ctor(System.PlatformID,System.Version)
 void OperatingSystem__ctor_m11892 (OperatingSystem_t2260 * __this, int32_t ___platform, Version_t1587 * ___version, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.PlatformID System.OperatingSystem::get_Platform()
 int32_t OperatingSystem_get_Platform_m11893 (OperatingSystem_t2260 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.OperatingSystem::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void OperatingSystem_GetObjectData_m11894 (OperatingSystem_t2260 * __this, SerializationInfo_t960 * ___info, StreamingContext_t961  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.OperatingSystem::ToString()
 String_t* OperatingSystem_ToString_m11895 (OperatingSystem_t2260 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
