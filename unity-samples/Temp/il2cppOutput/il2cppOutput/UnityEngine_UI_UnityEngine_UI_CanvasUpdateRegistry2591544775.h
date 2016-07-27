#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.CanvasUpdateRegistry
struct CanvasUpdateRegistry_t2591544775;
// UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>
struct IndexedSet_1_t3233689201;
// System.Comparison`1<UnityEngine.UI.ICanvasElement>
struct Comparison_1_t2416652480;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.CanvasUpdateRegistry
struct  CanvasUpdateRegistry_t2591544775  : public Il2CppObject
{
public:
	// System.Boolean UnityEngine.UI.CanvasUpdateRegistry::m_PerformingLayoutUpdate
	bool ___m_PerformingLayoutUpdate_1;
	// System.Boolean UnityEngine.UI.CanvasUpdateRegistry::m_PerformingGraphicUpdate
	bool ___m_PerformingGraphicUpdate_2;
	// UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement> UnityEngine.UI.CanvasUpdateRegistry::m_LayoutRebuildQueue
	IndexedSet_1_t3233689201 * ___m_LayoutRebuildQueue_3;
	// UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement> UnityEngine.UI.CanvasUpdateRegistry::m_GraphicRebuildQueue
	IndexedSet_1_t3233689201 * ___m_GraphicRebuildQueue_4;

public:
	inline static int32_t get_offset_of_m_PerformingLayoutUpdate_1() { return static_cast<int32_t>(offsetof(CanvasUpdateRegistry_t2591544775, ___m_PerformingLayoutUpdate_1)); }
	inline bool get_m_PerformingLayoutUpdate_1() const { return ___m_PerformingLayoutUpdate_1; }
	inline bool* get_address_of_m_PerformingLayoutUpdate_1() { return &___m_PerformingLayoutUpdate_1; }
	inline void set_m_PerformingLayoutUpdate_1(bool value)
	{
		___m_PerformingLayoutUpdate_1 = value;
	}

	inline static int32_t get_offset_of_m_PerformingGraphicUpdate_2() { return static_cast<int32_t>(offsetof(CanvasUpdateRegistry_t2591544775, ___m_PerformingGraphicUpdate_2)); }
	inline bool get_m_PerformingGraphicUpdate_2() const { return ___m_PerformingGraphicUpdate_2; }
	inline bool* get_address_of_m_PerformingGraphicUpdate_2() { return &___m_PerformingGraphicUpdate_2; }
	inline void set_m_PerformingGraphicUpdate_2(bool value)
	{
		___m_PerformingGraphicUpdate_2 = value;
	}

	inline static int32_t get_offset_of_m_LayoutRebuildQueue_3() { return static_cast<int32_t>(offsetof(CanvasUpdateRegistry_t2591544775, ___m_LayoutRebuildQueue_3)); }
	inline IndexedSet_1_t3233689201 * get_m_LayoutRebuildQueue_3() const { return ___m_LayoutRebuildQueue_3; }
	inline IndexedSet_1_t3233689201 ** get_address_of_m_LayoutRebuildQueue_3() { return &___m_LayoutRebuildQueue_3; }
	inline void set_m_LayoutRebuildQueue_3(IndexedSet_1_t3233689201 * value)
	{
		___m_LayoutRebuildQueue_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_LayoutRebuildQueue_3, value);
	}

	inline static int32_t get_offset_of_m_GraphicRebuildQueue_4() { return static_cast<int32_t>(offsetof(CanvasUpdateRegistry_t2591544775, ___m_GraphicRebuildQueue_4)); }
	inline IndexedSet_1_t3233689201 * get_m_GraphicRebuildQueue_4() const { return ___m_GraphicRebuildQueue_4; }
	inline IndexedSet_1_t3233689201 ** get_address_of_m_GraphicRebuildQueue_4() { return &___m_GraphicRebuildQueue_4; }
	inline void set_m_GraphicRebuildQueue_4(IndexedSet_1_t3233689201 * value)
	{
		___m_GraphicRebuildQueue_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_GraphicRebuildQueue_4, value);
	}
};

struct CanvasUpdateRegistry_t2591544775_StaticFields
{
public:
	// UnityEngine.UI.CanvasUpdateRegistry UnityEngine.UI.CanvasUpdateRegistry::s_Instance
	CanvasUpdateRegistry_t2591544775 * ___s_Instance_0;
	// System.Comparison`1<UnityEngine.UI.ICanvasElement> UnityEngine.UI.CanvasUpdateRegistry::s_SortLayoutFunction
	Comparison_1_t2416652480 * ___s_SortLayoutFunction_5;

public:
	inline static int32_t get_offset_of_s_Instance_0() { return static_cast<int32_t>(offsetof(CanvasUpdateRegistry_t2591544775_StaticFields, ___s_Instance_0)); }
	inline CanvasUpdateRegistry_t2591544775 * get_s_Instance_0() const { return ___s_Instance_0; }
	inline CanvasUpdateRegistry_t2591544775 ** get_address_of_s_Instance_0() { return &___s_Instance_0; }
	inline void set_s_Instance_0(CanvasUpdateRegistry_t2591544775 * value)
	{
		___s_Instance_0 = value;
		Il2CppCodeGenWriteBarrier(&___s_Instance_0, value);
	}

	inline static int32_t get_offset_of_s_SortLayoutFunction_5() { return static_cast<int32_t>(offsetof(CanvasUpdateRegistry_t2591544775_StaticFields, ___s_SortLayoutFunction_5)); }
	inline Comparison_1_t2416652480 * get_s_SortLayoutFunction_5() const { return ___s_SortLayoutFunction_5; }
	inline Comparison_1_t2416652480 ** get_address_of_s_SortLayoutFunction_5() { return &___s_SortLayoutFunction_5; }
	inline void set_s_SortLayoutFunction_5(Comparison_1_t2416652480 * value)
	{
		___s_SortLayoutFunction_5 = value;
		Il2CppCodeGenWriteBarrier(&___s_SortLayoutFunction_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
