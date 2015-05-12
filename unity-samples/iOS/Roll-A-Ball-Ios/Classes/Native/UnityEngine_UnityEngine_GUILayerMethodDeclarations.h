#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUILayer
struct GUILayer_t842;
// UnityEngine.GUIElement
struct GUIElement_t841;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// UnityEngine.GUIElement UnityEngine.GUILayer::HitTest(UnityEngine.Vector3)
 GUIElement_t841 * GUILayer_HitTest_m4101 (GUILayer_t842 * __this, Vector3_t202  ___screenPosition, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIElement UnityEngine.GUILayer::INTERNAL_CALL_HitTest(UnityEngine.GUILayer,UnityEngine.Vector3&)
 GUIElement_t841 * GUILayer_INTERNAL_CALL_HitTest_m4102 (Object_t * __this/* static, unused */, GUILayer_t842 * ___self, Vector3_t202 * ___screenPosition, MethodInfo* method) IL2CPP_METHOD_ATTR;
