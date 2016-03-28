#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<Appboy.Utilities.JSONNode>
struct List_1_t2631567264;

#include "AssemblyU2DCSharpU2Dfirstpass_Appboy_Utilities_JSO1834608295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Appboy.Utilities.JSONArray
struct  JSONArray_t437780974  : public JSONNode_t1834608295
{
public:
	// System.Collections.Generic.List`1<Appboy.Utilities.JSONNode> Appboy.Utilities.JSONArray::m_List
	List_1_t2631567264 * ___m_List_0;

public:
	inline static int32_t get_offset_of_m_List_0() { return static_cast<int32_t>(offsetof(JSONArray_t437780974, ___m_List_0)); }
	inline List_1_t2631567264 * get_m_List_0() const { return ___m_List_0; }
	inline List_1_t2631567264 ** get_address_of_m_List_0() { return &___m_List_0; }
	inline void set_m_List_0(List_1_t2631567264 * value)
	{
		___m_List_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_List_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
