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

// Mono.Globalization.Unicode.SimpleCollator
struct SimpleCollator_t2066475675;
// System.Globalization.CultureInfo
struct CultureInfo_t3603717042;
// Mono.Globalization.Unicode.CodePointIndexer
struct CodePointIndexer_t2962824291;
// Mono.Globalization.Unicode.Contraction
struct Contraction_t2055464445;
// System.String
struct String_t;
// Mono.Globalization.Unicode.Contraction[]
struct ContractionU5BU5D_t2339494256;
// System.Globalization.SortKey
struct SortKey_t2408679447;
// Mono.Globalization.Unicode.SortKeyBuffer
struct SortKeyBuffer_t591499208;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Globalization_CultureInfo3603717042.h"
#include "mscorlib_Mono_Globalization_Unicode_CodePointIndex2962824291.h"
#include "mscorlib_Mono_Globalization_Unicode_SimpleCollator_232048961.h"
#include "mscorlib_System_Globalization_CompareOptions1115053679.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_Mono_Globalization_Unicode_SortKeyBuffer591499208.h"
#include "mscorlib_Mono_Globalization_Unicode_SimpleCollator2616184207.h"
#include "mscorlib_Mono_Globalization_Unicode_Contraction2055464445.h"

// System.Void Mono.Globalization.Unicode.SimpleCollator::.ctor(System.Globalization.CultureInfo)
extern "C"  void SimpleCollator__ctor_m3894313767 (SimpleCollator_t2066475675 * __this, CultureInfo_t3603717042 * ___culture0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.SimpleCollator::.cctor()
extern "C"  void SimpleCollator__cctor_m1599258646 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.SimpleCollator::SetCJKTable(System.Globalization.CultureInfo,Mono.Globalization.Unicode.CodePointIndexer&,System.Byte*&,System.Byte*&,Mono.Globalization.Unicode.CodePointIndexer&,System.Byte*&)
extern "C"  void SimpleCollator_SetCJKTable_m1695548744 (SimpleCollator_t2066475675 * __this, CultureInfo_t3603717042 * ___culture0, CodePointIndexer_t2962824291 ** ___cjkIndexer1, uint8_t** ___catTable2, uint8_t** ___lv1Table3, CodePointIndexer_t2962824291 ** ___lv2Indexer4, uint8_t** ___lv2Table5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo Mono.Globalization.Unicode.SimpleCollator::GetNeutralCulture(System.Globalization.CultureInfo)
extern "C"  CultureInfo_t3603717042 * SimpleCollator_GetNeutralCulture_m2928766877 (Il2CppObject * __this /* static, unused */, CultureInfo_t3603717042 * ___info0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Globalization.Unicode.SimpleCollator::Category(System.Int32)
extern "C"  uint8_t SimpleCollator_Category_m191567536 (SimpleCollator_t2066475675 * __this, int32_t ___cp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Globalization.Unicode.SimpleCollator::Level1(System.Int32)
extern "C"  uint8_t SimpleCollator_Level1_m830769311 (SimpleCollator_t2066475675 * __this, int32_t ___cp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Globalization.Unicode.SimpleCollator::Level2(System.Int32,Mono.Globalization.Unicode.SimpleCollator/ExtenderType)
extern "C"  uint8_t SimpleCollator_Level2_m1794183443 (SimpleCollator_t2066475675 * __this, int32_t ___cp0, int32_t ___ext1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.SimpleCollator::IsHalfKana(System.Int32,System.Globalization.CompareOptions)
extern "C"  bool SimpleCollator_IsHalfKana_m3193940553 (Il2CppObject * __this /* static, unused */, int32_t ___cp0, int32_t ___opt1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Globalization.Unicode.Contraction Mono.Globalization.Unicode.SimpleCollator::GetContraction(System.String,System.Int32,System.Int32)
extern "C"  Contraction_t2055464445 * SimpleCollator_GetContraction_m3093419443 (SimpleCollator_t2066475675 * __this, String_t* ___s0, int32_t ___start1, int32_t ___end2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Globalization.Unicode.Contraction Mono.Globalization.Unicode.SimpleCollator::GetContraction(System.String,System.Int32,System.Int32,Mono.Globalization.Unicode.Contraction[])
extern "C"  Contraction_t2055464445 * SimpleCollator_GetContraction_m1209314148 (SimpleCollator_t2066475675 * __this, String_t* ___s0, int32_t ___start1, int32_t ___end2, ContractionU5BU5D_t2339494256* ___clist3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Globalization.Unicode.Contraction Mono.Globalization.Unicode.SimpleCollator::GetTailContraction(System.String,System.Int32,System.Int32)
extern "C"  Contraction_t2055464445 * SimpleCollator_GetTailContraction_m31293987 (SimpleCollator_t2066475675 * __this, String_t* ___s0, int32_t ___start1, int32_t ___end2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Globalization.Unicode.Contraction Mono.Globalization.Unicode.SimpleCollator::GetTailContraction(System.String,System.Int32,System.Int32,Mono.Globalization.Unicode.Contraction[])
extern "C"  Contraction_t2055464445 * SimpleCollator_GetTailContraction_m3773938932 (SimpleCollator_t2066475675 * __this, String_t* ___s0, int32_t ___start1, int32_t ___end2, ContractionU5BU5D_t2339494256* ___clist3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::FilterOptions(System.Int32,System.Globalization.CompareOptions)
extern "C"  int32_t SimpleCollator_FilterOptions_m1756004783 (SimpleCollator_t2066475675 * __this, int32_t ___i0, int32_t ___opt1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Globalization.Unicode.SimpleCollator/ExtenderType Mono.Globalization.Unicode.SimpleCollator::GetExtenderType(System.Int32)
extern "C"  int32_t SimpleCollator_GetExtenderType_m1908961333 (SimpleCollator_t2066475675 * __this, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Globalization.Unicode.SimpleCollator::ToDashTypeValue(Mono.Globalization.Unicode.SimpleCollator/ExtenderType,System.Globalization.CompareOptions)
extern "C"  uint8_t SimpleCollator_ToDashTypeValue_m2421194399 (Il2CppObject * __this /* static, unused */, int32_t ___ext0, int32_t ___opt1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::FilterExtender(System.Int32,Mono.Globalization.Unicode.SimpleCollator/ExtenderType,System.Globalization.CompareOptions)
extern "C"  int32_t SimpleCollator_FilterExtender_m3148823481 (SimpleCollator_t2066475675 * __this, int32_t ___i0, int32_t ___ext1, int32_t ___opt2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.SimpleCollator::IsIgnorable(System.Int32,System.Globalization.CompareOptions)
extern "C"  bool SimpleCollator_IsIgnorable_m4132152338 (Il2CppObject * __this /* static, unused */, int32_t ___i0, int32_t ___opt1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.SimpleCollator::IsSafe(System.Int32)
extern "C"  bool SimpleCollator_IsSafe_m575256339 (SimpleCollator_t2066475675 * __this, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.SortKey Mono.Globalization.Unicode.SimpleCollator::GetSortKey(System.String,System.Globalization.CompareOptions)
extern "C"  SortKey_t2408679447 * SimpleCollator_GetSortKey_m1379820039 (SimpleCollator_t2066475675 * __this, String_t* ___s0, int32_t ___options1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.SortKey Mono.Globalization.Unicode.SimpleCollator::GetSortKey(System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)
extern "C"  SortKey_t2408679447 * SimpleCollator_GetSortKey_m4243574631 (SimpleCollator_t2066475675 * __this, String_t* ___s0, int32_t ___start1, int32_t ___length2, int32_t ___options3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.SimpleCollator::GetSortKey(System.String,System.Int32,System.Int32,Mono.Globalization.Unicode.SortKeyBuffer,System.Globalization.CompareOptions)
extern "C"  void SimpleCollator_GetSortKey_m315817675 (SimpleCollator_t2066475675 * __this, String_t* ___s0, int32_t ___start1, int32_t ___end2, SortKeyBuffer_t591499208 * ___buf3, int32_t ___opt4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.SimpleCollator::FillSortKeyRaw(System.Int32,Mono.Globalization.Unicode.SimpleCollator/ExtenderType,Mono.Globalization.Unicode.SortKeyBuffer,System.Globalization.CompareOptions)
extern "C"  void SimpleCollator_FillSortKeyRaw_m3040933930 (SimpleCollator_t2066475675 * __this, int32_t ___i0, int32_t ___ext1, SortKeyBuffer_t591499208 * ___buf2, int32_t ___opt3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.SimpleCollator::FillSurrogateSortKeyRaw(System.Int32,Mono.Globalization.Unicode.SortKeyBuffer)
extern "C"  void SimpleCollator_FillSurrogateSortKeyRaw_m3127065804 (SimpleCollator_t2066475675 * __this, int32_t ___i0, SortKeyBuffer_t591499208 * ___buf1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::CompareOrdinal(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32)
extern "C"  int32_t SimpleCollator_CompareOrdinal_m712144577 (SimpleCollator_t2066475675 * __this, String_t* ___s10, int32_t ___idx11, int32_t ___len12, String_t* ___s23, int32_t ___idx24, int32_t ___len25, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::CompareQuick(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32,System.Boolean&,System.Boolean&,System.Boolean)
extern "C"  int32_t SimpleCollator_CompareQuick_m2053836602 (SimpleCollator_t2066475675 * __this, String_t* ___s10, int32_t ___idx11, int32_t ___len12, String_t* ___s23, int32_t ___idx24, int32_t ___len25, bool* ___sourceConsumed6, bool* ___targetConsumed7, bool ___immediateBreakup8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::CompareOrdinalIgnoreCase(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32)
extern "C"  int32_t SimpleCollator_CompareOrdinalIgnoreCase_m2671662527 (SimpleCollator_t2066475675 * __this, String_t* ___s10, int32_t ___idx11, int32_t ___len12, String_t* ___s23, int32_t ___idx24, int32_t ___len25, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::Compare(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)
extern "C"  int32_t SimpleCollator_Compare_m1335009039 (SimpleCollator_t2066475675 * __this, String_t* ___s10, int32_t ___idx11, int32_t ___len12, String_t* ___s23, int32_t ___idx24, int32_t ___len25, int32_t ___options6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.SimpleCollator::ClearBuffer(System.Byte*,System.Int32)
extern "C"  void SimpleCollator_ClearBuffer_m3079572920 (SimpleCollator_t2066475675 * __this, uint8_t* ___buffer0, int32_t ___size1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.SimpleCollator::QuickCheckPossible(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32)
extern "C"  bool SimpleCollator_QuickCheckPossible_m2783866695 (SimpleCollator_t2066475675 * __this, String_t* ___s10, int32_t ___idx11, int32_t ___end12, String_t* ___s23, int32_t ___idx24, int32_t ___end25, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::CompareInternal(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32,System.Boolean&,System.Boolean&,System.Boolean,System.Boolean,Mono.Globalization.Unicode.SimpleCollator/Context&)
extern "C"  int32_t SimpleCollator_CompareInternal_m2883409076 (SimpleCollator_t2066475675 * __this, String_t* ___s10, int32_t ___idx11, int32_t ___len12, String_t* ___s23, int32_t ___idx24, int32_t ___len25, bool* ___targetConsumed6, bool* ___sourceConsumed7, bool ___skipHeadingExtenders8, bool ___immediateBreakup9, Context_t2616184207 * ___ctx10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::CompareFlagPair(System.Boolean,System.Boolean)
extern "C"  int32_t SimpleCollator_CompareFlagPair_m2729119818 (SimpleCollator_t2066475675 * __this, bool ___b10, bool ___b21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.SimpleCollator::IsPrefix(System.String,System.String,System.Globalization.CompareOptions)
extern "C"  bool SimpleCollator_IsPrefix_m3203677694 (SimpleCollator_t2066475675 * __this, String_t* ___src0, String_t* ___target1, int32_t ___opt2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.SimpleCollator::IsPrefix(System.String,System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)
extern "C"  bool SimpleCollator_IsPrefix_m3891336350 (SimpleCollator_t2066475675 * __this, String_t* ___s0, String_t* ___target1, int32_t ___start2, int32_t ___length3, int32_t ___opt4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.SimpleCollator::IsPrefix(System.String,System.String,System.Int32,System.Int32,System.Boolean,Mono.Globalization.Unicode.SimpleCollator/Context&)
extern "C"  bool SimpleCollator_IsPrefix_m2215601431 (SimpleCollator_t2066475675 * __this, String_t* ___s0, String_t* ___target1, int32_t ___start2, int32_t ___length3, bool ___skipHeadingExtenders4, Context_t2616184207 * ___ctx5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.SimpleCollator::IsSuffix(System.String,System.String,System.Globalization.CompareOptions)
extern "C"  bool SimpleCollator_IsSuffix_m74058015 (SimpleCollator_t2066475675 * __this, String_t* ___src0, String_t* ___target1, int32_t ___opt2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.SimpleCollator::IsSuffix(System.String,System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)
extern "C"  bool SimpleCollator_IsSuffix_m1088571519 (SimpleCollator_t2066475675 * __this, String_t* ___s0, String_t* ___target1, int32_t ___start2, int32_t ___length3, int32_t ___opt4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::QuickIndexOf(System.String,System.String,System.Int32,System.Int32,System.Boolean&)
extern "C"  int32_t SimpleCollator_QuickIndexOf_m2845818816 (SimpleCollator_t2066475675 * __this, String_t* ___s0, String_t* ___target1, int32_t ___start2, int32_t ___length3, bool* ___testWasUnable4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::IndexOf(System.String,System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)
extern "C"  int32_t SimpleCollator_IndexOf_m3062309067 (SimpleCollator_t2066475675 * __this, String_t* ___s0, String_t* ___target1, int32_t ___start2, int32_t ___length3, int32_t ___opt4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::IndexOfOrdinal(System.String,System.String,System.Int32,System.Int32)
extern "C"  int32_t SimpleCollator_IndexOfOrdinal_m1896144901 (SimpleCollator_t2066475675 * __this, String_t* ___s0, String_t* ___target1, int32_t ___start2, int32_t ___length3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::IndexOfOrdinalIgnoreCase(System.String,System.String,System.Int32,System.Int32)
extern "C"  int32_t SimpleCollator_IndexOfOrdinalIgnoreCase_m3414283139 (SimpleCollator_t2066475675 * __this, String_t* ___s0, String_t* ___target1, int32_t ___start2, int32_t ___length3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::IndexOfSortKey(System.String,System.Int32,System.Int32,System.Byte*,System.Char,System.Int32,System.Boolean,Mono.Globalization.Unicode.SimpleCollator/Context&)
extern "C"  int32_t SimpleCollator_IndexOfSortKey_m175081590 (SimpleCollator_t2066475675 * __this, String_t* ___s0, int32_t ___start1, int32_t ___length2, uint8_t* ___sortkey3, uint16_t ___target4, int32_t ___ti5, bool ___noLv46, Context_t2616184207 * ___ctx7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::IndexOf(System.String,System.String,System.Int32,System.Int32,System.Byte*,Mono.Globalization.Unicode.SimpleCollator/Context&)
extern "C"  int32_t SimpleCollator_IndexOf_m859847038 (SimpleCollator_t2066475675 * __this, String_t* ___s0, String_t* ___target1, int32_t ___start2, int32_t ___length3, uint8_t* ___targetSortKey4, Context_t2616184207 * ___ctx5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::LastIndexOf(System.String,System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)
extern "C"  int32_t SimpleCollator_LastIndexOf_m2017636865 (SimpleCollator_t2066475675 * __this, String_t* ___s0, String_t* ___target1, int32_t ___start2, int32_t ___length3, int32_t ___opt4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::LastIndexOfOrdinal(System.String,System.String,System.Int32,System.Int32)
extern "C"  int32_t SimpleCollator_LastIndexOfOrdinal_m2043339535 (SimpleCollator_t2066475675 * __this, String_t* ___s0, String_t* ___target1, int32_t ___start2, int32_t ___length3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::LastIndexOfOrdinalIgnoreCase(System.String,System.String,System.Int32,System.Int32)
extern "C"  int32_t SimpleCollator_LastIndexOfOrdinalIgnoreCase_m2479821325 (SimpleCollator_t2066475675 * __this, String_t* ___s0, String_t* ___target1, int32_t ___start2, int32_t ___length3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::LastIndexOfSortKey(System.String,System.Int32,System.Int32,System.Int32,System.Byte*,System.Int32,System.Boolean,Mono.Globalization.Unicode.SimpleCollator/Context&)
extern "C"  int32_t SimpleCollator_LastIndexOfSortKey_m1215896936 (SimpleCollator_t2066475675 * __this, String_t* ___s0, int32_t ___start1, int32_t ___orgStart2, int32_t ___length3, uint8_t* ___sortkey4, int32_t ___ti5, bool ___noLv46, Context_t2616184207 * ___ctx7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::LastIndexOf(System.String,System.String,System.Int32,System.Int32,System.Byte*,Mono.Globalization.Unicode.SimpleCollator/Context&)
extern "C"  int32_t SimpleCollator_LastIndexOf_m1438809524 (SimpleCollator_t2066475675 * __this, String_t* ___s0, String_t* ___target1, int32_t ___start2, int32_t ___length3, uint8_t* ___targetSortKey4, Context_t2616184207 * ___ctx5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.SimpleCollator::MatchesForward(System.String,System.Int32&,System.Int32,System.Int32,System.Byte*,System.Boolean,Mono.Globalization.Unicode.SimpleCollator/Context&)
extern "C"  bool SimpleCollator_MatchesForward_m3033109065 (SimpleCollator_t2066475675 * __this, String_t* ___s0, int32_t* ___idx1, int32_t ___end2, int32_t ___ti3, uint8_t* ___sortkey4, bool ___noLv45, Context_t2616184207 * ___ctx6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.SimpleCollator::MatchesForwardCore(System.String,System.Int32&,System.Int32,System.Int32,System.Byte*,System.Boolean,Mono.Globalization.Unicode.SimpleCollator/ExtenderType,Mono.Globalization.Unicode.Contraction&,Mono.Globalization.Unicode.SimpleCollator/Context&)
extern "C"  bool SimpleCollator_MatchesForwardCore_m4219153676 (SimpleCollator_t2066475675 * __this, String_t* ___s0, int32_t* ___idx1, int32_t ___end2, int32_t ___ti3, uint8_t* ___sortkey4, bool ___noLv45, int32_t ___ext6, Contraction_t2055464445 ** ___ct7, Context_t2616184207 * ___ctx8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.SimpleCollator::MatchesPrimitive(System.Globalization.CompareOptions,System.Byte*,System.Int32,Mono.Globalization.Unicode.SimpleCollator/ExtenderType,System.Byte*,System.Int32,System.Boolean)
extern "C"  bool SimpleCollator_MatchesPrimitive_m4274637912 (SimpleCollator_t2066475675 * __this, int32_t ___opt0, uint8_t* ___source1, int32_t ___si2, int32_t ___ext3, uint8_t* ___target4, int32_t ___ti5, bool ___noLv46, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.SimpleCollator::MatchesBackward(System.String,System.Int32&,System.Int32,System.Int32,System.Int32,System.Byte*,System.Boolean,Mono.Globalization.Unicode.SimpleCollator/Context&)
extern "C"  bool SimpleCollator_MatchesBackward_m2723732854 (SimpleCollator_t2066475675 * __this, String_t* ___s0, int32_t* ___idx1, int32_t ___end2, int32_t ___orgStart3, int32_t ___ti4, uint8_t* ___sortkey5, bool ___noLv46, Context_t2616184207 * ___ctx7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.SimpleCollator::MatchesBackwardCore(System.String,System.Int32&,System.Int32,System.Int32,System.Int32,System.Byte*,System.Boolean,Mono.Globalization.Unicode.SimpleCollator/ExtenderType,Mono.Globalization.Unicode.Contraction&,Mono.Globalization.Unicode.SimpleCollator/Context&)
extern "C"  bool SimpleCollator_MatchesBackwardCore_m1571229341 (SimpleCollator_t2066475675 * __this, String_t* ___s0, int32_t* ___idx1, int32_t ___end2, int32_t ___orgStart3, int32_t ___ti4, uint8_t* ___sortkey5, bool ___noLv46, int32_t ___ext7, Contraction_t2055464445 ** ___ct8, Context_t2616184207 * ___ctx9, const MethodInfo* method) IL2CPP_METHOD_ATTR;
