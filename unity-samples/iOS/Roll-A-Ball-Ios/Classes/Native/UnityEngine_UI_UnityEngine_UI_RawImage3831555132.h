#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture
struct Texture_t1769722184;

#include "UnityEngine_UI_UnityEngine_UI_MaskableGraphic2806572971.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.RawImage
struct  RawImage_t3831555132  : public MaskableGraphic_t2806572971
{
public:
	// UnityEngine.Texture UnityEngine.UI.RawImage::m_Texture
	Texture_t1769722184 * ___m_Texture_28;
	// UnityEngine.Rect UnityEngine.UI.RawImage::m_UVRect
	Rect_t1525428817  ___m_UVRect_29;

public:
	inline static int32_t get_offset_of_m_Texture_28() { return static_cast<int32_t>(offsetof(RawImage_t3831555132, ___m_Texture_28)); }
	inline Texture_t1769722184 * get_m_Texture_28() const { return ___m_Texture_28; }
	inline Texture_t1769722184 ** get_address_of_m_Texture_28() { return &___m_Texture_28; }
	inline void set_m_Texture_28(Texture_t1769722184 * value)
	{
		___m_Texture_28 = value;
		Il2CppCodeGenWriteBarrier(&___m_Texture_28, value);
	}

	inline static int32_t get_offset_of_m_UVRect_29() { return static_cast<int32_t>(offsetof(RawImage_t3831555132, ___m_UVRect_29)); }
	inline Rect_t1525428817  get_m_UVRect_29() const { return ___m_UVRect_29; }
	inline Rect_t1525428817 * get_address_of_m_UVRect_29() { return &___m_UVRect_29; }
	inline void set_m_UVRect_29(Rect_t1525428817  value)
	{
		___m_UVRect_29 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
