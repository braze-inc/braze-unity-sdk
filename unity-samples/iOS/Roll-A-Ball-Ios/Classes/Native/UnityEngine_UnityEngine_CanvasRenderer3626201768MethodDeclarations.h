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

// UnityEngine.CanvasRenderer
struct CanvasRenderer_t3626201768;
// UnityEngine.Material
struct Material_t1886596500;
// UnityEngine.Texture
struct Texture_t1769722184;
// UnityEngine.Mesh
struct Mesh_t1525280346;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t3057020574;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t27321462;
// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_t639075880;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t27321461;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_t27321463;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t3644373756;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"
#include "UnityEngine_UnityEngine_CanvasRenderer3626201768.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"
#include "UnityEngine_UnityEngine_Material1886596500.h"
#include "UnityEngine_UnityEngine_Texture1769722184.h"
#include "UnityEngine_UnityEngine_Mesh1525280346.h"
#include "mscorlib_System_Object837106420.h"

// System.Void UnityEngine.CanvasRenderer::SetColor(UnityEngine.Color)
extern "C"  void CanvasRenderer_SetColor_m3198078515 (CanvasRenderer_t3626201768 * __this, Color_t1588175760  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::INTERNAL_CALL_SetColor(UnityEngine.CanvasRenderer,UnityEngine.Color&)
extern "C"  void CanvasRenderer_INTERNAL_CALL_SetColor_m2907146764 (Il2CppObject * __this /* static, unused */, CanvasRenderer_t3626201768 * ___self, Color_t1588175760 * ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.CanvasRenderer::GetColor()
extern "C"  Color_t1588175760  CanvasRenderer_GetColor_m3075393702 (CanvasRenderer_t3626201768 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::INTERNAL_CALL_GetColor(UnityEngine.CanvasRenderer,UnityEngine.Color&)
extern "C"  void CanvasRenderer_INTERNAL_CALL_GetColor_m3176368896 (Il2CppObject * __this /* static, unused */, CanvasRenderer_t3626201768 * ___self, Color_t1588175760 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::EnableRectClipping(UnityEngine.Rect)
extern "C"  void CanvasRenderer_EnableRectClipping_m896218272 (CanvasRenderer_t3626201768 * __this, Rect_t1525428817  ___rect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::INTERNAL_CALL_EnableRectClipping(UnityEngine.CanvasRenderer,UnityEngine.Rect&)
extern "C"  void CanvasRenderer_INTERNAL_CALL_EnableRectClipping_m105013257 (Il2CppObject * __this /* static, unused */, CanvasRenderer_t3626201768 * ___self, Rect_t1525428817 * ___rect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::DisableRectClipping()
extern "C"  void CanvasRenderer_DisableRectClipping_m2654388030 (CanvasRenderer_t3626201768 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::set_hasPopInstruction(System.Boolean)
extern "C"  void CanvasRenderer_set_hasPopInstruction_m2112255713 (CanvasRenderer_t3626201768 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.CanvasRenderer::get_materialCount()
extern "C"  int32_t CanvasRenderer_get_materialCount_m311942031 (CanvasRenderer_t3626201768 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::set_materialCount(System.Int32)
extern "C"  void CanvasRenderer_set_materialCount_m1694897644 (CanvasRenderer_t3626201768 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SetMaterial(UnityEngine.Material,System.Int32)
extern "C"  void CanvasRenderer_SetMaterial_m355382012 (CanvasRenderer_t3626201768 * __this, Material_t1886596500 * ___material, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SetMaterial(UnityEngine.Material,UnityEngine.Texture)
extern "C"  void CanvasRenderer_SetMaterial_m1603188579 (CanvasRenderer_t3626201768 * __this, Material_t1886596500 * ___material, Texture_t1769722184 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::set_popMaterialCount(System.Int32)
extern "C"  void CanvasRenderer_set_popMaterialCount_m589784503 (CanvasRenderer_t3626201768 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SetPopMaterial(UnityEngine.Material,System.Int32)
extern "C"  void CanvasRenderer_SetPopMaterial_m1315408685 (CanvasRenderer_t3626201768 * __this, Material_t1886596500 * ___material, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SetTexture(UnityEngine.Texture)
extern "C"  void CanvasRenderer_SetTexture_m137327939 (CanvasRenderer_t3626201768 * __this, Texture_t1769722184 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SetMesh(UnityEngine.Mesh)
extern "C"  void CanvasRenderer_SetMesh_m1150548475 (CanvasRenderer_t3626201768 * __this, Mesh_t1525280346 * ___mesh, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::Clear()
extern "C"  void CanvasRenderer_Clear_m1606508093 (CanvasRenderer_t3626201768 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SplitUIVertexStreams(System.Collections.Generic.List`1<UnityEngine.UIVertex>,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Collections.Generic.List`1<UnityEngine.Color32>,System.Collections.Generic.List`1<UnityEngine.Vector2>,System.Collections.Generic.List`1<UnityEngine.Vector2>,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Collections.Generic.List`1<UnityEngine.Vector4>,System.Collections.Generic.List`1<System.Int32>)
extern "C"  void CanvasRenderer_SplitUIVertexStreams_m4126093916 (Il2CppObject * __this /* static, unused */, List_1_t3057020574 * ___verts, List_1_t27321462 * ___positions, List_1_t639075880 * ___colors, List_1_t27321461 * ___uv0S, List_1_t27321461 * ___uv1S, List_1_t27321462 * ___normals, List_1_t27321463 * ___tangents, List_1_t3644373756 * ___indicies, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SplitUIVertexStreamsInternal(System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object)
extern "C"  void CanvasRenderer_SplitUIVertexStreamsInternal_m987675768 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___verts, Il2CppObject * ___positions, Il2CppObject * ___colors, Il2CppObject * ___uv0S, Il2CppObject * ___uv1S, Il2CppObject * ___normals, Il2CppObject * ___tangents, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SplitIndiciesStreamsInternal(System.Object,System.Object)
extern "C"  void CanvasRenderer_SplitIndiciesStreamsInternal_m269466040 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___verts, Il2CppObject * ___indicies, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::CreateUIVertexStream(System.Collections.Generic.List`1<UnityEngine.UIVertex>,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Collections.Generic.List`1<UnityEngine.Color32>,System.Collections.Generic.List`1<UnityEngine.Vector2>,System.Collections.Generic.List`1<UnityEngine.Vector2>,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Collections.Generic.List`1<UnityEngine.Vector4>,System.Collections.Generic.List`1<System.Int32>)
extern "C"  void CanvasRenderer_CreateUIVertexStream_m2702356137 (Il2CppObject * __this /* static, unused */, List_1_t3057020574 * ___verts, List_1_t27321462 * ___positions, List_1_t639075880 * ___colors, List_1_t27321461 * ___uv0S, List_1_t27321461 * ___uv1S, List_1_t27321462 * ___normals, List_1_t27321463 * ___tangents, List_1_t3644373756 * ___indicies, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::CreateUIVertexStreamInternal(System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object)
extern "C"  void CanvasRenderer_CreateUIVertexStreamInternal_m997370835 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___verts, Il2CppObject * ___positions, Il2CppObject * ___colors, Il2CppObject * ___uv0S, Il2CppObject * ___uv1S, Il2CppObject * ___normals, Il2CppObject * ___tangents, Il2CppObject * ___indicies, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::AddUIVertexStream(System.Collections.Generic.List`1<UnityEngine.UIVertex>,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Collections.Generic.List`1<UnityEngine.Color32>,System.Collections.Generic.List`1<UnityEngine.Vector2>,System.Collections.Generic.List`1<UnityEngine.Vector2>,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Collections.Generic.List`1<UnityEngine.Vector4>)
extern "C"  void CanvasRenderer_AddUIVertexStream_m1865056747 (Il2CppObject * __this /* static, unused */, List_1_t3057020574 * ___verts, List_1_t27321462 * ___positions, List_1_t639075880 * ___colors, List_1_t27321461 * ___uv0S, List_1_t27321461 * ___uv1S, List_1_t27321462 * ___normals, List_1_t27321463 * ___tangents, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.CanvasRenderer::get_cull()
extern "C"  bool CanvasRenderer_get_cull_m3343855795 (CanvasRenderer_t3626201768 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::set_cull(System.Boolean)
extern "C"  void CanvasRenderer_set_cull_m3433952120 (CanvasRenderer_t3626201768 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.CanvasRenderer::get_absoluteDepth()
extern "C"  int32_t CanvasRenderer_get_absoluteDepth_m1613567475 (CanvasRenderer_t3626201768 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.CanvasRenderer::get_hasMoved()
extern "C"  bool CanvasRenderer_get_hasMoved_m1392755130 (CanvasRenderer_t3626201768 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
