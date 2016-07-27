#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "UnityEngine_UI_UnityEngine_EventSystems_PointerInp1553882356.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.StandaloneInputModule
struct  StandaloneInputModule_t3152099756  : public PointerInputModule_t1553882356
{
public:
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_PrevActionTime
	float ___m_PrevActionTime_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_LastMoveVector
	Vector2_t3525329788  ___m_LastMoveVector_13;
	// System.Int32 UnityEngine.EventSystems.StandaloneInputModule::m_ConsecutiveMoveCount
	int32_t ___m_ConsecutiveMoveCount_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_LastMousePosition
	Vector2_t3525329788  ___m_LastMousePosition_15;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_MousePosition
	Vector2_t3525329788  ___m_MousePosition_16;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_HorizontalAxis
	String_t* ___m_HorizontalAxis_17;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_VerticalAxis
	String_t* ___m_VerticalAxis_18;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_SubmitButton
	String_t* ___m_SubmitButton_19;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_CancelButton
	String_t* ___m_CancelButton_20;
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_InputActionsPerSecond
	float ___m_InputActionsPerSecond_21;
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_RepeatDelay
	float ___m_RepeatDelay_22;
	// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::m_ForceModuleActive
	bool ___m_ForceModuleActive_23;

public:
	inline static int32_t get_offset_of_m_PrevActionTime_12() { return static_cast<int32_t>(offsetof(StandaloneInputModule_t3152099756, ___m_PrevActionTime_12)); }
	inline float get_m_PrevActionTime_12() const { return ___m_PrevActionTime_12; }
	inline float* get_address_of_m_PrevActionTime_12() { return &___m_PrevActionTime_12; }
	inline void set_m_PrevActionTime_12(float value)
	{
		___m_PrevActionTime_12 = value;
	}

	inline static int32_t get_offset_of_m_LastMoveVector_13() { return static_cast<int32_t>(offsetof(StandaloneInputModule_t3152099756, ___m_LastMoveVector_13)); }
	inline Vector2_t3525329788  get_m_LastMoveVector_13() const { return ___m_LastMoveVector_13; }
	inline Vector2_t3525329788 * get_address_of_m_LastMoveVector_13() { return &___m_LastMoveVector_13; }
	inline void set_m_LastMoveVector_13(Vector2_t3525329788  value)
	{
		___m_LastMoveVector_13 = value;
	}

	inline static int32_t get_offset_of_m_ConsecutiveMoveCount_14() { return static_cast<int32_t>(offsetof(StandaloneInputModule_t3152099756, ___m_ConsecutiveMoveCount_14)); }
	inline int32_t get_m_ConsecutiveMoveCount_14() const { return ___m_ConsecutiveMoveCount_14; }
	inline int32_t* get_address_of_m_ConsecutiveMoveCount_14() { return &___m_ConsecutiveMoveCount_14; }
	inline void set_m_ConsecutiveMoveCount_14(int32_t value)
	{
		___m_ConsecutiveMoveCount_14 = value;
	}

	inline static int32_t get_offset_of_m_LastMousePosition_15() { return static_cast<int32_t>(offsetof(StandaloneInputModule_t3152099756, ___m_LastMousePosition_15)); }
	inline Vector2_t3525329788  get_m_LastMousePosition_15() const { return ___m_LastMousePosition_15; }
	inline Vector2_t3525329788 * get_address_of_m_LastMousePosition_15() { return &___m_LastMousePosition_15; }
	inline void set_m_LastMousePosition_15(Vector2_t3525329788  value)
	{
		___m_LastMousePosition_15 = value;
	}

	inline static int32_t get_offset_of_m_MousePosition_16() { return static_cast<int32_t>(offsetof(StandaloneInputModule_t3152099756, ___m_MousePosition_16)); }
	inline Vector2_t3525329788  get_m_MousePosition_16() const { return ___m_MousePosition_16; }
	inline Vector2_t3525329788 * get_address_of_m_MousePosition_16() { return &___m_MousePosition_16; }
	inline void set_m_MousePosition_16(Vector2_t3525329788  value)
	{
		___m_MousePosition_16 = value;
	}

