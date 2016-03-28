#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera
struct Camera_t3533968274;
// System.Comparison`1<UnityEngine.RaycastHit>
struct Comparison_1_t2749896403;

#include "UnityEngine_UI_UnityEngine_EventSystems_BaseRaycas3819875680.h"
#include "UnityEngine_UnityEngine_LayerMask1862190090.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.PhysicsRaycaster
struct  PhysicsRaycaster_t2526406378  : public BaseRaycaster_t3819875680
{
public:
	// UnityEngine.Camera UnityEngine.EventSystems.PhysicsRaycaster::m_EventCamera
	Camera_t3533968274 * ___m_EventCamera_3;
	// UnityEngine.LayerMask UnityEngine.EventSystems.PhysicsRaycaster::m_EventMask
	LayerMask_t1862190090  ___m_EventMask_4;

public:
	inline static int32_t get_offset_of_m_EventCamera_3() { return static_cast<int32_t>(offsetof(PhysicsRaycaster_t2526406378, ___m_EventCamera_3)); }
	inline Camera_t3533968274 * get_m_EventCamera_3() const { return ___m_EventCamera_3; }
	inline Camera_t3533968274 ** get_address_of_m_EventCamera_3() { return &___m_EventCamera_3; }
	inline void set_m_EventCamera_3(Camera_t3533968274 * value)
	{
		___m_EventCamera_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_EventCamera_3, value);
	}

	inline static int32_t get_offset_of_m_EventMask_4() { return static_cast<int32_t>(offsetof(PhysicsRaycaster_t2526406378, ___m_EventMask_4)); }
	inline LayerMask_t1862190090  get_m_EventMask_4() const { return ___m_EventMask_4; }
	inline LayerMask_t1862190090 * get_address_of_m_EventMask_4() { return &___m_EventMask_4; }
	inline void set_m_EventMask_4(LayerMask_t1862190090  value)
	{
		___m_EventMask_4 = value;
	}
};

struct PhysicsRaycaster_t2526406378_StaticFields
{
public:
	// System.Comparison`1<UnityEngine.RaycastHit> UnityEngine.EventSystems.PhysicsRaycaster::<>f__am$cache2
	Comparison_1_t2749896403 * ___U3CU3Ef__amU24cache2_5;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_5() { return static_cast<int32_t>(offsetof(PhysicsRaycaster_t2526406378_StaticFields, ___U3CU3Ef__amU24cache2_5)); }
	inline Comparison_1_t2749896403 * get_U3CU3Ef__amU24cache2_5() const { return ___U3CU3Ef__amU24cache2_5; }
	inline Comparison_1_t2749896403 ** get_address_of_U3CU3Ef__amU24cache2_5() { return &___U3CU3Ef__amU24cache2_5; }
	inline void set_U3CU3Ef__amU24cache2_5(Comparison_1_t2749896403 * value)
	{
		___U3CU3Ef__amU24cache2_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache2_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
