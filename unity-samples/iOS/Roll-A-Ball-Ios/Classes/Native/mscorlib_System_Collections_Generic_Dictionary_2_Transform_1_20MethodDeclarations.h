#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<UnityTest.ITestComponent,System.Collections.Generic.HashSet`1<UnityTest.ITestComponent>,System.Collections.DictionaryEntry>
struct Transform_1_t3208;
// System.Object
struct Object_t;
// UnityTest.ITestComponent
struct ITestComponent_t237;
// System.Collections.Generic.HashSet`1<UnityTest.ITestComponent>
struct HashSet_1_t342;
// System.IAsyncResult
struct IAsyncResult_t486;
// System.AsyncCallback
struct AsyncCallback_t487;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityTest.ITestComponent,System.Collections.Generic.HashSet`1<UnityTest.ITestComponent>,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m16111 (Transform_1_t3208 * __this, Object_t * ___object, IntPtr_t120 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityTest.ITestComponent,System.Collections.Generic.HashSet`1<UnityTest.ITestComponent>,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
 DictionaryEntry_t1576  Transform_1_Invoke_m16112 (Transform_1_t3208 * __this, Object_t * ___key, HashSet_1_t342 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityTest.ITestComponent,System.Collections.Generic.HashSet`1<UnityTest.ITestComponent>,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m16113 (Transform_1_t3208 * __this, Object_t * ___key, HashSet_1_t342 * ___value, AsyncCallback_t487 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityTest.ITestComponent,System.Collections.Generic.HashSet`1<UnityTest.ITestComponent>,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
 DictionaryEntry_t1576  Transform_1_EndInvoke_m16114 (Transform_1_t3208 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
