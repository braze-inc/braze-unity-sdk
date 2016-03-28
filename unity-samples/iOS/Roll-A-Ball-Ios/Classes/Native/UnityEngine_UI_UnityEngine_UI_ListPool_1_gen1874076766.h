#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct ObjectPool_1_t879542160;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct UnityAction_1_t3037482479;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ListPool`1<UnityEngine.UIVertex>
struct  ListPool_1_t1874076766  : public Il2CppObject
{
public:

public:
};

struct ListPool_1_t1874076766_StaticFields
{
public:
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::s_ListPool
	ObjectPool_1_t879542160 * ___s_ListPool_0;
	// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::<>f__am$cache1
	UnityAction_1_t3037482479 * ___U3CU3Ef__amU24cache1_1;

public:
	inline static int32_t get_offset_of_s_ListPool_0() { return static_cast<int32_t>(offsetof(ListPool_1_t1874076766_StaticFields, ___s_ListPool_0)); }
	inline ObjectPool_1_t879542160 * get_s_ListPool_0() const { return ___s_ListPool_0; }
	inline ObjectPool_1_t879542160 ** get_address_of_s_ListPool_0() { return &___s_ListPool_0; }
	inline void set_s_ListPool_0(ObjectPool_1_t879542160 * value)
	{
		___s_ListPool_0 = value;
		Il2CppCodeGenWriteBarrier(&___s_ListPool_0, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_1() { return static_cast<int32_t>(offsetof(ListPool_1_t1874076766_StaticFields, ___U3CU3Ef__amU24cache1_1)); }
	inline UnityAction_1_t3037482479 * get_U3CU3Ef__amU24cache1_1() const { return ___U3CU3Ef__amU24cache1_1; }
	inline UnityAction_1_t3037482479 ** get_address_of_U3CU3Ef__amU24cache1_1() { return &___U3CU3Ef__amU24cache1_1; }
	inline void set_U3CU3Ef__amU24cache1_1(UnityAction_1_t3037482479 * value)
	{
		___U3CU3Ef__amU24cache1_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
