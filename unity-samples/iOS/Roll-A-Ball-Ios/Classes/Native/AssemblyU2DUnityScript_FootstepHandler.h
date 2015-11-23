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
// UnityEngine.PhysicMaterial
struct PhysicMaterial_t357;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "AssemblyU2DUnityScript_FootType.h"

// FootstepHandler
struct  FootstepHandler_t356  : public MonoBehaviour_t2
{
	// UnityEngine.AudioSource FootstepHandler::audioSource
	AudioSource_t348 * ___audioSource_2;
	// FootType FootstepHandler::footType
	int32_t ___footType_3;
	// UnityEngine.PhysicMaterial FootstepHandler::physicMaterial
	PhysicMaterial_t357 * ___physicMaterial_4;
};
