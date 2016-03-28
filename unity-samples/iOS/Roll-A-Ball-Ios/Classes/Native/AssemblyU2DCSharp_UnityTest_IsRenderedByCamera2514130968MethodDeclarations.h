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

// UnityTest.IsRenderedByCamera
struct IsRenderedByCamera_t2514130968;
// UnityEngine.Renderer
struct Renderer_t1092684080;
// UnityEngine.Camera
struct Camera_t3533968274;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Renderer1092684080.h"
#include "UnityEngine_UnityEngine_Camera3533968274.h"

// System.Void UnityTest.IsRenderedByCamera::.ctor()
extern "C"  void IsRenderedByCamera__ctor_m2256955769 (IsRenderedByCamera_t2514130968 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.IsRenderedByCamera::Compare(UnityEngine.Renderer,UnityEngine.Camera)
extern "C"  bool IsRenderedByCamera_Compare_m2844283548 (IsRenderedByCamera_t2514130968 * __this, Renderer_t1092684080 * ___renderer, Camera_t3533968274 * ___camera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
