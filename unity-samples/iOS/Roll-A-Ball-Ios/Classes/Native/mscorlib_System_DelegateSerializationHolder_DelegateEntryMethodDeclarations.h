#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.DelegateSerializationHolder/DelegateEntry
struct DelegateEntry_t2248;
// System.Delegate
struct Delegate_t730;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t960;

// System.Void System.DelegateSerializationHolder/DelegateEntry::.ctor(System.Delegate,System.String)
 void DelegateEntry__ctor_m11616 (DelegateEntry_t2248 * __this, Delegate_t730 * ___del, String_t* ___targetLabel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.DelegateSerializationHolder/DelegateEntry::DeserializeDelegate(System.Runtime.Serialization.SerializationInfo)
 Delegate_t730 * DelegateEntry_DeserializeDelegate_m11617 (DelegateEntry_t2248 * __this, SerializationInfo_t960 * ___info, MethodInfo* method) IL2CPP_METHOD_ATTR;
