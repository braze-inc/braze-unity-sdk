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

// UnityEngine.Material
struct Material_t1886596500;
// UnityEngine.Texture
struct Texture_t1769722184;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Material1886596500.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_Vector43525329790.h"

// System.Void UnityEngine.Material::.ctor(UnityEngine.Material)
extern "C"  void Material__ctor_m2546967560 (Material_t1886596500 * __this, Material_t1886596500 * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
extern "C"  void Material_set_color_m3296857020 (Material_t1886596500 * __this, Color_t1588175760  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.Material::get_mainTexture()
extern "C"  Texture_t1769722184 * Material_get_mainTexture_m1012267054 (Material_t1886596500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Material::get_mainTextureOffset()
extern "C"  Vector2_t3525329788  Material_get_mainTextureOffset_m3247688085 (Material_t1886596500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::set_mainTextureOffset(UnityEngine.Vector2)
extern "C"  void Material_set_mainTextureOffset_m3397882654 (Material_t1886596500 * __this, Vector2_t3525329788  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Material::get_mainTextureScale()
extern "C"  Vector2_t3525329788  Material_get_mainTextureScale_m931663594 (Material_t1886596500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::set_mainTextureScale(UnityEngine.Vector2)
extern "C"  void Material_set_mainTextureScale_m2180744791 (Material_t1886596500 * __this, Vector2_t3525329788  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
extern "C"  void Material_SetColor_m1918430019 (Material_t1886596500 * __this, String_t* ___propertyName, Color_t1588175760  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetColor(System.Int32,UnityEngine.Color)
extern "C"  void Material_SetColor_m54957808 (Material_t1886596500 * __this, int32_t ___nameID, Color_t1588175760  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::INTERNAL_CALL_SetColor(UnityEngine.Material,System.Int32,UnityEngine.Color&)
extern "C"  void Material_INTERNAL_CALL_SetColor_m3209011477 (Il2CppObject * __this /* static, unused */, Material_t1886596500 * ___self, int32_t ___nameID, Color_t1588175760 * ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.Material::GetTexture(System.String)
extern "C"  Texture_t1769722184 * Material_GetTexture_m1284113328 (Material_t1886596500 * __this, String_t* ___propertyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.Material::GetTexture(System.Int32)
extern "C"  Texture_t1769722184 * Material_GetTexture_m3767468771 (Material_t1886596500 * __this, int32_t ___nameID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::Internal_GetTextureScaleAndOffset(UnityEngine.Material,System.String,UnityEngine.Vector4&)
extern "C"  void Material_Internal_GetTextureScaleAndOffset_m66798417 (Il2CppObject * __this /* static, unused */, Material_t1886596500 * ___mat, String_t* ___name, Vector4_t3525329790 * ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetTextureOffset(System.String,UnityEngine.Vector2)
extern "C"  void Material_SetTextureOffset_m1301408396 (Material_t1886596500 * __this, String_t* ___propertyName, Vector2_t3525329788  ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::INTERNAL_CALL_SetTextureOffset(UnityEngine.Material,System.String,UnityEngine.Vector2&)
extern "C"  void Material_INTERNAL_CALL_SetTextureOffset_m3039341169 (Il2CppObject * __this /* static, unused */, Material_t1886596500 * ___self, String_t* ___propertyName, Vector2_t3525329788 * ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Material::GetTextureOffset(System.String)
extern "C"  Vector2_t3525329788  Material_GetTextureOffset_m2266731153 (Material_t1886596500 * __this, String_t* ___propertyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetTextureScale(System.String,UnityEngine.Vector2)
extern "C"  void Material_SetTextureScale_m1752758881 (Material_t1886596500 * __this, String_t* ___propertyName, Vector2_t3525329788  ___scale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::INTERNAL_CALL_SetTextureScale(UnityEngine.Material,System.String,UnityEngine.Vector2&)
extern "C"  void Material_INTERNAL_CALL_SetTextureScale_m708056228 (Il2CppObject * __this /* static, unused */, Material_t1886596500 * ___self, String_t* ___propertyName, Vector2_t3525329788 * ___scale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Material::GetTextureScale(System.String)
extern "C"  Vector2_t3525329788  Material_GetTextureScale_m1101752532 (Material_t1886596500 * __this, String_t* ___propertyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
extern "C"  void Material_SetFloat_m981710063 (Material_t1886596500 * __this, String_t* ___propertyName, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetFloat(System.Int32,System.Single)
extern "C"  void Material_SetFloat_m170145518 (Material_t1886596500 * __this, int32_t ___nameID, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetInt(System.String,System.Int32)
extern "C"  void Material_SetInt_m2649395040 (Material_t1886596500 * __this, String_t* ___propertyName, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Material::HasProperty(System.String)
extern "C"  bool Material_HasProperty_m2077312757 (Material_t1886596500 * __this, String_t* ___propertyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Material::HasProperty(System.Int32)
extern "C"  bool Material_HasProperty_m190825214 (Material_t1886596500 * __this, int32_t ___nameID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::Internal_CreateWithMaterial(UnityEngine.Material,UnityEngine.Material)
extern "C"  void Material_Internal_CreateWithMaterial_m2349411671 (Il2CppObject * __this /* static, unused */, Material_t1886596500 * ___mono, Material_t1886596500 * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::EnableKeyword(System.String)
extern "C"  void Material_EnableKeyword_m3802712984 (Material_t1886596500 * __this, String_t* ___keyword, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::DisableKeyword(System.String)
extern "C"  void Material_DisableKeyword_m572736419 (Material_t1886596500 * __this, String_t* ___keyword, const MethodInfo* method) IL2CPP_METHOD_ATTR;
