#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUILayoutEntry
struct GUILayoutEntry_t845;
// UnityEngine.GUIStyle
struct GUIStyle_t250;
// UnityEngine.RectOffset
struct RectOffset_t658;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t343;
// System.String
struct String_t;

// System.Void UnityEngine.GUILayoutEntry::.ctor(System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle)
 void GUILayoutEntry__ctor_m4071 (GUILayoutEntry_t845 * __this, float ____minWidth, float ____maxWidth, float ____minHeight, float ____maxHeight, GUIStyle_t250 * ____style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::.ctor(System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
 void GUILayoutEntry__ctor_m4072 (GUILayoutEntry_t845 * __this, float ____minWidth, float ____maxWidth, float ____minHeight, float ____maxHeight, GUIStyle_t250 * ____style, GUILayoutOptionU5BU5D_t343* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::.cctor()
 void GUILayoutEntry__cctor_m4073 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUILayoutEntry::get_style()
 GUIStyle_t250 * GUILayoutEntry_get_style_m4074 (GUILayoutEntry_t845 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::set_style(UnityEngine.GUIStyle)
 void GUILayoutEntry_set_style_m4075 (GUILayoutEntry_t845 * __this, GUIStyle_t250 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin()
 RectOffset_t658 * GUILayoutEntry_get_margin_m4076 (GUILayoutEntry_t845 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::CalcWidth()
 void GUILayoutEntry_CalcWidth_m4077 (GUILayoutEntry_t845 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::CalcHeight()
 void GUILayoutEntry_CalcHeight_m4078 (GUILayoutEntry_t845 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single)
 void GUILayoutEntry_SetHorizontal_m4079 (GUILayoutEntry_t845 * __this, float ___x, float ___width, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single)
 void GUILayoutEntry_SetVertical_m4080 (GUILayoutEntry_t845 * __this, float ___y, float ___height, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::ApplyStyleSettings(UnityEngine.GUIStyle)
 void GUILayoutEntry_ApplyStyleSettings_m4081 (GUILayoutEntry_t845 * __this, GUIStyle_t250 * ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::ApplyOptions(UnityEngine.GUILayoutOption[])
 void GUILayoutEntry_ApplyOptions_m4082 (GUILayoutEntry_t845 * __this, GUILayoutOptionU5BU5D_t343* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUILayoutEntry::ToString()
 String_t* GUILayoutEntry_ToString_m4083 (GUILayoutEntry_t845 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
