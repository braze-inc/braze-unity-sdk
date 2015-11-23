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

// UnityEngine.GameObject
struct GameObject_t141;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t128;
// UnityEngine.UI.Selectable
struct Selectable_t493;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UI_UnityEngine_UI_DefaultControls_Resources.h"

// System.Void UnityEngine.UI.DefaultControls::.cctor()
extern "C" void DefaultControls__cctor_m2118 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateUIElementRoot(System.String,UnityEngine.Vector2)
extern "C" GameObject_t141 * DefaultControls_CreateUIElementRoot_m2119 (Object_t * __this /* static, unused */, String_t* ___name, Vector2_t231  ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateUIObject(System.String,UnityEngine.GameObject)
extern "C" GameObject_t141 * DefaultControls_CreateUIObject_m2120 (Object_t * __this /* static, unused */, String_t* ___name, GameObject_t141 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.DefaultControls::SetDefaultTextValues(UnityEngine.UI.Text)
extern "C" void DefaultControls_SetDefaultTextValues_m2121 (Object_t * __this /* static, unused */, Text_t128 * ___lbl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.DefaultControls::SetDefaultColorTransitionValues(UnityEngine.UI.Selectable)
extern "C" void DefaultControls_SetDefaultColorTransitionValues_m2122 (Object_t * __this /* static, unused */, Selectable_t493 * ___slider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.DefaultControls::SetParentAndAlign(UnityEngine.GameObject,UnityEngine.GameObject)
extern "C" void DefaultControls_SetParentAndAlign_m2123 (Object_t * __this /* static, unused */, GameObject_t141 * ___child, GameObject_t141 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.DefaultControls::SetLayerRecursively(UnityEngine.GameObject,System.Int32)
extern "C" void DefaultControls_SetLayerRecursively_m2124 (Object_t * __this /* static, unused */, GameObject_t141 * ___go, int32_t ___layer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreatePanel(UnityEngine.UI.DefaultControls/Resources)
extern "C" GameObject_t141 * DefaultControls_CreatePanel_m2125 (Object_t * __this /* static, unused */, Resources_t499  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateButton(UnityEngine.UI.DefaultControls/Resources)
extern "C" GameObject_t141 * DefaultControls_CreateButton_m2126 (Object_t * __this /* static, unused */, Resources_t499  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateText(UnityEngine.UI.DefaultControls/Resources)
extern "C" GameObject_t141 * DefaultControls_CreateText_m2127 (Object_t * __this /* static, unused */, Resources_t499  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateImage(UnityEngine.UI.DefaultControls/Resources)
extern "C" GameObject_t141 * DefaultControls_CreateImage_m2128 (Object_t * __this /* static, unused */, Resources_t499  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateRawImage(UnityEngine.UI.DefaultControls/Resources)
extern "C" GameObject_t141 * DefaultControls_CreateRawImage_m2129 (Object_t * __this /* static, unused */, Resources_t499  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateSlider(UnityEngine.UI.DefaultControls/Resources)
extern "C" GameObject_t141 * DefaultControls_CreateSlider_m2130 (Object_t * __this /* static, unused */, Resources_t499  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateScrollbar(UnityEngine.UI.DefaultControls/Resources)
extern "C" GameObject_t141 * DefaultControls_CreateScrollbar_m2131 (Object_t * __this /* static, unused */, Resources_t499  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateToggle(UnityEngine.UI.DefaultControls/Resources)
extern "C" GameObject_t141 * DefaultControls_CreateToggle_m2132 (Object_t * __this /* static, unused */, Resources_t499  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateInputField(UnityEngine.UI.DefaultControls/Resources)
extern "C" GameObject_t141 * DefaultControls_CreateInputField_m2133 (Object_t * __this /* static, unused */, Resources_t499  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateDropdown(UnityEngine.UI.DefaultControls/Resources)
extern "C" GameObject_t141 * DefaultControls_CreateDropdown_m2134 (Object_t * __this /* static, unused */, Resources_t499  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateScrollView(UnityEngine.UI.DefaultControls/Resources)
extern "C" GameObject_t141 * DefaultControls_CreateScrollView_m2135 (Object_t * __this /* static, unused */, Resources_t499  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
