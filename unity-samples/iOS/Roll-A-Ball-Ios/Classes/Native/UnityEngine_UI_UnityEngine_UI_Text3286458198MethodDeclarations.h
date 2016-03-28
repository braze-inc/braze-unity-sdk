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
// UnityEngine.TextGenerator
struct TextGenerator_t2883685459;
// UnityEngine.Texture
struct Texture_t1769722184;
// UnityEngine.Font
struct Font_t1525081276;
// System.String
struct String_t;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t1471929499;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Font1525081276.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_TextAnchor551935663.h"
#include "UnityEngine_UnityEngine_HorizontalWrapMode1685321150.h"
#include "UnityEngine_UnityEngine_VerticalWrapMode2656823056.h"
#include "UnityEngine_UnityEngine_FontStyle1975910095.h"
#include "UnityEngine_UnityEngine_TextGenerationSettings1897607637.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "UnityEngine_UI_UnityEngine_UI_VertexHelper1471929499.h"

// System.Void UnityEngine.UI.Text::.ctor()
extern "C"  void Text__ctor_m216739390 (Text_t3286458198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::.cctor()
extern "C"  void Text__cctor_m1941857583 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextGenerator UnityEngine.UI.Text::get_cachedTextGenerator()
extern "C"  TextGenerator_t2883685459 * Text_get_cachedTextGenerator_m337653083 (Text_t3286458198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextGenerator UnityEngine.UI.Text::get_cachedTextGeneratorForLayout()
extern "C"  TextGenerator_t2883685459 * Text_get_cachedTextGeneratorForLayout_m1260141146 (Text_t3286458198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.UI.Text::get_mainTexture()
extern "C"  Texture_t1769722184 * Text_get_mainTexture_m718426116 (Text_t3286458198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::FontTextureChanged()
extern "C"  void Text_FontTextureChanged_m740758478 (Text_t3286458198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Font UnityEngine.UI.Text::get_font()
extern "C"  Font_t1525081276 * Text_get_font_m2437753165 (Text_t3286458198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_font(UnityEngine.Font)
extern "C"  void Text_set_font_m1978976364 (Text_t3286458198 * __this, Font_t1525081276 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.UI.Text::get_text()
extern "C"  String_t* Text_get_text_m3833038297 (Text_t3286458198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_text(System.String)
extern "C"  void Text_set_text_m302679026 (Text_t3286458198 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Text::get_supportRichText()
extern "C"  bool Text_get_supportRichText_m226316153 (Text_t3286458198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_supportRichText(System.Boolean)
extern "C"  void Text_set_supportRichText_m1299469806 (Text_t3286458198 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Text::get_resizeTextForBestFit()
extern "C"  bool Text_get_resizeTextForBestFit_m3751631302 (Text_t3286458198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_resizeTextForBestFit(System.Boolean)
extern "C"  void Text_set_resizeTextForBestFit_m241625791 (Text_t3286458198 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.Text::get_resizeTextMinSize()
extern "C"  int32_t Text_get_resizeTextMinSize_m557265325 (Text_t3286458198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_resizeTextMinSize(System.Int32)
extern "C"  void Text_set_resizeTextMinSize_m3506017186 (Text_t3286458198 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.Text::get_resizeTextMaxSize()
extern "C"  int32_t Text_get_resizeTextMaxSize_m4079754047 (Text_t3286458198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_resizeTextMaxSize(System.Int32)
extern "C"  void Text_set_resizeTextMaxSize_m2626859572 (Text_t3286458198 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextAnchor UnityEngine.UI.Text::get_alignment()
extern "C"  int32_t Text_get_alignment_m2624482868 (Text_t3286458198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_alignment(UnityEngine.TextAnchor)
extern "C"  void Text_set_alignment_m4246723817 (Text_t3286458198 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Text::get_alignByGeometry()
extern "C"  bool Text_get_alignByGeometry_m3404407727 (Text_t3286458198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_alignByGeometry(System.Boolean)
extern "C"  void Text_set_alignByGeometry_m812094372 (Text_t3286458198 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.Text::get_fontSize()
extern "C"  int32_t Text_get_fontSize_m2862645687 (Text_t3286458198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_fontSize(System.Int32)
extern "C"  void Text_set_fontSize_m2013207524 (Text_t3286458198 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.HorizontalWrapMode UnityEngine.UI.Text::get_horizontalOverflow()
extern "C"  int32_t Text_get_horizontalOverflow_m428751238 (Text_t3286458198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_horizontalOverflow(UnityEngine.HorizontalWrapMode)
extern "C"  void Text_set_horizontalOverflow_m1764021409 (Text_t3286458198 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.VerticalWrapMode UnityEngine.UI.Text::get_verticalOverflow()
extern "C"  int32_t Text_get_verticalOverflow_m4214690218 (Text_t3286458198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_verticalOverflow(UnityEngine.VerticalWrapMode)
extern "C"  void Text_set_verticalOverflow_m1954003489 (Text_t3286458198 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Text::get_lineSpacing()
extern "C"  float Text_get_lineSpacing_m2968404366 (Text_t3286458198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_lineSpacing(System.Single)
extern "C"  void Text_set_lineSpacing_m3440093 (Text_t3286458198 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.FontStyle UnityEngine.UI.Text::get_fontStyle()
extern "C"  int32_t Text_get_fontStyle_m1258883933 (Text_t3286458198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_fontStyle(UnityEngine.FontStyle)
extern "C"  void Text_set_fontStyle_m2882242342 (Text_t3286458198 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Text::get_pixelsPerUnit()
extern "C"  float Text_get_pixelsPerUnit_m4148756467 (Text_t3286458198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::OnEnable()
extern "C"  void Text_OnEnable_m3618900104 (Text_t3286458198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::OnDisable()
extern "C"  void Text_OnDisable_m957690789 (Text_t3286458198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::UpdateGeometry()
extern "C"  void Text_UpdateGeometry_m1493208737 (Text_t3286458198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextGenerationSettings UnityEngine.UI.Text::GetGenerationSettings(UnityEngine.Vector2)
extern "C"  TextGenerationSettings_t1897607637  Text_GetGenerationSettings_m554596117 (Text_t3286458198 * __this, Vector2_t3525329788  ___extents, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.Text::GetTextAnchorPivot(UnityEngine.TextAnchor)
extern "C"  Vector2_t3525329788  Text_GetTextAnchorPivot_m7192668 (Il2CppObject * __this /* static, unused */, int32_t ___anchor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::OnPopulateMesh(UnityEngine.UI.VertexHelper)
extern "C"  void Text_OnPopulateMesh_m869628001 (Text_t3286458198 * __this, VertexHelper_t1471929499 * ___toFill, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::CalculateLayoutInputHorizontal()
extern "C"  void Text_CalculateLayoutInputHorizontal_m2550743748 (Text_t3286458198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::CalculateLayoutInputVertical()
extern "C"  void Text_CalculateLayoutInputVertical_m4013862230 (Text_t3286458198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Text::get_minWidth()
extern "C"  float Text_get_minWidth_m1415472311 (Text_t3286458198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Text::get_preferredWidth()
extern "C"  float Text_get_preferredWidth_m2672417320 (Text_t3286458198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Text::get_flexibleWidth()
extern "C"  float Text_get_flexibleWidth_m3322158618 (Text_t3286458198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Text::get_minHeight()
extern "C"  float Text_get_minHeight_m1433783032 (Text_t3286458198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Text::get_preferredHeight()
extern "C"  float Text_get_preferredHeight_m1744372647 (Text_t3286458198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Text::get_flexibleHeight()
extern "C"  float Text_get_flexibleHeight_m411516405 (Text_t3286458198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.Text::get_layoutPriority()
extern "C"  int32_t Text_get_layoutPriority_m4042521525 (Text_t3286458198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
