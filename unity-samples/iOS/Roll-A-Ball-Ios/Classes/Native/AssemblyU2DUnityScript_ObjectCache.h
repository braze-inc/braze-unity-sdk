#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t154;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t422;
// System.Object
#include "mscorlib_System_Object.h"
// ObjectCache
struct ObjectCache_t423  : public Object_t
{
	// UnityEngine.GameObject ObjectCache::prefab
	GameObject_t154 * ___prefab_0;
	// System.Int32 ObjectCache::cacheSize
	int32_t ___cacheSize_1;
	// UnityEngine.GameObject[] ObjectCache::objects
	GameObjectU5BU5D_t422* ___objects_2;
	// System.Int32 ObjectCache::cacheIndex
	int32_t ___cacheIndex_3;
};
