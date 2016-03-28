#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.InputField
struct InputField_t2345609593;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t2606186806;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LogCustomEvent
struct  LogCustomEvent_t2301252581  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.UI.InputField LogCustomEvent::CustomEventField
	InputField_t2345609593 * ___CustomEventField_2;
	// UnityEngine.UI.InputField LogCustomEvent::CustomEventPropertiesKeyField
	InputField_t2345609593 * ___CustomEventPropertiesKeyField_3;
	// UnityEngine.UI.InputField LogCustomEvent::CustomEventPropertiesValueField
	InputField_t2345609593 * ___CustomEventPropertiesValueField_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> LogCustomEvent::CustomEventProperties
	Dictionary_2_t2606186806 * ___CustomEventProperties_5;

public:
	inline static int32_t get_offset_of_CustomEventField_2() { return static_cast<int32_t>(offsetof(LogCustomEvent_t2301252581, ___CustomEventField_2)); }
	inline InputField_t2345609593 * get_CustomEventField_2() const { return ___CustomEventField_2; }
	inline InputField_t2345609593 ** get_address_of_CustomEventField_2() { return &___CustomEventField_2; }
	inline void set_CustomEventField_2(InputField_t2345609593 * value)
	{
		___CustomEventField_2 = value;
		Il2CppCodeGenWriteBarrier(&___CustomEventField_2, value);
	}

	inline static int32_t get_offset_of_CustomEventPropertiesKeyField_3() { return static_cast<int32_t>(offsetof(LogCustomEvent_t2301252581, ___CustomEventPropertiesKeyField_3)); }
	inline InputField_t2345609593 * get_CustomEventPropertiesKeyField_3() const { return ___CustomEventPropertiesKeyField_3; }
	inline InputField_t2345609593 ** get_address_of_CustomEventPropertiesKeyField_3() { return &___CustomEventPropertiesKeyField_3; }
	inline void set_CustomEventPropertiesKeyField_3(InputField_t2345609593 * value)
	{
		___CustomEventPropertiesKeyField_3 = value;
		Il2CppCodeGenWriteBarrier(&___CustomEventPropertiesKeyField_3, value);
	}

	inline static int32_t get_offset_of_CustomEventPropertiesValueField_4() { return static_cast<int32_t>(offsetof(LogCustomEvent_t2301252581, ___CustomEventPropertiesValueField_4)); }
	inline InputField_t2345609593 * get_CustomEventPropertiesValueField_4() const { return ___CustomEventPropertiesValueField_4; }
	inline InputField_t2345609593 ** get_address_of_CustomEventPropertiesValueField_4() { return &___CustomEventPropertiesValueField_4; }
	inline void set_CustomEventPropertiesValueField_4(InputField_t2345609593 * value)
	{
		___CustomEventPropertiesValueField_4 = value;
		Il2CppCodeGenWriteBarrier(&___CustomEventPropertiesValueField_4, value);
	}

	inline static int32_t get_offset_of_CustomEventProperties_5() { return static_cast<int32_t>(offsetof(LogCustomEvent_t2301252581, ___CustomEventProperties_5)); }
	inline Dictionary_2_t2606186806 * get_CustomEventProperties_5() const { return ___CustomEventProperties_5; }
	inline Dictionary_2_t2606186806 ** get_address_of_CustomEventProperties_5() { return &___CustomEventProperties_5; }
	inline void set_CustomEventProperties_5(Dictionary_2_t2606186806 * value)
	{
		___CustomEventProperties_5 = value;
		Il2CppCodeGenWriteBarrier(&___CustomEventProperties_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
