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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.DictionaryEntry>
struct Transform_1_t3328633407;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Collections_DictionaryEntry130027246.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m3355330134_gshared (Transform_1_t3328633407 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m3355330134(__this, ___object, ___method, method) ((  void (*) (Transform_1_t3328633407 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m3355330134_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C"  DictionaryEntry_t130027246  Transform_1_Invoke_m4168400550_gshared (Transform_1_t3328633407 * __this, int32_t ___key, Il2CppObject * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m4168400550(__this, ___key, ___value, method) ((  DictionaryEntry_t130027246  (*) (Transform_1_t3328633407 *, int32_t, Il2CppObject *, const MethodInfo*))Transform_1_Invoke_m4168400550_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m1630268421_gshared (Transform_1_t3328633407 * __this, int32_t ___key, Il2CppObject * ___value, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m1630268421(__this, ___key, ___value, ___callback, ___object, method) ((  Il2CppObject * (*) (Transform_1_t3328633407 *, int32_t, Il2CppObject *, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m1630268421_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C"  DictionaryEntry_t130027246  Transform_1_EndInvoke_m3617873444_gshared (Transform_1_t3328633407 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m3617873444(__this, ___result, method) ((  DictionaryEntry_t130027246  (*) (Transform_1_t3328633407 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m3617873444_gshared)(__this, ___result, method)
