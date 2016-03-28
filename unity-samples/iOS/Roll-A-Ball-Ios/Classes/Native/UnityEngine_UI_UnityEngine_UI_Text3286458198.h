#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.FontData
struct FontData_t3713645250;
// System.String
struct String_t;
// UnityEngine.TextGenerator
struct TextGenerator_t2883685459;
// UnityEngine.Material
struct Material_t1886596500;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t684414504;

#include "UnityEngine_UI_UnityEngine_UI_MaskableGraphic2806572971.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Text
struct  Text_t3286458198  : public MaskableGraphic_t2806572971
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t3713645250 * ___m_FontData_28;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_29;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t2883685459 * ___m_TextCache_30;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t2883685459 * ___m_TextCacheForLayout_31;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_33;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_t684414504* ___m_TempVerts_34;

public:
	inline static int32_t get_offset_of_m_FontData_28() { return static_cast<int32_t>(offsetof(Text_t3286458198, ___m_FontData_28)); }
	inline FontData_t3713645250 * get_m_FontData_28() const { return ___m_FontData_28; }
	inline FontData_t3713645250 ** get_address_of_m_FontData_28() { return &___m_FontData_28; }
	inline void set_m_FontData_28(FontData_t3713645250 * value)
	{
		___m_FontData_28 = value;
		Il2CppCodeGenWriteBarrier(&___m_FontData_28, value);
	}

	inline static int32_t get_offset_of_m_Text_29() { return static_cast<int32_t>(offsetof(Text_t3286458198, ___m_Text_29)); }
	inline String_t* get_m_Text_29() const { return ___m_Text_29; }
	inline String_t** get_address_of_m_Text_29() { return &___m_Text_29; }
	inline void set_m_Text_29(String_t* value)
	{
		___m_Text_29 = value;
		Il2CppCodeGenWriteBarrier(&___m_Text_29, value);
	}

	inline static int32_t get_offset_of_m_TextCache_30() { return static_cast<int32_t>(offsetof(Text_t3286458198, ___m_TextCache_30)); }
	inline TextGenerator_t2883685459 * get_m_TextCache_30() const { return ___m_TextCache_30; }
	inline TextGenerator_t2883685459 ** get_address_of_m_TextCache_30() { return &___m_TextCache_30; }
	inline void set_m_TextCache_30(TextGenerator_t2883685459 * value)
	{
		___m_TextCache_30 = value;
		Il2CppCodeGenWriteBarrier(&___m_TextCache_30, value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_31() { return static_cast<int32_t>(offsetof(Text_t3286458198, ___m_TextCacheForLayout_31)); }
	inline TextGenerator_t2883685459 * get_m_TextCacheForLayout_31() const { return ___m_TextCacheForLayout_31; }
	inline TextGenerator_t2883685459 ** get_address_of_m_TextCacheForLayout_31() { return &___m_TextCacheForLayout_31; }
	inline void set_m_TextCacheForLayout_31(TextGenerator_t2883685459 * value)
	{
		___m_TextCacheForLayout_31 = value;
		Il2CppCodeGenWriteBarrier(&___m_TextCacheForLayout_31, value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_33() { return static_cast<int32_t>(offsetof(Text_t3286458198, ___m_DisableFontTextureRebuiltCallback_33)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_33() const { return ___m_DisableFontTextureRebuiltCallback_33; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_33() { return &___m_DisableFontTextureRebuiltCallback_33; }
	inline void set_m_DisableFontTextureRebuiltCallback_33(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_33 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_34() { return static_cast<int32_t>(offsetof(Text_t3286458198, ___m_TempVerts_34)); }
	inline UIVertexU5BU5D_t684414504* get_m_TempVerts_34() const { return ___m_TempVerts_34; }
	inline UIVertexU5BU5D_t684414504** get_address_of_m_TempVerts_34() { return &___m_TempVerts_34; }
	inline void set_m_TempVerts_34(UIVertexU5BU5D_t684414504* value)
	{
		___m_TempVerts_34 = value;
		Il2CppCodeGenWriteBarrier(&___m_TempVerts_34, value);
	}
};

struct Text_t3286458198_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t1886596500 * ___s_DefaultText_32;

public:
	inline static int32_t get_offset_of_s_DefaultText_32() { return static_cast<int32_t>(offsetof(Text_t3286458198_StaticFields, ___s_DefaultText_32)); }
	inline Material_t1886596500 * get_s_DefaultText_32() const { return ___s_DefaultText_32; }
	inline Material_t1886596500 ** get_address_of_s_DefaultText_32() { return &___s_DefaultText_32; }
	inline void set_s_DefaultText_32(Material_t1886596500 * value)
	{
		___s_DefaultText_32 = value;
		Il2CppCodeGenWriteBarrier(&___s_DefaultText_32, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
