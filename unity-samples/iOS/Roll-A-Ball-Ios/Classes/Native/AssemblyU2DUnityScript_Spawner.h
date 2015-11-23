#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Spawner
struct Spawner_t380;
// ObjectCache[]
struct ObjectCacheU5BU5D_t381;
// System.Collections.Hashtable
struct Hashtable_t382;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// Spawner
struct  Spawner_t380  : public MonoBehaviour_t2
{
	// ObjectCache[] Spawner::caches
	ObjectCacheU5BU5D_t381* ___caches_3;
	// System.Collections.Hashtable Spawner::activeCachedObjects
	Hashtable_t382 * ___activeCachedObjects_4;
};
struct Spawner_t380_StaticFields{
	// Spawner Spawner::spawner
	Spawner_t380 * ___spawner_2;
};
