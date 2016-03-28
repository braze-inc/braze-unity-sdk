#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Collider2D
struct Collider2D_t1890038195;

#include "mscorlib_System_ValueType4014882752.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ContactPoint2D
struct  ContactPoint2D_t3963746319 
{
public:
	// UnityEngine.Vector2 UnityEngine.ContactPoint2D::m_Point
	Vector2_t3525329788  ___m_Point_0;
	// UnityEngine.Vector2 UnityEngine.ContactPoint2D::m_Normal
	Vector2_t3525329788  ___m_Normal_1;
	// UnityEngine.Collider2D UnityEngine.ContactPoint2D::m_Collider
	Collider2D_t1890038195 * ___m_Collider_2;
	// UnityEngine.Collider2D UnityEngine.ContactPoint2D::m_OtherCollider
	Collider2D_t1890038195 * ___m_OtherCollider_3;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3963746319, ___m_Point_0)); }
	inline Vector2_t3525329788  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector2_t3525329788 * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector2_t3525329788  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3963746319, ___m_Normal_1)); }
	inline Vector2_t3525329788  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector2_t3525329788 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector2_t3525329788  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_Collider_2() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3963746319, ___m_Collider_2)); }
	inline Collider2D_t1890038195 * get_m_Collider_2() const { return ___m_Collider_2; }
	inline Collider2D_t1890038195 ** get_address_of_m_Collider_2() { return &___m_Collider_2; }
	inline void set_m_Collider_2(Collider2D_t1890038195 * value)
	{
		___m_Collider_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_Collider_2, value);
	}

	inline static int32_t get_offset_of_m_OtherCollider_3() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3963746319, ___m_OtherCollider_3)); }
	inline Collider2D_t1890038195 * get_m_OtherCollider_3() const { return ___m_OtherCollider_3; }
	inline Collider2D_t1890038195 ** get_address_of_m_OtherCollider_3() { return &___m_OtherCollider_3; }
	inline void set_m_OtherCollider_3(Collider2D_t1890038195 * value)
	{
		___m_OtherCollider_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_OtherCollider_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
