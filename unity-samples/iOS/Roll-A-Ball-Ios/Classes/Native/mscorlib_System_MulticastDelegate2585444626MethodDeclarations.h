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
struct MulticastDelegate_t2585444626;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;
// System.Object
struct Il2CppObject;
// System.Delegate[]
struct DelegateU5BU5D_t4257391775;
// System.Delegate
struct Delegate_t3660574010;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Delegate3660574010.h"
#include "mscorlib_System_MulticastDelegate2585444626.h"

// System.Void System.MulticastDelegate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void MulticastDelegate_GetObjectData_m2959136754 (MulticastDelegate_t2585444626 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::Equals(System.Object)
extern "C"  bool MulticastDelegate_Equals_m1775662595 (MulticastDelegate_t2585444626 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.MulticastDelegate::GetHashCode()
extern "C"  int32_t MulticastDelegate_GetHashCode_m932113511 (MulticastDelegate_t2585444626 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate[] System.MulticastDelegate::GetInvocationList()
extern "C"  DelegateU5BU5D_t4257391775* MulticastDelegate_GetInvocationList_m2228922313 (MulticastDelegate_t2585444626 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::CombineImpl(System.Delegate)
extern "C"  Delegate_t3660574010 * MulticastDelegate_CombineImpl_m3233588460 (MulticastDelegate_t2585444626 * __this, Delegate_t3660574010 * ___follow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::BaseEquals(System.MulticastDelegate)
extern "C"  bool MulticastDelegate_BaseEquals_m3635930564 (MulticastDelegate_t2585444626 * __this, MulticastDelegate_t2585444626 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MulticastDelegate System.MulticastDelegate::KPM(System.MulticastDelegate,System.MulticastDelegate,System.MulticastDelegate&)
extern "C"  MulticastDelegate_t2585444626 * MulticastDelegate_KPM_m466375933 (Il2CppObject * __this /* static, unused */, MulticastDelegate_t2585444626 * ___needle, MulticastDelegate_t2585444626 * ___haystack, MulticastDelegate_t2585444626 ** ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::RemoveImpl(System.Delegate)
extern "C"  Delegate_t3660574010 * MulticastDelegate_RemoveImpl_m112886219 (MulticastDelegate_t2585444626 * __this, Delegate_t3660574010 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
