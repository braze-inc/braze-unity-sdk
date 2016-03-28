#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ExplosionPart[]
struct ExplosionPartU5BU5D_t95108185;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EffectSequencer
struct  EffectSequencer_t3264598560  : public MonoBehaviour_t3012272455
{
public:
	// ExplosionPart[] EffectSequencer::ambientEmitters
	ExplosionPartU5BU5D_t95108185* ___ambientEmitters_2;
	// ExplosionPart[] EffectSequencer::explosionEmitters
	ExplosionPartU5BU5D_t95108185* ___explosionEmitters_3;
	// ExplosionPart[] EffectSequencer::smokeEmitters
	ExplosionPartU5BU5D_t95108185* ___smokeEmitters_4;
	// ExplosionPart[] EffectSequencer::miscSpecialEffects
	ExplosionPartU5BU5D_t95108185* ___miscSpecialEffects_5;

public:
	inline static int32_t get_offset_of_ambientEmitters_2() { return static_cast<int32_t>(offsetof(EffectSequencer_t3264598560, ___ambientEmitters_2)); }
	inline ExplosionPartU5BU5D_t95108185* get_ambientEmitters_2() const { return ___ambientEmitters_2; }
	inline ExplosionPartU5BU5D_t95108185** get_address_of_ambientEmitters_2() { return &___ambientEmitters_2; }
	inline void set_ambientEmitters_2(ExplosionPartU5BU5D_t95108185* value)
	{
		___ambientEmitters_2 = value;
		Il2CppCodeGenWriteBarrier(&___ambientEmitters_2, value);
	}

	inline static int32_t get_offset_of_explosionEmitters_3() { return static_cast<int32_t>(offsetof(EffectSequencer_t3264598560, ___explosionEmitters_3)); }
	inline ExplosionPartU5BU5D_t95108185* get_explosionEmitters_3() const { return ___explosionEmitters_3; }
	inline ExplosionPartU5BU5D_t95108185** get_address_of_explosionEmitters_3() { return &___explosionEmitters_3; }
	inline void set_explosionEmitters_3(ExplosionPartU5BU5D_t95108185* value)
	{
		___explosionEmitters_3 = value;
		Il2CppCodeGenWriteBarrier(&___explosionEmitters_3, value);
	}

	inline static int32_t get_offset_of_smokeEmitters_4() { return static_cast<int32_t>(offsetof(EffectSequencer_t3264598560, ___smokeEmitters_4)); }
	inline ExplosionPartU5BU5D_t95108185* get_smokeEmitters_4() const { return ___smokeEmitters_4; }
	inline ExplosionPartU5BU5D_t95108185** get_address_of_smokeEmitters_4() { return &___smokeEmitters_4; }
	inline void set_smokeEmitters_4(ExplosionPartU5BU5D_t95108185* value)
	{
		___smokeEmitters_4 = value;
		Il2CppCodeGenWriteBarrier(&___smokeEmitters_4, value);
	}

	inline static int32_t get_offset_of_miscSpecialEffects_5() { return static_cast<int32_t>(offsetof(EffectSequencer_t3264598560, ___miscSpecialEffects_5)); }
	inline ExplosionPartU5BU5D_t95108185* get_miscSpecialEffects_5() const { return ___miscSpecialEffects_5; }
	inline ExplosionPartU5BU5D_t95108185** get_address_of_miscSpecialEffects_5() { return &___miscSpecialEffects_5; }
	inline void set_miscSpecialEffects_5(ExplosionPartU5BU5D_t95108185* value)
	{
		___miscSpecialEffects_5 = value;
		Il2CppCodeGenWriteBarrier(&___miscSpecialEffects_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
