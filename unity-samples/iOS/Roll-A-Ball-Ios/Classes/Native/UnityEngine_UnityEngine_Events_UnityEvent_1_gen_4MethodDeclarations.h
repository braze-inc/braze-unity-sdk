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

// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_t563;
// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t690;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t934;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::.ctor()
extern "C" void UnityEvent_1__ctor_m3520_gshared (UnityEvent_1_t563 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m3520(__this, method) (( void (*) (UnityEvent_1_t563 *, const MethodInfo*))UnityEvent_1__ctor_m3520_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m3335_gshared (UnityEvent_1_t563 * __this, UnityAction_1_t690 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m3335(__this, ___call, method) (( void (*) (UnityEvent_1_t563 *, UnityAction_1_t690 *, const MethodInfo*))UnityEvent_1_AddListener_m3335_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m16781_gshared (UnityEvent_1_t563 * __this, UnityAction_1_t690 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m16781(__this, ___call, method) (( void (*) (UnityEvent_1_t563 *, UnityAction_1_t690 *, const MethodInfo*))UnityEvent_1_RemoveListener_m16781_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Boolean>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m16782_gshared (UnityEvent_1_t563 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m16782(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t563 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m16782_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Boolean>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t934 * UnityEvent_1_GetDelegate_m16783_gshared (UnityEvent_1_t563 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m16783(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t934 * (*) (UnityEvent_1_t563 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m16783_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Boolean>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t934 * UnityEvent_1_GetDelegate_m16784_gshared (Object_t * __this /* static, unused */, UnityAction_1_t690 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m16784(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t934 * (*) (Object_t * /* static, unused */, UnityAction_1_t690 *, const MethodInfo*))UnityEvent_1_GetDelegate_m16784_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m3525_gshared (UnityEvent_1_t563 * __this, bool ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m3525(__this, ___arg0, method) (( void (*) (UnityEvent_1_t563 *, bool, const MethodInfo*))UnityEvent_1_Invoke_m3525_gshared)(__this, ___arg0, method)
