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

// System.Reflection.AssemblyName
struct AssemblyName_t3481926655;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;
// System.String
struct String_t;
// System.Version
struct Version_t497901645;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"
#include "mscorlib_System_Reflection_AssemblyNameFlags1390978468.h"
#include "mscorlib_System_Version497901645.h"
#include "mscorlib_System_Object837106420.h"

// System.Void System.Reflection.AssemblyName::.ctor()
extern "C"  void AssemblyName__ctor_m2021574845 (AssemblyName_t3481926655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void AssemblyName__ctor_m1431164030 (AssemblyName_t3481926655 * __this, SerializationInfo_t2995724695 * ___si, StreamingContext_t986364934  ___sc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.AssemblyName::get_Name()
extern "C"  String_t* AssemblyName_get_Name_m1123490526 (AssemblyName_t3481926655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyNameFlags System.Reflection.AssemblyName::get_Flags()
extern "C"  int32_t AssemblyName_get_Flags_m841716984 (AssemblyName_t3481926655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.AssemblyName::get_FullName()
extern "C"  String_t* AssemblyName_get_FullName_m2880072013 (AssemblyName_t3481926655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version System.Reflection.AssemblyName::get_Version()
extern "C"  Version_t497901645 * AssemblyName_get_Version_m700434552 (AssemblyName_t3481926655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::set_Version(System.Version)
extern "C"  void AssemblyName_set_Version_m1560254941 (AssemblyName_t3481926655 * __this, Version_t497901645 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.AssemblyName::ToString()
extern "C"  String_t* AssemblyName_ToString_m485215606 (AssemblyName_t3481926655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.AssemblyName::get_IsPublicKeyValid()
extern "C"  bool AssemblyName_get_IsPublicKeyValid_m65110050 (AssemblyName_t3481926655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Reflection.AssemblyName::InternalGetPublicKeyToken()
extern "C"  ByteU5BU5D_t58506160* AssemblyName_InternalGetPublicKeyToken_m1116912397 (AssemblyName_t3481926655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Reflection.AssemblyName::ComputePublicKeyToken()
extern "C"  ByteU5BU5D_t58506160* AssemblyName_ComputePublicKeyToken_m1248936939 (AssemblyName_t3481926655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::SetPublicKey(System.Byte[])
extern "C"  void AssemblyName_SetPublicKey_m2883286222 (AssemblyName_t3481926655 * __this, ByteU5BU5D_t58506160* ___publicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::SetPublicKeyToken(System.Byte[])
extern "C"  void AssemblyName_SetPublicKeyToken_m3550661833 (AssemblyName_t3481926655 * __this, ByteU5BU5D_t58506160* ___publicKeyToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void AssemblyName_GetObjectData_m3727277531 (AssemblyName_t3481926655 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.AssemblyName::Clone()
extern "C"  Il2CppObject * AssemblyName_Clone_m1423794147 (AssemblyName_t3481926655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::OnDeserialization(System.Object)
extern "C"  void AssemblyName_OnDeserialization_m866678633 (AssemblyName_t3481926655 * __this, Il2CppObject * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
