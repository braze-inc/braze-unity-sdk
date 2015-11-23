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

// UnityEngine.UnityException
struct UnityException_t703;
// System.String
struct String_t;
// System.Exception
struct Exception_t74;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t962;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void UnityEngine.UnityException::.ctor()
extern "C" void UnityException__ctor_m4911 (UnityException_t703 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UnityException::.ctor(System.String)
extern "C" void UnityException__ctor_m4912 (UnityException_t703 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UnityException::.ctor(System.String,System.Exception)
extern "C" void UnityException__ctor_m4913 (UnityException_t703 * __this, String_t* ___message, Exception_t74 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UnityException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnityException__ctor_m4914 (UnityException_t703 * __this, SerializationInfo_t962 * ___info, StreamingContext_t963  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
