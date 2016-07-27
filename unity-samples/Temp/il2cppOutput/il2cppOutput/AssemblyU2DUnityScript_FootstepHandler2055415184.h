#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioSource
struct AudioSource_t3628549054;
// UnityEngine.PhysicMaterial
struct PhysicMaterial_t4182154592;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "AssemblyU2DUnityScript_FootType458919144.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FootstepHandler
struct  FootstepHandler_t2055415184  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.AudioSource FootstepHandler::audioSource
	AudioSource_t3628549054 * ___audioSource_2;
	// FootType FootstepHandler::footType
	int32_t ___footType_3;
	// UnityEngine.PhysicMaterial FootstepHandler::physicMaterial
	PhysicMaterial_t4182154592 * ___physicMaterial_4;

public:
	inline static int32_t get_offset_of_audioSource_2() { return static_cast<int32_t>(offsetof(FootstepHandler_t2055415184, ___audioSource_2)); }
	inline AudioSource_t3628549054 * get_audioSource_2() const { return ___audioSource_2; }
	inline AudioSource_t3628549054 ** get_address_of_audioSource_2() { return &___audioSource_2; }
	inline void set_audioSource_2(AudioSource_t3628549054 * value)
	{
		___audioSource_2 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_2, value);
	}

	inline static int32_t get_offset_of_footType_3() { return static_cast<int32_t>(offsetof(FootstepHandler_t2055415184, ___footType_3)); }
	inline int32_t get_footType_3() const { return ___footType_3; }
	inline int32_t* get_address_of_footType_3() { return &___footType_3; }
	inline void set_footType_3(int32_t value)
	{
		___footType_3 = value;
	}

	inline static int32_t get_offset_of_physicMaterial_4() { return static_cast<int32_t>(offsetof(FootstepHandler_t2055415184, ___physicMaterial_4)); }
	inline PhysicMaterial_t4182154592 * get_physicMaterial_4() const { return ___physicMaterial_4; }
	inline PhysicMaterial_t4182154592 ** get_address_of_physicMaterial_4() { return &___physicMaterial_4; }
	inline void set_physicMaterial_4(PhysicMaterial_t4182154592 * value)
	{
		___physicMaterial_4 = value;
		Il2CppCodeGenWriteBarrier(&___physicMaterial_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
