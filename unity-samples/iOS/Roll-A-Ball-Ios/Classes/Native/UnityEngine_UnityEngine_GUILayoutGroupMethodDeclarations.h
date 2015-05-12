#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUILayoutGroup
struct GUILayoutGroup_t852;
// UnityEngine.RectOffset
struct RectOffset_t672;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t355;
// UnityEngine.GUIStyle
struct GUIStyle_t263;
// UnityEngine.GUILayoutEntry
struct GUILayoutEntry_t856;
// System.String
struct String_t;

// System.Void UnityEngine.GUILayoutGroup::.ctor()
 void GUILayoutGroup__ctor_m4181 (GUILayoutGroup_t852 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset UnityEngine.GUILayoutGroup::get_margin()
 RectOffset_t672 * GUILayoutGroup_get_margin_m4182 (GUILayoutGroup_t852 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutGroup::ApplyOptions(UnityEngine.GUILayoutOption[])
 void GUILayoutGroup_ApplyOptions_m4183 (GUILayoutGroup_t852 * __this, GUILayoutOptionU5BU5D_t355* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutGroup::ApplyStyleSettings(UnityEngine.GUIStyle)
 void GUILayoutGroup_ApplyStyleSettings_m4184 (GUILayoutGroup_t852 * __this, GUIStyle_t263 * ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutGroup::ResetCursor()
 void GUILayoutGroup_ResetCursor_m4185 (GUILayoutGroup_t852 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutEntry UnityEngine.GUILayoutGroup::GetNext()
 GUILayoutEntry_t856 * GUILayoutGroup_GetNext_m4186 (GUILayoutGroup_t852 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutGroup::Add(UnityEngine.GUILayoutEntry)
 void GUILayoutGroup_Add_m4187 (GUILayoutGroup_t852 * __this, GUILayoutEntry_t856 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutGroup::CalcWidth()
 void GUILayoutGroup_CalcWidth_m4188 (GUILayoutGroup_t852 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutGroup::SetHorizontal(System.Single,System.Single)
 void GUILayoutGroup_SetHorizontal_m4189 (GUILayoutGroup_t852 * __this, float ___x, float ___width, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutGroup::CalcHeight()
 void GUILayoutGroup_CalcHeight_m4190 (GUILayoutGroup_t852 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutGroup::SetVertical(System.Single,System.Single)
 void GUILayoutGroup_SetVertical_m4191 (GUILayoutGroup_t852 * __this, float ___y, float ___height, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUILayoutGroup::ToString()
 String_t* GUILayoutGroup_ToString_m4192 (GUILayoutGroup_t852 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
