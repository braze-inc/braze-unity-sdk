#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Renderer
struct Renderer_t171;
// UnityEngine.Material
struct Material_t401;
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_Bounds.h"

// System.Boolean UnityEngine.Renderer::get_enabled()
 bool Renderer_get_enabled_m1832 (Renderer_t171 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
 void Renderer_set_enabled_m1822 (Renderer_t171 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.Renderer::get_material()
 Material_t401 * Renderer_get_material_m1824 (Renderer_t171 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.Renderer::get_sharedMaterial()
 Material_t401 * Renderer_get_sharedMaterial_m1913 (Renderer_t171 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds UnityEngine.Renderer::get_bounds()
 Bounds_t155  Renderer_get_bounds_m1208 (Renderer_t171 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Renderer::get_sortingLayerID()
 int32_t Renderer_get_sortingLayerID_m3350 (Renderer_t171 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Renderer::get_sortingOrder()
 int32_t Renderer_get_sortingOrder_m3351 (Renderer_t171 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
