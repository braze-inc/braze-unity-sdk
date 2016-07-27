#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Sprite
struct Sprite_t4006040370;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t2741383957;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t3227571696;

#include "UnityEngine_UI_UnityEngine_UI_MaskableGraphic2806572971.h"
#include "UnityEngine_UI_UnityEngine_UI_Image_Type2622298.h"
#include "UnityEngine_UI_UnityEngine_UI_Image_FillMethod1232150628.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Image
struct  Image_t3354615620  : public MaskableGraphic_t2806572971
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t4006040370 * ___m_Sprite_28;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t4006040370 * ___m_OverrideSprite_29;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_30;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_31;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_32;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_33;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_34;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_35;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_36;
	// System.Single UnityEngine.UI.Image::m_EventAlphaThreshold
	float ___m_EventAlphaThreshold_37;

public:
	inline static int32_t get_offset_of_m_Sprite_28() { return static_cast<int32_t>(offsetof(Image_t3354615620, ___m_Sprite_28)); }
	inline Sprite_t4006040370 * get_m_Sprite_28() const { return ___m_Sprite_28; }
	inline Sprite_t4006040370 ** get_address_of_m_Sprite_28() { return &___m_Sprite_28; }
	inline void set_m_Sprite_28(Sprite_t4006040370 * value)
	{
		___m_Sprite_28 = value;
		Il2CppCodeGenWriteBarrier(&___m_Sprite_28, value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_29() { return static_cast<int32_t>(offsetof(Image_t3354615620, ___m_OverrideSprite_29)); }
	inline Sprite_t4006040370 * get_m_OverrideSprite_29() const { return ___m_OverrideSprite_29; }
	inline Sprite_t4006040370 ** get_address_of_m_OverrideSprite_29() { return &___m_OverrideSprite_29; }
	inline void set_m_OverrideSprite_29(Sprite_t4006040370 * value)
	{
		___m_OverrideSprite_29 = value;
		Il2CppCodeGenWriteBarrier(&___m_OverrideSprite_29, value);
	}

	inline static int32_t get_offset_of_m_Type_30() { return static_cast<int32_t>(offsetof(Image_t3354615620, ___m_Type_30)); }
	inline int32_t get_m_Type_30() const { return ___m_Type_30; }
	inline int32_t* get_address_of_m_Type_30() { return &___m_Type_30; }
	inline void set_m_Type_30(int32_t value)
	{
		___m_Type_30 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_31() { return static_cast<int32_t>(offsetof(Image_t3354615620, ___m_PreserveAspect_31)); }
	inline bool get_m_PreserveAspect_31() const { return ___m_PreserveAspect_31; }
	inline bool* get_address_of_m_PreserveAspect_31() { return &___m_PreserveAspect_31; }
	inline void set_m_PreserveAspect_31(bool value)
	{
		___m_PreserveAspect_31 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_32() { return static_cast<int32_t>(offsetof(Image_t3354615620, ___m_FillCenter_32)); }
	inline bool get_m_FillCenter_32() const { return ___m_FillCenter_32; }
	inline bool* get_address_of_m_FillCenter_32() { return &___m_FillCenter_32; }
	inline void set_m_FillCenter_32(bool value)
	{
		___m_FillCenter_32 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_33() { return static_cast<int32_t>(offsetof(Image_t3354615620, ___m_FillMethod_33)); }
	inline int32_t get_m_FillMethod_33() const { return ___m_FillMethod_33; }
	inline int32_t* get_address_of_m_FillMethod_33() { return &___m_FillMethod_33; }
	inline void set_m_FillMethod_33(int32_t value)
	{
		___m_FillMethod_33 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_34() { return static_cast<int32_t>(offsetof(Image_t3354615620, ___m_FillAmount_34)); }
	inline float get_m_FillAmount_34() const { return ___m_FillAmount_34; }
	inline float* get_address_of_m_FillAmount_34() { return &___m_FillAmount_34; }
	inline void set_m_FillAmount_34(float value)
	{
		___m_FillAmount_34 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_35() { return static_cast<int32_t>(offsetof(Image_t3354615620, ___m_FillClockwise_35)); }
	inline bool get_m_FillClockwise_35() const { return ___m_FillClockwise_35; }
	inline bool* get_address_of_m_FillClockwise_35() { return &___m_FillClockwise_35; }
	inline void set_m_FillClockwise_35(bool value)
	{
		___m_FillClockwise_35 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_36() { return static_cast<int32_t>(offsetof(Image_t3354615620, ___m_FillOrigin_36)); }
	inline int32_t get_m_FillOrigin_36() const { return ___m_FillOrigin_36; }
	inline int32_t* get_address_of_m_FillOrigin_36() { return &___m_FillOrigin_36; }
	inline void set_m_FillOrigin_36(int32_t value)
	{
		___m_FillOrigin_36 = value;
	}

	inline static int32_t get_offset_of_m_EventAlphaThreshold_37() { return static_cast<int32_t>(offsetof(Image_t3354615620, ___m_EventAlphaThreshold_37)); }
	inline float get_m_EventAlphaThreshold_37() const { return ___m_EventAlphaThreshold_37; }
	inline float* get_address_of_m_EventAlphaThreshold_37() { return &___m_EventAlphaThreshold_37; }
	inline void set_m_EventAlphaThreshold_37(float value)
	{
		___m_EventAlphaThreshold_37 = value;
	}
};

struct Image_t3354615620_StaticFields
{
public:
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_t2741383957* ___s_VertScratch_38;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_t2741383957* ___s_UVScratch_39;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t3227571696* ___s_Xy_40;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t3227571696* ___s_Uv_41;

public:
	inline static int32_t get_offset_of_s_VertScratch_38() { return static_cast<int32_t>(offsetof(Image_t3354615620_StaticFields, ___s_VertScratch_38)); }
	inline Vector2U5BU5D_t2741383957* get_s_VertScratch_38() const { return ___s_VertScratch_38; }
	inline Vector2U5BU5D_t2741383957** get_address_of_s_VertScratch_38() { return &___s_VertScratch_38; }
	inline void set_s_VertScratch_38(Vector2U5BU5D_t2741383957* value)
	{
		___s_VertScratch_38 = value;
		Il2CppCodeGenWriteBarrier(&___s_VertScratch_38, value);
	}

	inline static int32_t get_offset_of_s_UVScratch_39() { return static_cast<int32_t>(offsetof(Image_t3354615620_StaticFields, ___s_UVScratch_39)); }
	inline Vector2U5BU5D_t2741383957* get_s_UVScratch_39() const { return ___s_UVScratch_39; }
	inline Vector2U5BU5D_t2741383957** get_address_of_s_UVScratch_39() { return &___s_UVScratch_39; }
	inline void set_s_UVScratch_39(Vector2U5BU5D_t2741383957* value)
	{
		___s_UVScratch_39 = value;
		Il2CppCodeGenWriteBarrier(&___s_UVScratch_39, value);
	}

	inline static int32_t get_offset_of_s_Xy_40() { return static_cast<int32_t>(offsetof(Image_t3354615620_StaticFields, ___s_Xy_40)); }
	inline Vector3U5BU5D_t3227571696* get_s_Xy_40() const { return ___s_Xy_40; }
	inline Vector3U5BU5D_t3227571696** get_address_of_s_Xy_40() { return &___s_Xy_40; }
	inline void set_s_Xy_40(Vector3U5BU5D_t3227571696* value)
	{
		___s_Xy_40 = value;
		Il2CppCodeGenWriteBarrier(&___s_Xy_40, value);
	}

	inline static int32_t get_offset_of_s_Uv_41() { return static_cast<int32_t>(offsetof(Image_t3354615620_StaticFields, ___s_Uv_41)); }
	inline Vector3U5BU5D_t3227571696* get_s_Uv_41() const { return ___s_Uv_41; }
	inline Vector3U5BU5D_t3227571696** get_address_of_s_Uv_41() { return &___s_Uv_41; }
	inline void set_s_Uv_41(Vector3U5BU5D_t3227571696* value)
	{
		___s_Uv_41 = value;
		Il2CppCodeGenWriteBarrier(&___s_Uv_41, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
