#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Gradient
struct Gradient_t832;
struct Gradient_t832_marshaled;

// System.Void UnityEngine.Gradient::.ctor()
 void Gradient__ctor_m4000 (Gradient_t832 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Init()
 void Gradient_Init_m4001 (Gradient_t832 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Cleanup()
 void Gradient_Cleanup_m4002 (Gradient_t832 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Finalize()
 void Gradient_Finalize_m4003 (Gradient_t832 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void Gradient_t832_marshal(const Gradient_t832& unmarshaled, Gradient_t832_marshaled& marshaled);
void Gradient_t832_marshal_back(const Gradient_t832_marshaled& marshaled, Gradient_t832& unmarshaled);
void Gradient_t832_marshal_cleanup(Gradient_t832_marshaled& marshaled);
