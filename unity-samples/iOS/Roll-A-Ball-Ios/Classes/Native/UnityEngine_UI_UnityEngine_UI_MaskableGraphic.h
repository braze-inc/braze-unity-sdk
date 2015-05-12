#pragma once
#include <stdint.h>
// UnityEngine.Material
struct Material_t401;
// UnityEngine.UI.Graphic
#include "UnityEngine_UI_UnityEngine_UI_Graphic.h"
// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t583  : public Graphic_t565
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_18;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t401 * ___m_MaskMaterial_19;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_20;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_21;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_22;
};
