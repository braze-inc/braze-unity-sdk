#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioSettings/AudioConfigurationChangeHandler
struct AudioConfigurationChangeHandler_t1722466426;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSettings
struct  AudioSettings_t1824070214  : public Il2CppObject
{
public:

public:
};

struct AudioSettings_t1824070214_StaticFields
{
public:
	// UnityEngine.AudioSettings/AudioConfigurationChangeHandler UnityEngine.AudioSettings::OnAudioConfigurationChanged
	AudioConfigurationChangeHandler_t1722466426 * ___OnAudioConfigurationChanged_0;

public:
	inline static int32_t get_offset_of_OnAudioConfigurationChanged_0() { return static_cast<int32_t>(offsetof(AudioSettings_t1824070214_StaticFields, ___OnAudioConfigurationChanged_0)); }
	inline AudioConfigurationChangeHandler_t1722466426 * get_OnAudioConfigurationChanged_0() const { return ___OnAudioConfigurationChanged_0; }
	inline AudioConfigurationChangeHandler_t1722466426 ** get_address_of_OnAudioConfigurationChanged_0() { return &___OnAudioConfigurationChanged_0; }
	inline void set_OnAudioConfigurationChanged_0(AudioConfigurationChangeHandler_t1722466426 * value)
	{
		___OnAudioConfigurationChanged_0 = value;
		Il2CppCodeGenWriteBarrier(&___OnAudioConfigurationChanged_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
