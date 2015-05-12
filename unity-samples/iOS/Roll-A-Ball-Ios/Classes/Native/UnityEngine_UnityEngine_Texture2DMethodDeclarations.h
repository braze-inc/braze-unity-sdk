#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Texture2D
struct Texture2D_t557;
// UnityEngine.TextureFormat
#include "UnityEngine_UnityEngine_TextureFormat.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
 void Texture2D__ctor_m3985 (Texture2D_t557 * __this, int32_t ___width, int32_t ___height, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::Internal_Create(UnityEngine.Texture2D,System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean,System.IntPtr)
 void Texture2D_Internal_Create_m3986 (Object_t * __this/* static, unused */, Texture2D_t557 * ___mono, int32_t ___width, int32_t ___height, int32_t ___format, bool ___mipmap, bool ___linear, IntPtr_t107 ___nativeTex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UnityEngine.Texture2D::get_whiteTexture()
 Texture2D_t557 * Texture2D_get_whiteTexture_m3431 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Texture2D::GetPixelBilinear(System.Single,System.Single)
 Color_t341  Texture2D_GetPixelBilinear_m3530 (Texture2D_t557 * __this, float ___u, float ___v, MethodInfo* method) IL2CPP_METHOD_ATTR;
