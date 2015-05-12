#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.DelegateSerializationHolder/DelegateEntry
struct DelegateEntry_t2260;
// System.Delegate
struct Delegate_t743;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t971;

// System.Void System.DelegateSerializationHolder/DelegateEntry::.ctor(System.Delegate,System.String)
 void DelegateEntry__ctor_m11711 (DelegateEntry_t2260 * __this, Delegate_t743 * ___del, String_t* ___targetLabel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.DelegateSerializationHolder/DelegateEntry::DeserializeDelegate(System.Runtime.Serialization.SerializationInfo)
 Delegate_t743 * DelegateEntry_DeserializeDelegate_m11712 (DelegateEntry_t2260 * __this, SerializationInfo_t971 * ___info, MethodInfo* method) IL2CPP_METHOD_ATTR;
