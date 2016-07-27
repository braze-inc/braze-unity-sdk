#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Canvas
struct Canvas_t3534013893;
// System.Collections.Generic.List`1<UnityEngine.UI.Graphic>
struct List_1_t1730843082;
// System.Comparison`1<UnityEngine.UI.Graphic>
struct Comparison_1_t3637558989;

#include "UnityEngine_UI_UnityEngine_EventSystems_BaseRaycas3819875680.h"
#include "UnityEngine_UI_UnityEngine_UI_GraphicRaycaster_Blo3349705471.h"
#include "UnityEngine_UnityEngine_LayerMask1862190090.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.GraphicRaycaster
struct  GraphicRaycaster_t2033008887  : public BaseRaycaster_t3819875680
{
public:
	// System.Boolean UnityEngine.UI.GraphicRaycaster::m_IgnoreReversedGraphics
	bool ___m_IgnoreReversedGraphics_3;
	// UnityEngine.UI.GraphicRaycaster/BlockingObjects UnityEngine.UI.GraphicRaycaster::m_BlockingObjects
	int32_t ___m_BlockingObjects_4;
	// UnityEngine.LayerMask UnityEngine.UI.GraphicRaycaster::m_BlockingMask
	LayerMask_t1862190090  ___m_BlockingMask_5;
	// UnityEngine.Canvas UnityEngine.UI.GraphicRaycaster::m_Canvas
	Canvas_t3534013893 * ___m_Canvas_6;
	// System.Collections.Generic.List`1<UnityEngine.UI.Graphic> UnityEngine.UI.GraphicRaycaster::m_RaycastResults
	List_1_t1730843082 * ___m_RaycastResults_7;

public:
	inline static int32_t get_offset_of_m_IgnoreReversedGraphics_3() { return static_cast<int32_t>(offsetof(GraphicRaycaster_t2033008887, ___m_IgnoreReversedGraphics_3)); }
	inline bool get_m_IgnoreReversedGraphics_3() const { return ___m_IgnoreReversedGraphics_3; }
	inline bool* get_address_of_m_IgnoreReversedGraphics_3() { return &___m_IgnoreReversedGraphics_3; }
	inline void set_m_IgnoreReversedGraphics_3(bool value)
	{
		___m_IgnoreReversedGraphics_3 = value;
	}

	inline static int32_t get_offset_of_m_BlockingObjects_4() { return static_cast<int32_t>(offsetof(GraphicRaycaster_t2033008887, ___m_BlockingObjects_4)); }
	inline int32_t get_m_BlockingObjects_4() const { return ___m_BlockingObjects_4; }
	inline int32_t* get_address_of_m_BlockingObjects_4() { return &___m_BlockingObjects_4; }
	inline void set_m_BlockingObjects_4(int32_t value)
	{
		___m_BlockingObjects_4 = value;
	}

	inline static int32_t get_offset_of_m_BlockingMask_5() { return static_cast<int32_t>(offsetof(GraphicRaycaster_t2033008887, ___m_BlockingMask_5)); }
	inline LayerMask_t1862190090  get_m_BlockingMask_5() const { return ___m_BlockingMask_5; }
	inline LayerMask_t1862190090 * get_address_of_m_BlockingMask_5() { return &___m_BlockingMask_5; }
	inline void set_m_BlockingMask_5(LayerMask_t1862190090  value)
	{
		___m_BlockingMask_5 = value;
	}

	inline static int32_t get_offset_of_m_Canvas_6() { return static_cast<int32_t>(offsetof(GraphicRaycaster_t2033008887, ___m_Canvas_6)); }
	inline Canvas_t3534013893 * get_m_Canvas_6() const { return ___m_Canvas_6; }
	inline Canvas_t3534013893 ** get_address_of_m_Canvas_6() { return &___m_Canvas_6; }
	inline void set_m_Canvas_6(Canvas_t3534013893 * value)
	{
		___m_Canvas_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_Canvas_6, value);
	}

	inline static int32_t get_offset_of_m_RaycastResults_7() { return static_cast<int32_t>(offsetof(GraphicRaycaster_t2033008887, ___m_RaycastResults_7)); }
	inline List_1_t1730843082 * get_m_RaycastResults_7() const { return ___m_RaycastResults_7; }
	inline List_1_t1730843082 ** get_address_of_m_RaycastResults_7() { return &___m_RaycastResults_7; }
	inline void set_m_RaycastResults_7(List_1_t1730843082 * value)
	{
		___m_RaycastResults_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_RaycastResults_7, value);
	}
};

struct GraphicRaycaster_t2033008887_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.UI.Graphic> UnityEngine.UI.GraphicRaycaster::s_SortedGraphics
	List_1_t1730843082 * ___s_SortedGraphics_8;
	// System.Comparison`1<UnityEngine.UI.Graphic> UnityEngine.UI.GraphicRaycaster::<>f__am$cache6
	Comparison_1_t3637558989 * ___U3CU3Ef__amU24cache6_9;

public:
	inline static int32_t get_offset_of_s_SortedGraphics_8() { return static_cast<int32_t>(offsetof(GraphicRaycaster_t2033008887_StaticFields, ___s_SortedGraphics_8)); }
	inline List_1_t1730843082 * get_s_SortedGraphics_8() const { return ___s_SortedGraphics_8; }
	inline List_1_t1730843082 ** get_address_of_s_SortedGraphics_8() { return &___s_SortedGraphics_8; }
	inline void set_s_SortedGraphics_8(List_1_t1730843082 * value)
	{
		___s_SortedGraphics_8 = value;
		Il2CppCodeGenWriteBarrier(&___s_SortedGraphics_8, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache6_9() { return static_cast<int32_t>(offsetof(GraphicRaycaster_t2033008887_StaticFields, ___U3CU3Ef__amU24cache6_9)); }
	inline Comparison_1_t3637558989 * get_U3CU3Ef__amU24cache6_9() const { return ___U3CU3Ef__amU24cache6_9; }
	inline Comparison_1_t3637558989 ** get_address_of_U3CU3Ef__amU24cache6_9() { return &___U3CU3Ef__amU24cache6_9; }
	inline void set_U3CU3Ef__amU24cache6_9(Comparison_1_t3637558989 * value)
	{
		___U3CU3Ef__amU24cache6_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache6_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
