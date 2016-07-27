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

// UnityEngine.UI.RawImage
struct RawImage_t3831555132;
// UnityEngine.Texture
struct Texture_t1769722184;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t1471929499;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Texture1769722184.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"
#include "UnityEngine_UI_UnityEngine_UI_VertexHelper1471929499.h"

// System.Void UnityEngine.UI.RawImage::.ctor()
extern "C"  void RawImage__ctor_m3149617176 (RawImage_t3831555132 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.UI.RawImage::get_mainTexture()
extern "C"  Texture_t1769722184 * RawImage_get_mainTexture_m3607327198 (RawImage_t3831555132 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.UI.RawImage::get_texture()
extern "C"  Texture_t1769722184 * RawImage_get_texture_m2545896727 (RawImage_t3831555132 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RawImage::set_texture(UnityEngine.Texture)
extern "C"  void RawImage_set_texture_m153141914 (RawImage_t3831555132 * __this, Texture_t1769722184 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.UI.RawImage::get_uvRect()
extern "C"  Rect_t1525428817  RawImage_get_uvRect_m605244702 (RawImage_t3831555132 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RawImage::set_uvRect(UnityEngine.Rect)
extern "C"  void RawImage_set_uvRect_m1381047731 (RawImage_t3831555132 * __this, Rect_t1525428817  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RawImage::SetNativeSize()
extern "C"  void RawImage_SetNativeSize_m131446896 (RawImage_t3831555132 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RawImage::OnPopulateMesh(UnityEngine.UI.VertexHelper)
extern "C"  void RawImage_OnPopulateMesh_m1483685179 (RawImage_t3831555132 * __this, VertexHelper_t1471929499 * ___vh0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
