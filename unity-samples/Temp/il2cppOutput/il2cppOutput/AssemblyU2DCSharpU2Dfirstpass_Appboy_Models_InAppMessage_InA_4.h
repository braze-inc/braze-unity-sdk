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
struct List_1_t56;

#include "AssemblyU2DCSharpU2Dfirstpass_Appboy_Models_InAppMessage_InA.h"
#include "mscorlib_System_Nullable_1_gen.h"

// Appboy.Models.InAppMessage.InAppMessageImmersiveBase
struct  InAppMessageImmersiveBase_t55  : public InAppMessageBase_t48
{
	// System.Boolean Appboy.Models.InAppMessage.InAppMessageImmersiveBase::_buttonClickLogged
	bool ____buttonClickLogged_16;
	// System.String Appboy.Models.InAppMessage.InAppMessageImmersiveBase::<Header>k__BackingField
	String_t* ___U3CHeaderU3Ek__BackingField_17;
	// System.Nullable`1<UnityEngine.Color> Appboy.Models.InAppMessage.InAppMessageImmersiveBase::<HeaderTextColor>k__BackingField
	Nullable_1_t49  ___U3CHeaderTextColorU3Ek__BackingField_18;
	// System.Nullable`1<UnityEngine.Color> Appboy.Models.InAppMessage.InAppMessageImmersiveBase::<CloseButtonColor>k__BackingField
	Nullable_1_t49  ___U3CCloseButtonColorU3Ek__BackingField_19;
	// System.Collections.Generic.List`1<Appboy.Models.InAppMessage.InAppMessageButton> Appboy.Models.InAppMessage.InAppMessageImmersiveBase::<Buttons>k__BackingField
	List_1_t56 * ___U3CButtonsU3Ek__BackingField_20;
};
