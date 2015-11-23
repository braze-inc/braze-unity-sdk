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
struct GUIElement_t764;
// UnityEngine.Camera
struct Camera_t257;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Boolean UnityEngine.GUIElement::HitTest(UnityEngine.Vector3)
extern "C" bool GUIElement_HitTest_m1719 (GUIElement_t764 * __this, Vector3_t259  ___screenPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIElement::INTERNAL_CALL_HitTest(UnityEngine.GUIElement,UnityEngine.Vector3&,UnityEngine.Camera)
extern "C" bool GUIElement_INTERNAL_CALL_HitTest_m3819 (Object_t * __this /* static, unused */, GUIElement_t764 * ___self, Vector3_t259 * ___screenPosition, Camera_t257 * ___camera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
