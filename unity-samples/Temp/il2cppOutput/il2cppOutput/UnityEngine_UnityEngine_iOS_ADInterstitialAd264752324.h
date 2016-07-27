#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.iOS.ADInterstitialAd/InterstitialWasLoadedDelegate
struct InterstitialWasLoadedDelegate_t2963828231;
// UnityEngine.iOS.ADInterstitialAd/InterstitialWasViewedDelegate
struct InterstitialWasViewedDelegate_t402653446;

#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.iOS.ADInterstitialAd
struct  ADInterstitialAd_t264752324  : public Il2CppObject
{
public:
	// System.IntPtr UnityEngine.iOS.ADInterstitialAd::interstitialView
	IntPtr_t ___interstitialView_0;

public:
	inline static int32_t get_offset_of_interstitialView_0() { return static_cast<int32_t>(offsetof(ADInterstitialAd_t264752324, ___interstitialView_0)); }
	inline IntPtr_t get_interstitialView_0() const { return ___interstitialView_0; }
	inline IntPtr_t* get_address_of_interstitialView_0() { return &___interstitialView_0; }
	inline void set_interstitialView_0(IntPtr_t value)
	{
		___interstitialView_0 = value;
	}
};

struct ADInterstitialAd_t264752324_StaticFields
{
public:
	// UnityEngine.iOS.ADInterstitialAd/InterstitialWasLoadedDelegate UnityEngine.iOS.ADInterstitialAd::onInterstitialWasLoaded
	InterstitialWasLoadedDelegate_t2963828231 * ___onInterstitialWasLoaded_1;
	// UnityEngine.iOS.ADInterstitialAd/InterstitialWasViewedDelegate UnityEngine.iOS.ADInterstitialAd::onInterstitialWasViewed
	InterstitialWasViewedDelegate_t402653446 * ___onInterstitialWasViewed_2;

public:
	inline static int32_t get_offset_of_onInterstitialWasLoaded_1() { return static_cast<int32_t>(offsetof(ADInterstitialAd_t264752324_StaticFields, ___onInterstitialWasLoaded_1)); }
	inline InterstitialWasLoadedDelegate_t2963828231 * get_onInterstitialWasLoaded_1() const { return ___onInterstitialWasLoaded_1; }
	inline InterstitialWasLoadedDelegate_t2963828231 ** get_address_of_onInterstitialWasLoaded_1() { return &___onInterstitialWasLoaded_1; }
	inline void set_onInterstitialWasLoaded_1(InterstitialWasLoadedDelegate_t2963828231 * value)
	{
		___onInterstitialWasLoaded_1 = value;
		Il2CppCodeGenWriteBarrier(&___onInterstitialWasLoaded_1, value);
	}

	inline static int32_t get_offset_of_onInterstitialWasViewed_2() { return static_cast<int32_t>(offsetof(ADInterstitialAd_t264752324_StaticFields, ___onInterstitialWasViewed_2)); }
	inline InterstitialWasViewedDelegate_t402653446 * get_onInterstitialWasViewed_2() const { return ___onInterstitialWasViewed_2; }
	inline InterstitialWasViewedDelegate_t402653446 ** get_address_of_onInterstitialWasViewed_2() { return &___onInterstitialWasViewed_2; }
	inline void set_onInterstitialWasViewed_2(InterstitialWasViewedDelegate_t402653446 * value)
	{
		___onInterstitialWasViewed_2 = value;
		Il2CppCodeGenWriteBarrier(&___onInterstitialWasViewed_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
