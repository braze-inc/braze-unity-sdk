#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Coroutine
struct Coroutine_t614;
struct Coroutine_t614_marshaled;

// System.Void UnityEngine.Coroutine::.ctor()
 void Coroutine__ctor_m3977 (Coroutine_t614 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
 void Coroutine_ReleaseCoroutine_m3978 (Coroutine_t614 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::Finalize()
 void Coroutine_Finalize_m3979 (Coroutine_t614 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void Coroutine_t614_marshal(const Coroutine_t614& unmarshaled, Coroutine_t614_marshaled& marshaled);
void Coroutine_t614_marshal_back(const Coroutine_t614_marshaled& marshaled, Coroutine_t614& unmarshaled);
void Coroutine_t614_marshal_cleanup(Coroutine_t614_marshaled& marshaled);
