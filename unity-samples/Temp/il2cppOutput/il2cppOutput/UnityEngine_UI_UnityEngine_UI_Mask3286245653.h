#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.RectTransform
struct RectTransform_t3317474837;
// UnityEngine.UI.Graphic
struct Graphic_t933884113;
// UnityEngine.Material
struct Material_t1886596500;

#include "UnityEngine_UI_UnityEngine_EventSystems_UIBehaviour644839684.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Mask
struct  Mask_t3286245653  : public UIBehaviour_t644839684
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Mask::m_RectTransform
	RectTransform_t3317474837 * ___m_RectTransform_2;
	// System.Boolean UnityEngine.UI.Mask::m_ShowMaskGraphic
	bool ___m_ShowMaskGraphic_3;
	// UnityEngine.UI.Graphic UnityEngine.UI.Mask::m_Graphic
	Graphic_t933884113 * ___m_Graphic_4;
	// UnityEngine.Material UnityEngine.UI.Mask::m_MaskMaterial
	Material_t1886596500 * ___m_MaskMaterial_5;
	// UnityEngine.Material UnityEngine.UI.Mask::m_UnmaskMaterial
	Material_t1886596500 * ___m_UnmaskMaterial_6;

public:
	inline static int32_t get_offset_of_m_RectTransform_2() { return static_cast<int32_t>(offsetof(Mask_t3286245653, ___m_RectTransform_2)); }
	inline RectTransform_t3317474837 * get_m_RectTransform_2() const { return ___m_RectTransform_2; }
	inline RectTransform_t3317474837 ** get_address_of_m_RectTransform_2() { return &___m_RectTransform_2; }
	inline void set_m_RectTransform_2(RectTransform_t3317474837 * value)
	{
		___m_RectTransform_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_RectTransform_2, value);
	}

	inline static int32_t get_offset_of_m_ShowMaskGraphic_3() { return static_cast<int32_t>(offsetof(Mask_t3286245653, ___m_ShowMaskGraphic_3)); }
	inline bool get_m_ShowMaskGraphic_3() const { return ___m_ShowMaskGraphic_3; }
	inline bool* get_address_of_m_ShowMaskGraphic_3() { return &___m_ShowMaskGraphic_3; }
	inline void set_m_ShowMaskGraphic_3(bool value)
	{
		___m_ShowMaskGraphic_3 = value;
	}

	inline static int32_t get_offset_of_m_Graphic_4() { return static_cast<int32_t>(offsetof(Mask_t3286245653, ___m_Graphic_4)); }
	inline Graphic_t933884113 * get_m_Graphic_4() const { return ___m_Graphic_4; }
	inline Graphic_t933884113 ** get_address_of_m_Graphic_4() { return &___m_Graphic_4; }
	inline void set_m_Graphic_4(Graphic_t933884113 * value)
	{
		___m_Graphic_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_Graphic_4, value);
	}

	inline static int32_t get_offset_of_m_MaskMaterial_5() { return static_cast<int32_t>(offsetof(Mask_t3286245653, ___m_MaskMaterial_5)); }
	inline Material_t1886596500 * get_m_MaskMaterial_5() const { return ___m_MaskMaterial_5; }
	inline Material_t1886596500 ** get_address_of_m_MaskMaterial_5() { return &___m_MaskMaterial_5; }
	inline void set_m_MaskMaterial_5(Material_t1886596500 * value)
	{
		___m_MaskMaterial_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_MaskMaterial_5, value);
	}

	inline static int32_t get_offset_of_m_UnmaskMaterial_6() { return static_cast<int32_t>(offsetof(Mask_t3286245653, ___m_UnmaskMaterial_6)); }
	inline Material_t1886596500 * get_m_UnmaskMaterial_6() const { return ___m_UnmaskMaterial_6; }
	inline Material_t1886596500 ** get_address_of_m_UnmaskMaterial_6() { return &___m_UnmaskMaterial_6; }
	inline void set_m_UnmaskMaterial_6(Material_t1886596500 * value)
	{
		___m_UnmaskMaterial_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_UnmaskMaterial_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
