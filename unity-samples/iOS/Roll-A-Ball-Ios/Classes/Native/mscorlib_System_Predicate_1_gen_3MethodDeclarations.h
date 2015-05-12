#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Object>
struct Predicate_1_t2759;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t472;
// System.AsyncCallback
struct AsyncCallback_t473;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
 void Predicate_1__ctor_m12990_gshared (Predicate_1_t2759 * __this, Object_t * ___object, IntPtr_t107 ___method, MethodInfo* method);
#define Predicate_1__ctor_m12990(__this, ___object, ___method, method) (void)Predicate_1__ctor_m12990_gshared((Predicate_1_t2759 *)__this, (Object_t *)___object, (IntPtr_t107)___method, method)
// System.Boolean System.Predicate`1<System.Object>::Invoke(T)
 bool Predicate_1_Invoke_m12991_gshared (Predicate_1_t2759 * __this, Object_t * ___obj, MethodInfo* method);
#define Predicate_1_Invoke_m12991(__this, ___obj, method) (bool)Predicate_1_Invoke_m12991_gshared((Predicate_1_t2759 *)__this, (Object_t *)___obj, method)
// System.IAsyncResult System.Predicate`1<System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Predicate_1_BeginInvoke_m12992_gshared (Predicate_1_t2759 * __this, Object_t * ___obj, AsyncCallback_t473 * ___callback, Object_t * ___object, MethodInfo* method);
#define Predicate_1_BeginInvoke_m12992(__this, ___obj, ___callback, ___object, method) (Object_t *)Predicate_1_BeginInvoke_m12992_gshared((Predicate_1_t2759 *)__this, (Object_t *)___obj, (AsyncCallback_t473 *)___callback, (Object_t *)___object, method)
// System.Boolean System.Predicate`1<System.Object>::EndInvoke(System.IAsyncResult)
 bool Predicate_1_EndInvoke_m12993_gshared (Predicate_1_t2759 * __this, Object_t * ___result, MethodInfo* method);
#define Predicate_1_EndInvoke_m12993(__this, ___result, method) (bool)Predicate_1_EndInvoke_m12993_gshared((Predicate_1_t2759 *)__this, (Object_t *)___result, method)
