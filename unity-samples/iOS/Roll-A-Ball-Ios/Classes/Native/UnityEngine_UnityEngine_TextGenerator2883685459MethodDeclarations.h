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

// UnityEngine.TextGenerator
struct TextGenerator_t2883685459;
// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
struct List_1_t1200779550;
// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
struct List_1_t953880252;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t3057020574;
// System.String
struct String_t;
// System.Collections.Generic.IList`1<UnityEngine.UIVertex>
struct IList_1_t131586623;
// System.Collections.Generic.IList`1<UnityEngine.UICharInfo>
struct IList_1_t2570312895;
// System.Collections.Generic.IList`1<UnityEngine.UILineInfo>
struct IList_1_t2323413597;
// UnityEngine.Font
struct Font_t1525081276;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_TextGenerationSettings1897607637.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_Font1525081276.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"
#include "UnityEngine_UnityEngine_FontStyle1975910095.h"
#include "UnityEngine_UnityEngine_VerticalWrapMode2656823056.h"
#include "UnityEngine_UnityEngine_HorizontalWrapMode1685321150.h"
#include "UnityEngine_UnityEngine_TextAnchor551935663.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "UnityEngine_UnityEngine_TextGenerator2883685459.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"
#include "mscorlib_System_Object837106420.h"

// System.Void UnityEngine.TextGenerator::.ctor()
extern "C"  void TextGenerator__ctor_m3994909811 (TextGenerator_t2883685459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::.ctor(System.Int32)
extern "C"  void TextGenerator__ctor_m1563237700 (TextGenerator_t2883685459 * __this, int32_t ___initialCapacity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::System.IDisposable.Dispose()
extern "C"  void TextGenerator_System_IDisposable_Dispose_m3586435340 (TextGenerator_t2883685459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::Finalize()
extern "C"  void TextGenerator_Finalize_m3211881231 (TextGenerator_t2883685459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextGenerationSettings UnityEngine.TextGenerator::ValidatedSettings(UnityEngine.TextGenerationSettings)
extern "C"  TextGenerationSettings_t1897607637  TextGenerator_ValidatedSettings_m1098807955 (TextGenerator_t2883685459 * __this, TextGenerationSettings_t1897607637  ___settings, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::Invalidate()
extern "C"  void TextGenerator_Invalidate_m620450028 (TextGenerator_t2883685459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::GetCharacters(System.Collections.Generic.List`1<UnityEngine.UICharInfo>)
extern "C"  void TextGenerator_GetCharacters_m2483060112 (TextGenerator_t2883685459 * __this, List_1_t1200779550 * ___characters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::GetLines(System.Collections.Generic.List`1<UnityEngine.UILineInfo>)
extern "C"  void TextGenerator_GetLines_m2441503301 (TextGenerator_t2883685459 * __this, List_1_t953880252 * ___lines, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::GetVertices(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern "C"  void TextGenerator_GetVertices_m1097518625 (TextGenerator_t2883685459 * __this, List_1_t3057020574 * ___vertices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.TextGenerator::GetPreferredWidth(System.String,UnityEngine.TextGenerationSettings)
extern "C"  float TextGenerator_GetPreferredWidth_m1618543389 (TextGenerator_t2883685459 * __this, String_t* ___str, TextGenerationSettings_t1897607637  ___settings, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.TextGenerator::GetPreferredHeight(System.String,UnityEngine.TextGenerationSettings)
extern "C"  float TextGenerator_GetPreferredHeight_m1770778044 (TextGenerator_t2883685459 * __this, String_t* ___str, TextGenerationSettings_t1897607637  ___settings, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextGenerator::Populate(System.String,UnityEngine.TextGenerationSettings)
extern "C"  bool TextGenerator_Populate_m953583418 (TextGenerator_t2883685459 * __this, String_t* ___str, TextGenerationSettings_t1897607637  ___settings, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextGenerator::PopulateAlways(System.String,UnityEngine.TextGenerationSettings)
extern "C"  bool TextGenerator_PopulateAlways_m4138837161 (TextGenerator_t2883685459 * __this, String_t* ___str, TextGenerationSettings_t1897607637  ___settings, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<UnityEngine.UIVertex> UnityEngine.TextGenerator::get_verts()
extern "C"  Il2CppObject* TextGenerator_get_verts_m1179011229 (TextGenerator_t2883685459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<UnityEngine.UICharInfo> UnityEngine.TextGenerator::get_characters()
extern "C"  Il2CppObject* TextGenerator_get_characters_m3420670449 (TextGenerator_t2883685459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<UnityEngine.UILineInfo> UnityEngine.TextGenerator::get_lines()
extern "C"  Il2CppObject* TextGenerator_get_lines_m3197542168 (TextGenerator_t2883685459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::Init()
extern "C"  void TextGenerator_Init_m1881520001 (TextGenerator_t2883685459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::Dispose_cpp()
extern "C"  void TextGenerator_Dispose_cpp_m959647828 (TextGenerator_t2883685459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextGenerator::Populate_Internal(System.String,UnityEngine.Font,UnityEngine.Color,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,UnityEngine.VerticalWrapMode,UnityEngine.HorizontalWrapMode,System.Boolean,UnityEngine.TextAnchor,UnityEngine.Vector2,UnityEngine.Vector2,System.Boolean,System.Boolean)
extern "C"  bool TextGenerator_Populate_Internal_m1773862789 (TextGenerator_t2883685459 * __this, String_t* ___str, Font_t1525081276 * ___font, Color_t1588175760  ___color, int32_t ___fontSize, float ___scaleFactor, float ___lineSpacing, int32_t ___style, bool ___richText, bool ___resizeTextForBestFit, int32_t ___resizeTextMinSize, int32_t ___resizeTextMaxSize, int32_t ___verticalOverFlow, int32_t ___horizontalOverflow, bool ___updateBounds, int32_t ___anchor, Vector2_t3525329788  ___extents, Vector2_t3525329788  ___pivot, bool ___generateOutOfBounds, bool ___alignByGeometry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextGenerator::Populate_Internal_cpp(System.String,UnityEngine.Font,UnityEngine.Color,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.TextAnchor,System.Single,System.Single,System.Single,System.Single,System.Boolean,System.Boolean)
extern "C"  bool TextGenerator_Populate_Internal_cpp_m3249805403 (TextGenerator_t2883685459 * __this, String_t* ___str, Font_t1525081276 * ___font, Color_t1588175760  ___color, int32_t ___fontSize, float ___scaleFactor, float ___lineSpacing, int32_t ___style, bool ___richText, bool ___resizeTextForBestFit, int32_t ___resizeTextMinSize, int32_t ___resizeTextMaxSize, int32_t ___verticalOverFlow, int32_t ___horizontalOverflow, bool ___updateBounds, int32_t ___anchor, float ___extentsX, float ___extentsY, float ___pivotX, float ___pivotY, bool ___generateOutOfBounds, bool ___alignByGeometry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextGenerator::INTERNAL_CALL_Populate_Internal_cpp(UnityEngine.TextGenerator,System.String,UnityEngine.Font,UnityEngine.Color&,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.TextAnchor,System.Single,System.Single,System.Single,System.Single,System.Boolean,System.Boolean)
extern "C"  bool TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m2939372809 (Il2CppObject * __this /* static, unused */, TextGenerator_t2883685459 * ___self, String_t* ___str, Font_t1525081276 * ___font, Color_t1588175760 * ___color, int32_t ___fontSize, float ___scaleFactor, float ___lineSpacing, int32_t ___style, bool ___richText, bool ___resizeTextForBestFit, int32_t ___resizeTextMinSize, int32_t ___resizeTextMaxSize, int32_t ___verticalOverFlow, int32_t ___horizontalOverflow, bool ___updateBounds, int32_t ___anchor, float ___extentsX, float ___extentsY, float ___pivotX, float ___pivotY, bool ___generateOutOfBounds, bool ___alignByGeometry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.TextGenerator::get_rectExtents()
extern "C"  Rect_t1525428817  TextGenerator_get_rectExtents_m2200526529 (TextGenerator_t2883685459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::INTERNAL_get_rectExtents(UnityEngine.Rect&)
extern "C"  void TextGenerator_INTERNAL_get_rectExtents_m4152002332 (TextGenerator_t2883685459 * __this, Rect_t1525428817 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextGenerator::get_vertexCount()
extern "C"  int32_t TextGenerator_get_vertexCount_m818659347 (TextGenerator_t2883685459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::GetVerticesInternal(System.Object)
extern "C"  void TextGenerator_GetVerticesInternal_m2005679319 (TextGenerator_t2883685459 * __this, Il2CppObject * ___vertices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextGenerator::get_characterCount()
extern "C"  int32_t TextGenerator_get_characterCount_m1694678400 (TextGenerator_t2883685459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextGenerator::get_characterCountVisible()
extern "C"  int32_t TextGenerator_get_characterCountVisible_m2621262708 (TextGenerator_t2883685459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::GetCharactersInternal(System.Object)
extern "C"  void TextGenerator_GetCharactersInternal_m3189630150 (TextGenerator_t2883685459 * __this, Il2CppObject * ___characters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextGenerator::get_lineCount()
extern "C"  int32_t TextGenerator_get_lineCount_m3121044867 (TextGenerator_t2883685459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::GetLinesInternal(System.Object)
extern "C"  void TextGenerator_GetLinesInternal_m702225117 (TextGenerator_t2883685459 * __this, Il2CppObject * ___lines, const MethodInfo* method) IL2CPP_METHOD_ATTR;
