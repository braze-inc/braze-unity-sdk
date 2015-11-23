#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ExplosionPart[]
struct ExplosionPartU5BU5D_t339;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// EffectSequencer
struct  EffectSequencer_t332  : public MonoBehaviour_t2
{
	// ExplosionPart[] EffectSequencer::ambientEmitters
	ExplosionPartU5BU5D_t339* ___ambientEmitters_2;
	// ExplosionPart[] EffectSequencer::explosionEmitters
	ExplosionPartU5BU5D_t339* ___explosionEmitters_3;
	// ExplosionPart[] EffectSequencer::smokeEmitters
	ExplosionPartU5BU5D_t339* ___smokeEmitters_4;
	// ExplosionPart[] EffectSequencer::miscSpecialEffects
	ExplosionPartU5BU5D_t339* ___miscSpecialEffects_5;
};
