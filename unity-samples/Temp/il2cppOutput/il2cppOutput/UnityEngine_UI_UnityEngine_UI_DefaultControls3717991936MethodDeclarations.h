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
struct GameObject_t4012695102;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t3286458198;
// UnityEngine.UI.Selectable
struct Selectable_t3621744255;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"
#include "UnityEngine_UI_UnityEngine_UI_Text3286458198.h"
#include "UnityEngine_UI_UnityEngine_UI_Selectable3621744255.h"
#include "UnityEngine_UI_UnityEngine_UI_DefaultControls_Resour20897285.h"

// System.Void UnityEngine.UI.DefaultControls::.cctor()
extern "C"  void DefaultControls__cctor_m1303793449 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateUIElementRoot(System.String,UnityEngine.Vector2)
extern "C"  GameObject_t4012695102 * DefaultControls_CreateUIElementRoot_m335662421 (Il2CppObject * __this /* static, unused */, String_t* ___name0, Vector2_t3525329788  ___size1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateUIObject(System.String,UnityEngine.GameObject)
extern "C"  GameObject_t4012695102 * DefaultControls_CreateUIObject_m1826457530 (Il2CppObject * __this /* static, unused */, String_t* ___name0, GameObject_t4012695102 * ___parent1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.DefaultControls::SetDefaultTextValues(UnityEngine.UI.Text)
extern "C"  void DefaultControls_SetDefaultTextValues_m2676194036 (Il2CppObject * __this /* static, unused */, Text_t3286458198 * ___lbl0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.DefaultControls::SetDefaultColorTransitionValues(UnityEngine.UI.Selectable)
extern "C"  void DefaultControls_SetDefaultColorTransitionValues_m2995057500 (Il2CppObject * __this /* static, unused */, Selectable_t3621744255 * ___slider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.DefaultControls::SetParentAndAlign(UnityEngine.GameObject,UnityEngine.GameObject)
extern "C"  void DefaultControls_SetParentAndAlign_m867848490 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___child0, GameObject_t4012695102 * ___parent1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.DefaultControls::SetLayerRecursively(UnityEngine.GameObject,System.Int32)
extern "C"  void DefaultControls_SetLayerRecursively_m2948337421 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___go0, int32_t ___layer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreatePanel(UnityEngine.UI.DefaultControls/Resources)
extern "C"  GameObject_t4012695102 * DefaultControls_CreatePanel_m131101809 (Il2CppObject * __this /* static, unused */, Resources_t20897285  ___resources0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateButton(UnityEngine.UI.DefaultControls/Resources)
extern "C"  GameObject_t4012695102 * DefaultControls_CreateButton_m2909407539 (Il2CppObject * __this /* static, unused */, Resources_t20897285  ___resources0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateText(UnityEngine.UI.DefaultControls/Resources)
extern "C"  GameObject_t4012695102 * DefaultControls_CreateText_m414838766 (Il2CppObject * __this /* static, unused */, Resources_t20897285  ___resources0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateImage(UnityEngine.UI.DefaultControls/Resources)
extern "C"  GameObject_t4012695102 * DefaultControls_CreateImage_m3925407496 (Il2CppObject * __this /* static, unused */, Resources_t20897285  ___resources0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateRawImage(UnityEngine.UI.DefaultControls/Resources)
extern "C"  GameObject_t4012695102 * DefaultControls_CreateRawImage_m383828052 (Il2CppObject * __this /* static, unused */, Resources_t20897285  ___resources0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateSlider(UnityEngine.UI.DefaultControls/Resources)
extern "C"  GameObject_t4012695102 * DefaultControls_CreateSlider_m3090010146 (Il2CppObject * __this /* static, unused */, Resources_t20897285  ___resources0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateScrollbar(UnityEngine.UI.DefaultControls/Resources)
extern "C"  GameObject_t4012695102 * DefaultControls_CreateScrollbar_m2399849235 (Il2CppObject * __this /* static, unused */, Resources_t20897285  ___resources0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateToggle(UnityEngine.UI.DefaultControls/Resources)
extern "C"  GameObject_t4012695102 * DefaultControls_CreateToggle_m1602114261 (Il2CppObject * __this /* static, unused */, Resources_t20897285  ___resources0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateInputField(UnityEngine.UI.DefaultControls/Resources)
extern "C"  GameObject_t4012695102 * DefaultControls_CreateInputField_m3813899985 (Il2CppObject * __this /* static, unused */, Resources_t20897285  ___resources0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateDropdown(UnityEngine.UI.DefaultControls/Resources)
extern "C"  GameObject_t4012695102 * DefaultControls_CreateDropdown_m481152210 (Il2CppObject * __this /* static, unused */, Resources_t20897285  ___resources0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateScrollView(UnityEngine.UI.DefaultControls/Resources)
extern "C"  GameObject_t4012695102 * DefaultControls_CreateScrollView_m2763877395 (Il2CppObject * __this /* static, unused */, Resources_t20897285  ___resources0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
