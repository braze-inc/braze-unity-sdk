#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<UnityTest.ITestComponent,System.Collections.Generic.HashSet`1<UnityTest.ITestComponent>,System.Collections.Generic.KeyValuePair`2<UnityTest.ITestComponent,System.Collections.Generic.HashSet`1<UnityTest.ITestComponent>>>
struct Transform_1_t3212;
// System.Object
struct Object_t;
// UnityTest.ITestComponent
struct ITestComponent_t224;
// System.Collections.Generic.HashSet`1<UnityTest.ITestComponent>
struct HashSet_1_t329;
// System.IAsyncResult
struct IAsyncResult_t472;
// System.AsyncCallback
struct AsyncCallback_t473;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<UnityTest.ITestComponent,System.Collections.Generic.HashSet`1<UnityTest.ITestComponent>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityTest.ITestComponent,System.Collections.Generic.HashSet`1<UnityTest.ITestComponent>,System.Collections.Generic.KeyValuePair`2<UnityTest.ITestComponent,System.Collections.Generic.HashSet`1<UnityTest.ITestComponent>>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m15895 (Transform_1_t3212 * __this, Object_t * ___object, IntPtr_t107 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityTest.ITestComponent,System.Collections.Generic.HashSet`1<UnityTest.ITestComponent>,System.Collections.Generic.KeyValuePair`2<UnityTest.ITestComponent,System.Collections.Generic.HashSet`1<UnityTest.ITestComponent>>>::Invoke(TKey,TValue)
 KeyValuePair_2_t333  Transform_1_Invoke_m15896 (Transform_1_t3212 * __this, Object_t * ___key, HashSet_1_t329 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityTest.ITestComponent,System.Collections.Generic.HashSet`1<UnityTest.ITestComponent>,System.Collections.Generic.KeyValuePair`2<UnityTest.ITestComponent,System.Collections.Generic.HashSet`1<UnityTest.ITestComponent>>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m15897 (Transform_1_t3212 * __this, Object_t * ___key, HashSet_1_t329 * ___value, AsyncCallback_t473 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityTest.ITestComponent,System.Collections.Generic.HashSet`1<UnityTest.ITestComponent>,System.Collections.Generic.KeyValuePair`2<UnityTest.ITestComponent,System.Collections.Generic.HashSet`1<UnityTest.ITestComponent>>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t333  Transform_1_EndInvoke_m15898 (Transform_1_t3212 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
