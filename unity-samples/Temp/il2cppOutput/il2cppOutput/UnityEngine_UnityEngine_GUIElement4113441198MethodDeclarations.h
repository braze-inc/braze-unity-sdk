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

// UnityEngine.GUIElement
struct GUIElement_t4113441198;
// UnityEngine.Camera
struct Camera_t3533968274;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_GUIElement4113441198.h"
#include "UnityEngine_UnityEngine_Camera3533968274.h"

// System.Boolean UnityEngine.GUIElement::HitTest(UnityEngine.Vector3)
extern "C"  bool GUIElement_HitTest_m220778544 (GUIElement_t4113441198 * __this, Vector3_t3525329789  ___screenPosition0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIElement::INTERNAL_CALL_HitTest(UnityEngine.GUIElement,UnityEngine.Vector3&,UnityEngine.Camera)
extern "C"  bool GUIElement_INTERNAL_CALL_HitTest_m894012387 (Il2CppObject * __this /* static, unused */, GUIElement_t4113441198 * ___self0, Vector3_t3525329789 * ___screenPosition1, Camera_t3533968274 * ___camera2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
