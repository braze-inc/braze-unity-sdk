#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UI_UnityEngine_UI_BaseMeshEffect770218424.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Shadow
struct  Shadow_t1464142665  : public BaseMeshEffect_t770218424
{
public:
	// UnityEngine.Color UnityEngine.UI.Shadow::m_EffectColor
	Color_t1588175760  ___m_EffectColor_4;
	// UnityEngine.Vector2 UnityEngine.UI.Shadow::m_EffectDistance
	Vector2_t3525329788  ___m_EffectDistance_5;
	// System.Boolean UnityEngine.UI.Shadow::m_UseGraphicAlpha
	bool ___m_UseGraphicAlpha_6;

public:
	inline static int32_t get_offset_of_m_EffectColor_4() { return static_cast<int32_t>(offsetof(Shadow_t1464142665, ___m_EffectColor_4)); }
	inline Color_t1588175760  get_m_EffectColor_4() const { return ___m_EffectColor_4; }
	inline Color_t1588175760 * get_address_of_m_EffectColor_4() { return &___m_EffectColor_4; }
	inline void set_m_EffectColor_4(Color_t1588175760  value)
	{
		___m_EffectColor_4 = value;
	}

	inline static int32_t get_offset_of_m_EffectDistance_5() { return static_cast<int32_t>(offsetof(Shadow_t1464142665, ___m_EffectDistance_5)); }
	inline Vector2_t3525329788  get_m_EffectDistance_5() const { return ___m_EffectDistance_5; }
	inline Vector2_t3525329788 * get_address_of_m_EffectDistance_5() { return &___m_EffectDistance_5; }
	inline void set_m_EffectDistance_5(Vector2_t3525329788  value)
	{
		___m_EffectDistance_5 = value;
	}

	inline static int32_t get_offset_of_m_UseGraphicAlpha_6() { return static_cast<int32_t>(offsetof(Shadow_t1464142665, ___m_UseGraphicAlpha_6)); }
	inline bool get_m_UseGraphicAlpha_6() const { return ___m_UseGraphicAlpha_6; }
	inline bool* get_address_of_m_UseGraphicAlpha_6() { return &___m_UseGraphicAlpha_6; }
	inline void set_m_UseGraphicAlpha_6(bool value)
	{
		___m_UseGraphicAlpha_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
