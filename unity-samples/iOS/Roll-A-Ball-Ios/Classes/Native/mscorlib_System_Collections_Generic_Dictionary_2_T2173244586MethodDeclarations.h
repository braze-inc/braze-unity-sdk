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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>
struct Transform_1_t2173244586;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21610370660.h"
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp3429487928.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m1812037516_gshared (Transform_1_t2173244586 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m1812037516(__this, ___object, ___method, method) ((  void (*) (Transform_1_t2173244586 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m1812037516_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t1610370660  Transform_1_Invoke_m514401132_gshared (Transform_1_t2173244586 * __this, Il2CppObject * ___key, int32_t ___value, const MethodInfo* method);
#define Transform_1_Invoke_m514401132(__this, ___key, ___value, method) ((  KeyValuePair_2_t1610370660  (*) (Transform_1_t2173244586 *, Il2CppObject *, int32_t, const MethodInfo*))Transform_1_Invoke_m514401132_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m3477811991_gshared (Transform_1_t2173244586 * __this, Il2CppObject * ___key, int32_t ___value, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m3477811991(__this, ___key, ___value, ___callback, ___object, method) ((  Il2CppObject * (*) (Transform_1_t2173244586 *, Il2CppObject *, int32_t, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m3477811991_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t1610370660  Transform_1_EndInvoke_m3773784478_gshared (Transform_1_t2173244586 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m3773784478(__this, ___result, method) ((  KeyValuePair_2_t1610370660  (*) (Transform_1_t2173244586 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m3773784478_gshared)(__this, ___result, method)
