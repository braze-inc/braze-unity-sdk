#pragma once
#include <stdint.h>
// UnityEngine.Material
struct Material_t401;
// UnityEngine.UI.Graphic
struct Graphic_t565;
// UnityEngine.RectTransform
struct RectTransform_t559;
// UnityEngine.EventSystems.UIBehaviour
#include "UnityEngine_UI_UnityEngine_EventSystems_UIBehaviour.h"
// UnityEngine.UI.Mask
struct Mask_t668  : public UIBehaviour_t460
{
	// System.Boolean UnityEngine.UI.Mask::m_ShowMaskGraphic
	bool ___m_ShowMaskGraphic_2;
	// UnityEngine.Material UnityEngine.UI.Mask::m_RenderMaterial
	Material_t401 * ___m_RenderMaterial_3;
	// UnityEngine.UI.Graphic UnityEngine.UI.Mask::m_Graphic
	Graphic_t565 * ___m_Graphic_4;
	// UnityEngine.RectTransform UnityEngine.UI.Mask::m_RectTransform
	RectTransform_t559 * ___m_RectTransform_5;
};
