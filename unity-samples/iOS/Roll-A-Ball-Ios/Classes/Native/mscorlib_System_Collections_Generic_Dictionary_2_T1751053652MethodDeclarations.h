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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Int32>
struct Transform_1_t1751053652;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m80961195_gshared (Transform_1_t1751053652 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m80961195(__this, ___object, ___method, method) ((  void (*) (Transform_1_t1751053652 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m80961195_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Int32>::Invoke(TKey,TValue)
extern "C"  int32_t Transform_1_Invoke_m300848241_gshared (Transform_1_t1751053652 * __this, int32_t ___key, Il2CppObject * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m300848241(__this, ___key, ___value, method) ((  int32_t (*) (Transform_1_t1751053652 *, int32_t, Il2CppObject *, const MethodInfo*))Transform_1_Invoke_m300848241_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Int32>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m1162957392_gshared (Transform_1_t1751053652 * __this, int32_t ___key, Il2CppObject * ___value, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m1162957392(__this, ___key, ___value, ___callback, ___object, method) ((  Il2CppObject * (*) (Transform_1_t1751053652 *, int32_t, Il2CppObject *, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m1162957392_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Int32>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t Transform_1_EndInvoke_m822184825_gshared (Transform_1_t1751053652 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m822184825(__this, ___result, method) ((  int32_t (*) (Transform_1_t1751053652 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m822184825_gshared)(__this, ___result, method)
