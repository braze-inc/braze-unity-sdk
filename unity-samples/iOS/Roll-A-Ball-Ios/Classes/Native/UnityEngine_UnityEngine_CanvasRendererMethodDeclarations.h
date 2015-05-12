#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.CanvasRenderer
struct CanvasRenderer_t560;
// UnityEngine.Material
struct Material_t401;
// UnityEngine.Texture
struct Texture_t450;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t566;
// System.Object
struct Object_t;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t598;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void UnityEngine.CanvasRenderer::SetColor(UnityEngine.Color)
 void CanvasRenderer_SetColor_m3452 (CanvasRenderer_t560 * __this, Color_t341  ___color, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::INTERNAL_CALL_SetColor(UnityEngine.CanvasRenderer,UnityEngine.Color&)
 void CanvasRenderer_INTERNAL_CALL_SetColor_m4753 (Object_t * __this/* static, unused */, CanvasRenderer_t560 * ___self, Color_t341 * ___color, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.CanvasRenderer::GetColor()
 Color_t341  CanvasRenderer_GetColor_m3450 (CanvasRenderer_t560 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::set_isMask(System.Boolean)
 void CanvasRenderer_set_isMask_m3807 (CanvasRenderer_t560 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SetMaterial(UnityEngine.Material,UnityEngine.Texture)
 void CanvasRenderer_SetMaterial_m3439 (CanvasRenderer_t560 * __this, Material_t401 * ___material, Texture_t450 * ___texture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SetVertices(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
 void CanvasRenderer_SetVertices_m3437 (CanvasRenderer_t560 * __this, List_1_t566 * ___vertices, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SetVerticesInternal(System.Object)
 void CanvasRenderer_SetVerticesInternal_m4754 (CanvasRenderer_t560 * __this, Object_t * ___vertices, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SetVertices(UnityEngine.UIVertex[],System.Int32)
 void CanvasRenderer_SetVertices_m3576 (CanvasRenderer_t560 * __this, UIVertexU5BU5D_t598* ___vertices, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SetVerticesInternalArray(UnityEngine.UIVertex[],System.Int32)
 void CanvasRenderer_SetVerticesInternalArray_m4755 (CanvasRenderer_t560 * __this, UIVertexU5BU5D_t598* ___vertices, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::Clear()
 void CanvasRenderer_Clear_m3432 (CanvasRenderer_t560 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.CanvasRenderer::get_absoluteDepth()
 int32_t CanvasRenderer_get_absoluteDepth_m3416 (CanvasRenderer_t560 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
