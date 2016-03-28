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

#include "UnityEngine_UI_UnityEngine_EventSystems_UIBehaviour644839684.h"
#include "UnityEngine_UI_UnityEngine_UI_CanvasScaler_ScaleMod125837805.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "UnityEngine_UI_UnityEngine_UI_CanvasScaler_ScreenMa204008924.h"
#include "UnityEngine_UI_UnityEngine_UI_CanvasScaler_Unit2641316.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.CanvasScaler
struct  CanvasScaler_t872225289  : public UIBehaviour_t644839684
{
public:
	// UnityEngine.UI.CanvasScaler/ScaleMode UnityEngine.UI.CanvasScaler::m_UiScaleMode
	int32_t ___m_UiScaleMode_3;
	// System.Single UnityEngine.UI.CanvasScaler::m_ReferencePixelsPerUnit
	float ___m_ReferencePixelsPerUnit_4;
	// System.Single UnityEngine.UI.CanvasScaler::m_ScaleFactor
	float ___m_ScaleFactor_5;
	// UnityEngine.Vector2 UnityEngine.UI.CanvasScaler::m_ReferenceResolution
	Vector2_t3525329788  ___m_ReferenceResolution_6;
	// UnityEngine.UI.CanvasScaler/ScreenMatchMode UnityEngine.UI.CanvasScaler::m_ScreenMatchMode
	int32_t ___m_ScreenMatchMode_7;
	// System.Single UnityEngine.UI.CanvasScaler::m_MatchWidthOrHeight
	float ___m_MatchWidthOrHeight_8;
	// UnityEngine.UI.CanvasScaler/Unit UnityEngine.UI.CanvasScaler::m_PhysicalUnit
	int32_t ___m_PhysicalUnit_9;
	// System.Single UnityEngine.UI.CanvasScaler::m_FallbackScreenDPI
	float ___m_FallbackScreenDPI_10;
	// System.Single UnityEngine.UI.CanvasScaler::m_DefaultSpriteDPI
	float ___m_DefaultSpriteDPI_11;
	// System.Single UnityEngine.UI.CanvasScaler::m_DynamicPixelsPerUnit
	float ___m_DynamicPixelsPerUnit_12;
	// UnityEngine.Canvas UnityEngine.UI.CanvasScaler::m_Canvas
	Canvas_t3534013893 * ___m_Canvas_13;
	// System.Single UnityEngine.UI.CanvasScaler::m_PrevScaleFactor
	float ___m_PrevScaleFactor_14;
	// System.Single UnityEngine.UI.CanvasScaler::m_PrevReferencePixelsPerUnit
	float ___m_PrevReferencePixelsPerUnit_15;

public:
	inline static int32_t get_offset_of_m_UiScaleMode_3() { return static_cast<int32_t>(offsetof(CanvasScaler_t872225289, ___m_UiScaleMode_3)); }
	inline int32_t get_m_UiScaleMode_3() const { return ___m_UiScaleMode_3; }
	inline int32_t* get_address_of_m_UiScaleMode_3() { return &___m_UiScaleMode_3; }
	inline void set_m_UiScaleMode_3(int32_t value)
	{
		___m_UiScaleMode_3 = value;
	}

	inline static int32_t get_offset_of_m_ReferencePixelsPerUnit_4() { return static_cast<int32_t>(offsetof(CanvasScaler_t872225289, ___m_ReferencePixelsPerUnit_4)); }
	inline float get_m_ReferencePixelsPerUnit_4() const { return ___m_ReferencePixelsPerUnit_4; }
	inline float* get_address_of_m_ReferencePixelsPerUnit_4() { return &___m_ReferencePixelsPerUnit_4; }
	inline void set_m_ReferencePixelsPerUnit_4(float value)
	{
		___m_ReferencePixelsPerUnit_4 = value;
	}

	inline static int32_t get_offset_of_m_ScaleFactor_5() { return static_cast<int32_t>(offsetof(CanvasScaler_t872225289, ___m_ScaleFactor_5)); }
	inline float get_m_ScaleFactor_5() const { return ___m_ScaleFactor_5; }
	inline float* get_address_of_m_ScaleFactor_5() { return &___m_ScaleFactor_5; }
	inline void set_m_ScaleFactor_5(float value)
	{
		___m_ScaleFactor_5 = value;
	}

	inline static int32_t get_offset_of_m_ReferenceResolution_6() { return static_cast<int32_t>(offsetof(CanvasScaler_t872225289, ___m_ReferenceResolution_6)); }
	inline Vector2_t3525329788  get_m_ReferenceResolution_6() const { return ___m_ReferenceResolution_6; }
	inline Vector2_t3525329788 * get_address_of_m_ReferenceResolution_6() { return &___m_ReferenceResolution_6; }
	inline void set_m_ReferenceResolution_6(Vector2_t3525329788  value)
	{
		___m_ReferenceResolution_6 = value;
	}

