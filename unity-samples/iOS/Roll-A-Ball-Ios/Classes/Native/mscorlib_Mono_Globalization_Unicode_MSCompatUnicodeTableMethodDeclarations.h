#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Globalization.Unicode.MSCompatUnicodeTable
struct MSCompatUnicodeTable_t1785;
// Mono.Globalization.Unicode.TailoringInfo
struct TailoringInfo_t1779;
// System.Globalization.CultureInfo
struct CultureInfo_t1065;
// Mono.Globalization.Unicode.Contraction[]
struct ContractionU5BU5D_t1786;
// Mono.Globalization.Unicode.Level2Map[]
struct Level2MapU5BU5D_t1787;
// System.String
struct String_t;
// Mono.Globalization.Unicode.CodePointIndexer
struct CodePointIndexer_t1778;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void Mono.Globalization.Unicode.MSCompatUnicodeTable::.cctor()
 void MSCompatUnicodeTable__cctor_m8500 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Globalization.Unicode.TailoringInfo Mono.Globalization.Unicode.MSCompatUnicodeTable::GetTailoringInfo(System.Int32)
 TailoringInfo_t1779 * MSCompatUnicodeTable_GetTailoringInfo_m8501 (Object_t * __this/* static, unused */, int32_t ___lcid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.MSCompatUnicodeTable::BuildTailoringTables(System.Globalization.CultureInfo,Mono.Globalization.Unicode.TailoringInfo,Mono.Globalization.Unicode.Contraction[]&,Mono.Globalization.Unicode.Level2Map[]&)
 void MSCompatUnicodeTable_BuildTailoringTables_m8502 (Object_t * __this/* static, unused */, CultureInfo_t1065 * ___culture, TailoringInfo_t1779 * ___t, ContractionU5BU5D_t1786** ___contractions, Level2MapU5BU5D_t1787** ___diacriticals, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.MSCompatUnicodeTable::SetCJKReferences(System.String,Mono.Globalization.Unicode.CodePointIndexer&,System.Byte*&,System.Byte*&,Mono.Globalization.Unicode.CodePointIndexer&,System.Byte*&)
 void MSCompatUnicodeTable_SetCJKReferences_m8503 (Object_t * __this/* static, unused */, String_t* ___name, CodePointIndexer_t1778 ** ___cjkIndexer, uint8_t** ___catTable, uint8_t** ___lv1Table, CodePointIndexer_t1778 ** ___lv2Indexer, uint8_t** ___lv2Table, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Globalization.Unicode.MSCompatUnicodeTable::Category(System.Int32)
 uint8_t MSCompatUnicodeTable_Category_m8504 (Object_t * __this/* static, unused */, int32_t ___cp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Globalization.Unicode.MSCompatUnicodeTable::Level1(System.Int32)
 uint8_t MSCompatUnicodeTable_Level1_m8505 (Object_t * __this/* static, unused */, int32_t ___cp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Globalization.Unicode.MSCompatUnicodeTable::Level2(System.Int32)
 uint8_t MSCompatUnicodeTable_Level2_m8506 (Object_t * __this/* static, unused */, int32_t ___cp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Globalization.Unicode.MSCompatUnicodeTable::Level3(System.Int32)
 uint8_t MSCompatUnicodeTable_Level3_m8507 (Object_t * __this/* static, unused */, int32_t ___cp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.MSCompatUnicodeTable::IsIgnorable(System.Int32,System.Byte)
 bool MSCompatUnicodeTable_IsIgnorable_m8508 (Object_t * __this/* static, unused */, int32_t ___cp, uint8_t ___flag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.MSCompatUnicodeTable::IsIgnorableNonSpacing(System.Int32)
 bool MSCompatUnicodeTable_IsIgnorableNonSpacing_m8509 (Object_t * __this/* static, unused */, int32_t ___cp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.MSCompatUnicodeTable::ToKanaTypeInsensitive(System.Int32)
 int32_t MSCompatUnicodeTable_ToKanaTypeInsensitive_m8510 (Object_t * __this/* static, unused */, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.MSCompatUnicodeTable::ToWidthCompat(System.Int32)
 int32_t MSCompatUnicodeTable_ToWidthCompat_m8511 (Object_t * __this/* static, unused */, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.MSCompatUnicodeTable::HasSpecialWeight(System.Char)
 bool MSCompatUnicodeTable_HasSpecialWeight_m8512 (Object_t * __this/* static, unused */, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.MSCompatUnicodeTable::IsHalfWidthKana(System.Char)
 bool MSCompatUnicodeTable_IsHalfWidthKana_m8513 (Object_t * __this/* static, unused */, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.MSCompatUnicodeTable::IsHiragana(System.Char)
 bool MSCompatUnicodeTable_IsHiragana_m8514 (Object_t * __this/* static, unused */, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.MSCompatUnicodeTable::IsJapaneseSmallLetter(System.Char)
 bool MSCompatUnicodeTable_IsJapaneseSmallLetter_m8515 (Object_t * __this/* static, unused */, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Mono.Globalization.Unicode.MSCompatUnicodeTable::GetResource(System.String)
 IntPtr_t107 MSCompatUnicodeTable_GetResource_m8516 (Object_t * __this/* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Globalization.Unicode.MSCompatUnicodeTable::UInt32FromBytePtr(System.Byte*,System.UInt32)
 uint32_t MSCompatUnicodeTable_UInt32FromBytePtr_m8517 (Object_t * __this/* static, unused */, uint8_t* ___raw, uint32_t ___idx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.MSCompatUnicodeTable::FillCJK(System.String,Mono.Globalization.Unicode.CodePointIndexer&,System.Byte*&,System.Byte*&,Mono.Globalization.Unicode.CodePointIndexer&,System.Byte*&)
 void MSCompatUnicodeTable_FillCJK_m8518 (Object_t * __this/* static, unused */, String_t* ___culture, CodePointIndexer_t1778 ** ___cjkIndexer, uint8_t** ___catTable, uint8_t** ___lv1Table, CodePointIndexer_t1778 ** ___lv2Indexer, uint8_t** ___lv2Table, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.MSCompatUnicodeTable::FillCJKCore(System.String,Mono.Globalization.Unicode.CodePointIndexer&,System.Byte*&,System.Byte*&,Mono.Globalization.Unicode.CodePointIndexer&,System.Byte*&)
 void MSCompatUnicodeTable_FillCJKCore_m8519 (Object_t * __this/* static, unused */, String_t* ___culture, CodePointIndexer_t1778 ** ___cjkIndexer, uint8_t** ___catTable, uint8_t** ___lv1Table, CodePointIndexer_t1778 ** ___cjkLv2Indexer, uint8_t** ___lv2Table, MethodInfo* method) IL2CPP_METHOD_ATTR;
