#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera/CameraCallback
struct CameraCallback_t1908940458;

#include "UnityEngine_UnityEngine_Behaviour3120504042.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera
struct  Camera_t3533968274  : public Behaviour_t3120504042
{
public:

public:
};

struct Camera_t3533968274_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t1908940458 * ___onPreCull_2;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t1908940458 * ___onPreRender_3;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t1908940458 * ___onPostRender_4;

public:
	inline static int32_t get_offset_of_onPreCull_2() { return static_cast<int32_t>(offsetof(Camera_t3533968274_StaticFields, ___onPreCull_2)); }
	inline CameraCallback_t1908940458 * get_onPreCull_2() const { return ___onPreCull_2; }
	inline CameraCallback_t1908940458 ** get_address_of_onPreCull_2() { return &___onPreCull_2; }
	inline void set_onPreCull_2(CameraCallback_t1908940458 * value)
	{
		___onPreCull_2 = value;
		Il2CppCodeGenWriteBarrier(&___onPreCull_2, value);
	}

	inline static int32_t get_offset_of_onPreRender_3() { return static_cast<int32_t>(offsetof(Camera_t3533968274_StaticFields, ___onPreRender_3)); }
	inline CameraCallback_t1908940458 * get_onPreRender_3() const { return ___onPreRender_3; }
	inline CameraCallback_t1908940458 ** get_address_of_onPreRender_3() { return &___onPreRender_3; }
	inline void set_onPreRender_3(CameraCallback_t1908940458 * value)
	{
		___onPreRender_3 = value;
		Il2CppCodeGenWriteBarrier(&___onPreRender_3, value);
	}

	inline static int32_t get_offset_of_onPostRender_4() { return static_cast<int32_t>(offsetof(Camera_t3533968274_StaticFields, ___onPostRender_4)); }
	inline CameraCallback_t1908940458 * get_onPostRender_4() const { return ___onPostRender_4; }
	inline CameraCallback_t1908940458 ** get_address_of_onPostRender_4() { return &___onPostRender_4; }
	inline void set_onPostRender_4(CameraCallback_t1908940458 * value)
	{
		___onPostRender_4 = value;
		Il2CppCodeGenWriteBarrier(&___onPostRender_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
