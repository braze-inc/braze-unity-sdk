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
struct ObjectPool_1_t2342;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t2343;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
extern "C" void ObjectPool_1__ctor_m15212_gshared (ObjectPool_1_t2342 * __this, UnityAction_1_t2343 * ___actionOnGet, UnityAction_1_t2343 * ___actionOnRelease, const MethodInfo* method);
#define ObjectPool_1__ctor_m15212(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t2342 *, UnityAction_1_t2343 *, UnityAction_1_t2343 *, const MethodInfo*))ObjectPool_1__ctor_m15212_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countAll()
extern "C" int32_t ObjectPool_1_get_countAll_m15214_gshared (ObjectPool_1_t2342 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countAll_m15214(__this, method) (( int32_t (*) (ObjectPool_1_t2342 *, const MethodInfo*))ObjectPool_1_get_countAll_m15214_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::set_countAll(System.Int32)
extern "C" void ObjectPool_1_set_countAll_m15216_gshared (ObjectPool_1_t2342 * __this, int32_t ___value, const MethodInfo* method);
#define ObjectPool_1_set_countAll_m15216(__this, ___value, method) (( void (*) (ObjectPool_1_t2342 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m15216_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countActive()
extern "C" int32_t ObjectPool_1_get_countActive_m15218_gshared (ObjectPool_1_t2342 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countActive_m15218(__this, method) (( int32_t (*) (ObjectPool_1_t2342 *, const MethodInfo*))ObjectPool_1_get_countActive_m15218_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countInactive()
extern "C" int32_t ObjectPool_1_get_countInactive_m15220_gshared (ObjectPool_1_t2342 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countInactive_m15220(__this, method) (( int32_t (*) (ObjectPool_1_t2342 *, const MethodInfo*))ObjectPool_1_get_countInactive_m15220_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Object>::Get()
extern "C" Object_t * ObjectPool_1_Get_m15222_gshared (ObjectPool_1_t2342 * __this, const MethodInfo* method);
#define ObjectPool_1_Get_m15222(__this, method) (( Object_t * (*) (ObjectPool_1_t2342 *, const MethodInfo*))ObjectPool_1_Get_m15222_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::Release(T)
extern "C" void ObjectPool_1_Release_m15224_gshared (ObjectPool_1_t2342 * __this, Object_t * ___element, const MethodInfo* method);
#define ObjectPool_1_Release_m15224(__this, ___element, method) (( void (*) (ObjectPool_1_t2342 *, Object_t *, const MethodInfo*))ObjectPool_1_Release_m15224_gshared)(__this, ___element, method)
