#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.SecurityException
struct SecurityException_t2195;
// System.Object
struct Object_t;
// System.Security.IPermission
struct IPermission_t2194;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t971;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Security.SecurityException::.ctor()
 void SecurityException__ctor_m11027 (SecurityException_t2195 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityException::.ctor(System.String)
 void SecurityException__ctor_m11028 (SecurityException_t2195 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void SecurityException__ctor_m11029 (SecurityException_t2195 * __this, SerializationInfo_t971 * ___info, StreamingContext_t972  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.SecurityException::get_Demanded()
 Object_t * SecurityException_get_Demanded_m11030 (SecurityException_t2195 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.SecurityException::get_FirstPermissionThatFailed()
 Object_t * SecurityException_get_FirstPermissionThatFailed_m11031 (SecurityException_t2195 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityException::get_PermissionState()
 String_t* SecurityException_get_PermissionState_m11032 (SecurityException_t2195 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Security.SecurityException::get_PermissionType()
 Type_t * SecurityException_get_PermissionType_m11033 (SecurityException_t2195 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityException::get_GrantedSet()
 String_t* SecurityException_get_GrantedSet_m11034 (SecurityException_t2195 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityException::get_RefusedSet()
 String_t* SecurityException_get_RefusedSet_m11035 (SecurityException_t2195 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void SecurityException_GetObjectData_m11036 (SecurityException_t2195 * __this, SerializationInfo_t971 * ___info, StreamingContext_t972  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityException::ToString()
 String_t* SecurityException_ToString_m11037 (SecurityException_t2195 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
