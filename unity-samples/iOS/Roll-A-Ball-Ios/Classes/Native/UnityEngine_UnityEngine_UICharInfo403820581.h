#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType4014882752.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UICharInfo
struct  UICharInfo_t403820581 
{
public:
	// UnityEngine.Vector2 UnityEngine.UICharInfo::cursorPos
	Vector2_t3525329788  ___cursorPos_0;
	// System.Single UnityEngine.UICharInfo::charWidth
	float ___charWidth_1;

public:
	inline static int32_t get_offset_of_cursorPos_0() { return static_cast<int32_t>(offsetof(UICharInfo_t403820581, ___cursorPos_0)); }
	inline Vector2_t3525329788  get_cursorPos_0() const { return ___cursorPos_0; }
	inline Vector2_t3525329788 * get_address_of_cursorPos_0() { return &___cursorPos_0; }
	inline void set_cursorPos_0(Vector2_t3525329788  value)
	{
		___cursorPos_0 = value;
	}

	inline static int32_t get_offset_of_charWidth_1() { return static_cast<int32_t>(offsetof(UICharInfo_t403820581, ___charWidth_1)); }
	inline float get_charWidth_1() const { return ___charWidth_1; }
	inline float* get_address_of_charWidth_1() { return &___charWidth_1; }
	inline void set_charWidth_1(float value)
	{
		___charWidth_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: UnityEngine.UICharInfo
struct UICharInfo_t403820581_marshaled_pinvoke
{
	Vector2_t3525329788_marshaled_pinvoke ___cursorPos_0;
	float ___charWidth_1;
};
// Native definition for marshalling of: UnityEngine.UICharInfo
struct UICharInfo_t403820581_marshaled_com
{
	Vector2_t3525329788_marshaled_com ___cursorPos_0;
	float ___charWidth_1;
};
