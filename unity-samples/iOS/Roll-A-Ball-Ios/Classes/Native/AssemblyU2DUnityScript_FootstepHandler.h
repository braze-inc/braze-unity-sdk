#pragma once
#include <stdint.h>
// UnityEngine.AudioSource
struct AudioSource_t378;
// UnityEngine.PhysicMaterial
struct PhysicMaterial_t387;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// FootType
#include "AssemblyU2DUnityScript_FootType.h"
// FootstepHandler
struct FootstepHandler_t388  : public MonoBehaviour_t2
{
	// UnityEngine.AudioSource FootstepHandler::audioSource
	AudioSource_t378 * ___audioSource_2;
	// FootType FootstepHandler::footType
	int32_t ___footType_3;
	// UnityEngine.PhysicMaterial FootstepHandler::physicMaterial
	PhysicMaterial_t387 * ___physicMaterial_4;
};
