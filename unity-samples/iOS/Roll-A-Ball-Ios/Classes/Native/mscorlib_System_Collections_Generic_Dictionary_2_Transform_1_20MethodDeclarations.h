#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<UnityTest.ITestComponent,System.Collections.Generic.HashSet`1<UnityTest.ITestComponent>,System.Collections.DictionaryEntry>
struct Transform_1_t3188;
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
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityTest.ITestComponent,System.Collections.Generic.HashSet`1<UnityTest.ITestComponent>,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m15891 (Transform_1_t3188 * __this, Object_t * ___object, IntPtr_t107 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityTest.ITestComponent,System.Collections.Generic.HashSet`1<UnityTest.ITestComponent>,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
 DictionaryEntry_t1564  Transform_1_Invoke_m15892 (Transform_1_t3188 * __this, Object_t * ___key, HashSet_1_t329 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityTest.ITestComponent,System.Collections.Generic.HashSet`1<UnityTest.ITestComponent>,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m15893 (Transform_1_t3188 * __this, Object_t * ___key, HashSet_1_t329 * ___value, AsyncCallback_t473 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityTest.ITestComponent,System.Collections.Generic.HashSet`1<UnityTest.ITestComponent>,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
 DictionaryEntry_t1564  Transform_1_EndInvoke_m15894 (Transform_1_t3188 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
