#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "AssemblyU2DUnityScript_MovementMotor3089009894.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FreeMovementMotor
struct  FreeMovementMotor_t3382150618  : public MovementMotor_t3089009894
{
public:
	// System.Single FreeMovementMotor::walkingSpeed
	float ___walkingSpeed_5;
	// System.Single FreeMovementMotor::walkingSnappyness
	float ___walkingSnappyness_6;
	// System.Single FreeMovementMotor::turningSmoothing
	float ___turningSmoothing_7;

public:
	inline static int32_t get_offset_of_walkingSpeed_5() { return static_cast<int32_t>(offsetof(FreeMovementMotor_t3382150618, ___walkingSpeed_5)); }
	inline float get_walkingSpeed_5() const { return ___walkingSpeed_5; }
	inline float* get_address_of_walkingSpeed_5() { return &___walkingSpeed_5; }
	inline void set_walkingSpeed_5(float value)
	{
		___walkingSpeed_5 = value;
	}

	inline static int32_t get_offset_of_walkingSnappyness_6() { return static_cast<int32_t>(offsetof(FreeMovementMotor_t3382150618, ___walkingSnappyness_6)); }
	inline float get_walkingSnappyness_6() const { return ___walkingSnappyness_6; }
	inline float* get_address_of_walkingSnappyness_6() { return &___walkingSnappyness_6; }
	inline void set_walkingSnappyness_6(float value)
	{
		___walkingSnappyness_6 = value;
	}

	inline static int32_t get_offset_of_turningSmoothing_7() { return static_cast<int32_t>(offsetof(FreeMovementMotor_t3382150618, ___turningSmoothing_7)); }
	inline float get_turningSmoothing_7() const { return ___turningSmoothing_7; }
	inline float* get_address_of_turningSmoothing_7() { return &___turningSmoothing_7; }
	inline void set_turningSmoothing_7(float value)
	{
		___turningSmoothing_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
