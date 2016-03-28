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
struct Dictionary_2_t2606186806;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Appboy.Models.PushNotification
struct  PushNotification_t1328168516  : public Il2CppObject
{
public:
	// System.String Appboy.Models.PushNotification::<Title>k__BackingField
	String_t* ___U3CTitleU3Ek__BackingField_0;
	// System.String Appboy.Models.PushNotification::<Content>k__BackingField
	String_t* ___U3CContentU3Ek__BackingField_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Appboy.Models.PushNotification::<Extras>k__BackingField
	Dictionary_2_t2606186806 * ___U3CExtrasU3Ek__BackingField_2;
	// System.String Appboy.Models.PushNotification::<CollapseKey>k__BackingField
	String_t* ___U3CCollapseKeyU3Ek__BackingField_3;
	// System.Int32 Appboy.Models.PushNotification::<AndroidNotificationId>k__BackingField
	int32_t ___U3CAndroidNotificationIdU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CTitleU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PushNotification_t1328168516, ___U3CTitleU3Ek__BackingField_0)); }
	inline String_t* get_U3CTitleU3Ek__BackingField_0() const { return ___U3CTitleU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CTitleU3Ek__BackingField_0() { return &___U3CTitleU3Ek__BackingField_0; }
	inline void set_U3CTitleU3Ek__BackingField_0(String_t* value)
	{
		___U3CTitleU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CTitleU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3CContentU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PushNotification_t1328168516, ___U3CContentU3Ek__BackingField_1)); }
	inline String_t* get_U3CContentU3Ek__BackingField_1() const { return ___U3CContentU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CContentU3Ek__BackingField_1() { return &___U3CContentU3Ek__BackingField_1; }
	inline void set_U3CContentU3Ek__BackingField_1(String_t* value)
	{
		___U3CContentU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CContentU3Ek__BackingField_1, value);
	}

	inline static int32_t get_offset_of_U3CExtrasU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PushNotification_t1328168516, ___U3CExtrasU3Ek__BackingField_2)); }
	inline Dictionary_2_t2606186806 * get_U3CExtrasU3Ek__BackingField_2() const { return ___U3CExtrasU3Ek__BackingField_2; }
	inline Dictionary_2_t2606186806 ** get_address_of_U3CExtrasU3Ek__BackingField_2() { return &___U3CExtrasU3Ek__BackingField_2; }
	inline void set_U3CExtrasU3Ek__BackingField_2(Dictionary_2_t2606186806 * value)
	{
		___U3CExtrasU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CExtrasU3Ek__BackingField_2, value);
	}

	inline static int32_t get_offset_of_U3CCollapseKeyU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(PushNotification_t1328168516, ___U3CCollapseKeyU3Ek__BackingField_3)); }
	inline String_t* get_U3CCollapseKeyU3Ek__BackingField_3() const { return ___U3CCollapseKeyU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CCollapseKeyU3Ek__BackingField_3() { return &___U3CCollapseKeyU3Ek__BackingField_3; }
	inline void set_U3CCollapseKeyU3Ek__BackingField_3(String_t* value)
	{
		___U3CCollapseKeyU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CCollapseKeyU3Ek__BackingField_3, value);
	}

	inline static int32_t get_offset_of_U3CAndroidNotificationIdU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PushNotification_t1328168516, ___U3CAndroidNotificationIdU3Ek__BackingField_4)); }
	inline int32_t get_U3CAndroidNotificationIdU3Ek__BackingField_4() const { return ___U3CAndroidNotificationIdU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CAndroidNotificationIdU3Ek__BackingField_4() { return &___U3CAndroidNotificationIdU3Ek__BackingField_4; }
	inline void set_U3CAndroidNotificationIdU3Ek__BackingField_4(int32_t value)
	{
		___U3CAndroidNotificationIdU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
