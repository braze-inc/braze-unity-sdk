#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t140;
// SignalSender
struct SignalSender_t392;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// SpawnObject
struct SpawnObject_t423  : public MonoBehaviour_t2
{
	// UnityEngine.GameObject SpawnObject::objectToSpawn
	GameObject_t140 * ___objectToSpawn_2;
	// SignalSender SpawnObject::onDestroyedSignals
	SignalSender_t392 * ___onDestroyedSignals_3;
	// UnityEngine.GameObject SpawnObject::spawned
	GameObject_t140 * ___spawned_4;
};
