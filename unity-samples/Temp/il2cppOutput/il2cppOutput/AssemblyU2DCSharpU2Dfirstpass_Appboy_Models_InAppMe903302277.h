#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Collections.Generic.List`1<Appboy.Models.InAppMessage.InAppMessageButton>
struct List_1_t2988912186;

#include "AssemblyU2DCSharpU2Dfirstpass_Appboy_Models_InAppM3719617440.h"
#include "mscorlib_System_Nullable_1_gen179246372.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Appboy.Models.InAppMessage.InAppMessageImmersiveBase
struct  InAppMessageImmersiveBase_t903302277  : public InAppMessageBase_t3719617440
{
public:
	// System.Boolean Appboy.Models.InAppMessage.InAppMessageImmersiveBase::_buttonClickLogged
	bool ____buttonClickLogged_16;
	// System.String Appboy.Models.InAppMessage.InAppMessageImmersiveBase::<Header>k__BackingField
	String_t* ___U3CHeaderU3Ek__BackingField_17;
	// System.Nullable`1<UnityEngine.Color> Appboy.Models.InAppMessage.InAppMessageImmersiveBase::<HeaderTextColor>k__BackingField
	Nullable_1_t179246372  ___U3CHeaderTextColorU3Ek__BackingField_18;
	// System.Nullable`1<UnityEngine.Color> Appboy.Models.InAppMessage.InAppMessageImmersiveBase::<CloseButtonColor>k__BackingField
	Nullable_1_t179246372  ___U3CCloseButtonColorU3Ek__BackingField_19;
	// System.Collections.Generic.List`1<Appboy.Models.InAppMessage.InAppMessageButton> Appboy.Models.InAppMessage.InAppMessageImmersiveBase::<Buttons>k__BackingField
	List_1_t2988912186 * ___U3CButtonsU3Ek__BackingField_20;

public:
	inline static int32_t get_offset_of__buttonClickLogged_16() { return static_cast<int32_t>(offsetof(InAppMessageImmersiveBase_t903302277, ____buttonClickLogged_16)); }
	inline bool get__buttonClickLogged_16() const { return ____buttonClickLogged_16; }
	inline bool* get_address_of__buttonClickLogged_16() { return &____buttonClickLogged_16; }
	inline void set__buttonClickLogged_16(bool value)
	{
		____buttonClickLogged_16 = value;
	}

	inline static int32_t get_offset_of_U3CHeaderU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(InAppMessageImmersiveBase_t903302277, ___U3CHeaderU3Ek__BackingField_17)); }
	inline String_t* get_U3CHeaderU3Ek__BackingField_17() const { return ___U3CHeaderU3Ek__BackingField_17; }
	inline String_t** get_address_of_U3CHeaderU3Ek__BackingField_17() { return &___U3CHeaderU3Ek__BackingField_17; }
	inline void set_U3CHeaderU3Ek__BackingField_17(String_t* value)
	{
		___U3CHeaderU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier(&___U3CHeaderU3Ek__BackingField_17, value);
	}

	inline static int32_t get_offset_of_U3CHeaderTextColorU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(InAppMessageImmersiveBase_t903302277, ___U3CHeaderTextColorU3Ek__BackingField_18)); }
	inline Nullable_1_t179246372  get_U3CHeaderTextColorU3Ek__BackingField_18() const { return ___U3CHeaderTextColorU3Ek__BackingField_18; }
	inline Nullable_1_t179246372 * get_address_of_U3CHeaderTextColorU3Ek__BackingField_18() { return &___U3CHeaderTextColorU3Ek__BackingField_18; }
	inline void set_U3CHeaderTextColorU3Ek__BackingField_18(Nullable_1_t179246372  value)
	{
		___U3CHeaderTextColorU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CCloseButtonColorU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(InAppMessageImmersiveBase_t903302277, ___U3CCloseButtonColorU3Ek__BackingField_19)); }
	inline Nullable_1_t179246372  get_U3CCloseButtonColorU3Ek__BackingField_19() const { return ___U3CCloseButtonColorU3Ek__BackingField_19; }
	inline Nullable_1_t179246372 * get_address_of_U3CCloseButtonColorU3Ek__BackingField_19() { return &___U3CCloseButtonColorU3Ek__BackingField_19; }
	inline void set_U3CCloseButtonColorU3Ek__BackingField_19(Nullable_1_t179246372  value)
	{
		___U3CCloseButtonColorU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CButtonsU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(InAppMessageImmersiveBase_t903302277, ___U3CButtonsU3Ek__BackingField_20)); }
	inline List_1_t2988912186 * get_U3CButtonsU3Ek__BackingField_20() const { return ___U3CButtonsU3Ek__BackingField_20; }
	inline List_1_t2988912186 ** get_address_of_U3CButtonsU3Ek__BackingField_20() { return &___U3CButtonsU3Ek__BackingField_20; }
	inline void set_U3CButtonsU3Ek__BackingField_20(List_1_t2988912186 * value)
	{
		___U3CButtonsU3Ek__BackingField_20 = value;
		Il2CppCodeGenWriteBarrier(&___U3CButtonsU3Ek__BackingField_20, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
