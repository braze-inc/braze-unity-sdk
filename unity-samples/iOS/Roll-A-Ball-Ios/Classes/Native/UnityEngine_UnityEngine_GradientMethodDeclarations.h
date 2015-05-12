#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Gradient
struct Gradient_t845;
struct Gradient_t845_marshaled;

// System.Void UnityEngine.Gradient::.ctor()
 void Gradient__ctor_m4105 (Gradient_t845 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Init()
 void Gradient_Init_m4106 (Gradient_t845 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Cleanup()
 void Gradient_Cleanup_m4107 (Gradient_t845 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Finalize()
 void Gradient_Finalize_m4108 (Gradient_t845 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void Gradient_t845_marshal(const Gradient_t845& unmarshaled, Gradient_t845_marshaled& marshaled);
void Gradient_t845_marshal_back(const Gradient_t845_marshaled& marshaled, Gradient_t845& unmarshaled);
void Gradient_t845_marshal_cleanup(Gradient_t845_marshaled& marshaled);
