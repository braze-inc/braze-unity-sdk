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
struct MonoBehaviour_t2;
// UnityEngine.Coroutine
struct Coroutine_t558;
struct Coroutine_t558_marshaled;
// System.Collections.IEnumerator
struct IEnumerator_t66;
// System.String
struct String_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" void MonoBehaviour__ctor_m468 (MonoBehaviour_t2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C" Coroutine_t558 * MonoBehaviour_StartCoroutine_m1691 (MonoBehaviour_t2 * __this, Object_t * ___routine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine_Auto(System.Collections.IEnumerator)
extern "C" Coroutine_t558 * MonoBehaviour_StartCoroutine_Auto_m1537 (MonoBehaviour_t2 * __this, Object_t * ___routine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String,System.Object)
extern "C" Coroutine_t558 * MonoBehaviour_StartCoroutine_m4118 (MonoBehaviour_t2 * __this, String_t* ___methodName, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String)
extern "C" Coroutine_t558 * MonoBehaviour_StartCoroutine_m1077 (MonoBehaviour_t2 * __this, String_t* ___methodName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.Collections.IEnumerator)
extern "C" void MonoBehaviour_StopCoroutine_m4119 (MonoBehaviour_t2 * __this, Object_t * ___routine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(UnityEngine.Coroutine)
extern "C" void MonoBehaviour_StopCoroutine_m3536 (MonoBehaviour_t2 * __this, Coroutine_t558 * ___routine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::StopCoroutineViaEnumerator_Auto(System.Collections.IEnumerator)
extern "C" void MonoBehaviour_StopCoroutineViaEnumerator_Auto_m4120 (MonoBehaviour_t2 * __this, Object_t * ___routine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine_Auto(UnityEngine.Coroutine)
extern "C" void MonoBehaviour_StopCoroutine_Auto_m4121 (MonoBehaviour_t2 * __this, Coroutine_t558 * ___routine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
