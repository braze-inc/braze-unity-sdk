#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t3286458198;
// UnityEngine.UI.Image
struct Image_t3354615620;
// UnityEngine.RectTransform
struct RectTransform_t3317474837;
// UnityEngine.UI.Toggle
struct Toggle_t1499417981;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Dropdown/DropdownItem
struct  DropdownItem_t2010846948  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown/DropdownItem::m_Text
	Text_t3286458198 * ___m_Text_2;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown/DropdownItem::m_Image
	Image_t3354615620 * ___m_Image_3;
	// UnityEngine.RectTransform UnityEngine.UI.Dropdown/DropdownItem::m_RectTransform
	RectTransform_t3317474837 * ___m_RectTransform_4;
	// UnityEngine.UI.Toggle UnityEngine.UI.Dropdown/DropdownItem::m_Toggle
	Toggle_t1499417981 * ___m_Toggle_5;

public:
	inline static int32_t get_offset_of_m_Text_2() { return static_cast<int32_t>(offsetof(DropdownItem_t2010846948, ___m_Text_2)); }
	inline Text_t3286458198 * get_m_Text_2() const { return ___m_Text_2; }
	inline Text_t3286458198 ** get_address_of_m_Text_2() { return &___m_Text_2; }
	inline void set_m_Text_2(Text_t3286458198 * value)
	{
		___m_Text_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_Text_2, value);
	}

	inline static int32_t get_offset_of_m_Image_3() { return static_cast<int32_t>(offsetof(DropdownItem_t2010846948, ___m_Image_3)); }
	inline Image_t3354615620 * get_m_Image_3() const { return ___m_Image_3; }
	inline Image_t3354615620 ** get_address_of_m_Image_3() { return &___m_Image_3; }
	inline void set_m_Image_3(Image_t3354615620 * value)
	{
		___m_Image_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_Image_3, value);
	}

	inline static int32_t get_offset_of_m_RectTransform_4() { return static_cast<int32_t>(offsetof(DropdownItem_t2010846948, ___m_RectTransform_4)); }
	inline RectTransform_t3317474837 * get_m_RectTransform_4() const { return ___m_RectTransform_4; }
	inline RectTransform_t3317474837 ** get_address_of_m_RectTransform_4() { return &___m_RectTransform_4; }
	inline void set_m_RectTransform_4(RectTransform_t3317474837 * value)
	{
		___m_RectTransform_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_RectTransform_4, value);
	}

	inline static int32_t get_offset_of_m_Toggle_5() { return static_cast<int32_t>(offsetof(DropdownItem_t2010846948, ___m_Toggle_5)); }
	inline Toggle_t1499417981 * get_m_Toggle_5() const { return ___m_Toggle_5; }
	inline Toggle_t1499417981 ** get_address_of_m_Toggle_5() { return &___m_Toggle_5; }
	inline void set_m_Toggle_5(Toggle_t1499417981 * value)
	{
		___m_Toggle_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_Toggle_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
