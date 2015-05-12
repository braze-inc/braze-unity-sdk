#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUIElement
struct GUIElement_t841;
// UnityEngine.Camera
struct Camera_t186;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Boolean UnityEngine.GUIElement::HitTest(UnityEngine.Vector3)
 bool GUIElement_HitTest_m2076 (GUIElement_t841 * __this, Vector3_t202  ___screenPosition, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIElement::INTERNAL_CALL_HitTest(UnityEngine.GUIElement,UnityEngine.Vector3&,UnityEngine.Camera)
 bool GUIElement_INTERNAL_CALL_HitTest_m4096 (Object_t * __this/* static, unused */, GUIElement_t841 * ___self, Vector3_t202 * ___screenPosition, Camera_t186 * ___camera, MethodInfo* method) IL2CPP_METHOD_ATTR;
