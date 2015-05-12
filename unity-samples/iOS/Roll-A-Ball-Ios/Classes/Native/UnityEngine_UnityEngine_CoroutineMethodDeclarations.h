#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Coroutine
struct Coroutine_t600;
struct Coroutine_t600_marshaled;

// System.Void UnityEngine.Coroutine::.ctor()
 void Coroutine__ctor_m3872 (Coroutine_t600 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
 void Coroutine_ReleaseCoroutine_m3873 (Coroutine_t600 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::Finalize()
 void Coroutine_Finalize_m3874 (Coroutine_t600 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void Coroutine_t600_marshal(const Coroutine_t600& unmarshaled, Coroutine_t600_marshaled& marshaled);
void Coroutine_t600_marshal_back(const Coroutine_t600_marshaled& marshaled, Coroutine_t600& unmarshaled);
void Coroutine_t600_marshal_cleanup(Coroutine_t600_marshaled& marshaled);
