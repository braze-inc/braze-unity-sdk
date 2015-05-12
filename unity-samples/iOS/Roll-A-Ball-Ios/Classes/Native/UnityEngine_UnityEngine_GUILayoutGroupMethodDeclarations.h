#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUILayoutGroup
struct GUILayoutGroup_t841;
// UnityEngine.RectOffset
struct RectOffset_t658;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t343;
// UnityEngine.GUIStyle
struct GUIStyle_t250;
// UnityEngine.GUILayoutEntry
struct GUILayoutEntry_t845;
// System.String
struct String_t;

// System.Void UnityEngine.GUILayoutGroup::.ctor()
 void GUILayoutGroup__ctor_m4084 (GUILayoutGroup_t841 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset UnityEngine.GUILayoutGroup::get_margin()
 RectOffset_t658 * GUILayoutGroup_get_margin_m4085 (GUILayoutGroup_t841 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutGroup::ApplyOptions(UnityEngine.GUILayoutOption[])
 void GUILayoutGroup_ApplyOptions_m4086 (GUILayoutGroup_t841 * __this, GUILayoutOptionU5BU5D_t343* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutGroup::ApplyStyleSettings(UnityEngine.GUIStyle)
 void GUILayoutGroup_ApplyStyleSettings_m4087 (GUILayoutGroup_t841 * __this, GUIStyle_t250 * ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutGroup::ResetCursor()
 void GUILayoutGroup_ResetCursor_m4088 (GUILayoutGroup_t841 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutEntry UnityEngine.GUILayoutGroup::GetNext()
 GUILayoutEntry_t845 * GUILayoutGroup_GetNext_m4089 (GUILayoutGroup_t841 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutGroup::Add(UnityEngine.GUILayoutEntry)
 void GUILayoutGroup_Add_m4090 (GUILayoutGroup_t841 * __this, GUILayoutEntry_t845 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutGroup::CalcWidth()
 void GUILayoutGroup_CalcWidth_m4091 (GUILayoutGroup_t841 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutGroup::SetHorizontal(System.Single,System.Single)
 void GUILayoutGroup_SetHorizontal_m4092 (GUILayoutGroup_t841 * __this, float ___x, float ___width, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutGroup::CalcHeight()
 void GUILayoutGroup_CalcHeight_m4093 (GUILayoutGroup_t841 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutGroup::SetVertical(System.Single,System.Single)
 void GUILayoutGroup_SetVertical_m4094 (GUILayoutGroup_t841 * __this, float ___y, float ___height, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUILayoutGroup::ToString()
 String_t* GUILayoutGroup_ToString_m4095 (GUILayoutGroup_t841 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
