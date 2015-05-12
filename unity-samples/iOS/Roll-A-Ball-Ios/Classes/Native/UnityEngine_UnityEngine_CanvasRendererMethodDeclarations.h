#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.CanvasRenderer
struct CanvasRenderer_t574;
// UnityEngine.Material
struct Material_t413;
// UnityEngine.Texture
struct Texture_t464;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t580;
// System.Object
struct Object_t;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t612;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void UnityEngine.CanvasRenderer::SetColor(UnityEngine.Color)
 void CanvasRenderer_SetColor_m3557 (CanvasRenderer_t574 * __this, Color_t12  ___color, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::INTERNAL_CALL_SetColor(UnityEngine.CanvasRenderer,UnityEngine.Color&)
 void CanvasRenderer_INTERNAL_CALL_SetColor_m4848 (Object_t * __this/* static, unused */, CanvasRenderer_t574 * ___self, Color_t12 * ___color, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.CanvasRenderer::GetColor()
 Color_t12  CanvasRenderer_GetColor_m3555 (CanvasRenderer_t574 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::set_isMask(System.Boolean)
 void CanvasRenderer_set_isMask_m3912 (CanvasRenderer_t574 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SetMaterial(UnityEngine.Material,UnityEngine.Texture)
 void CanvasRenderer_SetMaterial_m3544 (CanvasRenderer_t574 * __this, Material_t413 * ___material, Texture_t464 * ___texture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SetVertices(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
 void CanvasRenderer_SetVertices_m3542 (CanvasRenderer_t574 * __this, List_1_t580 * ___vertices, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SetVerticesInternal(System.Object)
 void CanvasRenderer_SetVerticesInternal_m4849 (CanvasRenderer_t574 * __this, Object_t * ___vertices, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SetVertices(UnityEngine.UIVertex[],System.Int32)
 void CanvasRenderer_SetVertices_m3680 (CanvasRenderer_t574 * __this, UIVertexU5BU5D_t612* ___vertices, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SetVerticesInternalArray(UnityEngine.UIVertex[],System.Int32)
 void CanvasRenderer_SetVerticesInternalArray_m4850 (CanvasRenderer_t574 * __this, UIVertexU5BU5D_t612* ___vertices, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::Clear()
 void CanvasRenderer_Clear_m3537 (CanvasRenderer_t574 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.CanvasRenderer::get_absoluteDepth()
 int32_t CanvasRenderer_get_absoluteDepth_m3521 (CanvasRenderer_t574 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
