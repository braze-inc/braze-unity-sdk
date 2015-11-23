#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.InputField
struct InputField_t121;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Appboy_Models_Gender.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Appboy_Models_AppboyNotificati.h"

// SetUserField
struct  SetUserField_t130  : public MonoBehaviour_t2
{
	// UnityEngine.UI.InputField SetUserField::FirstNameField
	InputField_t121 * ___FirstNameField_2;
	// UnityEngine.UI.InputField SetUserField::LastNameField
	InputField_t121 * ___LastNameField_3;
	// UnityEngine.UI.InputField SetUserField::EmailField
	InputField_t121 * ___EmailField_4;
	// UnityEngine.UI.InputField SetUserField::BiolField
	InputField_t121 * ___BiolField_5;
	// UnityEngine.UI.InputField SetUserField::BirthdayMonthField
	InputField_t121 * ___BirthdayMonthField_6;
	// UnityEngine.UI.InputField SetUserField::BirthdayDayField
	InputField_t121 * ___BirthdayDayField_7;
	// UnityEngine.UI.InputField SetUserField::BirthdayYearField
	InputField_t121 * ___BirthdayYearField_8;
	// UnityEngine.UI.InputField SetUserField::CountryField
	InputField_t121 * ___CountryField_9;
	// UnityEngine.UI.InputField SetUserField::HomeCityField
	InputField_t121 * ___HomeCityField_10;
	// UnityEngine.UI.InputField SetUserField::PhoneField
	InputField_t121 * ___PhoneField_11;
	// Appboy.Models.Gender SetUserField::gender
	int32_t ___gender_12;
	// Appboy.Models.AppboyNotificationSubscriptionType SetUserField::emailSubscription
	int32_t ___emailSubscription_13;
	// Appboy.Models.AppboyNotificationSubscriptionType SetUserField::pushSubscription
	int32_t ___pushSubscription_14;
};
