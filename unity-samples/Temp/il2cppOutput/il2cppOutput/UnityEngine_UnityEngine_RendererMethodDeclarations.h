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

// UnityEngine.Renderer
struct Renderer_t256;
// UnityEngine.Material
struct Material_t370;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Bounds.h"

// System.Boolean UnityEngine.Renderer::get_enabled()
extern "C" bool Renderer_get_enabled_m1588 (Renderer_t256 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
extern "C" void Renderer_set_enabled_m1578 (Renderer_t256 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.Renderer::get_material()
extern "C" Material_t370 * Renderer_get_material_m1580 (Renderer_t256 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.Renderer::get_sharedMaterial()
extern "C" Material_t370 * Renderer_get_sharedMaterial_m1664 (Renderer_t256 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds UnityEngine.Renderer::get_bounds()
extern "C" Bounds_t255  Renderer_get_bounds_m1101 (Renderer_t256 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Renderer::INTERNAL_get_bounds(UnityEngine.Bounds&)
extern "C" void Renderer_INTERNAL_get_bounds_m3812 (Renderer_t256 * __this, Bounds_t255 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Renderer::get_sortingLayerID()
extern "C" int32_t Renderer_get_sortingLayerID_m3254 (Renderer_t256 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Renderer::get_sortingOrder()
extern "C" int32_t Renderer_get_sortingOrder_m3255 (Renderer_t256 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
