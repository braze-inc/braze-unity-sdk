#pragma once
#include <stdint.h>
// UnityEngine.Sprite
struct Sprite_t581;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t384;
// UnityEngine.UI.MaskableGraphic
#include "UnityEngine_UI_UnityEngine_UI_MaskableGraphic.h"
// UnityEngine.UI.Image/Type
#include "UnityEngine_UI_UnityEngine_UI_Image_Type.h"
// UnityEngine.UI.Image/FillMethod
#include "UnityEngine_UI_UnityEngine_UI_Image_FillMethod.h"
// UnityEngine.UI.Image
struct Image_t582  : public MaskableGraphic_t583
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t581 * ___m_Sprite_23;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t581 * ___m_OverrideSprite_24;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_25;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_26;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_27;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_28;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_29;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_30;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_31;
	// System.Single UnityEngine.UI.Image::m_EventAlphaThreshold
	float ___m_EventAlphaThreshold_32;
};
struct Image_t582_StaticFields{
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_t384* ___s_VertScratch_33;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_t384* ___s_UVScratch_34;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_Xy
	Vector2U5BU5D_t384* ___s_Xy_35;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_Uv
	Vector2U5BU5D_t384* ___s_Uv_36;
};
