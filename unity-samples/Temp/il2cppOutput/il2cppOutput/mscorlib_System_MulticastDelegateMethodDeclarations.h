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

// System.MulticastDelegate
struct MulticastDelegate_t550;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t962;
// System.Object
struct Object_t;
// System.Delegate[]
struct DelegateU5BU5D_t2064;
// System.Delegate
struct Delegate_t698;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.MulticastDelegate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MulticastDelegate_GetObjectData_m7824 (MulticastDelegate_t550 * __this, SerializationInfo_t962 * ___info, StreamingContext_t963  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::Equals(System.Object)
extern "C" bool MulticastDelegate_Equals_m7825 (MulticastDelegate_t550 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.MulticastDelegate::GetHashCode()
extern "C" int32_t MulticastDelegate_GetHashCode_m7826 (MulticastDelegate_t550 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate[] System.MulticastDelegate::GetInvocationList()
extern "C" DelegateU5BU5D_t2064* MulticastDelegate_GetInvocationList_m7827 (MulticastDelegate_t550 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::CombineImpl(System.Delegate)
extern "C" Delegate_t698 * MulticastDelegate_CombineImpl_m7828 (MulticastDelegate_t550 * __this, Delegate_t698 * ___follow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::BaseEquals(System.MulticastDelegate)
extern "C" bool MulticastDelegate_BaseEquals_m7829 (MulticastDelegate_t550 * __this, MulticastDelegate_t550 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MulticastDelegate System.MulticastDelegate::KPM(System.MulticastDelegate,System.MulticastDelegate,System.MulticastDelegate&)
extern "C" MulticastDelegate_t550 * MulticastDelegate_KPM_m7830 (Object_t * __this /* static, unused */, MulticastDelegate_t550 * ___needle, MulticastDelegate_t550 * ___haystack, MulticastDelegate_t550 ** ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::RemoveImpl(System.Delegate)
extern "C" Delegate_t698 * MulticastDelegate_RemoveImpl_m7831 (MulticastDelegate_t550 * __this, Delegate_t698 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
