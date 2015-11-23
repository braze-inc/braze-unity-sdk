#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Appboy.Models.ApplePushNotificationAlert
struct ApplePushNotificationAlert_t31;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t32;

#include "mscorlib_System_Object.h"

// Appboy.Models.ApplePushNotification
struct  ApplePushNotification_t30  : public Object_t
{
	// Appboy.Models.ApplePushNotificationAlert Appboy.Models.ApplePushNotification::<Alert>k__BackingField
	ApplePushNotificationAlert_t31 * ___U3CAlertU3Ek__BackingField_0;
	// System.Int32 Appboy.Models.ApplePushNotification::<Badge>k__BackingField
	int32_t ___U3CBadgeU3Ek__BackingField_1;
	// System.String Appboy.Models.ApplePushNotification::<Sound>k__BackingField
	String_t* ___U3CSoundU3Ek__BackingField_2;
	// System.Int32 Appboy.Models.ApplePushNotification::<ContentAvailable>k__BackingField
	int32_t ___U3CContentAvailableU3Ek__BackingField_3;
	// System.Collections.Generic.IDictionary`2<System.String,System.Object> Appboy.Models.ApplePushNotification::<Extra>k__BackingField
	Object_t* ___U3CExtraU3Ek__BackingField_4;
};
