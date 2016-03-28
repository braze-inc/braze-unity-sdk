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

// UnityEngine.UI.Shadow
struct Shadow_t1464142665;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t3057020574;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t1471929499;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "UnityEngine_UnityEngine_Color324137084207.h"
#include "UnityEngine_UI_UnityEngine_UI_VertexHelper1471929499.h"

// System.Void UnityEngine.UI.Shadow::.ctor()
extern "C"  void Shadow__ctor_m2944649643 (Shadow_t1464142665 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.UI.Shadow::get_effectColor()
extern "C"  Color_t1588175760  Shadow_get_effectColor_m2953989785 (Shadow_t1464142665 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Shadow::set_effectColor(UnityEngine.Color)
extern "C"  void Shadow_set_effectColor_m1407835720 (Shadow_t1464142665 * __this, Color_t1588175760  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.Shadow::get_effectDistance()
extern "C"  Vector2_t3525329788  Shadow_get_effectDistance_m1102454733 (Shadow_t1464142665 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Shadow::set_effectDistance(UnityEngine.Vector2)
extern "C"  void Shadow_set_effectDistance_m192801982 (Shadow_t1464142665 * __this, Vector2_t3525329788  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Shadow::get_useGraphicAlpha()
extern "C"  bool Shadow_get_useGraphicAlpha_m3687634123 (Shadow_t1464142665 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Shadow::set_useGraphicAlpha(System.Boolean)
extern "C"  void Shadow_set_useGraphicAlpha_m3814129472 (Shadow_t1464142665 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Shadow::ApplyShadowZeroAlloc(System.Collections.Generic.List`1<UnityEngine.UIVertex>,UnityEngine.Color32,System.Int32,System.Int32,System.Single,System.Single)
extern "C"  void Shadow_ApplyShadowZeroAlloc_m338158484 (Shadow_t1464142665 * __this, List_1_t3057020574 * ___verts, Color32_t4137084207  ___color, int32_t ___start, int32_t ___end, float ___x, float ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Shadow::ApplyShadow(System.Collections.Generic.List`1<UnityEngine.UIVertex>,UnityEngine.Color32,System.Int32,System.Int32,System.Single,System.Single)
extern "C"  void Shadow_ApplyShadow_m3534003541 (Shadow_t1464142665 * __this, List_1_t3057020574 * ___verts, Color32_t4137084207  ___color, int32_t ___start, int32_t ___end, float ___x, float ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Shadow::ModifyMesh(UnityEngine.UI.VertexHelper)
extern "C"  void Shadow_ModifyMesh_m111179421 (Shadow_t1464142665 * __this, VertexHelper_t1471929499 * ___vh, const MethodInfo* method) IL2CPP_METHOD_ATTR;
