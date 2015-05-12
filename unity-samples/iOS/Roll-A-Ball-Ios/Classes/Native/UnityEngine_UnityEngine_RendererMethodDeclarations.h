#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Renderer
struct Renderer_t185;
// UnityEngine.Material
struct Material_t413;
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_Bounds.h"

// System.Boolean UnityEngine.Renderer::get_enabled()
 bool Renderer_get_enabled_m1938 (Renderer_t185 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
 void Renderer_set_enabled_m1928 (Renderer_t185 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.Renderer::get_material()
 Material_t413 * Renderer_get_material_m1930 (Renderer_t185 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.Renderer::get_sharedMaterial()
 Material_t413 * Renderer_get_sharedMaterial_m2019 (Renderer_t185 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds UnityEngine.Renderer::get_bounds()
 Bounds_t169  Renderer_get_bounds_m1314 (Renderer_t185 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Renderer::get_sortingLayerID()
 int32_t Renderer_get_sortingLayerID_m3455 (Renderer_t185 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Renderer::get_sortingOrder()
 int32_t Renderer_get_sortingOrder_m3456 (Renderer_t185 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
