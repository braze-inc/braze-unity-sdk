#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MovementMotor
struct  MovementMotor_t3089009894  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Vector3 MovementMotor::movementDirection
	Vector3_t3525329789  ___movementDirection_2;
	// UnityEngine.Vector3 MovementMotor::movementTarget
	Vector3_t3525329789  ___movementTarget_3;
	// UnityEngine.Vector3 MovementMotor::facingDirection
	Vector3_t3525329789  ___facingDirection_4;

public:
	inline static int32_t get_offset_of_movementDirection_2() { return static_cast<int32_t>(offsetof(MovementMotor_t3089009894, ___movementDirection_2)); }
	inline Vector3_t3525329789  get_movementDirection_2() const { return ___movementDirection_2; }
	inline Vector3_t3525329789 * get_address_of_movementDirection_2() { return &___movementDirection_2; }
	inline void set_movementDirection_2(Vector3_t3525329789  value)
	{
		___movementDirection_2 = value;
	}

	inline static int32_t get_offset_of_movementTarget_3() { return static_cast<int32_t>(offsetof(MovementMotor_t3089009894, ___movementTarget_3)); }
	inline Vector3_t3525329789  get_movementTarget_3() const { return ___movementTarget_3; }
	inline Vector3_t3525329789 * get_address_of_movementTarget_3() { return &___movementTarget_3; }
	inline void set_movementTarget_3(Vector3_t3525329789  value)
	{
		___movementTarget_3 = value;
	}

	inline static int32_t get_offset_of_facingDirection_4() { return static_cast<int32_t>(offsetof(MovementMotor_t3089009894, ___facingDirection_4)); }
	inline Vector3_t3525329789  get_facingDirection_4() const { return ___facingDirection_4; }
	inline Vector3_t3525329789 * get_address_of_facingDirection_4() { return &___facingDirection_4; }
	inline void set_facingDirection_4(Vector3_t3525329789  value)
	{
		___facingDirection_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