	inline static int32_t get_offset_of_m_ScreenMatchMode_7() { return static_cast<int32_t>(offsetof(CanvasScaler_t872225289, ___m_ScreenMatchMode_7)); }
	inline int32_t get_m_ScreenMatchMode_7() const { return ___m_ScreenMatchMode_7; }
	inline int32_t* get_address_of_m_ScreenMatchMode_7() { return &___m_ScreenMatchMode_7; }
	inline void set_m_ScreenMatchMode_7(int32_t value)
	{
		___m_ScreenMatchMode_7 = value;
	}

	inline static int32_t get_offset_of_m_MatchWidthOrHeight_8() { return static_cast<int32_t>(offsetof(CanvasScaler_t872225289, ___m_MatchWidthOrHeight_8)); }
	inline float get_m_MatchWidthOrHeight_8() const { return ___m_MatchWidthOrHeight_8; }
	inline float* get_address_of_m_MatchWidthOrHeight_8() { return &___m_MatchWidthOrHeight_8; }
	inline void set_m_MatchWidthOrHeight_8(float value)
	{
		___m_MatchWidthOrHeight_8 = value;
	}

	inline static int32_t get_offset_of_m_PhysicalUnit_9() { return static_cast<int32_t>(offsetof(CanvasScaler_t872225289, ___m_PhysicalUnit_9)); }
	inline int32_t get_m_PhysicalUnit_9() const { return ___m_PhysicalUnit_9; }
	inline int32_t* get_address_of_m_PhysicalUnit_9() { return &___m_PhysicalUnit_9; }
	inline void set_m_PhysicalUnit_9(int32_t value)
	{
		___m_PhysicalUnit_9 = value;
	}

	inline static int32_t get_offset_of_m_FallbackScreenDPI_10() { return static_cast<int32_t>(offsetof(CanvasScaler_t872225289, ___m_FallbackScreenDPI_10)); }
	inline float get_m_FallbackScreenDPI_10() const { return ___m_FallbackScreenDPI_10; }
	inline float* get_address_of_m_FallbackScreenDPI_10() { return &___m_FallbackScreenDPI_10; }
	inline void set_m_FallbackScreenDPI_10(float value)
	{
		___m_FallbackScreenDPI_10 = value;
	}

	inline static int32_t get_offset_of_m_DefaultSpriteDPI_11() { return static_cast<int32_t>(offsetof(CanvasScaler_t872225289, ___m_DefaultSpriteDPI_11)); }
	inline float get_m_DefaultSpriteDPI_11() const { return ___m_DefaultSpriteDPI_11; }
	inline float* get_address_of_m_DefaultSpriteDPI_11() { return &___m_DefaultSpriteDPI_11; }
	inline void set_m_DefaultSpriteDPI_11(float value)
	{
		___m_DefaultSpriteDPI_11 = value;
	}

	inline static int32_t get_offset_of_m_DynamicPixelsPerUnit_12() { return static_cast<int32_t>(offsetof(CanvasScaler_t872225289, ___m_DynamicPixelsPerUnit_12)); }
	inline float get_m_DynamicPixelsPerUnit_12() const { return ___m_DynamicPixelsPerUnit_12; }
	inline float* get_address_of_m_DynamicPixelsPerUnit_12() { return &___m_DynamicPixelsPerUnit_12; }
	inline void set_m_DynamicPixelsPerUnit_12(float value)
	{
		___m_DynamicPixelsPerUnit_12 = value;
	}

	inline static int32_t get_offset_of_m_Canvas_13() { return static_cast<int32_t>(offsetof(CanvasScaler_t872225289, ___m_Canvas_13)); }
	inline Canvas_t3534013893 * get_m_Canvas_13() const { return ___m_Canvas_13; }
	inline Canvas_t3534013893 ** get_address_of_m_Canvas_13() { return &___m_Canvas_13; }
	inline void set_m_Canvas_13(Canvas_t3534013893 * value)
	{
		___m_Canvas_13 = value;
		Il2CppCodeGenWriteBarrier(&___m_Canvas_13, value);
	}

	inline static int32_t get_offset_of_m_PrevScaleFactor_14() { return static_cast<int32_t>(offsetof(CanvasScaler_t872225289, ___m_PrevScaleFactor_14)); }
	inline float get_m_PrevScaleFactor_14() const { return ___m_PrevScaleFactor_14; }
	inline float* get_address_of_m_PrevScaleFactor_14() { return &___m_PrevScaleFactor_14; }
	inline void set_m_PrevScaleFactor_14(float value)
	{
		___m_PrevScaleFactor_14 = value;
	}

	inline static int32_t get_offset_of_m_PrevReferencePixelsPerUnit_15() { return static_cast<int32_t>(offsetof(CanvasScaler_t872225289, ___m_PrevReferencePixelsPerUnit_15)); }
	inline float get_m_PrevReferencePixelsPerUnit_15() const { return ___m_PrevReferencePixelsPerUnit_15; }
	inline float* get_address_of_m_PrevReferencePixelsPerUnit_15() { return &___m_PrevReferencePixelsPerUnit_15; }
	inline void set_m_PrevReferencePixelsPerUnit_15(float value)
	{
		___m_PrevReferencePixelsPerUnit_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
