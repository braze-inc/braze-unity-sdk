#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t2;
// UnityEngine.Coroutine
struct Coroutine_t600;
struct Coroutine_t600_marshaled;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.String
struct String_t;
// System.Object
struct Object_t;

// System.Void UnityEngine.MonoBehaviour::.ctor()
 void MonoBehaviour__ctor_m411 (MonoBehaviour_t2 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
 Coroutine_t600 * MonoBehaviour_StartCoroutine_m1942 (MonoBehaviour_t2 * __this, Object_t * ___routine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine_Auto(System.Collections.IEnumerator)
 Coroutine_t600 * MonoBehaviour_StartCoroutine_Auto_m1768 (MonoBehaviour_t2 * __this, Object_t * ___routine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String,System.Object)
 Coroutine_t600 * MonoBehaviour_StartCoroutine_m4533 (MonoBehaviour_t2 * __this, String_t* ___methodName, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String)
 Coroutine_t600 * MonoBehaviour_StartCoroutine_m1095 (MonoBehaviour_t2 * __this, String_t* ___methodName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.Collections.IEnumerator)
 void MonoBehaviour_StopCoroutine_m4534 (MonoBehaviour_t2 * __this, Object_t * ___routine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(UnityEngine.Coroutine)
 void MonoBehaviour_StopCoroutine_m3647 (MonoBehaviour_t2 * __this, Coroutine_t600 * ___routine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::StopCoroutineViaEnumerator_Auto(System.Collections.IEnumerator)
 void MonoBehaviour_StopCoroutineViaEnumerator_Auto_m4535 (MonoBehaviour_t2 * __this, Object_t * ___routine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine_Auto(UnityEngine.Coroutine)
 void MonoBehaviour_StopCoroutine_Auto_m4536 (MonoBehaviour_t2 * __this, Coroutine_t600 * ___routine, MethodInfo* method) IL2CPP_METHOD_ATTR;
