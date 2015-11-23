#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Appboy.AppboyBinding
struct AppboyBinding_t1;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t63;
// System.Collections.Generic.List`1<System.String>
struct List_1_t64;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Decimal.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Appboy_Models_Gender.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Appboy_Models_AppboyNotificati.h"

// System.Void Appboy.AppboyBinding::.ctor()
extern "C" void AppboyBinding__ctor_m0 (AppboyBinding_t1 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::LogPurchase(System.String,System.String,System.Decimal)
extern "C" void AppboyBinding_LogPurchase_m1 (Object_t * __this /* static, unused */, String_t* ___productId, String_t* ___currencyCode, Decimal_t62  ___price, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::IncrementCustomUserAttribute(System.String)
extern "C" void AppboyBinding_IncrementCustomUserAttribute_m2 (Object_t * __this /* static, unused */, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::Start()
extern "C" void AppboyBinding_Start_m3 (AppboyBinding_t1 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_logCustomEvent(System.String)
extern "C" void AppboyBinding__logCustomEvent_m4 (Object_t * __this /* static, unused */, String_t* ___eventName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_changeUser(System.String)
extern "C" void AppboyBinding__changeUser_m5 (Object_t * __this /* static, unused */, String_t* ___userId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_logPurchase(System.String,System.String,System.String,System.Int32)
extern "C" void AppboyBinding__logPurchase_m6 (Object_t * __this /* static, unused */, String_t* ___productId, String_t* ___currencyCode, String_t* ___price, int32_t ___quantity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_setUserFirstName(System.String)
extern "C" void AppboyBinding__setUserFirstName_m7 (Object_t * __this /* static, unused */, String_t* ___firstName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_setUserLastName(System.String)
extern "C" void AppboyBinding__setUserLastName_m8 (Object_t * __this /* static, unused */, String_t* ___lastName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_setUserPhoneNumber(System.String)
extern "C" void AppboyBinding__setUserPhoneNumber_m9 (Object_t * __this /* static, unused */, String_t* ___phoneNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_setUserAvatarImageURL(System.String)
extern "C" void AppboyBinding__setUserAvatarImageURL_m10 (Object_t * __this /* static, unused */, String_t* ___imageURL, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_setUserBio(System.String)
extern "C" void AppboyBinding__setUserBio_m11 (Object_t * __this /* static, unused */, String_t* ___bio, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_setUserGender(System.Int32)
extern "C" void AppboyBinding__setUserGender_m12 (Object_t * __this /* static, unused */, int32_t ___gender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_setUserEmail(System.String)
extern "C" void AppboyBinding__setUserEmail_m13 (Object_t * __this /* static, unused */, String_t* ___email, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_setUserDateOfBirth(System.Int32,System.Int32,System.Int32)
extern "C" void AppboyBinding__setUserDateOfBirth_m14 (Object_t * __this /* static, unused */, int32_t ___year, int32_t ___month, int32_t ___day, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_setUserCountry(System.String)
extern "C" void AppboyBinding__setUserCountry_m15 (Object_t * __this /* static, unused */, String_t* ___country, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_setUserHomeCity(System.String)
extern "C" void AppboyBinding__setUserHomeCity_m16 (Object_t * __this /* static, unused */, String_t* ___city, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_setUserIsSubscribedToEmails(System.Boolean)
extern "C" void AppboyBinding__setUserIsSubscribedToEmails_m17 (Object_t * __this /* static, unused */, bool ___isSubscribedToEmails, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_setUserEmailNotificationSubscriptionType(System.Int32)
extern "C" void AppboyBinding__setUserEmailNotificationSubscriptionType_m18 (Object_t * __this /* static, unused */, int32_t ___emailNotificationSubscriptionType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_setUserPushNotificationSubscriptionType(System.Int32)
extern "C" void AppboyBinding__setUserPushNotificationSubscriptionType_m19 (Object_t * __this /* static, unused */, int32_t ___pushNotificationSubscriptionType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_setCustomUserAttributeBool(System.String,System.Boolean)
extern "C" void AppboyBinding__setCustomUserAttributeBool_m20 (Object_t * __this /* static, unused */, String_t* ___key, bool ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_setCustomUserAttributeInt(System.String,System.Int32)
extern "C" void AppboyBinding__setCustomUserAttributeInt_m21 (Object_t * __this /* static, unused */, String_t* ___key, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_setCustomUserAttributeFloat(System.String,System.Single)
extern "C" void AppboyBinding__setCustomUserAttributeFloat_m22 (Object_t * __this /* static, unused */, String_t* ___key, float ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_setCustomUserAttributeString(System.String,System.String)
extern "C" void AppboyBinding__setCustomUserAttributeString_m23 (Object_t * __this /* static, unused */, String_t* ___key, String_t* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_setCustomUserAttributeToNow(System.String)
extern "C" void AppboyBinding__setCustomUserAttributeToNow_m24 (Object_t * __this /* static, unused */, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_setCustomUserAttributeToSecondsFromEpoch(System.String,System.Int64)
extern "C" void AppboyBinding__setCustomUserAttributeToSecondsFromEpoch_m25 (Object_t * __this /* static, unused */, String_t* ___key, int64_t ___seconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_unsetCustomUserAttribute(System.String)
extern "C" void AppboyBinding__unsetCustomUserAttribute_m26 (Object_t * __this /* static, unused */, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_incrementCustomUserAttribute(System.String,System.Int32)
extern "C" void AppboyBinding__incrementCustomUserAttribute_m27 (Object_t * __this /* static, unused */, String_t* ___key, int32_t ___incrementValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_setCustomUserAttributeArray(System.String,System.String[],System.Int32)
extern "C" void AppboyBinding__setCustomUserAttributeArray_m28 (Object_t * __this /* static, unused */, String_t* ___key, StringU5BU5D_t63* ___array, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_addToCustomUserAttributeArray(System.String,System.String)
extern "C" void AppboyBinding__addToCustomUserAttributeArray_m29 (Object_t * __this /* static, unused */, String_t* ___key, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_removeFromCustomUserAttributeArray(System.String,System.String)
extern "C" void AppboyBinding__removeFromCustomUserAttributeArray_m30 (Object_t * __this /* static, unused */, String_t* ___key, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_submitFeedback(System.String,System.String,System.Boolean)
extern "C" void AppboyBinding__submitFeedback_m31 (Object_t * __this /* static, unused */, String_t* ___replyToEmail, String_t* ___message, bool ___isReportingABug, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_logInAppMessageClicked(System.String)
extern "C" void AppboyBinding__logInAppMessageClicked_m32 (Object_t * __this /* static, unused */, String_t* ___inAppMessageJSONString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_logInAppMessageImpression(System.String)
extern "C" void AppboyBinding__logInAppMessageImpression_m33 (Object_t * __this /* static, unused */, String_t* ___inAppMessageJSONString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_logInAppMessageButtonClicked(System.String,System.Int32)
extern "C" void AppboyBinding__logInAppMessageButtonClicked_m34 (Object_t * __this /* static, unused */, String_t* ___inAppMessageJSONString, int32_t ___buttonID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_logCardImpression(System.String)
extern "C" void AppboyBinding__logCardImpression_m35 (Object_t * __this /* static, unused */, String_t* ___cardJSONString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_logCardClicked(System.String)
extern "C" void AppboyBinding__logCardClicked_m36 (Object_t * __this /* static, unused */, String_t* ___cardJSONString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_requestFeedRefresh()
extern "C" void AppboyBinding__requestFeedRefresh_m37 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_requestFeedRefreshFromCache()
extern "C" void AppboyBinding__requestFeedRefreshFromCache_m38 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_logFeedDisplayed()
extern "C" void AppboyBinding__logFeedDisplayed_m39 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_logFeedbackDisplayed()
extern "C" void AppboyBinding__logFeedbackDisplayed_m40 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_requestInAppMessage()
extern "C" void AppboyBinding__requestInAppMessage_m41 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::LogCustomEvent(System.String)
extern "C" void AppboyBinding_LogCustomEvent_m42 (Object_t * __this /* static, unused */, String_t* ___eventName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::LogPurchase(System.String,System.String,System.Decimal,System.Int32)
extern "C" void AppboyBinding_LogPurchase_m43 (Object_t * __this /* static, unused */, String_t* ___productId, String_t* ___currencyCode, Decimal_t62  ___price, int32_t ___quantity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::ChangeUser(System.String)
extern "C" void AppboyBinding_ChangeUser_m44 (Object_t * __this /* static, unused */, String_t* ___userId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::SetUserFirstName(System.String)
extern "C" void AppboyBinding_SetUserFirstName_m45 (Object_t * __this /* static, unused */, String_t* ___firstName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::SetUserLastName(System.String)
extern "C" void AppboyBinding_SetUserLastName_m46 (Object_t * __this /* static, unused */, String_t* ___lastName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::SetUserEmail(System.String)
extern "C" void AppboyBinding_SetUserEmail_m47 (Object_t * __this /* static, unused */, String_t* ___email, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::SetUserBio(System.String)
extern "C" void AppboyBinding_SetUserBio_m48 (Object_t * __this /* static, unused */, String_t* ___bio, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::SetUserGender(Appboy.Models.Gender)
extern "C" void AppboyBinding_SetUserGender_m49 (Object_t * __this /* static, unused */, int32_t ___gender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::SetUserDateOfBirth(System.Int32,System.Int32,System.Int32)
extern "C" void AppboyBinding_SetUserDateOfBirth_m50 (Object_t * __this /* static, unused */, int32_t ___year, int32_t ___month, int32_t ___day, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::SetUserCountry(System.String)
extern "C" void AppboyBinding_SetUserCountry_m51 (Object_t * __this /* static, unused */, String_t* ___country, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::SetUserHomeCity(System.String)
extern "C" void AppboyBinding_SetUserHomeCity_m52 (Object_t * __this /* static, unused */, String_t* ___city, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::SetUserIsSubscribedToEmails(System.Boolean)
extern "C" void AppboyBinding_SetUserIsSubscribedToEmails_m53 (Object_t * __this /* static, unused */, bool ___isSubscribedToEmails, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::SetUserEmailNotificationSubscriptionType(Appboy.Models.AppboyNotificationSubscriptionType)
extern "C" void AppboyBinding_SetUserEmailNotificationSubscriptionType_m54 (Object_t * __this /* static, unused */, int32_t ___emailNotificationSubscriptionType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::SetUserPushNotificationSubscriptionType(Appboy.Models.AppboyNotificationSubscriptionType)
extern "C" void AppboyBinding_SetUserPushNotificationSubscriptionType_m55 (Object_t * __this /* static, unused */, int32_t ___pushNotificationSubscriptionType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::SetUserPhoneNumber(System.String)
extern "C" void AppboyBinding_SetUserPhoneNumber_m56 (Object_t * __this /* static, unused */, String_t* ___phoneNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::SetUserAvatarImageURL(System.String)
extern "C" void AppboyBinding_SetUserAvatarImageURL_m57 (Object_t * __this /* static, unused */, String_t* ___imageURL, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::SetCustomUserAttribute(System.String,System.Boolean)
extern "C" void AppboyBinding_SetCustomUserAttribute_m58 (Object_t * __this /* static, unused */, String_t* ___key, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::SetCustomUserAttribute(System.String,System.Int32)
extern "C" void AppboyBinding_SetCustomUserAttribute_m59 (Object_t * __this /* static, unused */, String_t* ___key, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::SetCustomUserAttribute(System.String,System.Single)
extern "C" void AppboyBinding_SetCustomUserAttribute_m60 (Object_t * __this /* static, unused */, String_t* ___key, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::SetCustomUserAttribute(System.String,System.String)
extern "C" void AppboyBinding_SetCustomUserAttribute_m61 (Object_t * __this /* static, unused */, String_t* ___key, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::SetCustomUserAttributeToNow(System.String)
extern "C" void AppboyBinding_SetCustomUserAttributeToNow_m62 (Object_t * __this /* static, unused */, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::SetCustomUserAttributeToSecondsFromEpoch(System.String,System.Int64)
extern "C" void AppboyBinding_SetCustomUserAttributeToSecondsFromEpoch_m63 (Object_t * __this /* static, unused */, String_t* ___key, int64_t ___secondsFromEpoch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::UnsetCustomUserAttribute(System.String)
extern "C" void AppboyBinding_UnsetCustomUserAttribute_m64 (Object_t * __this /* static, unused */, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::IncrementCustomUserAttribute(System.String,System.Int32)
extern "C" void AppboyBinding_IncrementCustomUserAttribute_m65 (Object_t * __this /* static, unused */, String_t* ___key, int32_t ___incrementValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::SetCustomUserAttributeArray(System.String,System.Collections.Generic.List`1<System.String>,System.Int32)
extern "C" void AppboyBinding_SetCustomUserAttributeArray_m66 (Object_t * __this /* static, unused */, String_t* ___key, List_1_t64 * ___array, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::AddToCustomUserAttributeArray(System.String,System.String)
extern "C" void AppboyBinding_AddToCustomUserAttributeArray_m67 (Object_t * __this /* static, unused */, String_t* ___key, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::RemoveFromCustomUserAttributeArray(System.String,System.String)
extern "C" void AppboyBinding_RemoveFromCustomUserAttributeArray_m68 (Object_t * __this /* static, unused */, String_t* ___key, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::SubmitFeedback(System.String,System.String,System.Boolean)
extern "C" void AppboyBinding_SubmitFeedback_m69 (Object_t * __this /* static, unused */, String_t* ___replyToEmail, String_t* ___message, bool ___isReportingABug, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::ClearPushMessage(System.Int32)
extern "C" void AppboyBinding_ClearPushMessage_m70 (Object_t * __this /* static, unused */, int32_t ___notificationId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::RequestInAppMessage()
extern "C" void AppboyBinding_RequestInAppMessage_m71 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::LogSlideupClicked(System.String)
extern "C" void AppboyBinding_LogSlideupClicked_m72 (Object_t * __this /* static, unused */, String_t* ___slideupJSONString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::LogSlideupImpression(System.String)
extern "C" void AppboyBinding_LogSlideupImpression_m73 (Object_t * __this /* static, unused */, String_t* ___slideupJSONString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::LogInAppMessageClicked(System.String)
extern "C" void AppboyBinding_LogInAppMessageClicked_m74 (Object_t * __this /* static, unused */, String_t* ___inAppMessageJSONString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::LogInAppMessageImpression(System.String)
extern "C" void AppboyBinding_LogInAppMessageImpression_m75 (Object_t * __this /* static, unused */, String_t* ___inAppMessageJSONString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::LogInAppMessageButtonClicked(System.String,System.Int32)
extern "C" void AppboyBinding_LogInAppMessageButtonClicked_m76 (Object_t * __this /* static, unused */, String_t* ___inAppMessageJSONString, int32_t ___buttonID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::LogCardImpression(System.String)
extern "C" void AppboyBinding_LogCardImpression_m77 (Object_t * __this /* static, unused */, String_t* ___cardJSONString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::LogCardClicked(System.String)
extern "C" void AppboyBinding_LogCardClicked_m78 (Object_t * __this /* static, unused */, String_t* ___cardJSONString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::RequestFeedRefresh()
extern "C" void AppboyBinding_RequestFeedRefresh_m79 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::RequestFeedRefreshFromCache()
extern "C" void AppboyBinding_RequestFeedRefreshFromCache_m80 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::LogFeedDisplayed()
extern "C" void AppboyBinding_LogFeedDisplayed_m81 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::LogFeedbackDisplayed()
extern "C" void AppboyBinding_LogFeedbackDisplayed_m82 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
