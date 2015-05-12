#pragma once
#include <stdint.h>
// UnityEngine.Material
struct Material_t413;
// UnityEngine.UI.Graphic
struct Graphic_t579;
// UnityEngine.RectTransform
struct RectTransform_t573;
// UnityEngine.EventSystems.UIBehaviour
#include "UnityEngine_UI_UnityEngine_EventSystems_UIBehaviour.h"
// UnityEngine.UI.Mask
struct Mask_t682  : public UIBehaviour_t474
{
	// System.Boolean UnityEngine.UI.Mask::m_ShowMaskGraphic
	bool ___m_ShowMaskGraphic_2;
	// UnityEngine.Material UnityEngine.UI.Mask::m_RenderMaterial
	Material_t413 * ___m_RenderMaterial_3;
	// UnityEngine.UI.Graphic UnityEngine.UI.Mask::m_Graphic
	Graphic_t579 * ___m_Graphic_4;
	// UnityEngine.RectTransform UnityEngine.UI.Mask::m_RectTransform
	RectTransform_t573 * ___m_RectTransform_5;
};
