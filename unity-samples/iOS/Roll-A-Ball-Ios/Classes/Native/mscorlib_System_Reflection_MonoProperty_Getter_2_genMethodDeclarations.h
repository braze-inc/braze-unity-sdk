#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>
struct Getter_2_t4819;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t486;
// System.AsyncCallback
struct AsyncCallback_t487;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
 void Getter_2__ctor_m26324_gshared (Getter_2_t4819 * __this, Object_t * ___object, IntPtr_t120 ___method, MethodInfo* method);
#define Getter_2__ctor_m26324(__this, ___object, ___method, method) (void)Getter_2__ctor_m26324_gshared((Getter_2_t4819 *)__this, (Object_t *)___object, (IntPtr_t120)___method, method)
// R System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::Invoke(T)
 Object_t * Getter_2_Invoke_m26325_gshared (Getter_2_t4819 * __this, Object_t * ____this, MethodInfo* method);
#define Getter_2_Invoke_m26325(__this, ____this, method) (Object_t *)Getter_2_Invoke_m26325_gshared((Getter_2_t4819 *)__this, (Object_t *)____this, method)
// System.IAsyncResult System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Getter_2_BeginInvoke_m26326_gshared (Getter_2_t4819 * __this, Object_t * ____this, AsyncCallback_t487 * ___callback, Object_t * ___object, MethodInfo* method);
#define Getter_2_BeginInvoke_m26326(__this, ____this, ___callback, ___object, method) (Object_t *)Getter_2_BeginInvoke_m26326_gshared((Getter_2_t4819 *)__this, (Object_t *)____this, (AsyncCallback_t487 *)___callback, (Object_t *)___object, method)
// R System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
 Object_t * Getter_2_EndInvoke_m26327_gshared (Getter_2_t4819 * __this, Object_t * ___result, MethodInfo* method);
#define Getter_2_EndInvoke_m26327(__this, ___result, method) (Object_t *)Getter_2_EndInvoke_m26327_gshared((Getter_2_t4819 *)__this, (Object_t *)___result, method)
