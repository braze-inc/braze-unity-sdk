#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t14;
// System.Uri
struct Uri_t61;
// System.Object
#include "mscorlib_System_Object.h"
// Appboy.Models.SlideFrom
#include "AssemblyU2DCSharpU2Dfirstpass_Appboy_Models_SlideFrom.h"
// Appboy.Models.ClickAction
#include "AssemblyU2DCSharpU2Dfirstpass_Appboy_Models_ClickAction.h"
// Appboy.Models.DismissType
#include "AssemblyU2DCSharpU2Dfirstpass_Appboy_Models_DismissType.h"
// Appboy.Models.Slideup
struct Slideup_t12  : public Object_t
{
	// System.String Appboy.Models.Slideup::_jsonString
	String_t* ____jsonString_1;
	// System.Int32 Appboy.Models.Slideup::_duration
	int32_t ____duration_2;
	// System.Boolean Appboy.Models.Slideup::_clickLogged
	bool ____clickLogged_3;
	// System.Boolean Appboy.Models.Slideup::_impressionLogged
	bool ____impressionLogged_4;
	// System.String Appboy.Models.Slideup::<Message>k__BackingField
	String_t* ___U3CMessageU3Ek__BackingField_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Appboy.Models.Slideup::<Extras>k__BackingField
	Dictionary_2_t14 * ___U3CExtrasU3Ek__BackingField_6;
	// Appboy.Models.SlideFrom Appboy.Models.Slideup::<SlideFrom>k__BackingField
	int32_t ___U3CSlideFromU3Ek__BackingField_7;
	// Appboy.Models.ClickAction Appboy.Models.Slideup::<ClickAction>k__BackingField
	int32_t ___U3CClickActionU3Ek__BackingField_8;
	// System.Uri Appboy.Models.Slideup::<Uri>k__BackingField
	Uri_t61 * ___U3CUriU3Ek__BackingField_9;
	// Appboy.Models.DismissType Appboy.Models.Slideup::<DismissType>k__BackingField
	int32_t ___U3CDismissTypeU3Ek__BackingField_10;
};
