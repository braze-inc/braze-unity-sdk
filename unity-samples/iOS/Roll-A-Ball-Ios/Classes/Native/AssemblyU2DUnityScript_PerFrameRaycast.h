#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t258;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_RaycastHit.h"

// PerFrameRaycast
struct  PerFrameRaycast_t376  : public MonoBehaviour_t2
{
	// UnityEngine.RaycastHit PerFrameRaycast::hitInfo
	RaycastHit_t407  ___hitInfo_2;
	// UnityEngine.Transform PerFrameRaycast::tr
	Transform_t258 * ___tr_3;
};
