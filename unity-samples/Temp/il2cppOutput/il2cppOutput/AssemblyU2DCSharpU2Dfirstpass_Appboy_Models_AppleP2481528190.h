#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Appboy.Models.ApplePushNotificationAlert
struct ApplePushNotificationAlert_t3151133980;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t3650470111;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Appboy.Models.ApplePushNotification
struct  ApplePushNotification_t2481528190  : public Il2CppObject
{
public:
	// Appboy.Models.ApplePushNotificationAlert Appboy.Models.ApplePushNotification::<Alert>k__BackingField
	ApplePushNotificationAlert_t3151133980 * ___U3CAlertU3Ek__BackingField_0;
	// System.Int32 Appboy.Models.ApplePushNotification::<Badge>k__BackingField
	int32_t ___U3CBadgeU3Ek__BackingField_1;
	// System.String Appboy.Models.ApplePushNotification::<Sound>k__BackingField
	String_t* ___U3CSoundU3Ek__BackingField_2;
	// System.Int32 Appboy.Models.ApplePushNotification::<ContentAvailable>k__BackingField
	int32_t ___U3CContentAvailableU3Ek__BackingField_3;
	// System.Collections.Generic.IDictionary`2<System.String,System.Object> Appboy.Models.ApplePushNotification::<Extra>k__BackingField
	Il2CppObject* ___U3CExtraU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CAlertU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ApplePushNotification_t2481528190, ___U3CAlertU3Ek__BackingField_0)); }
	inline ApplePushNotificationAlert_t3151133980 * get_U3CAlertU3Ek__BackingField_0() const { return ___U3CAlertU3Ek__BackingField_0; }
	inline ApplePushNotificationAlert_t3151133980 ** get_address_of_U3CAlertU3Ek__BackingField_0() { return &___U3CAlertU3Ek__BackingField_0; }
	inline void set_U3CAlertU3Ek__BackingField_0(ApplePushNotificationAlert_t3151133980 * value)
	{
		___U3CAlertU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CAlertU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3CBadgeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ApplePushNotification_t2481528190, ___U3CBadgeU3Ek__BackingField_1)); }
	inline int32_t get_U3CBadgeU3Ek__BackingField_1() const { return ___U3CBadgeU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CBadgeU3Ek__BackingField_1() { return &___U3CBadgeU3Ek__BackingField_1; }
	inline void set_U3CBadgeU3Ek__BackingField_1(int32_t value)
	{
		___U3CBadgeU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CSoundU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ApplePushNotification_t2481528190, ___U3CSoundU3Ek__BackingField_2)); }
	inline String_t* get_U3CSoundU3Ek__BackingField_2() const { return ___U3CSoundU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CSoundU3Ek__BackingField_2() { return &___U3CSoundU3Ek__BackingField_2; }
	inline void set_U3CSoundU3Ek__BackingField_2(String_t* value)
	{
		___U3CSoundU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CSoundU3Ek__BackingField_2, value);
	}

	inline static int32_t get_offset_of_U3CContentAvailableU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ApplePushNotification_t2481528190, ___U3CContentAvailableU3Ek__BackingField_3)); }
	inline int32_t get_U3CContentAvailableU3Ek__BackingField_3() const { return ___U3CContentAvailableU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CContentAvailableU3Ek__BackingField_3() { return &___U3CContentAvailableU3Ek__BackingField_3; }
	inline void set_U3CContentAvailableU3Ek__BackingField_3(int32_t value)
	{
		___U3CContentAvailableU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CExtraU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ApplePushNotification_t2481528190, ___U3CExtraU3Ek__BackingField_4)); }
	inline Il2CppObject* get_U3CExtraU3Ek__BackingField_4() const { return ___U3CExtraU3Ek__BackingField_4; }
	inline Il2CppObject** get_address_of_U3CExtraU3Ek__BackingField_4() { return &___U3CExtraU3Ek__BackingField_4; }
	inline void set_U3CExtraU3Ek__BackingField_4(Il2CppObject* value)
	{
		___U3CExtraU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CExtraU3Ek__BackingField_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
