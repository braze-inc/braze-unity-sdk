#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3499186955;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ObjectCache
struct  ObjectCache_t364245859  : public Il2CppObject
{
public:
	// UnityEngine.GameObject ObjectCache::prefab
	GameObject_t4012695102 * ___prefab_0;
	// System.Int32 ObjectCache::cacheSize
	int32_t ___cacheSize_1;
	// UnityEngine.GameObject[] ObjectCache::objects
	GameObjectU5BU5D_t3499186955* ___objects_2;
	// System.Int32 ObjectCache::cacheIndex
	int32_t ___cacheIndex_3;

public:
	inline static int32_t get_offset_of_prefab_0() { return static_cast<int32_t>(offsetof(ObjectCache_t364245859, ___prefab_0)); }
	inline GameObject_t4012695102 * get_prefab_0() const { return ___prefab_0; }
	inline GameObject_t4012695102 ** get_address_of_prefab_0() { return &___prefab_0; }
	inline void set_prefab_0(GameObject_t4012695102 * value)
	{
		___prefab_0 = value;
		Il2CppCodeGenWriteBarrier(&___prefab_0, value);
	}

	inline static int32_t get_offset_of_cacheSize_1() { return static_cast<int32_t>(offsetof(ObjectCache_t364245859, ___cacheSize_1)); }
	inline int32_t get_cacheSize_1() const { return ___cacheSize_1; }
	inline int32_t* get_address_of_cacheSize_1() { return &___cacheSize_1; }
	inline void set_cacheSize_1(int32_t value)
	{
		___cacheSize_1 = value;
	}

	inline static int32_t get_offset_of_objects_2() { return static_cast<int32_t>(offsetof(ObjectCache_t364245859, ___objects_2)); }
	inline GameObjectU5BU5D_t3499186955* get_objects_2() const { return ___objects_2; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_objects_2() { return &___objects_2; }
	inline void set_objects_2(GameObjectU5BU5D_t3499186955* value)
	{
		___objects_2 = value;
		Il2CppCodeGenWriteBarrier(&___objects_2, value);
	}

	inline static int32_t get_offset_of_cacheIndex_3() { return static_cast<int32_t>(offsetof(ObjectCache_t364245859, ___cacheIndex_3)); }
	inline int32_t get_cacheIndex_3() const { return ___cacheIndex_3; }
	inline int32_t* get_address_of_cacheIndex_3() { return &___cacheIndex_3; }
	inline void set_cacheIndex_3(int32_t value)
	{
		___cacheIndex_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
