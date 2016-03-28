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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Boolean>
struct Transform_1_t3770954826;
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

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m2503808327_gshared (Transform_1_t3770954826 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m2503808327(__this, ___object, ___method, method) ((  void (*) (Transform_1_t3770954826 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m2503808327_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Boolean>::Invoke(TKey,TValue)
extern "C"  bool Transform_1_Invoke_m159606869_gshared (Transform_1_t3770954826 * __this, Il2CppObject * ___key, bool ___value, const MethodInfo* method);
#define Transform_1_Invoke_m159606869(__this, ___key, ___value, method) ((  bool (*) (Transform_1_t3770954826 *, Il2CppObject *, bool, const MethodInfo*))Transform_1_Invoke_m159606869_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Boolean>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m2945688884_gshared (Transform_1_t3770954826 * __this, Il2CppObject * ___key, bool ___value, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m2945688884(__this, ___key, ___value, ___callback, ___object, method) ((  Il2CppObject * (*) (Transform_1_t3770954826 *, Il2CppObject *, bool, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m2945688884_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C"  bool Transform_1_EndInvoke_m3128041749_gshared (Transform_1_t3770954826 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m3128041749(__this, ___result, method) ((  bool (*) (Transform_1_t3770954826 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m3128041749_gshared)(__this, ___result, method)