	inline static int32_t get_offset_of_m_HorizontalAxis_17() { return static_cast<int32_t>(offsetof(StandaloneInputModule_t3152099756, ___m_HorizontalAxis_17)); }
	inline String_t* get_m_HorizontalAxis_17() const { return ___m_HorizontalAxis_17; }
	inline String_t** get_address_of_m_HorizontalAxis_17() { return &___m_HorizontalAxis_17; }
	inline void set_m_HorizontalAxis_17(String_t* value)
	{
		___m_HorizontalAxis_17 = value;
		Il2CppCodeGenWriteBarrier(&___m_HorizontalAxis_17, value);
	}

	inline static int32_t get_offset_of_m_VerticalAxis_18() { return static_cast<int32_t>(offsetof(StandaloneInputModule_t3152099756, ___m_VerticalAxis_18)); }
	inline String_t* get_m_VerticalAxis_18() const { return ___m_VerticalAxis_18; }
	inline String_t** get_address_of_m_VerticalAxis_18() { return &___m_VerticalAxis_18; }
	inline void set_m_VerticalAxis_18(String_t* value)
	{
		___m_VerticalAxis_18 = value;
		Il2CppCodeGenWriteBarrier(&___m_VerticalAxis_18, value);
	}

	inline static int32_t get_offset_of_m_SubmitButton_19() { return static_cast<int32_t>(offsetof(StandaloneInputModule_t3152099756, ___m_SubmitButton_19)); }
	inline String_t* get_m_SubmitButton_19() const { return ___m_SubmitButton_19; }
	inline String_t** get_address_of_m_SubmitButton_19() { return &___m_SubmitButton_19; }
	inline void set_m_SubmitButton_19(String_t* value)
	{
		___m_SubmitButton_19 = value;
		Il2CppCodeGenWriteBarrier(&___m_SubmitButton_19, value);
	}

	inline static int32_t get_offset_of_m_CancelButton_20() { return static_cast<int32_t>(offsetof(StandaloneInputModule_t3152099756, ___m_CancelButton_20)); }
	inline String_t* get_m_CancelButton_20() const { return ___m_CancelButton_20; }
	inline String_t** get_address_of_m_CancelButton_20() { return &___m_CancelButton_20; }
	inline void set_m_CancelButton_20(String_t* value)
	{
		___m_CancelButton_20 = value;
		Il2CppCodeGenWriteBarrier(&___m_CancelButton_20, value);
	}

	inline static int32_t get_offset_of_m_InputActionsPerSecond_21() { return static_cast<int32_t>(offsetof(StandaloneInputModule_t3152099756, ___m_InputActionsPerSecond_21)); }
	inline float get_m_InputActionsPerSecond_21() const { return ___m_InputActionsPerSecond_21; }
	inline float* get_address_of_m_InputActionsPerSecond_21() { return &___m_InputActionsPerSecond_21; }
	inline void set_m_InputActionsPerSecond_21(float value)
	{
		___m_InputActionsPerSecond_21 = value;
	}

	inline static int32_t get_offset_of_m_RepeatDelay_22() { return static_cast<int32_t>(offsetof(StandaloneInputModule_t3152099756, ___m_RepeatDelay_22)); }
	inline float get_m_RepeatDelay_22() const { return ___m_RepeatDelay_22; }
	inline float* get_address_of_m_RepeatDelay_22() { return &___m_RepeatDelay_22; }
	inline void set_m_RepeatDelay_22(float value)
	{
		___m_RepeatDelay_22 = value;
	}

	inline static int32_t get_offset_of_m_ForceModuleActive_23() { return static_cast<int32_t>(offsetof(StandaloneInputModule_t3152099756, ___m_ForceModuleActive_23)); }
	inline bool get_m_ForceModuleActive_23() const { return ___m_ForceModuleActive_23; }
	inline bool* get_address_of_m_ForceModuleActive_23() { return &___m_ForceModuleActive_23; }
	inline void set_m_ForceModuleActive_23(bool value)
	{
		___m_ForceModuleActive_23 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
