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

// System.Reflection.MonoProperty/StaticGetter`1<System.Object>
struct StaticGetter_1_t2861;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t551;
// System.AsyncCallback
struct AsyncCallback_t552;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Reflection.MonoProperty/StaticGetter`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void StaticGetter_1__ctor_m21842_gshared (StaticGetter_1_t2861 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define StaticGetter_1__ctor_m21842(__this, ___object, ___method, method) (( void (*) (StaticGetter_1_t2861 *, Object_t *, IntPtr_t, const MethodInfo*))StaticGetter_1__ctor_m21842_gshared)(__this, ___object, ___method, method)
// R System.Reflection.MonoProperty/StaticGetter`1<System.Object>::Invoke()
extern "C" Object_t * StaticGetter_1_Invoke_m21843_gshared (StaticGetter_1_t2861 * __this, const MethodInfo* method);
#define StaticGetter_1_Invoke_m21843(__this, method) (( Object_t * (*) (StaticGetter_1_t2861 *, const MethodInfo*))StaticGetter_1_Invoke_m21843_gshared)(__this, method)
// System.IAsyncResult System.Reflection.MonoProperty/StaticGetter`1<System.Object>::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * StaticGetter_1_BeginInvoke_m21844_gshared (StaticGetter_1_t2861 * __this, AsyncCallback_t552 * ___callback, Object_t * ___object, const MethodInfo* method);
#define StaticGetter_1_BeginInvoke_m21844(__this, ___callback, ___object, method) (( Object_t * (*) (StaticGetter_1_t2861 *, AsyncCallback_t552 *, Object_t *, const MethodInfo*))StaticGetter_1_BeginInvoke_m21844_gshared)(__this, ___callback, ___object, method)
// R System.Reflection.MonoProperty/StaticGetter`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * StaticGetter_1_EndInvoke_m21845_gshared (StaticGetter_1_t2861 * __this, Object_t * ___result, const MethodInfo* method);
#define StaticGetter_1_EndInvoke_m21845(__this, ___result, method) (( Object_t * (*) (StaticGetter_1_t2861 *, Object_t *, const MethodInfo*))StaticGetter_1_EndInvoke_m21845_gshared)(__this, ___result, method)
