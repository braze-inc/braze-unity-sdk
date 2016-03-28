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

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
struct EventFunction_1_t3885370180;
// System.Object
struct Il2CppObject;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t3547103726;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_BaseEventD3547103726.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void EventFunction_1__ctor_m252996987_gshared (EventFunction_1_t3885370180 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define EventFunction_1__ctor_m252996987(__this, ___object, ___method, method) ((  void (*) (EventFunction_1_t3885370180 *, Il2CppObject *, IntPtr_t, const MethodInfo*))EventFunction_1__ctor_m252996987_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::Invoke(T1,UnityEngine.EventSystems.BaseEventData)
extern "C"  void EventFunction_1_Invoke_m1750245256_gshared (EventFunction_1_t3885370180 * __this, Il2CppObject * ___handler, BaseEventData_t3547103726 * ___eventData, const MethodInfo* method);
#define EventFunction_1_Invoke_m1750245256(__this, ___handler, ___eventData, method) ((  void (*) (EventFunction_1_t3885370180 *, Il2CppObject *, BaseEventData_t3547103726 *, const MethodInfo*))EventFunction_1_Invoke_m1750245256_gshared)(__this, ___handler, ___eventData, method)
// System.IAsyncResult UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::BeginInvoke(T1,UnityEngine.EventSystems.BaseEventData,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * EventFunction_1_BeginInvoke_m2337669695_gshared (EventFunction_1_t3885370180 * __this, Il2CppObject * ___handler, BaseEventData_t3547103726 * ___eventData, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define EventFunction_1_BeginInvoke_m2337669695(__this, ___handler, ___eventData, ___callback, ___object, method) ((  Il2CppObject * (*) (EventFunction_1_t3885370180 *, Il2CppObject *, BaseEventData_t3547103726 *, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))EventFunction_1_BeginInvoke_m2337669695_gshared)(__this, ___handler, ___eventData, ___callback, ___object, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  void EventFunction_1_EndInvoke_m1184355595_gshared (EventFunction_1_t3885370180 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define EventFunction_1_EndInvoke_m1184355595(__this, ___result, method) ((  void (*) (EventFunction_1_t3885370180 *, Il2CppObject *, const MethodInfo*))EventFunction_1_EndInvoke_m1184355595_gshared)(__this, ___result, method)
