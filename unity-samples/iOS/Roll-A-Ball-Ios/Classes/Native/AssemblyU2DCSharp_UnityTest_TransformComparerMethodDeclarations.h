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

// UnityTest.TransformComparer
struct TransformComparer_t166;
// UnityEngine.Transform
struct Transform_t258;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityTest.TransformComparer::.ctor()
extern "C" void TransformComparer__ctor_m729 (TransformComparer_t166 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TransformComparer::Compare(UnityEngine.Transform,UnityEngine.Transform)
extern "C" bool TransformComparer_Compare_m730 (TransformComparer_t166 * __this, Transform_t258 * ___a, Transform_t258 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
