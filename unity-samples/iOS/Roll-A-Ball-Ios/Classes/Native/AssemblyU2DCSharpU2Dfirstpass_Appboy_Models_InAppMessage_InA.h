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
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t50;

#include "mscorlib_System_Object.h"
#include "mscorlib_System_Nullable_1_gen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Appboy_Models_ClickAction.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Appboy_Models_DismissType.h"

// Appboy.Models.InAppMessage.InAppMessageBase
struct  InAppMessageBase_t48  : public Object_t
{
	// System.String Appboy.Models.InAppMessage.InAppMessageBase::_jsonString
	String_t* ____jsonString_1;
	// System.Boolean Appboy.Models.InAppMessage.InAppMessageBase::_clickLogged
	bool ____clickLogged_2;
	// System.Boolean Appboy.Models.InAppMessage.InAppMessageBase::_impressionLogged
	bool ____impressionLogged_3;
	// System.Int32 Appboy.Models.InAppMessage.InAppMessageBase::_duration
	int32_t ____duration_4;
	// System.Nullable`1<UnityEngine.Color> Appboy.Models.InAppMessage.InAppMessageBase::<BackgroundColor>k__BackingField
	Nullable_1_t49  ___U3CBackgroundColorU3Ek__BackingField_5;
	// System.Nullable`1<UnityEngine.Color> Appboy.Models.InAppMessage.InAppMessageBase::<TextColor>k__BackingField
	Nullable_1_t49  ___U3CTextColorU3Ek__BackingField_6;
	// System.String Appboy.Models.InAppMessage.InAppMessageBase::<Icon>k__BackingField
	String_t* ___U3CIconU3Ek__BackingField_7;
	// System.Nullable`1<UnityEngine.Color> Appboy.Models.InAppMessage.InAppMessageBase::<IconColor>k__BackingField
	Nullable_1_t49  ___U3CIconColorU3Ek__BackingField_8;
	// System.Nullable`1<UnityEngine.Color> Appboy.Models.InAppMessage.InAppMessageBase::<IconBackgroundColor>k__BackingField
	Nullable_1_t49  ___U3CIconBackgroundColorU3Ek__BackingField_9;
	// System.String Appboy.Models.InAppMessage.InAppMessageBase::<ImageURI>k__BackingField
	String_t* ___U3CImageURIU3Ek__BackingField_10;
	// System.String Appboy.Models.InAppMessage.InAppMessageBase::<Message>k__BackingField
	String_t* ___U3CMessageU3Ek__BackingField_11;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Appboy.Models.InAppMessage.InAppMessageBase::<Extras>k__BackingField
	Dictionary_2_t50 * ___U3CExtrasU3Ek__BackingField_12;
	// Appboy.Models.ClickAction Appboy.Models.InAppMessage.InAppMessageBase::<InAppClickAction>k__BackingField
	int32_t ___U3CInAppClickActionU3Ek__BackingField_13;
	// System.String Appboy.Models.InAppMessage.InAppMessageBase::<URI>k__BackingField
	String_t* ___U3CURIU3Ek__BackingField_14;
	// Appboy.Models.DismissType Appboy.Models.InAppMessage.InAppMessageBase::<InAppDismissType>k__BackingField
	int32_t ___U3CInAppDismissTypeU3Ek__BackingField_15;
};
