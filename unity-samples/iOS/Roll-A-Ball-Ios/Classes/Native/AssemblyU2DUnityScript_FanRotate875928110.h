#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Mesh
struct Mesh_t1525280346;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t2741383957;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FanRotate
struct  FanRotate_t875928110  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Mesh FanRotate::thisMesh
	Mesh_t1525280346 * ___thisMesh_2;
	// UnityEngine.Vector2[] FanRotate::uvs
	Vector2U5BU5D_t2741383957* ___uvs_3;

public:
	inline static int32_t get_offset_of_thisMesh_2() { return static_cast<int32_t>(offsetof(FanRotate_t875928110, ___thisMesh_2)); }
	inline Mesh_t1525280346 * get_thisMesh_2() const { return ___thisMesh_2; }
	inline Mesh_t1525280346 ** get_address_of_thisMesh_2() { return &___thisMesh_2; }
	inline void set_thisMesh_2(Mesh_t1525280346 * value)
	{
		___thisMesh_2 = value;
		Il2CppCodeGenWriteBarrier(&___thisMesh_2, value);
	}

	inline static int32_t get_offset_of_uvs_3() { return static_cast<int32_t>(offsetof(FanRotate_t875928110, ___uvs_3)); }
	inline Vector2U5BU5D_t2741383957* get_uvs_3() const { return ___uvs_3; }
	inline Vector2U5BU5D_t2741383957** get_address_of_uvs_3() { return &___uvs_3; }
	inline void set_uvs_3(Vector2U5BU5D_t2741383957* value)
	{
		___uvs_3 = value;
		Il2CppCodeGenWriteBarrier(&___uvs_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
