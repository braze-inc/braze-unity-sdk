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

// UnityEngine.GUILayoutEntry
struct GUILayoutEntry_t1011928986;
// UnityEngine.GUIStyle
struct GUIStyle_t1006925219;
// UnityEngine.RectOffset
struct RectOffset_t3394170884;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t1890718142;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GUIStyle1006925219.h"

// System.Void UnityEngine.GUILayoutEntry::.ctor(System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle)
extern "C"  void GUILayoutEntry__ctor_m3586081151 (GUILayoutEntry_t1011928986 * __this, float ____minWidth0, float ____maxWidth1, float ____minHeight2, float ____maxHeight3, GUIStyle_t1006925219 * ____style4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::.cctor()
extern "C"  void GUILayoutEntry__cctor_m4107715149 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUILayoutEntry::get_style()
extern "C"  GUIStyle_t1006925219 * GUILayoutEntry_get_style_m3507897988 (GUILayoutEntry_t1011928986 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::set_style(UnityEngine.GUIStyle)
extern "C"  void GUILayoutEntry_set_style_m706118245 (GUILayoutEntry_t1011928986 * __this, GUIStyle_t1006925219 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin()
extern "C"  RectOffset_t3394170884 * GUILayoutEntry_get_margin_m3705107036 (GUILayoutEntry_t1011928986 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::CalcWidth()
extern "C"  void GUILayoutEntry_CalcWidth_m3370167343 (GUILayoutEntry_t1011928986 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::CalcHeight()
extern "C"  void GUILayoutEntry_CalcHeight_m1899786880 (GUILayoutEntry_t1011928986 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single)
extern "C"  void GUILayoutEntry_SetHorizontal_m3810336940 (GUILayoutEntry_t1011928986 * __this, float ___x0, float ___width1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single)
extern "C"  void GUILayoutEntry_SetVertical_m880890586 (GUILayoutEntry_t1011928986 * __this, float ___y0, float ___height1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::ApplyStyleSettings(UnityEngine.GUIStyle)
extern "C"  void GUILayoutEntry_ApplyStyleSettings_m937804029 (GUILayoutEntry_t1011928986 * __this, GUIStyle_t1006925219 * ___style0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::ApplyOptions(UnityEngine.GUILayoutOption[])
extern "C"  void GUILayoutEntry_ApplyOptions_m2425801465 (GUILayoutEntry_t1011928986 * __this, GUILayoutOptionU5BU5D_t1890718142* ___options0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUILayoutEntry::ToString()
extern "C"  String_t* GUILayoutEntry_ToString_m4021956595 (GUILayoutEntry_t1011928986 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
