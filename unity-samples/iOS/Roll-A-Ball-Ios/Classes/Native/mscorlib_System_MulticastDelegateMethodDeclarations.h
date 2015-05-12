#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.MulticastDelegate
struct MulticastDelegate_t594;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t960;
// System.Object
struct Object_t;
// System.Delegate[]
struct DelegateU5BU5D_t1741;
// System.Delegate
struct Delegate_t730;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.MulticastDelegate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void MulticastDelegate_GetObjectData_m3543 (MulticastDelegate_t594 * __this, SerializationInfo_t960 * ___info, StreamingContext_t961  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::Equals(System.Object)
 bool MulticastDelegate_Equals_m3541 (MulticastDelegate_t594 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.MulticastDelegate::GetHashCode()
 int32_t MulticastDelegate_GetHashCode_m3542 (MulticastDelegate_t594 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate[] System.MulticastDelegate::GetInvocationList()
 DelegateU5BU5D_t1741* MulticastDelegate_GetInvocationList_m3545 (MulticastDelegate_t594 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::CombineImpl(System.Delegate)
 Delegate_t730 * MulticastDelegate_CombineImpl_m3546 (MulticastDelegate_t594 * __this, Delegate_t730 * ___follow, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::BaseEquals(System.MulticastDelegate)
 bool MulticastDelegate_BaseEquals_m8249 (MulticastDelegate_t594 * __this, MulticastDelegate_t594 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MulticastDelegate System.MulticastDelegate::KPM(System.MulticastDelegate,System.MulticastDelegate,System.MulticastDelegate&)
 MulticastDelegate_t594 * MulticastDelegate_KPM_m8250 (Object_t * __this/* static, unused */, MulticastDelegate_t594 * ___needle, MulticastDelegate_t594 * ___haystack, MulticastDelegate_t594 ** ___tail, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::RemoveImpl(System.Delegate)
 Delegate_t730 * MulticastDelegate_RemoveImpl_m3547 (MulticastDelegate_t594 * __this, Delegate_t730 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
