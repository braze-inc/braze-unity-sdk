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

// UnityEngine.UI.Text
struct Text_t3286458198;
// UnityEngine.Font
struct Font_t1525081276;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_UI_Text3286458198.h"
#include "UnityEngine_UnityEngine_Font1525081276.h"

// System.Void UnityEngine.UI.FontUpdateTracker::.cctor()
extern "C"  void FontUpdateTracker__cctor_m1924252658 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontUpdateTracker::TrackText(UnityEngine.UI.Text)
extern "C"  void FontUpdateTracker_TrackText_m1576315537 (Il2CppObject * __this /* static, unused */, Text_t3286458198 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontUpdateTracker::RebuildForFont(UnityEngine.Font)
extern "C"  void FontUpdateTracker_RebuildForFont_m4050910816 (Il2CppObject * __this /* static, unused */, Font_t1525081276 * ___f, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontUpdateTracker::UntrackText(UnityEngine.UI.Text)
extern "C"  void FontUpdateTracker_UntrackText_m1952028010 (Il2CppObject * __this /* static, unused */, Text_t3286458198 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
