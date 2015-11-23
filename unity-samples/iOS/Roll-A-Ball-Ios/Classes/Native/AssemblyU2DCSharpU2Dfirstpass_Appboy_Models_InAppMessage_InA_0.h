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

#include "mscorlib_System_Object.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Appboy_Models_ClickAction.h"
#include "mscorlib_System_Nullable_1_gen.h"

// Appboy.Models.InAppMessage.InAppMessageButton
struct  InAppMessageButton_t51  : public Object_t
{
	// System.Int32 Appboy.Models.InAppMessage.InAppMessageButton::<ButtonID>k__BackingField
	int32_t ___U3CButtonIDU3Ek__BackingField_0;
	// System.String Appboy.Models.InAppMessage.InAppMessageButton::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_1;
	// System.String Appboy.Models.InAppMessage.InAppMessageButton::<URI>k__BackingField
	String_t* ___U3CURIU3Ek__BackingField_2;
	// Appboy.Models.ClickAction Appboy.Models.InAppMessage.InAppMessageButton::<ButtonClickAction>k__BackingField
	int32_t ___U3CButtonClickActionU3Ek__BackingField_3;
	// System.Nullable`1<UnityEngine.Color> Appboy.Models.InAppMessage.InAppMessageButton::<TextColor>k__BackingField
	Nullable_1_t49  ___U3CTextColorU3Ek__BackingField_4;
	// System.Nullable`1<UnityEngine.Color> Appboy.Models.InAppMessage.InAppMessageButton::<BackgroundColor>k__BackingField
	Nullable_1_t49  ___U3CBackgroundColorU3Ek__BackingField_5;
};
