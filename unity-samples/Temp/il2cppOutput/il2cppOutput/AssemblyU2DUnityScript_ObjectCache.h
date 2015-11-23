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
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t379;

#include "mscorlib_System_Object.h"

// ObjectCache
struct  ObjectCache_t378  : public Object_t
{
	// UnityEngine.GameObject ObjectCache::prefab
	GameObject_t141 * ___prefab_0;
	// System.Int32 ObjectCache::cacheSize
	int32_t ___cacheSize_1;
	// UnityEngine.GameObject[] ObjectCache::objects
	GameObjectU5BU5D_t379* ___objects_2;
	// System.Int32 ObjectCache::cacheIndex
	int32_t ___cacheIndex_3;
};
