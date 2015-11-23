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

// UnityEngine.Coroutine
struct Coroutine_t558;
struct Coroutine_t558_marshaled;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Coroutine::.ctor()
extern "C" void Coroutine__ctor_m3701 (Coroutine_t558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
extern "C" void Coroutine_ReleaseCoroutine_m3702 (Coroutine_t558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::Finalize()
extern "C" void Coroutine_Finalize_m3703 (Coroutine_t558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void Coroutine_t558_marshal(const Coroutine_t558& unmarshaled, Coroutine_t558_marshaled& marshaled);
extern "C" void Coroutine_t558_marshal_back(const Coroutine_t558_marshaled& marshaled, Coroutine_t558& unmarshaled);
extern "C" void Coroutine_t558_marshal_cleanup(Coroutine_t558_marshaled& marshaled);
