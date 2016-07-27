#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.iOS.ADBannerView/BannerWasClickedDelegate
struct BannerWasClickedDelegate_t1325188367;
// UnityEngine.iOS.ADBannerView/BannerWasLoadedDelegate
struct BannerWasLoadedDelegate_t69910023;
// UnityEngine.iOS.ADBannerView/BannerFailedToLoadDelegate
struct BannerFailedToLoadDelegate_t2071786927;

#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.iOS.ADBannerView
struct  ADBannerView_t2458921414  : public Il2CppObject
{
public:
	// System.IntPtr UnityEngine.iOS.ADBannerView::_bannerView
	IntPtr_t ____bannerView_0;

public:
	inline static int32_t get_offset_of__bannerView_0() { return static_cast<int32_t>(offsetof(ADBannerView_t2458921414, ____bannerView_0)); }
	inline IntPtr_t get__bannerView_0() const { return ____bannerView_0; }
	inline IntPtr_t* get_address_of__bannerView_0() { return &____bannerView_0; }
	inline void set__bannerView_0(IntPtr_t value)
	{
		____bannerView_0 = value;
	}
};

struct ADBannerView_t2458921414_StaticFields
{
public:
	// UnityEngine.iOS.ADBannerView/BannerWasClickedDelegate UnityEngine.iOS.ADBannerView::onBannerWasClicked
	BannerWasClickedDelegate_t1325188367 * ___onBannerWasClicked_1;
	// UnityEngine.iOS.ADBannerView/BannerWasLoadedDelegate UnityEngine.iOS.ADBannerView::onBannerWasLoaded
	BannerWasLoadedDelegate_t69910023 * ___onBannerWasLoaded_2;
	// UnityEngine.iOS.ADBannerView/BannerFailedToLoadDelegate UnityEngine.iOS.ADBannerView::onBannerFailedToLoad
	BannerFailedToLoadDelegate_t2071786927 * ___onBannerFailedToLoad_3;

public:
	inline static int32_t get_offset_of_onBannerWasClicked_1() { return static_cast<int32_t>(offsetof(ADBannerView_t2458921414_StaticFields, ___onBannerWasClicked_1)); }
	inline BannerWasClickedDelegate_t1325188367 * get_onBannerWasClicked_1() const { return ___onBannerWasClicked_1; }
	inline BannerWasClickedDelegate_t1325188367 ** get_address_of_onBannerWasClicked_1() { return &___onBannerWasClicked_1; }
	inline void set_onBannerWasClicked_1(BannerWasClickedDelegate_t1325188367 * value)
	{
		___onBannerWasClicked_1 = value;
		Il2CppCodeGenWriteBarrier(&___onBannerWasClicked_1, value);
	}

	inline static int32_t get_offset_of_onBannerWasLoaded_2() { return static_cast<int32_t>(offsetof(ADBannerView_t2458921414_StaticFields, ___onBannerWasLoaded_2)); }
	inline BannerWasLoadedDelegate_t69910023 * get_onBannerWasLoaded_2() const { return ___onBannerWasLoaded_2; }
	inline BannerWasLoadedDelegate_t69910023 ** get_address_of_onBannerWasLoaded_2() { return &___onBannerWasLoaded_2; }
	inline void set_onBannerWasLoaded_2(BannerWasLoadedDelegate_t69910023 * value)
	{
		___onBannerWasLoaded_2 = value;
		Il2CppCodeGenWriteBarrier(&___onBannerWasLoaded_2, value);
	}

	inline static int32_t get_offset_of_onBannerFailedToLoad_3() { return static_cast<int32_t>(offsetof(ADBannerView_t2458921414_StaticFields, ___onBannerFailedToLoad_3)); }
	inline BannerFailedToLoadDelegate_t2071786927 * get_onBannerFailedToLoad_3() const { return ___onBannerFailedToLoad_3; }
	inline BannerFailedToLoadDelegate_t2071786927 ** get_address_of_onBannerFailedToLoad_3() { return &___onBannerFailedToLoad_3; }
	inline void set_onBannerFailedToLoad_3(BannerFailedToLoadDelegate_t2071786927 * value)
	{
		___onBannerFailedToLoad_3 = value;
		Il2CppCodeGenWriteBarrier(&___onBannerFailedToLoad_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
