#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher,Boo.Lang.Runtime.DynamicDispatching.DispatcherKey>
struct Transform_1_t4580;
// System.Object
struct Object_t;
// Boo.Lang.Runtime.DynamicDispatching.DispatcherKey
struct DispatcherKey_t1136;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher
struct Dispatcher_t1132;
// System.IAsyncResult
struct IAsyncResult_t472;
// System.AsyncCallback
struct AsyncCallback_t473;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher,Boo.Lang.Runtime.DynamicDispatching.DispatcherKey>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_0MethodDeclarations.h"
#define Transform_1__ctor_m24916(__this, ___object, ___method, method) (void)Transform_1__ctor_m13499_gshared((Transform_1_t2839 *)__this, (Object_t *)___object, (IntPtr_t107)___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher,Boo.Lang.Runtime.DynamicDispatching.DispatcherKey>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m24917(__this, ___key, ___value, method) (DispatcherKey_t1136 *)Transform_1_Invoke_m13500_gshared((Transform_1_t2839 *)__this, (Object_t *)___key, (Object_t *)___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher,Boo.Lang.Runtime.DynamicDispatching.DispatcherKey>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m24918(__this, ___key, ___value, ___callback, ___object, method) (Object_t *)Transform_1_BeginInvoke_m13501_gshared((Transform_1_t2839 *)__this, (Object_t *)___key, (Object_t *)___value, (AsyncCallback_t473 *)___callback, (Object_t *)___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher,Boo.Lang.Runtime.DynamicDispatching.DispatcherKey>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m24919(__this, ___result, method) (DispatcherKey_t1136 *)Transform_1_EndInvoke_m13502_gshared((Transform_1_t2839 *)__this, (Object_t *)___result, method)
