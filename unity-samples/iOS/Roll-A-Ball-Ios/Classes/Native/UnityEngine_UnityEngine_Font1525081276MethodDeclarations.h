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

// System.Action`1<UnityEngine.Font>
struct Action_1_t1673533981;
// UnityEngine.Font
struct Font_t1525081276;
// UnityEngine.Material
struct Material_t1886596500;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Font1525081276.h"

// System.Void UnityEngine.Font::add_textureRebuilt(System.Action`1<UnityEngine.Font>)
extern "C"  void Font_add_textureRebuilt_m3323945916 (Il2CppObject * __this /* static, unused */, Action_1_t1673533981 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::remove_textureRebuilt(System.Action`1<UnityEngine.Font>)
extern "C"  void Font_remove_textureRebuilt_m2804643593 (Il2CppObject * __this /* static, unused */, Action_1_t1673533981 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.Font::get_material()
extern "C"  Material_t1886596500 * Font_get_material_m2407307367 (Font_t1525081276 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Font::HasCharacter(System.Char)
extern "C"  bool Font_HasCharacter_m2480770466 (Font_t1525081276 * __this, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::InvokeTextureRebuilt_Internal(UnityEngine.Font)
extern "C"  void Font_InvokeTextureRebuilt_Internal_m1357223658 (Il2CppObject * __this /* static, unused */, Font_t1525081276 * ___font, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Font::get_dynamic()
extern "C"  bool Font_get_dynamic_m3880144684 (Font_t1525081276 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Font::get_fontSize()
extern "C"  int32_t Font_get_fontSize_m3025810271 (Font_t1525081276 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
