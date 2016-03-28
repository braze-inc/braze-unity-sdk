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

// System.DelegateSerializationHolder/DelegateEntry
struct DelegateEntry_t1105204685;
// System.Delegate
struct Delegate_t3660574010;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Delegate3660574010.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"

// System.Void System.DelegateSerializationHolder/DelegateEntry::.ctor(System.Delegate,System.String)
extern "C"  void DelegateEntry__ctor_m2030858126 (DelegateEntry_t1105204685 * __this, Delegate_t3660574010 * ___del, String_t* ___targetLabel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.DelegateSerializationHolder/DelegateEntry::DeserializeDelegate(System.Runtime.Serialization.SerializationInfo)
extern "C"  Delegate_t3660574010 * DelegateEntry_DeserializeDelegate_m151701220 (DelegateEntry_t1105204685 * __this, SerializationInfo_t2995724695 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
