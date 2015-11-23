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
struct IsRenderedByCamera_t160;
// UnityEngine.Renderer
struct Renderer_t256;
// UnityEngine.Camera
struct Camera_t257;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityTest.IsRenderedByCamera::.ctor()
extern "C" void IsRenderedByCamera__ctor_m725 (IsRenderedByCamera_t160 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.IsRenderedByCamera::Compare(UnityEngine.Renderer,UnityEngine.Camera)
extern "C" bool IsRenderedByCamera_Compare_m726 (IsRenderedByCamera_t160 * __this, Renderer_t256 * ___renderer, Camera_t257 * ___camera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
