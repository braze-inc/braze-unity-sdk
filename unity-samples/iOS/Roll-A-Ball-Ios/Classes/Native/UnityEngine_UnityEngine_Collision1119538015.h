#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody
struct Rigidbody_t1972007546;
// UnityEngine.Collider
struct Collider_t955670625;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t1988025008;

#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collision
struct  Collision_t1119538015  : public Il2CppObject
{
public:
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t3525329789  ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t3525329789  ___m_RelativeVelocity_1;
	// UnityEngine.Rigidbody UnityEngine.Collision::m_Rigidbody
	Rigidbody_t1972007546 * ___m_Rigidbody_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t955670625 * ___m_Collider_3;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_Contacts
	ContactPointU5BU5D_t1988025008* ___m_Contacts_4;

public:
	inline static int32_t get_offset_of_m_Impulse_0() { return static_cast<int32_t>(offsetof(Collision_t1119538015, ___m_Impulse_0)); }
	inline Vector3_t3525329789  get_m_Impulse_0() const { return ___m_Impulse_0; }
	inline Vector3_t3525329789 * get_address_of_m_Impulse_0() { return &___m_Impulse_0; }
	inline void set_m_Impulse_0(Vector3_t3525329789  value)
	{
		___m_Impulse_0 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_1() { return static_cast<int32_t>(offsetof(Collision_t1119538015, ___m_RelativeVelocity_1)); }
	inline Vector3_t3525329789  get_m_RelativeVelocity_1() const { return ___m_RelativeVelocity_1; }
	inline Vector3_t3525329789 * get_address_of_m_RelativeVelocity_1() { return &___m_RelativeVelocity_1; }
	inline void set_m_RelativeVelocity_1(Vector3_t3525329789  value)
	{
		___m_RelativeVelocity_1 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_2() { return static_cast<int32_t>(offsetof(Collision_t1119538015, ___m_Rigidbody_2)); }
	inline Rigidbody_t1972007546 * get_m_Rigidbody_2() const { return ___m_Rigidbody_2; }
	inline Rigidbody_t1972007546 ** get_address_of_m_Rigidbody_2() { return &___m_Rigidbody_2; }
	inline void set_m_Rigidbody_2(Rigidbody_t1972007546 * value)
	{
		___m_Rigidbody_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_Rigidbody_2, value);
	}

	inline static int32_t get_offset_of_m_Collider_3() { return static_cast<int32_t>(offsetof(Collision_t1119538015, ___m_Collider_3)); }
	inline Collider_t955670625 * get_m_Collider_3() const { return ___m_Collider_3; }
	inline Collider_t955670625 ** get_address_of_m_Collider_3() { return &___m_Collider_3; }
	inline void set_m_Collider_3(Collider_t955670625 * value)
	{
		___m_Collider_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_Collider_3, value);
	}

	inline static int32_t get_offset_of_m_Contacts_4() { return static_cast<int32_t>(offsetof(Collision_t1119538015, ___m_Contacts_4)); }
	inline ContactPointU5BU5D_t1988025008* get_m_Contacts_4() const { return ___m_Contacts_4; }
	inline ContactPointU5BU5D_t1988025008** get_address_of_m_Contacts_4() { return &___m_Contacts_4; }
	inline void set_m_Contacts_4(ContactPointU5BU5D_t1988025008* value)
	{
		___m_Contacts_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_Contacts_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
