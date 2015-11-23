#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t141;
// SignalSender
struct SignalSender_t361;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// SpawnObject
struct  SpawnObject_t390  : public MonoBehaviour_t2
{
	// UnityEngine.GameObject SpawnObject::objectToSpawn
	GameObject_t141 * ___objectToSpawn_2;
	// SignalSender SpawnObject::onDestroyedSignals
	SignalSender_t361 * ___onDestroyedSignals_3;
	// UnityEngine.GameObject SpawnObject::spawned
	GameObject_t141 * ___spawned_4;
};
