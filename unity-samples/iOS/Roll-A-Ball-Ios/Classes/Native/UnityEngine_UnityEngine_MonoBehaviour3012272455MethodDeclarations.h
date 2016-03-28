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

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3012272455;
// System.String
struct String_t;
// UnityEngine.Coroutine
struct Coroutine_t2246592261;
struct Coroutine_t2246592261_marshaled_pinvoke;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_Coroutine2246592261.h"

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m2022291967 (MonoBehaviour_t3012272455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::Internal_CancelInvokeAll()
extern "C"  void MonoBehaviour_Internal_CancelInvokeAll_m972795186 (MonoBehaviour_t3012272455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.MonoBehaviour::Internal_IsInvokingAll()
extern "C"  bool MonoBehaviour_Internal_IsInvokingAll_m3154030143 (MonoBehaviour_t3012272455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
extern "C"  void MonoBehaviour_Invoke_m2825545578 (MonoBehaviour_t3012272455 * __this, String_t* ___methodName, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::InvokeRepeating(System.String,System.Single,System.Single)
extern "C"  void MonoBehaviour_InvokeRepeating_m1115468640 (MonoBehaviour_t3012272455 * __this, String_t* ___methodName, float ___time, float ___repeatRate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::CancelInvoke()
extern "C"  void MonoBehaviour_CancelInvoke_m3230208631 (MonoBehaviour_t3012272455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::CancelInvoke(System.String)
extern "C"  void MonoBehaviour_CancelInvoke_m2461959659 (MonoBehaviour_t3012272455 * __this, String_t* ___methodName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.MonoBehaviour::IsInvoking(System.String)
extern "C"  bool MonoBehaviour_IsInvoking_m1460913732 (MonoBehaviour_t3012272455 * __this, String_t* ___methodName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.MonoBehaviour::IsInvoking()
extern "C"  bool MonoBehaviour_IsInvoking_m3881121150 (MonoBehaviour_t3012272455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C"  Coroutine_t2246592261 * MonoBehaviour_StartCoroutine_m2135303124 (MonoBehaviour_t3012272455 * __this, Il2CppObject * ___routine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine_Auto(System.Collections.IEnumerator)
extern "C"  Coroutine_t2246592261 * MonoBehaviour_StartCoroutine_Auto_m1831125106 (MonoBehaviour_t3012272455 * __this, Il2CppObject * ___routine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String,System.Object)
extern "C"  Coroutine_t2246592261 * MonoBehaviour_StartCoroutine_m2964903975 (MonoBehaviour_t3012272455 * __this, String_t* ___methodName, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String)
extern "C"  Coroutine_t2246592261 * MonoBehaviour_StartCoroutine_m2272783641 (MonoBehaviour_t3012272455 * __this, String_t* ___methodName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.String)
extern "C"  void MonoBehaviour_StopCoroutine_m2790918991 (MonoBehaviour_t3012272455 * __this, String_t* ___methodName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.Collections.IEnumerator)
extern "C"  void MonoBehaviour_StopCoroutine_m1340700766 (MonoBehaviour_t3012272455 * __this, Il2CppObject * ___routine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(UnityEngine.Coroutine)
extern "C"  void MonoBehaviour_StopCoroutine_m1762309278 (MonoBehaviour_t3012272455 * __this, Coroutine_t2246592261 * ___routine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::StopCoroutineViaEnumerator_Auto(System.Collections.IEnumerator)
extern "C"  void MonoBehaviour_StopCoroutineViaEnumerator_Auto_m2181342074 (MonoBehaviour_t3012272455 * __this, Il2CppObject * ___routine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine_Auto(UnityEngine.Coroutine)
extern "C"  void MonoBehaviour_StopCoroutine_Auto_m1074098068 (MonoBehaviour_t3012272455 * __this, Coroutine_t2246592261 * ___routine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::StopAllCoroutines()
extern "C"  void MonoBehaviour_StopAllCoroutines_m1437893335 (MonoBehaviour_t3012272455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
extern "C"  void MonoBehaviour_print_m1497342762 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.MonoBehaviour::get_useGUILayout()
extern "C"  bool MonoBehaviour_get_useGUILayout_m4058409766 (MonoBehaviour_t3012272455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::set_useGUILayout(System.Boolean)
extern "C"  void MonoBehaviour_set_useGUILayout_m589898551 (MonoBehaviour_t3012272455 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
