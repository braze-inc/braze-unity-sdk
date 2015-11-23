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
struct Material_t370;
// UnityEngine.Texture
struct Texture_t419;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.Material::.ctor(UnityEngine.Material)
extern "C" void Material__ctor_m3594 (Material_t370 * __this, Material_t370 * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
extern "C" void Material_set_color_m1582 (Material_t370 * __this, Color_t65  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.Material::get_mainTexture()
extern "C" Texture_t419 * Material_get_mainTexture_m3419 (Material_t370 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Material::get_mainTextureOffset()
extern "C" Vector2_t231  Material_get_mainTextureOffset_m1667 (Material_t370 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::set_mainTextureOffset(UnityEngine.Vector2)
extern "C" void Material_set_mainTextureOffset_m1668 (Material_t370 * __this, Vector2_t231  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Material::get_mainTextureScale()
extern "C" Vector2_t231  Material_get_mainTextureScale_m1674 (Material_t370 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::set_mainTextureScale(UnityEngine.Vector2)
extern "C" void Material_set_mainTextureScale_m1675 (Material_t370 * __this, Vector2_t231  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
extern "C" void Material_SetColor_m1659 (Material_t370 * __this, String_t* ___propertyName, Color_t65  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetColor(System.Int32,UnityEngine.Color)
extern "C" void Material_SetColor_m4012 (Material_t370 * __this, int32_t ___nameID, Color_t65  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::INTERNAL_CALL_SetColor(UnityEngine.Material,System.Int32,UnityEngine.Color&)
extern "C" void Material_INTERNAL_CALL_SetColor_m4013 (Object_t * __this /* static, unused */, Material_t370 * ___self, int32_t ___nameID, Color_t65 * ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.Material::GetTexture(System.String)
extern "C" Texture_t419 * Material_GetTexture_m4014 (Material_t370 * __this, String_t* ___propertyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.Material::GetTexture(System.Int32)
extern "C" Texture_t419 * Material_GetTexture_m4015 (Material_t370 * __this, int32_t ___nameID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::Internal_GetTextureOffset(UnityEngine.Material,System.String,UnityEngine.Vector2&)
extern "C" void Material_Internal_GetTextureOffset_m4016 (Object_t * __this /* static, unused */, Material_t370 * ___mat, String_t* ___name, Vector2_t231 * ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::Internal_GetTextureScale(UnityEngine.Material,System.String,UnityEngine.Vector2&)
extern "C" void Material_Internal_GetTextureScale_m4017 (Object_t * __this /* static, unused */, Material_t370 * ___mat, String_t* ___name, Vector2_t231 * ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetTextureOffset(System.String,UnityEngine.Vector2)
extern "C" void Material_SetTextureOffset_m1647 (Material_t370 * __this, String_t* ___propertyName, Vector2_t231  ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::INTERNAL_CALL_SetTextureOffset(UnityEngine.Material,System.String,UnityEngine.Vector2&)
extern "C" void Material_INTERNAL_CALL_SetTextureOffset_m4018 (Object_t * __this /* static, unused */, Material_t370 * ___self, String_t* ___propertyName, Vector2_t231 * ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Material::GetTextureOffset(System.String)
extern "C" Vector2_t231  Material_GetTextureOffset_m4019 (Material_t370 * __this, String_t* ___propertyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetTextureScale(System.String,UnityEngine.Vector2)
extern "C" void Material_SetTextureScale_m1676 (Material_t370 * __this, String_t* ___propertyName, Vector2_t231  ___scale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::INTERNAL_CALL_SetTextureScale(UnityEngine.Material,System.String,UnityEngine.Vector2&)
extern "C" void Material_INTERNAL_CALL_SetTextureScale_m4020 (Object_t * __this /* static, unused */, Material_t370 * ___self, String_t* ___propertyName, Vector2_t231 * ___scale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Material::GetTextureScale(System.String)
extern "C" Vector2_t231  Material_GetTextureScale_m4021 (Material_t370 * __this, String_t* ___propertyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
extern "C" void Material_SetFloat_m1683 (Material_t370 * __this, String_t* ___propertyName, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetFloat(System.Int32,System.Single)
extern "C" void Material_SetFloat_m4022 (Material_t370 * __this, int32_t ___nameID, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetInt(System.String,System.Int32)
extern "C" void Material_SetInt_m3595 (Material_t370 * __this, String_t* ___propertyName, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Material::HasProperty(System.String)
extern "C" bool Material_HasProperty_m3593 (Material_t370 * __this, String_t* ___propertyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Material::HasProperty(System.Int32)
extern "C" bool Material_HasProperty_m4023 (Material_t370 * __this, int32_t ___nameID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::Internal_CreateWithMaterial(UnityEngine.Material,UnityEngine.Material)
extern "C" void Material_Internal_CreateWithMaterial_m4024 (Object_t * __this /* static, unused */, Material_t370 * ___mono, Material_t370 * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
