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

// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_t486;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t662;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t934;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::.ctor()
extern "C" void UnityEvent_1__ctor_m3266_gshared (UnityEvent_1_t486 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m3266(__this, method) (( void (*) (UnityEvent_1_t486 *, const MethodInfo*))UnityEvent_1__ctor_m3266_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m3268_gshared (UnityEvent_1_t486 * __this, UnityAction_1_t662 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m3268(__this, ___call, method) (( void (*) (UnityEvent_1_t486 *, UnityAction_1_t662 *, const MethodInfo*))UnityEvent_1_AddListener_m3268_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m3544_gshared (UnityEvent_1_t486 * __this, UnityAction_1_t662 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m3544(__this, ___call, method) (( void (*) (UnityEvent_1_t486 *, UnityAction_1_t662 *, const MethodInfo*))UnityEvent_1_RemoveListener_m3544_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Single>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m16311_gshared (UnityEvent_1_t486 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m16311(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t486 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m16311_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Single>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t934 * UnityEvent_1_GetDelegate_m16312_gshared (UnityEvent_1_t486 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m16312(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t934 * (*) (UnityEvent_1_t486 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m16312_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Single>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t934 * UnityEvent_1_GetDelegate_m16313_gshared (Object_t * __this /* static, unused */, UnityAction_1_t662 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m16313(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t934 * (*) (Object_t * /* static, unused */, UnityAction_1_t662 *, const MethodInfo*))UnityEvent_1_GetDelegate_m16313_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m3267_gshared (UnityEvent_1_t486 * __this, float ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m3267(__this, ___arg0, method) (( void (*) (UnityEvent_1_t486 *, float, const MethodInfo*))UnityEvent_1_Invoke_m3267_gshared)(__this, ___arg0, method)
