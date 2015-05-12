#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.AssemblyName
struct AssemblyName_t1944;
// System.String
struct String_t;
// System.Version
struct Version_t1587;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t960;
// System.Byte[]
struct ByteU5BU5D_t97;
// System.Object
struct Object_t;
// System.Reflection.AssemblyNameFlags
#include "mscorlib_System_Reflection_AssemblyNameFlags.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Reflection.AssemblyName::.ctor()
 void AssemblyName__ctor_m9895 (AssemblyName_t1944 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void AssemblyName__ctor_m9896 (AssemblyName_t1944 * __this, SerializationInfo_t960 * ___si, StreamingContext_t961  ___sc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.AssemblyName::get_Name()
 String_t* AssemblyName_get_Name_m9897 (AssemblyName_t1944 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyNameFlags System.Reflection.AssemblyName::get_Flags()
 int32_t AssemblyName_get_Flags_m9898 (AssemblyName_t1944 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.AssemblyName::get_FullName()
 String_t* AssemblyName_get_FullName_m9899 (AssemblyName_t1944 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version System.Reflection.AssemblyName::get_Version()
 Version_t1587 * AssemblyName_get_Version_m9900 (AssemblyName_t1944 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::set_Version(System.Version)
 void AssemblyName_set_Version_m9901 (AssemblyName_t1944 * __this, Version_t1587 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.AssemblyName::ToString()
 String_t* AssemblyName_ToString_m9902 (AssemblyName_t1944 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.AssemblyName::get_IsPublicKeyValid()
 bool AssemblyName_get_IsPublicKeyValid_m9903 (AssemblyName_t1944 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Reflection.AssemblyName::InternalGetPublicKeyToken()
 ByteU5BU5D_t97* AssemblyName_InternalGetPublicKeyToken_m9904 (AssemblyName_t1944 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Reflection.AssemblyName::ComputePublicKeyToken()
 ByteU5BU5D_t97* AssemblyName_ComputePublicKeyToken_m9905 (AssemblyName_t1944 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::SetPublicKey(System.Byte[])
 void AssemblyName_SetPublicKey_m9906 (AssemblyName_t1944 * __this, ByteU5BU5D_t97* ___publicKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::SetPublicKeyToken(System.Byte[])
 void AssemblyName_SetPublicKeyToken_m9907 (AssemblyName_t1944 * __this, ByteU5BU5D_t97* ___publicKeyToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void AssemblyName_GetObjectData_m9908 (AssemblyName_t1944 * __this, SerializationInfo_t960 * ___info, StreamingContext_t961  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::OnDeserialization(System.Object)
 void AssemblyName_OnDeserialization_m9909 (AssemblyName_t1944 * __this, Object_t * ___sender, MethodInfo* method) IL2CPP_METHOD_ATTR;
