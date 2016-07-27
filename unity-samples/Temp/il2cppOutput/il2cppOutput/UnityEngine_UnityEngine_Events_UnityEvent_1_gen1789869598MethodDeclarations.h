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

// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_t1789869598;
// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_t2827876692;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t1733537956;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Reflection_MethodInfo3461221277.h"

// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::.ctor()
extern "C"  void UnityEvent_1__ctor_m7858823_gshared (UnityEvent_1_t1789869598 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m7858823(__this, method) ((  void (*) (UnityEvent_1_t1789869598 *, const MethodInfo*))UnityEvent_1__ctor_m7858823_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C"  void UnityEvent_1_AddListener_m482909706_gshared (UnityEvent_1_t1789869598 * __this, UnityAction_1_t2827876692 * ___call0, const MethodInfo* method);
#define UnityEvent_1_AddListener_m482909706(__this, ___call0, method) ((  void (*) (UnityEvent_1_t1789869598 *, UnityAction_1_t2827876692 *, const MethodInfo*))UnityEvent_1_AddListener_m482909706_gshared)(__this, ___call0, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C"  void UnityEvent_1_RemoveListener_m356723581_gshared (UnityEvent_1_t1789869598 * __this, UnityAction_1_t2827876692 * ___call0, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m356723581(__this, ___call0, method) ((  void (*) (UnityEvent_1_t1789869598 *, UnityAction_1_t2827876692 *, const MethodInfo*))UnityEvent_1_RemoveListener_m356723581_gshared)(__this, ___call0, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Int32>::FindMethod_Impl(System.String,System.Object)
extern "C"  MethodInfo_t * UnityEvent_1_FindMethod_Impl_m2189312310_gshared (UnityEvent_1_t1789869598 * __this, String_t* ___name0, Il2CppObject * ___targetObj1, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m2189312310(__this, ___name0, ___targetObj1, method) ((  MethodInfo_t * (*) (UnityEvent_1_t1789869598 *, String_t*, Il2CppObject *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m2189312310_gshared)(__this, ___name0, ___targetObj1, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Int32>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C"  BaseInvokableCall_t1733537956 * UnityEvent_1_GetDelegate_m3062958924_gshared (UnityEvent_1_t1789869598 * __this, Il2CppObject * ___target0, MethodInfo_t * ___theFunction1, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m3062958924(__this, ___target0, ___theFunction1, method) ((  BaseInvokableCall_t1733537956 * (*) (UnityEvent_1_t1789869598 *, Il2CppObject *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m3062958924_gshared)(__this, ___target0, ___theFunction1, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Int32>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C"  BaseInvokableCall_t1733537956 * UnityEvent_1_GetDelegate_m2987483881_gshared (Il2CppObject * __this /* static, unused */, UnityAction_1_t2827876692 * ___action0, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m2987483881(__this /* static, unused */, ___action0, method) ((  BaseInvokableCall_t1733537956 * (*) (Il2CppObject * /* static, unused */, UnityAction_1_t2827876692 *, const MethodInfo*))UnityEvent_1_GetDelegate_m2987483881_gshared)(__this /* static, unused */, ___action0, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::Invoke(T0)
extern "C"  void UnityEvent_1_Invoke_m1822489606_gshared (UnityEvent_1_t1789869598 * __this, int32_t ___arg00, const MethodInfo* method);
#define UnityEvent_1_Invoke_m1822489606(__this, ___arg00, method) ((  void (*) (UnityEvent_1_t1789869598 *, int32_t, const MethodInfo*))UnityEvent_1_Invoke_m1822489606_gshared)(__this, ___arg00, method)
