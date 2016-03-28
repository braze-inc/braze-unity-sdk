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

// UnityEngine.UI.ObjectPool`1<System.Object>
struct ObjectPool_1_t2954595302;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t817568325;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"

// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
extern "C"  void ObjectPool_1__ctor_m2532712771_gshared (ObjectPool_1_t2954595302 * __this, UnityAction_1_t817568325 * ___actionOnGet, UnityAction_1_t817568325 * ___actionOnRelease, const MethodInfo* method);
#define ObjectPool_1__ctor_m2532712771(__this, ___actionOnGet, ___actionOnRelease, method) ((  void (*) (ObjectPool_1_t2954595302 *, UnityAction_1_t817568325 *, UnityAction_1_t817568325 *, const MethodInfo*))ObjectPool_1__ctor_m2532712771_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countAll()
extern "C"  int32_t ObjectPool_1_get_countAll_m3327915100_gshared (ObjectPool_1_t2954595302 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countAll_m3327915100(__this, method) ((  int32_t (*) (ObjectPool_1_t2954595302 *, const MethodInfo*))ObjectPool_1_get_countAll_m3327915100_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::set_countAll(System.Int32)
extern "C"  void ObjectPool_1_set_countAll_m2125882937_gshared (ObjectPool_1_t2954595302 * __this, int32_t ___value, const MethodInfo* method);
#define ObjectPool_1_set_countAll_m2125882937(__this, ___value, method) ((  void (*) (ObjectPool_1_t2954595302 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m2125882937_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countActive()
extern "C"  int32_t ObjectPool_1_get_countActive_m2082506317_gshared (ObjectPool_1_t2954595302 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countActive_m2082506317(__this, method) ((  int32_t (*) (ObjectPool_1_t2954595302 *, const MethodInfo*))ObjectPool_1_get_countActive_m2082506317_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countInactive()
extern "C"  int32_t ObjectPool_1_get_countInactive_m19645682_gshared (ObjectPool_1_t2954595302 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countInactive_m19645682(__this, method) ((  int32_t (*) (ObjectPool_1_t2954595302 *, const MethodInfo*))ObjectPool_1_get_countInactive_m19645682_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Object>::Get()
extern "C"  Il2CppObject * ObjectPool_1_Get_m3052664832_gshared (ObjectPool_1_t2954595302 * __this, const MethodInfo* method);
#define ObjectPool_1_Get_m3052664832(__this, method) ((  Il2CppObject * (*) (ObjectPool_1_t2954595302 *, const MethodInfo*))ObjectPool_1_Get_m3052664832_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::Release(T)
extern "C"  void ObjectPool_1_Release_m1110976910_gshared (ObjectPool_1_t2954595302 * __this, Il2CppObject * ___element, const MethodInfo* method);
#define ObjectPool_1_Release_m1110976910(__this, ___element, method) ((  void (*) (ObjectPool_1_t2954595302 *, Il2CppObject *, const MethodInfo*))ObjectPool_1_Release_m1110976910_gshared)(__this, ___element, method)
