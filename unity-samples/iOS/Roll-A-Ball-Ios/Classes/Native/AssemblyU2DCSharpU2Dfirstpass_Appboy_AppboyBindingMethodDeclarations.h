#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Appboy.AppboyBinding
struct AppboyBinding_t1;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t3;
// System.Collections.Generic.List`1<System.String>
struct List_1_t4;
// System.Decimal
#include "mscorlib_System_Decimal.h"
// Appboy.Models.Gender
#include "AssemblyU2DCSharpU2Dfirstpass_Appboy_Models_Gender.h"
// Appboy.Models.AppboyNotificationSubscriptionType
#include "AssemblyU2DCSharpU2Dfirstpass_Appboy_Models_AppboyNotificati.h"

// System.Void Appboy.AppboyBinding::.ctor()
 void AppboyBinding__ctor_m0 (AppboyBinding_t1 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::LogPurchase(System.String,System.String,System.Decimal)
 void AppboyBinding_LogPurchase_m1 (Object_t * __this/* static, unused */, String_t* ___productId, String_t* ___currencyCode, Decimal_t5  ___price, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::IncrementCustomUserAttribute(System.String)
 void AppboyBinding_IncrementCustomUserAttribute_m2 (Object_t * __this/* static, unused */, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::Start()
 void AppboyBinding_Start_m3 (AppboyBinding_t1 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_logCustomEvent(System.String)
 void AppboyBinding__logCustomEvent_m4 (Object_t * __this/* static, unused */, String_t* ___eventName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_changeUser(System.String)
 void AppboyBinding__changeUser_m5 (Object_t * __this/* static, unused */, String_t* ___userId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_logPurchase(System.String,System.String,System.String,System.Int32)
 void AppboyBinding__logPurchase_m6 (Object_t * __this/* static, unused */, String_t* ___productId, String_t* ___currencyCode, String_t* ___price, int32_t ___quantity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_setUserFirstName(System.String)
 void AppboyBinding__setUserFirstName_m7 (Object_t * __this/* static, unused */, String_t* ___firstName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_setUserLastName(System.String)
 void AppboyBinding__setUserLastName_m8 (Object_t * __this/* static, unused */, String_t* ___lastName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_setUserPhoneNumber(System.String)
 void AppboyBinding__setUserPhoneNumber_m9 (Object_t * __this/* static, unused */, String_t* ___phoneNumber, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_setUserAvatarImageURL(System.String)
 void AppboyBinding__setUserAvatarImageURL_m10 (Object_t * __this/* static, unused */, String_t* ___imageURL, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_setUserBio(System.String)
 void AppboyBinding__setUserBio_m11 (Object_t * __this/* static, unused */, String_t* ___bio, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_setUserGender(System.Int32)
 void AppboyBinding__setUserGender_m12 (Object_t * __this/* static, unused */, int32_t ___gender, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_setUserEmail(System.String)
 void AppboyBinding__setUserEmail_m13 (Object_t * __this/* static, unused */, String_t* ___email, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_setUserDateOfBirth(System.Int32,System.Int32,System.Int32)
 void AppboyBinding__setUserDateOfBirth_m14 (Object_t * __this/* static, unused */, int32_t ___year, int32_t ___month, int32_t ___day, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_setUserCountry(System.String)
 void AppboyBinding__setUserCountry_m15 (Object_t * __this/* static, unused */, String_t* ___country, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_setUserHomeCity(System.String)
 void AppboyBinding__setUserHomeCity_m16 (Object_t * __this/* static, unused */, String_t* ___city, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_setUserIsSubscribedToEmails(System.Boolean)
 void AppboyBinding__setUserIsSubscribedToEmails_m17 (Object_t * __this/* static, unused */, bool ___isSubscribedToEmails, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_setUserEmailNotificationSubscriptionType(System.Int32)
 void AppboyBinding__setUserEmailNotificationSubscriptionType_m18 (Object_t * __this/* static, unused */, int32_t ___emailNotificationSubscriptionType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_setUserPushNotificationSubscriptionType(System.Int32)
 void AppboyBinding__setUserPushNotificationSubscriptionType_m19 (Object_t * __this/* static, unused */, int32_t ___pushNotificationSubscriptionType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_setCustomUserAttributeBool(System.String,System.Boolean)
 void AppboyBinding__setCustomUserAttributeBool_m20 (Object_t * __this/* static, unused */, String_t* ___key, bool ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_setCustomUserAttributeInt(System.String,System.Int32)
 void AppboyBinding__setCustomUserAttributeInt_m21 (Object_t * __this/* static, unused */, String_t* ___key, int32_t ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_setCustomUserAttributeFloat(System.String,System.Single)
 void AppboyBinding__setCustomUserAttributeFloat_m22 (Object_t * __this/* static, unused */, String_t* ___key, float ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_setCustomUserAttributeString(System.String,System.String)
 void AppboyBinding__setCustomUserAttributeString_m23 (Object_t * __this/* static, unused */, String_t* ___key, String_t* ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_setCustomUserAttributeToNow(System.String)
 void AppboyBinding__setCustomUserAttributeToNow_m24 (Object_t * __this/* static, unused */, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_setCustomUserAttributeToSecondsFromEpoch(System.String,System.Int64)
 void AppboyBinding__setCustomUserAttributeToSecondsFromEpoch_m25 (Object_t * __this/* static, unused */, String_t* ___key, int64_t ___seconds, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_unsetCustomUserAttribute(System.String)
 void AppboyBinding__unsetCustomUserAttribute_m26 (Object_t * __this/* static, unused */, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_incrementCustomUserAttribute(System.String,System.Int32)
 void AppboyBinding__incrementCustomUserAttribute_m27 (Object_t * __this/* static, unused */, String_t* ___key, int32_t ___incrementValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_setCustomUserAttributeArray(System.String,System.String[],System.Int32)
 void AppboyBinding__setCustomUserAttributeArray_m28 (Object_t * __this/* static, unused */, String_t* ___key, StringU5BU5D_t3* ___array, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_addToCustomUserAttributeArray(System.String,System.String)
 void AppboyBinding__addToCustomUserAttributeArray_m29 (Object_t * __this/* static, unused */, String_t* ___key, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_removeFromCustomUserAttributeArray(System.String,System.String)
 void AppboyBinding__removeFromCustomUserAttributeArray_m30 (Object_t * __this/* static, unused */, String_t* ___key, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_submitFeedback(System.String,System.String,System.Boolean)
 void AppboyBinding__submitFeedback_m31 (Object_t * __this/* static, unused */, String_t* ___replyToEmail, String_t* ___message, bool ___isReportingABug, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_logInAppMessageClicked(System.String)
 void AppboyBinding__logInAppMessageClicked_m32 (Object_t * __this/* static, unused */, String_t* ___inAppMessageJSONString, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_logInAppMessageImpression(System.String)
 void AppboyBinding__logInAppMessageImpression_m33 (Object_t * __this/* static, unused */, String_t* ___inAppMessageJSONString, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_logCardImpression(System.String)
 void AppboyBinding__logCardImpression_m34 (Object_t * __this/* static, unused */, String_t* ___cardJSONString, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_logCardClicked(System.String)
 void AppboyBinding__logCardClicked_m35 (Object_t * __this/* static, unused */, String_t* ___cardJSONString, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_requestFeedRefresh()
 void AppboyBinding__requestFeedRefresh_m36 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_requestFeedRefreshFromCache()
 void AppboyBinding__requestFeedRefreshFromCache_m37 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_logFeedDisplayed()
 void AppboyBinding__logFeedDisplayed_m38 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_logFeedbackDisplayed()
 void AppboyBinding__logFeedbackDisplayed_m39 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::LogCustomEvent(System.String)
 void AppboyBinding_LogCustomEvent_m40 (Object_t * __this/* static, unused */, String_t* ___eventName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::LogPurchase(System.String,System.String,System.Decimal,System.Int32)
 void AppboyBinding_LogPurchase_m41 (Object_t * __this/* static, unused */, String_t* ___productId, String_t* ___currencyCode, Decimal_t5  ___price, int32_t ___quantity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::ChangeUser(System.String)
 void AppboyBinding_ChangeUser_m42 (Object_t * __this/* static, unused */, String_t* ___userId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::SetUserFirstName(System.String)
 void AppboyBinding_SetUserFirstName_m43 (Object_t * __this/* static, unused */, String_t* ___firstName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::SetUserLastName(System.String)
 void AppboyBinding_SetUserLastName_m44 (Object_t * __this/* static, unused */, String_t* ___lastName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::SetUserEmail(System.String)
 void AppboyBinding_SetUserEmail_m45 (Object_t * __this/* static, unused */, String_t* ___email, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::SetUserBio(System.String)
 void AppboyBinding_SetUserBio_m46 (Object_t * __this/* static, unused */, String_t* ___bio, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::SetUserGender(Appboy.Models.Gender)
 void AppboyBinding_SetUserGender_m47 (Object_t * __this/* static, unused */, int32_t ___gender, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::SetUserDateOfBirth(System.Int32,System.Int32,System.Int32)
 void AppboyBinding_SetUserDateOfBirth_m48 (Object_t * __this/* static, unused */, int32_t ___year, int32_t ___month, int32_t ___day, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::SetUserCountry(System.String)
 void AppboyBinding_SetUserCountry_m49 (Object_t * __this/* static, unused */, String_t* ___country, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::SetUserHomeCity(System.String)
 void AppboyBinding_SetUserHomeCity_m50 (Object_t * __this/* static, unused */, String_t* ___city, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::SetUserIsSubscribedToEmails(System.Boolean)
 void AppboyBinding_SetUserIsSubscribedToEmails_m51 (Object_t * __this/* static, unused */, bool ___isSubscribedToEmails, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::SetUserEmailNotificationSubscriptionType(Appboy.Models.AppboyNotificationSubscriptionType)
 void AppboyBinding_SetUserEmailNotificationSubscriptionType_m52 (Object_t * __this/* static, unused */, int32_t ___emailNotificationSubscriptionType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::SetUserPushNotificationSubscriptionType(Appboy.Models.AppboyNotificationSubscriptionType)
 void AppboyBinding_SetUserPushNotificationSubscriptionType_m53 (Object_t * __this/* static, unused */, int32_t ___pushNotificationSubscriptionType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::SetUserPhoneNumber(System.String)
 void AppboyBinding_SetUserPhoneNumber_m54 (Object_t * __this/* static, unused */, String_t* ___phoneNumber, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::SetUserAvatarImageURL(System.String)
 void AppboyBinding_SetUserAvatarImageURL_m55 (Object_t * __this/* static, unused */, String_t* ___imageURL, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::SetCustomUserAttribute(System.String,System.Boolean)
 void AppboyBinding_SetCustomUserAttribute_m56 (Object_t * __this/* static, unused */, String_t* ___key, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::SetCustomUserAttribute(System.String,System.Int32)
 void AppboyBinding_SetCustomUserAttribute_m57 (Object_t * __this/* static, unused */, String_t* ___key, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::SetCustomUserAttribute(System.String,System.Single)
 void AppboyBinding_SetCustomUserAttribute_m58 (Object_t * __this/* static, unused */, String_t* ___key, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::SetCustomUserAttribute(System.String,System.String)
 void AppboyBinding_SetCustomUserAttribute_m59 (Object_t * __this/* static, unused */, String_t* ___key, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::SetCustomUserAttributeToNow(System.String)
 void AppboyBinding_SetCustomUserAttributeToNow_m60 (Object_t * __this/* static, unused */, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::SetCustomUserAttributeToSecondsFromEpoch(System.String,System.Int64)
 void AppboyBinding_SetCustomUserAttributeToSecondsFromEpoch_m61 (Object_t * __this/* static, unused */, String_t* ___key, int64_t ___secondsFromEpoch, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::UnsetCustomUserAttribute(System.String)
 void AppboyBinding_UnsetCustomUserAttribute_m62 (Object_t * __this/* static, unused */, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::IncrementCustomUserAttribute(System.String,System.Int32)
 void AppboyBinding_IncrementCustomUserAttribute_m63 (Object_t * __this/* static, unused */, String_t* ___key, int32_t ___incrementValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::SetCustomUserAttributeArray(System.String,System.Collections.Generic.List`1<System.String>,System.Int32)
 void AppboyBinding_SetCustomUserAttributeArray_m64 (Object_t * __this/* static, unused */, String_t* ___key, List_1_t4 * ___array, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::AddToCustomUserAttributeArray(System.String,System.String)
 void AppboyBinding_AddToCustomUserAttributeArray_m65 (Object_t * __this/* static, unused */, String_t* ___key, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::RemoveFromCustomUserAttributeArray(System.String,System.String)
 void AppboyBinding_RemoveFromCustomUserAttributeArray_m66 (Object_t * __this/* static, unused */, String_t* ___key, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::SubmitFeedback(System.String,System.String,System.Boolean)
 void AppboyBinding_SubmitFeedback_m67 (Object_t * __this/* static, unused */, String_t* ___replyToEmail, String_t* ___message, bool ___isReportingABug, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::ClearPushMessage(System.Int32)
 void AppboyBinding_ClearPushMessage_m68 (Object_t * __this/* static, unused */, int32_t ___notificationId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::LogInAppMessageClicked(System.String)
 void AppboyBinding_LogInAppMessageClicked_m69 (Object_t * __this/* static, unused */, String_t* ___inAppMessageJSONString, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::LogInAppMessageImpression(System.String)
 void AppboyBinding_LogInAppMessageImpression_m70 (Object_t * __this/* static, unused */, String_t* ___inAppMessageJSONString, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::LogCardImpression(System.String)
 void AppboyBinding_LogCardImpression_m71 (Object_t * __this/* static, unused */, String_t* ___cardJSONString, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::LogCardClicked(System.String)
 void AppboyBinding_LogCardClicked_m72 (Object_t * __this/* static, unused */, String_t* ___cardJSONString, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::RequestFeedRefresh()
 void AppboyBinding_RequestFeedRefresh_m73 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::RequestFeedRefreshFromCache()
 void AppboyBinding_RequestFeedRefreshFromCache_m74 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::LogFeedDisplayed()
 void AppboyBinding_LogFeedDisplayed_m75 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::LogFeedbackDisplayed()
 void AppboyBinding_LogFeedbackDisplayed_m76 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
