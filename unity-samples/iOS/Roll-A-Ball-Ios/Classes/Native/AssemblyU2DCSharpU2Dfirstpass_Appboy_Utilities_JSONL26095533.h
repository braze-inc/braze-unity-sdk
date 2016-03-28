#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Appboy.Utilities.JSONNode
struct JSONNode_t1834608295;
// System.String
struct String_t;

#include "AssemblyU2DCSharpU2Dfirstpass_Appboy_Utilities_JSO1834608295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Appboy.Utilities.JSONLazyCreator
struct  JSONLazyCreator_t26095533  : public JSONNode_t1834608295
{
public:
	// Appboy.Utilities.JSONNode Appboy.Utilities.JSONLazyCreator::m_Node
	JSONNode_t1834608295 * ___m_Node_0;
	// System.String Appboy.Utilities.JSONLazyCreator::m_Key
	String_t* ___m_Key_1;

public:
	inline static int32_t get_offset_of_m_Node_0() { return static_cast<int32_t>(offsetof(JSONLazyCreator_t26095533, ___m_Node_0)); }
	inline JSONNode_t1834608295 * get_m_Node_0() const { return ___m_Node_0; }
	inline JSONNode_t1834608295 ** get_address_of_m_Node_0() { return &___m_Node_0; }
	inline void set_m_Node_0(JSONNode_t1834608295 * value)
	{
		___m_Node_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_Node_0, value);
	}

	inline static int32_t get_offset_of_m_Key_1() { return static_cast<int32_t>(offsetof(JSONLazyCreator_t26095533, ___m_Key_1)); }
	inline String_t* get_m_Key_1() const { return ___m_Key_1; }
	inline String_t** get_address_of_m_Key_1() { return &___m_Key_1; }
	inline void set_m_Key_1(String_t* value)
	{
		___m_Key_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_Key_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
