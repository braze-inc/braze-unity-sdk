#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Font
struct Font_t1525081276;

#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_FontStyle1975910095.h"
#include "UnityEngine_UnityEngine_TextAnchor551935663.h"
#include "UnityEngine_UnityEngine_HorizontalWrapMode1685321150.h"
#include "UnityEngine_UnityEngine_VerticalWrapMode2656823056.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.FontData
struct  FontData_t3713645250  : public Il2CppObject
{
public:
	// UnityEngine.Font UnityEngine.UI.FontData::m_Font
	Font_t1525081276 * ___m_Font_0;
	// System.Int32 UnityEngine.UI.FontData::m_FontSize
	int32_t ___m_FontSize_1;
	// UnityEngine.FontStyle UnityEngine.UI.FontData::m_FontStyle
	int32_t ___m_FontStyle_2;
	// System.Boolean UnityEngine.UI.FontData::m_BestFit
	bool ___m_BestFit_3;
	// System.Int32 UnityEngine.UI.FontData::m_MinSize
	int32_t ___m_MinSize_4;
	// System.Int32 UnityEngine.UI.FontData::m_MaxSize
	int32_t ___m_MaxSize_5;
	// UnityEngine.TextAnchor UnityEngine.UI.FontData::m_Alignment
	int32_t ___m_Alignment_6;
	// System.Boolean UnityEngine.UI.FontData::m_AlignByGeometry
	bool ___m_AlignByGeometry_7;
	// System.Boolean UnityEngine.UI.FontData::m_RichText
	bool ___m_RichText_8;
	// UnityEngine.HorizontalWrapMode UnityEngine.UI.FontData::m_HorizontalOverflow
	int32_t ___m_HorizontalOverflow_9;
	// UnityEngine.VerticalWrapMode UnityEngine.UI.FontData::m_VerticalOverflow
	int32_t ___m_VerticalOverflow_10;
	// System.Single UnityEngine.UI.FontData::m_LineSpacing
	float ___m_LineSpacing_11;

public:
	inline static int32_t get_offset_of_m_Font_0() { return static_cast<int32_t>(offsetof(FontData_t3713645250, ___m_Font_0)); }
	inline Font_t1525081276 * get_m_Font_0() const { return ___m_Font_0; }
	inline Font_t1525081276 ** get_address_of_m_Font_0() { return &___m_Font_0; }
	inline void set_m_Font_0(Font_t1525081276 * value)
	{
		___m_Font_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_Font_0, value);
	}

	inline static int32_t get_offset_of_m_FontSize_1() { return static_cast<int32_t>(offsetof(FontData_t3713645250, ___m_FontSize_1)); }
	inline int32_t get_m_FontSize_1() const { return ___m_FontSize_1; }
	inline int32_t* get_address_of_m_FontSize_1() { return &___m_FontSize_1; }
	inline void set_m_FontSize_1(int32_t value)
	{
		___m_FontSize_1 = value;
	}

	inline static int32_t get_offset_of_m_FontStyle_2() { return static_cast<int32_t>(offsetof(FontData_t3713645250, ___m_FontStyle_2)); }
	inline int32_t get_m_FontStyle_2() const { return ___m_FontStyle_2; }
	inline int32_t* get_address_of_m_FontStyle_2() { return &___m_FontStyle_2; }
	inline void set_m_FontStyle_2(int32_t value)
	{
		___m_FontStyle_2 = value;
	}

	inline static int32_t get_offset_of_m_BestFit_3() { return static_cast<int32_t>(offsetof(FontData_t3713645250, ___m_BestFit_3)); }
	inline bool get_m_BestFit_3() const { return ___m_BestFit_3; }
	inline bool* get_address_of_m_BestFit_3() { return &___m_BestFit_3; }
	inline void set_m_BestFit_3(bool value)
	{
		___m_BestFit_3 = value;
	}

	inline static int32_t get_offset_of_m_MinSize_4() { return static_cast<int32_t>(offsetof(FontData_t3713645250, ___m_MinSize_4)); }
	inline int32_t get_m_MinSize_4() const { return ___m_MinSize_4; }
	inline int32_t* get_address_of_m_MinSize_4() { return &___m_MinSize_4; }
	inline void set_m_MinSize_4(int32_t value)
	{
		___m_MinSize_4 = value;
	}

	inline static int32_t get_offset_of_m_MaxSize_5() { return static_cast<int32_t>(offsetof(FontData_t3713645250, ___m_MaxSize_5)); }
	inline int32_t get_m_MaxSize_5() const { return ___m_MaxSize_5; }
	inline int32_t* get_address_of_m_MaxSize_5() { return &___m_MaxSize_5; }
	inline void set_m_MaxSize_5(int32_t value)
	{
		___m_MaxSize_5 = value;
	}

	inline static int32_t get_offset_of_m_Alignment_6() { return static_cast<int32_t>(offsetof(FontData_t3713645250, ___m_Alignment_6)); }
	inline int32_t get_m_Alignment_6() const { return ___m_Alignment_6; }
	inline int32_t* get_address_of_m_Alignment_6() { return &___m_Alignment_6; }
	inline void set_m_Alignment_6(int32_t value)
	{
		___m_Alignment_6 = value;
	}

	inline static int32_t get_offset_of_m_AlignByGeometry_7() { return static_cast<int32_t>(offsetof(FontData_t3713645250, ___m_AlignByGeometry_7)); }
	inline bool get_m_AlignByGeometry_7() const { return ___m_AlignByGeometry_7; }
	inline bool* get_address_of_m_AlignByGeometry_7() { return &___m_AlignByGeometry_7; }
	inline void set_m_AlignByGeometry_7(bool value)
	{
		___m_AlignByGeometry_7 = value;
	}

	inline static int32_t get_offset_of_m_RichText_8() { return static_cast<int32_t>(offsetof(FontData_t3713645250, ___m_RichText_8)); }
	inline bool get_m_RichText_8() const { return ___m_RichText_8; }
	inline bool* get_address_of_m_RichText_8() { return &___m_RichText_8; }
	inline void set_m_RichText_8(bool value)
	{
		___m_RichText_8 = value;
	}

	inline static int32_t get_offset_of_m_HorizontalOverflow_9() { return static_cast<int32_t>(offsetof(FontData_t3713645250, ___m_HorizontalOverflow_9)); }
	inline int32_t get_m_HorizontalOverflow_9() const { return ___m_HorizontalOverflow_9; }
	inline int32_t* get_address_of_m_HorizontalOverflow_9() { return &___m_HorizontalOverflow_9; }
	inline void set_m_HorizontalOverflow_9(int32_t value)
	{
		___m_HorizontalOverflow_9 = value;
	}

	inline static int32_t get_offset_of_m_VerticalOverflow_10() { return static_cast<int32_t>(offsetof(FontData_t3713645250, ___m_VerticalOverflow_10)); }
	inline int32_t get_m_VerticalOverflow_10() const { return ___m_VerticalOverflow_10; }
	inline int32_t* get_address_of_m_VerticalOverflow_10() { return &___m_VerticalOverflow_10; }
	inline void set_m_VerticalOverflow_10(int32_t value)
	{
		___m_VerticalOverflow_10 = value;
	}

	inline static int32_t get_offset_of_m_LineSpacing_11() { return static_cast<int32_t>(offsetof(FontData_t3713645250, ___m_LineSpacing_11)); }
	inline float get_m_LineSpacing_11() const { return ___m_LineSpacing_11; }
	inline float* get_address_of_m_LineSpacing_11() { return &___m_LineSpacing_11; }
	inline void set_m_LineSpacing_11(float value)
	{
		___m_LineSpacing_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
