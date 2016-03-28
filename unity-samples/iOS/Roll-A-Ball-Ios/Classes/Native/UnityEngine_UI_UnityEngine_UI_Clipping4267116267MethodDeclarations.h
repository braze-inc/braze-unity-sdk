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

// System.Collections.Generic.List`1<UnityEngine.UI.RectMask2D>
struct List_1_t1595633764;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"

// UnityEngine.Rect UnityEngine.UI.Clipping::FindCullAndClipWorldRect(System.Collections.Generic.List`1<UnityEngine.UI.RectMask2D>,System.Boolean&)
extern "C"  Rect_t1525428817  Clipping_FindCullAndClipWorldRect_m3007966961 (Il2CppObject * __this /* static, unused */, List_1_t1595633764 * ___rectMaskParents, bool* ___validRect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.UI.Clipping::RectIntersect(UnityEngine.Rect,UnityEngine.Rect)
extern "C"  Rect_t1525428817  Clipping_RectIntersect_m2589422792 (Il2CppObject * __this /* static, unused */, Rect_t1525428817  ___a, Rect_t1525428817  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
