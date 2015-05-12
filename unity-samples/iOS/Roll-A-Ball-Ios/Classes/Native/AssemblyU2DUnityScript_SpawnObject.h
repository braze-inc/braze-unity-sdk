#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t154;
// SignalSender
struct SignalSender_t404;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// SpawnObject
struct SpawnObject_t435  : public MonoBehaviour_t2
{
	// UnityEngine.GameObject SpawnObject::objectToSpawn
	GameObject_t154 * ___objectToSpawn_2;
	// SignalSender SpawnObject::onDestroyedSignals
	SignalSender_t404 * ___onDestroyedSignals_3;
	// UnityEngine.GameObject SpawnObject::spawned
	GameObject_t154 * ___spawned_4;
};
