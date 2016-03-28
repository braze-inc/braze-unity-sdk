#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType4014882752.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Color324137084207.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "UnityEngine_UnityEngine_Vector43525329790.h"
#include "UnityEngine_UnityEngine_UIVertex2260061605.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UIVertex
struct  UIVertex_t2260061605 
{
public:
	// UnityEngine.Vector3 UnityEngine.UIVertex::position
	Vector3_t3525329789  ___position_0;
	// UnityEngine.Vector3 UnityEngine.UIVertex::normal
	Vector3_t3525329789  ___normal_1;
	// UnityEngine.Color32 UnityEngine.UIVertex::color
	Color32_t4137084207  ___color_2;
	// UnityEngine.Vector2 UnityEngine.UIVertex::uv0
	Vector2_t3525329788  ___uv0_3;
	// UnityEngine.Vector2 UnityEngine.UIVertex::uv1
	Vector2_t3525329788  ___uv1_4;
	// UnityEngine.Vector4 UnityEngine.UIVertex::tangent
	Vector4_t3525329790  ___tangent_5;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(UIVertex_t2260061605, ___position_0)); }
	inline Vector3_t3525329789  get_position_0() const { return ___position_0; }
	inline Vector3_t3525329789 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t3525329789  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_normal_1() { return static_cast<int32_t>(offsetof(UIVertex_t2260061605, ___normal_1)); }
	inline Vector3_t3525329789  get_normal_1() const { return ___normal_1; }
	inline Vector3_t3525329789 * get_address_of_normal_1() { return &___normal_1; }
	inline void set_normal_1(Vector3_t3525329789  value)
	{
		___normal_1 = value;
	}

	inline static int32_t get_offset_of_color_2() { return static_cast<int32_t>(offsetof(UIVertex_t2260061605, ___color_2)); }
	inline Color32_t4137084207  get_color_2() const { return ___color_2; }
	inline Color32_t4137084207 * get_address_of_color_2() { return &___color_2; }
	inline void set_color_2(Color32_t4137084207  value)
	{
		___color_2 = value;
	}

	inline static int32_t get_offset_of_uv0_3() { return static_cast<int32_t>(offsetof(UIVertex_t2260061605, ___uv0_3)); }
	inline Vector2_t3525329788  get_uv0_3() const { return ___uv0_3; }
	inline Vector2_t3525329788 * get_address_of_uv0_3() { return &___uv0_3; }
	inline void set_uv0_3(Vector2_t3525329788  value)
	{
		___uv0_3 = value;
	}

	inline static int32_t get_offset_of_uv1_4() { return static_cast<int32_t>(offsetof(UIVertex_t2260061605, ___uv1_4)); }
	inline Vector2_t3525329788  get_uv1_4() const { return ___uv1_4; }
	inline Vector2_t3525329788 * get_address_of_uv1_4() { return &___uv1_4; }
	inline void set_uv1_4(Vector2_t3525329788  value)
	{
		___uv1_4 = value;
	}

	inline static int32_t get_offset_of_tangent_5() { return static_cast<int32_t>(offsetof(UIVertex_t2260061605, ___tangent_5)); }
	inline Vector4_t3525329790  get_tangent_5() const { return ___tangent_5; }
	inline Vector4_t3525329790 * get_address_of_tangent_5() { return &___tangent_5; }
	inline void set_tangent_5(Vector4_t3525329790  value)
	{
		___tangent_5 = value;
	}
};

struct UIVertex_t2260061605_StaticFields
{
public:
	// UnityEngine.Color32 UnityEngine.UIVertex::s_DefaultColor
	Color32_t4137084207  ___s_DefaultColor_6;
	// UnityEngine.Vector4 UnityEngine.UIVertex::s_DefaultTangent
	Vector4_t3525329790  ___s_DefaultTangent_7;
	// UnityEngine.UIVertex UnityEngine.UIVertex::simpleVert
	UIVertex_t2260061605  ___simpleVert_8;

public:
	inline static int32_t get_offset_of_s_DefaultColor_6() { return static_cast<int32_t>(offsetof(UIVertex_t2260061605_StaticFields, ___s_DefaultColor_6)); }
	inline Color32_t4137084207  get_s_DefaultColor_6() const { return ___s_DefaultColor_6; }
	inline Color32_t4137084207 * get_address_of_s_DefaultColor_6() { return &___s_DefaultColor_6; }
	inline void set_s_DefaultColor_6(Color32_t4137084207  value)
	{
		___s_DefaultColor_6 = value;
	}

	inline static int32_t get_offset_of_s_DefaultTangent_7() { return static_cast<int32_t>(offsetof(UIVertex_t2260061605_StaticFields, ___s_DefaultTangent_7)); }
	inline Vector4_t3525329790  get_s_DefaultTangent_7() const { return ___s_DefaultTangent_7; }
	inline Vector4_t3525329790 * get_address_of_s_DefaultTangent_7() { return &___s_DefaultTangent_7; }
	inline void set_s_DefaultTangent_7(Vector4_t3525329790  value)
	{
		___s_DefaultTangent_7 = value;
	}

	inline static int32_t get_offset_of_simpleVert_8() { return static_cast<int32_t>(offsetof(UIVertex_t2260061605_StaticFields, ___simpleVert_8)); }
	inline UIVertex_t2260061605  get_simpleVert_8() const { return ___simpleVert_8; }
	inline UIVertex_t2260061605 * get_address_of_simpleVert_8() { return &___simpleVert_8; }
	inline void set_simpleVert_8(UIVertex_t2260061605  value)
	{
		___simpleVert_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: UnityEngine.UIVertex
struct UIVertex_t2260061605_marshaled_pinvoke
{
	Vector3_t3525329789_marshaled_pinvoke ___position_0;
	Vector3_t3525329789_marshaled_pinvoke ___normal_1;
	Color32_t4137084207_marshaled_pinvoke ___color_2;
	Vector2_t3525329788_marshaled_pinvoke ___uv0_3;
	Vector2_t3525329788_marshaled_pinvoke ___uv1_4;
	Vector4_t3525329790_marshaled_pinvoke ___tangent_5;
};
// Native definition for marshalling of: UnityEngine.UIVertex
struct UIVertex_t2260061605_marshaled_com
{
	Vector3_t3525329789_marshaled_com ___position_0;
	Vector3_t3525329789_marshaled_com ___normal_1;
	Color32_t4137084207_marshaled_com ___color_2;
	Vector2_t3525329788_marshaled_com ___uv0_3;
	Vector2_t3525329788_marshaled_com ___uv1_4;
	Vector4_t3525329790_marshaled_com ___tangent_5;
};
