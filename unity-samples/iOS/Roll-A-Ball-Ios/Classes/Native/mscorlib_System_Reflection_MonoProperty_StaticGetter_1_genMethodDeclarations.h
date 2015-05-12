#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.MonoProperty/StaticGetter`1<System.Object>
struct StaticGetter_1_t4802;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t472;
// System.AsyncCallback
struct AsyncCallback_t473;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Reflection.MonoProperty/StaticGetter`1<System.Object>::.ctor(System.Object,System.IntPtr)
 void StaticGetter_1__ctor_m26118_gshared (StaticGetter_1_t4802 * __this, Object_t * ___object, IntPtr_t107 ___method, MethodInfo* method);
#define StaticGetter_1__ctor_m26118(__this, ___object, ___method, method) (void)StaticGetter_1__ctor_m26118_gshared((StaticGetter_1_t4802 *)__this, (Object_t *)___object, (IntPtr_t107)___method, method)
// R System.Reflection.MonoProperty/StaticGetter`1<System.Object>::Invoke()
 Object_t * StaticGetter_1_Invoke_m26119_gshared (StaticGetter_1_t4802 * __this, MethodInfo* method);
#define StaticGetter_1_Invoke_m26119(__this, method) (Object_t *)StaticGetter_1_Invoke_m26119_gshared((StaticGetter_1_t4802 *)__this, method)
// System.IAsyncResult System.Reflection.MonoProperty/StaticGetter`1<System.Object>::BeginInvoke(System.AsyncCallback,System.Object)
 Object_t * StaticGetter_1_BeginInvoke_m26120_gshared (StaticGetter_1_t4802 * __this, AsyncCallback_t473 * ___callback, Object_t * ___object, MethodInfo* method);
#define StaticGetter_1_BeginInvoke_m26120(__this, ___callback, ___object, method) (Object_t *)StaticGetter_1_BeginInvoke_m26120_gshared((StaticGetter_1_t4802 *)__this, (AsyncCallback_t473 *)___callback, (Object_t *)___object, method)
// R System.Reflection.MonoProperty/StaticGetter`1<System.Object>::EndInvoke(System.IAsyncResult)
 Object_t * StaticGetter_1_EndInvoke_m26121_gshared (StaticGetter_1_t4802 * __this, Object_t * ___result, MethodInfo* method);
#define StaticGetter_1_EndInvoke_m26121(__this, ___result, method) (Object_t *)StaticGetter_1_EndInvoke_m26121_gshared((StaticGetter_1_t4802 *)__this, (Object_t *)___result, method)
