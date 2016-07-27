#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.RectangularVertexClipper
struct RectangularVertexClipper_t1315953876;
// UnityEngine.RectTransform
struct RectTransform_t3317474837;
// System.Collections.Generic.List`1<UnityEngine.UI.IClippable>
struct List_1_t3036312883;
// System.Collections.Generic.List`1<UnityEngine.UI.RectMask2D>
struct List_1_t1595633764;

#include "UnityEngine_UI_UnityEngine_EventSystems_UIBehaviour644839684.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.RectMask2D
struct  RectMask2D_t798674795  : public UIBehaviour_t644839684
{
public:
	// UnityEngine.UI.RectangularVertexClipper UnityEngine.UI.RectMask2D::m_VertexClipper
	RectangularVertexClipper_t1315953876 * ___m_VertexClipper_2;
	// UnityEngine.RectTransform UnityEngine.UI.RectMask2D::m_RectTransform
	RectTransform_t3317474837 * ___m_RectTransform_3;
	// System.Collections.Generic.List`1<UnityEngine.UI.IClippable> UnityEngine.UI.RectMask2D::m_ClipTargets
	List_1_t3036312883 * ___m_ClipTargets_4;
	// System.Boolean UnityEngine.UI.RectMask2D::m_ShouldRecalculateClipRects
	bool ___m_ShouldRecalculateClipRects_5;
	// System.Collections.Generic.List`1<UnityEngine.UI.RectMask2D> UnityEngine.UI.RectMask2D::m_Clippers
	List_1_t1595633764 * ___m_Clippers_6;
	// UnityEngine.Rect UnityEngine.UI.RectMask2D::m_LastClipRectCanvasSpace
	Rect_t1525428817  ___m_LastClipRectCanvasSpace_7;
	// System.Boolean UnityEngine.UI.RectMask2D::m_LastValidClipRect
	bool ___m_LastValidClipRect_8;
	// System.Boolean UnityEngine.UI.RectMask2D::m_ForceClip
	bool ___m_ForceClip_9;

public:
	inline static int32_t get_offset_of_m_VertexClipper_2() { return static_cast<int32_t>(offsetof(RectMask2D_t798674795, ___m_VertexClipper_2)); }
	inline RectangularVertexClipper_t1315953876 * get_m_VertexClipper_2() const { return ___m_VertexClipper_2; }
	inline RectangularVertexClipper_t1315953876 ** get_address_of_m_VertexClipper_2() { return &___m_VertexClipper_2; }
	inline void set_m_VertexClipper_2(RectangularVertexClipper_t1315953876 * value)
	{
		___m_VertexClipper_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_VertexClipper_2, value);
	}

	inline static int32_t get_offset_of_m_RectTransform_3() { return static_cast<int32_t>(offsetof(RectMask2D_t798674795, ___m_RectTransform_3)); }
	inline RectTransform_t3317474837 * get_m_RectTransform_3() const { return ___m_RectTransform_3; }
	inline RectTransform_t3317474837 ** get_address_of_m_RectTransform_3() { return &___m_RectTransform_3; }
	inline void set_m_RectTransform_3(RectTransform_t3317474837 * value)
	{
		___m_RectTransform_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_RectTransform_3, value);
	}

	inline static int32_t get_offset_of_m_ClipTargets_4() { return static_cast<int32_t>(offsetof(RectMask2D_t798674795, ___m_ClipTargets_4)); }
	inline List_1_t3036312883 * get_m_ClipTargets_4() const { return ___m_ClipTargets_4; }
	inline List_1_t3036312883 ** get_address_of_m_ClipTargets_4() { return &___m_ClipTargets_4; }
	inline void set_m_ClipTargets_4(List_1_t3036312883 * value)
	{
		___m_ClipTargets_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_ClipTargets_4, value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculateClipRects_5() { return static_cast<int32_t>(offsetof(RectMask2D_t798674795, ___m_ShouldRecalculateClipRects_5)); }
	inline bool get_m_ShouldRecalculateClipRects_5() const { return ___m_ShouldRecalculateClipRects_5; }
	inline bool* get_address_of_m_ShouldRecalculateClipRects_5() { return &___m_ShouldRecalculateClipRects_5; }
	inline void set_m_ShouldRecalculateClipRects_5(bool value)
	{
		___m_ShouldRecalculateClipRects_5 = value;
	}

	inline static int32_t get_offset_of_m_Clippers_6() { return static_cast<int32_t>(offsetof(RectMask2D_t798674795, ___m_Clippers_6)); }
	inline List_1_t1595633764 * get_m_Clippers_6() const { return ___m_Clippers_6; }
	inline List_1_t1595633764 ** get_address_of_m_Clippers_6() { return &___m_Clippers_6; }
	inline void set_m_Clippers_6(List_1_t1595633764 * value)
	{
		___m_Clippers_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_Clippers_6, value);
	}

	inline static int32_t get_offset_of_m_LastClipRectCanvasSpace_7() { return static_cast<int32_t>(offsetof(RectMask2D_t798674795, ___m_LastClipRectCanvasSpace_7)); }
	inline Rect_t1525428817  get_m_LastClipRectCanvasSpace_7() const { return ___m_LastClipRectCanvasSpace_7; }
	inline Rect_t1525428817 * get_address_of_m_LastClipRectCanvasSpace_7() { return &___m_LastClipRectCanvasSpace_7; }
	inline void set_m_LastClipRectCanvasSpace_7(Rect_t1525428817  value)
	{
		___m_LastClipRectCanvasSpace_7 = value;
	}

	inline static int32_t get_offset_of_m_LastValidClipRect_8() { return static_cast<int32_t>(offsetof(RectMask2D_t798674795, ___m_LastValidClipRect_8)); }
	inline bool get_m_LastValidClipRect_8() const { return ___m_LastValidClipRect_8; }
	inline bool* get_address_of_m_LastValidClipRect_8() { return &___m_LastValidClipRect_8; }
	inline void set_m_LastValidClipRect_8(bool value)
	{
		___m_LastValidClipRect_8 = value;
	}

	inline static int32_t get_offset_of_m_ForceClip_9() { return static_cast<int32_t>(offsetof(RectMask2D_t798674795, ___m_ForceClip_9)); }
	inline bool get_m_ForceClip_9() const { return ___m_ForceClip_9; }
	inline bool* get_address_of_m_ForceClip_9() { return &___m_ForceClip_9; }
	inline void set_m_ForceClip_9(bool value)
	{
		___m_ForceClip_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
