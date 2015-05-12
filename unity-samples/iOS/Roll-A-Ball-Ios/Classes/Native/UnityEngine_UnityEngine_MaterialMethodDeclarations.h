#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Material
struct Material_t401;
// UnityEngine.Texture
struct Texture_t450;
// System.String
struct String_t;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.Material::.ctor(UnityEngine.Material)
 void Material__ctor_m3717 (Material_t401 * __this, Material_t401 * ___source, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
 void Material_set_color_m1826 (Material_t401 * __this, Color_t341  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.Material::get_mainTexture()
 Texture_t450 * Material_get_mainTexture_m3724 (Material_t401 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Material::get_mainTextureOffset()
 Vector2_t184  Material_get_mainTextureOffset_m1916 (Material_t401 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::set_mainTextureOffset(UnityEngine.Vector2)
 void Material_set_mainTextureOffset_m1917 (Material_t401 * __this, Vector2_t184  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Material::get_mainTextureScale()
 Vector2_t184  Material_get_mainTextureScale_m1923 (Material_t401 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::set_mainTextureScale(UnityEngine.Vector2)
 void Material_set_mainTextureScale_m1924 (Material_t401 * __this, Vector2_t184  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
 void Material_SetColor_m1908 (Material_t401 * __this, String_t* ___propertyName, Color_t341  ___color, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetColor(System.Int32,UnityEngine.Color)
 void Material_SetColor_m4430 (Material_t401 * __this, int32_t ___nameID, Color_t341  ___color, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::INTERNAL_CALL_SetColor(UnityEngine.Material,System.Int32,UnityEngine.Color&)
 void Material_INTERNAL_CALL_SetColor_m4431 (Object_t * __this/* static, unused */, Material_t401 * ___self, int32_t ___nameID, Color_t341 * ___color, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.Material::GetTexture(System.String)
 Texture_t450 * Material_GetTexture_m4432 (Material_t401 * __this, String_t* ___propertyName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.Material::GetTexture(System.Int32)
 Texture_t450 * Material_GetTexture_m4433 (Material_t401 * __this, int32_t ___nameID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::Internal_GetTextureOffset(UnityEngine.Material,System.String,UnityEngine.Vector2&)
 void Material_Internal_GetTextureOffset_m4434 (Object_t * __this/* static, unused */, Material_t401 * ___mat, String_t* ___name, Vector2_t184 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::Internal_GetTextureScale(UnityEngine.Material,System.String,UnityEngine.Vector2&)
 void Material_Internal_GetTextureScale_m4435 (Object_t * __this/* static, unused */, Material_t401 * ___mat, String_t* ___name, Vector2_t184 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetTextureOffset(System.String,UnityEngine.Vector2)
 void Material_SetTextureOffset_m1896 (Material_t401 * __this, String_t* ___propertyName, Vector2_t184  ___offset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::INTERNAL_CALL_SetTextureOffset(UnityEngine.Material,System.String,UnityEngine.Vector2&)
 void Material_INTERNAL_CALL_SetTextureOffset_m4436 (Object_t * __this/* static, unused */, Material_t401 * ___self, String_t* ___propertyName, Vector2_t184 * ___offset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Material::GetTextureOffset(System.String)
 Vector2_t184  Material_GetTextureOffset_m4437 (Material_t401 * __this, String_t* ___propertyName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetTextureScale(System.String,UnityEngine.Vector2)
 void Material_SetTextureScale_m1925 (Material_t401 * __this, String_t* ___propertyName, Vector2_t184  ___scale, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::INTERNAL_CALL_SetTextureScale(UnityEngine.Material,System.String,UnityEngine.Vector2&)
 void Material_INTERNAL_CALL_SetTextureScale_m4438 (Object_t * __this/* static, unused */, Material_t401 * ___self, String_t* ___propertyName, Vector2_t184 * ___scale, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Material::GetTextureScale(System.String)
 Vector2_t184  Material_GetTextureScale_m4439 (Material_t401 * __this, String_t* ___propertyName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
 void Material_SetFloat_m1932 (Material_t401 * __this, String_t* ___propertyName, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetFloat(System.Int32,System.Single)
 void Material_SetFloat_m4440 (Material_t401 * __this, int32_t ___nameID, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetInt(System.String,System.Int32)
 void Material_SetInt_m3718 (Material_t401 * __this, String_t* ___propertyName, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Material::HasProperty(System.String)
 bool Material_HasProperty_m3714 (Material_t401 * __this, String_t* ___propertyName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Material::HasProperty(System.Int32)
 bool Material_HasProperty_m4441 (Material_t401 * __this, int32_t ___nameID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::Internal_CreateWithMaterial(UnityEngine.Material,UnityEngine.Material)
 void Material_Internal_CreateWithMaterial_m4442 (Object_t * __this/* static, unused */, Material_t401 * ___mono, Material_t401 * ___source, MethodInfo* method) IL2CPP_METHOD_ATTR;
