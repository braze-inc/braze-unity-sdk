#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioSource
struct AudioSource_t348;
// UnityEngine.AudioClip
struct AudioClip_t342;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// PlaySound
struct  PlaySound_t384  : public MonoBehaviour_t2
{
	// UnityEngine.AudioSource PlaySound::audioSource
	AudioSource_t348 * ___audioSource_2;
	// UnityEngine.AudioClip PlaySound::sound
	AudioClip_t342 * ___sound_3;
};
