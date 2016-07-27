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
struct AppboyBinding_t176884387;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t2956870243;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t2474804324;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1765447871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Decimal1688557254.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Appboy_Models_Gender3054904288.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Appboy_Models_AppboyNo12027852.h"
#include "mscorlib_System_Nullable_1_gen1645974900.h"
#include "mscorlib_System_Nullable_1_gen1438485399.h"

// System.Void Appboy.AppboyBinding::.ctor()
extern "C"  void AppboyBinding__ctor_m3810080216 (AppboyBinding_t176884387 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::LogPurchase(System.String,System.String,System.Decimal)
extern "C"  void AppboyBinding_LogPurchase_m3269456529 (Il2CppObject * __this /* static, unused */, String_t* ___productId0, String_t* ___currencyCode1, Decimal_t1688557254  ___price2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::IncrementCustomUserAttribute(System.String)
extern "C"  void AppboyBinding_IncrementCustomUserAttribute_m1819792325 (Il2CppObject * __this /* static, unused */, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::Start()
extern "C"  void AppboyBinding_Start_m2757218008 (AppboyBinding_t176884387 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_logCustomEvent(System.String,System.String)
extern "C"  void AppboyBinding__logCustomEvent_m834133444 (Il2CppObject * __this /* static, unused */, String_t* ___eventName0, String_t* ___properties1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_changeUser(System.String)
extern "C"  void AppboyBinding__changeUser_m3452243698 (Il2CppObject * __this /* static, unused */, String_t* ___userId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_logPurchase(System.String,System.String,System.String,System.Int32,System.String)
extern "C"  void AppboyBinding__logPurchase_m2265069195 (Il2CppObject * __this /* static, unused */, String_t* ___productId0, String_t* ___currencyCode1, String_t* ___price2, int32_t ___quantity3, String_t* ___properties4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_setUserFirstName(System.String)
extern "C"  void AppboyBinding__setUserFirstName_m2180384927 (Il2CppObject * __this /* static, unused */, String_t* ___firstName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_setUserLastName(System.String)
extern "C"  void AppboyBinding__setUserLastName_m2881210471 (Il2CppObject * __this /* static, unused */, String_t* ___lastName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_setUserPhoneNumber(System.String)
extern "C"  void AppboyBinding__setUserPhoneNumber_m3234567651 (Il2CppObject * __this /* static, unused */, String_t* ___phoneNumber0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_setUserAvatarImageURL(System.String)
extern "C"  void AppboyBinding__setUserAvatarImageURL_m384080219 (Il2CppObject * __this /* static, unused */, String_t* ___imageURL0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_setUserBio(System.String)
extern "C"  void AppboyBinding__setUserBio_m1558348818 (Il2CppObject * __this /* static, unused */, String_t* ___bio0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_setUserGender(System.Int32)
extern "C"  void AppboyBinding__setUserGender_m3534766604 (Il2CppObject * __this /* static, unused */, int32_t ___gender0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_setUserEmail(System.String)
extern "C"  void AppboyBinding__setUserEmail_m2834202814 (Il2CppObject * __this /* static, unused */, String_t* ___email0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_setUserDateOfBirth(System.Int32,System.Int32,System.Int32)
extern "C"  void AppboyBinding__setUserDateOfBirth_m4039033843 (Il2CppObject * __this /* static, unused */, int32_t ___year0, int32_t ___month1, int32_t ___day2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_setUserCountry(System.String)
extern "C"  void AppboyBinding__setUserCountry_m2355664708 (Il2CppObject * __this /* static, unused */, String_t* ___country0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_setUserHomeCity(System.String)
extern "C"  void AppboyBinding__setUserHomeCity_m578522270 (Il2CppObject * __this /* static, unused */, String_t* ___city0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_setUserIsSubscribedToEmails(System.Boolean)
extern "C"  void AppboyBinding__setUserIsSubscribedToEmails_m1691516647 (Il2CppObject * __this /* static, unused */, bool ___isSubscribedToEmails0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_setUserEmailNotificationSubscriptionType(System.Int32)
extern "C"  void AppboyBinding__setUserEmailNotificationSubscriptionType_m3491989303 (Il2CppObject * __this /* static, unused */, int32_t ___emailNotificationSubscriptionType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_setUserPushNotificationSubscriptionType(System.Int32)
extern "C"  void AppboyBinding__setUserPushNotificationSubscriptionType_m1518021639 (Il2CppObject * __this /* static, unused */, int32_t ___pushNotificationSubscriptionType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_setCustomUserAttributeBool(System.String,System.Boolean)
extern "C"  void AppboyBinding__setCustomUserAttributeBool_m1823096152 (Il2CppObject * __this /* static, unused */, String_t* ___key0, bool ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_setCustomUserAttributeInt(System.String,System.Int32)
extern "C"  void AppboyBinding__setCustomUserAttributeInt_m4194185555 (Il2CppObject * __this /* static, unused */, String_t* ___key0, int32_t ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_setCustomUserAttributeFloat(System.String,System.Single)
extern "C"  void AppboyBinding__setCustomUserAttributeFloat_m1261365788 (Il2CppObject * __this /* static, unused */, String_t* ___key0, float ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_setCustomUserAttributeString(System.String,System.String)
extern "C"  void AppboyBinding__setCustomUserAttributeString_m661883834 (Il2CppObject * __this /* static, unused */, String_t* ___key0, String_t* ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_setCustomUserAttributeToNow(System.String)
extern "C"  void AppboyBinding__setCustomUserAttributeToNow_m3926110616 (Il2CppObject * __this /* static, unused */, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_setCustomUserAttributeToSecondsFromEpoch(System.String,System.Int64)
extern "C"  void AppboyBinding__setCustomUserAttributeToSecondsFromEpoch_m602296036 (Il2CppObject * __this /* static, unused */, String_t* ___key0, int64_t ___seconds1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_unsetCustomUserAttribute(System.String)
extern "C"  void AppboyBinding__unsetCustomUserAttribute_m663556310 (Il2CppObject * __this /* static, unused */, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_incrementCustomUserAttribute(System.String,System.Int32)
extern "C"  void AppboyBinding__incrementCustomUserAttribute_m1461162171 (Il2CppObject * __this /* static, unused */, String_t* ___key0, int32_t ___incrementValue1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_setCustomUserAttributeArray(System.String,System.String[],System.Int32)
extern "C"  void AppboyBinding__setCustomUserAttributeArray_m3023545123 (Il2CppObject * __this /* static, unused */, String_t* ___key0, StringU5BU5D_t2956870243* ___array1, int32_t ___size2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_addToCustomUserAttributeArray(System.String,System.String)
extern "C"  void AppboyBinding__addToCustomUserAttributeArray_m3970679100 (Il2CppObject * __this /* static, unused */, String_t* ___key0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_removeFromCustomUserAttributeArray(System.String,System.String)
extern "C"  void AppboyBinding__removeFromCustomUserAttributeArray_m1597504322 (Il2CppObject * __this /* static, unused */, String_t* ___key0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_setUserFacebookData(System.String,System.String,System.String,System.String,System.String,System.String,System.Int32,System.Int32,System.String)
extern "C"  void AppboyBinding__setUserFacebookData_m1958155904 (Il2CppObject * __this /* static, unused */, String_t* ___facebookId0, String_t* ___firstName1, String_t* ___lastName2, String_t* ___email3, String_t* ___bio4, String_t* ___cityName5, int32_t ___gender6, int32_t ___numberOfFriends7, String_t* ___birthday8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_setUserTwitterData(System.Int32,System.String,System.String,System.String,System.Int32,System.Int32,System.Int32,System.String)
extern "C"  void AppboyBinding__setUserTwitterData_m2134072649 (Il2CppObject * __this /* static, unused */, int32_t ___twitterUserId0, String_t* ___twitterHandle1, String_t* ___name2, String_t* ___description3, int32_t ___followerCount4, int32_t ___followingCount5, int32_t ___tweetCount6, String_t* ___profileImageUrl7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_submitFeedback(System.String,System.String,System.Boolean)
extern "C"  void AppboyBinding__submitFeedback_m2298876209 (Il2CppObject * __this /* static, unused */, String_t* ___replyToEmail0, String_t* ___message1, bool ___isReportingABug2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_logInAppMessageClicked(System.String)
extern "C"  void AppboyBinding__logInAppMessageClicked_m2218269909 (Il2CppObject * __this /* static, unused */, String_t* ___inAppMessageJSONString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_logInAppMessageImpression(System.String)
extern "C"  void AppboyBinding__logInAppMessageImpression_m260731997 (Il2CppObject * __this /* static, unused */, String_t* ___inAppMessageJSONString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_logInAppMessageButtonClicked(System.String,System.Int32)
extern "C"  void AppboyBinding__logInAppMessageButtonClicked_m687519184 (Il2CppObject * __this /* static, unused */, String_t* ___inAppMessageJSONString0, int32_t ___buttonID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_logCardImpression(System.String)
extern "C"  void AppboyBinding__logCardImpression_m3477396120 (Il2CppObject * __this /* static, unused */, String_t* ___cardJSONString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_logCardClicked(System.String)
extern "C"  void AppboyBinding__logCardClicked_m3767195770 (Il2CppObject * __this /* static, unused */, String_t* ___cardJSONString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_requestFeedRefresh()
extern "C"  void AppboyBinding__requestFeedRefresh_m2125489923 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_requestFeedRefreshFromCache()
extern "C"  void AppboyBinding__requestFeedRefreshFromCache_m2489692439 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_logFeedDisplayed()
extern "C"  void AppboyBinding__logFeedDisplayed_m490304116 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_logFeedbackDisplayed()
extern "C"  void AppboyBinding__logFeedbackDisplayed_m4167130669 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::_requestInAppMessage()
extern "C"  void AppboyBinding__requestInAppMessage_m3815422631 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::LogCustomEvent(System.String)
extern "C"  void AppboyBinding_LogCustomEvent_m3812841841 (Il2CppObject * __this /* static, unused */, String_t* ___eventName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::LogCustomEvent(System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void AppboyBinding_LogCustomEvent_m1567227284 (Il2CppObject * __this /* static, unused */, String_t* ___eventName0, Dictionary_2_t2474804324 * ___properties1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::LogPurchase(System.String,System.String,System.Decimal,System.Int32)
extern "C"  void AppboyBinding_LogPurchase_m2782633446 (Il2CppObject * __this /* static, unused */, String_t* ___productId0, String_t* ___currencyCode1, Decimal_t1688557254  ___price2, int32_t ___quantity3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::LogPurchase(System.String,System.String,System.Decimal,System.Int32,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void AppboyBinding_LogPurchase_m3523764799 (Il2CppObject * __this /* static, unused */, String_t* ___productId0, String_t* ___currencyCode1, Decimal_t1688557254  ___price2, int32_t ___quantity3, Dictionary_2_t2474804324 * ___properties4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::ChangeUser(System.String)
extern "C"  void AppboyBinding_ChangeUser_m3650765147 (Il2CppObject * __this /* static, unused */, String_t* ___userId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::SetUserFirstName(System.String)
extern "C"  void AppboyBinding_SetUserFirstName_m1141639240 (Il2CppObject * __this /* static, unused */, String_t* ___firstName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::SetUserLastName(System.String)
extern "C"  void AppboyBinding_SetUserLastName_m3263344542 (Il2CppObject * __this /* static, unused */, String_t* ___lastName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::SetUserEmail(System.String)
extern "C"  void AppboyBinding_SetUserEmail_m339786983 (Il2CppObject * __this /* static, unused */, String_t* ___email0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::SetUserBio(System.String)
extern "C"  void AppboyBinding_SetUserBio_m1756870267 (Il2CppObject * __this /* static, unused */, String_t* ___bio0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::SetUserGender(Appboy.Models.Gender)
extern "C"  void AppboyBinding_SetUserGender_m1081293154 (Il2CppObject * __this /* static, unused */, int32_t ___gender0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::SetUserDateOfBirth(System.Int32,System.Int32,System.Int32)
extern "C"  void AppboyBinding_SetUserDateOfBirth_m3118416554 (Il2CppObject * __this /* static, unused */, int32_t ___year0, int32_t ___month1, int32_t ___day2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::SetUserCountry(System.String)
extern "C"  void AppboyBinding_SetUserCountry_m1813802285 (Il2CppObject * __this /* static, unused */, String_t* ___country0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::SetUserHomeCity(System.String)
extern "C"  void AppboyBinding_SetUserHomeCity_m960656341 (Il2CppObject * __this /* static, unused */, String_t* ___city0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::SetUserIsSubscribedToEmails(System.Boolean)
extern "C"  void AppboyBinding_SetUserIsSubscribedToEmails_m2808170768 (Il2CppObject * __this /* static, unused */, bool ___isSubscribedToEmails0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::SetUserEmailNotificationSubscriptionType(Appboy.Models.AppboyNotificationSubscriptionType)
extern "C"  void AppboyBinding_SetUserEmailNotificationSubscriptionType_m619514543 (Il2CppObject * __this /* static, unused */, int32_t ___emailNotificationSubscriptionType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::SetUserPushNotificationSubscriptionType(Appboy.Models.AppboyNotificationSubscriptionType)
extern "C"  void AppboyBinding_SetUserPushNotificationSubscriptionType_m3414953777 (Il2CppObject * __this /* static, unused */, int32_t ___pushNotificationSubscriptionType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::SetUserPhoneNumber(System.String)
extern "C"  void AppboyBinding_SetUserPhoneNumber_m1432375116 (Il2CppObject * __this /* static, unused */, String_t* ___phoneNumber0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::SetUserAvatarImageURL(System.String)
extern "C"  void AppboyBinding_SetUserAvatarImageURL_m2652437330 (Il2CppObject * __this /* static, unused */, String_t* ___imageURL0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::SetCustomUserAttribute(System.String,System.Boolean)
extern "C"  void AppboyBinding_SetCustomUserAttribute_m4084099269 (Il2CppObject * __this /* static, unused */, String_t* ___key0, bool ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::SetCustomUserAttribute(System.String,System.Int32)
extern "C"  void AppboyBinding_SetCustomUserAttribute_m1021699103 (Il2CppObject * __this /* static, unused */, String_t* ___key0, int32_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::SetCustomUserAttribute(System.String,System.Single)
extern "C"  void AppboyBinding_SetCustomUserAttribute_m1745923229 (Il2CppObject * __this /* static, unused */, String_t* ___key0, float ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::SetCustomUserAttribute(System.String,System.String)
extern "C"  void AppboyBinding_SetCustomUserAttribute_m2064599540 (Il2CppObject * __this /* static, unused */, String_t* ___key0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::SetCustomUserAttributeToNow(System.String)
extern "C"  void AppboyBinding_SetCustomUserAttributeToNow_m2161016399 (Il2CppObject * __this /* static, unused */, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::SetCustomUserAttributeToSecondsFromEpoch(System.String,System.Int64)
extern "C"  void AppboyBinding_SetCustomUserAttributeToSecondsFromEpoch_m75306203 (Il2CppObject * __this /* static, unused */, String_t* ___key0, int64_t ___secondsFromEpoch1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::UnsetCustomUserAttribute(System.String)
extern "C"  void AppboyBinding_UnsetCustomUserAttribute_m274814847 (Il2CppObject * __this /* static, unused */, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::IncrementCustomUserAttribute(System.String,System.Int32)
extern "C"  void AppboyBinding_IncrementCustomUserAttribute_m1491489074 (Il2CppObject * __this /* static, unused */, String_t* ___key0, int32_t ___incrementValue1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::SetCustomUserAttributeArray(System.String,System.Collections.Generic.List`1<System.String>,System.Int32)
extern "C"  void AppboyBinding_SetCustomUserAttributeArray_m637105454 (Il2CppObject * __this /* static, unused */, String_t* ___key0, List_1_t1765447871 * ___array1, int32_t ___size2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::AddToCustomUserAttributeArray(System.String,System.String)
extern "C"  void AppboyBinding_AddToCustomUserAttributeArray_m3050061811 (Il2CppObject * __this /* static, unused */, String_t* ___key0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::RemoveFromCustomUserAttributeArray(System.String,System.String)
extern "C"  void AppboyBinding_RemoveFromCustomUserAttributeArray_m2231178987 (Il2CppObject * __this /* static, unused */, String_t* ___key0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::setUserFacebookData(System.String,System.String,System.String,System.String,System.String,System.String,System.Nullable`1<Appboy.Models.Gender>,System.Nullable`1<System.Int32>,System.String)
extern "C"  void AppboyBinding_setUserFacebookData_m1890887546 (Il2CppObject * __this /* static, unused */, String_t* ___facebookId0, String_t* ___firstName1, String_t* ___lastName2, String_t* ___email3, String_t* ___bio4, String_t* ___cityName5, Nullable_1_t1645974900  ___gender6, Nullable_1_t1438485399  ___numberOfFriends7, String_t* ___birthday8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::setUserTwitterData(System.Nullable`1<System.Int32>,System.String,System.String,System.String,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.String)
extern "C"  void AppboyBinding_setUserTwitterData_m3501681818 (Il2CppObject * __this /* static, unused */, Nullable_1_t1438485399  ___twitterUserId0, String_t* ___twitterHandle1, String_t* ___name2, String_t* ___description3, Nullable_1_t1438485399  ___followerCount4, Nullable_1_t1438485399  ___followingCount5, Nullable_1_t1438485399  ___tweetCount6, String_t* ___profileImageUrl7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::SubmitFeedback(System.String,System.String,System.Boolean)
extern "C"  void AppboyBinding_SubmitFeedback_m1378258920 (Il2CppObject * __this /* static, unused */, String_t* ___replyToEmail0, String_t* ___message1, bool ___isReportingABug2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::RequestInAppMessage()
extern "C"  void AppboyBinding_RequestInAppMessage_m1468238224 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::LogSlideupClicked(System.String)
extern "C"  void AppboyBinding_LogSlideupClicked_m3772455565 (Il2CppObject * __this /* static, unused */, String_t* ___slideupJSONString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::LogSlideupImpression(System.String)
extern "C"  void AppboyBinding_LogSlideupImpression_m1258159013 (Il2CppObject * __this /* static, unused */, String_t* ___slideupJSONString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::LogInAppMessageClicked(System.String)
extern "C"  void AppboyBinding_LogInAppMessageClicked_m3817863614 (Il2CppObject * __this /* static, unused */, String_t* ___inAppMessageJSONString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::LogInAppMessageImpression(System.String)
extern "C"  void AppboyBinding_LogInAppMessageImpression_m1094648532 (Il2CppObject * __this /* static, unused */, String_t* ___inAppMessageJSONString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::LogInAppMessageButtonClicked(System.String,System.Int32)
extern "C"  void AppboyBinding_LogInAppMessageButtonClicked_m717846087 (Il2CppObject * __this /* static, unused */, String_t* ___inAppMessageJSONString0, int32_t ___buttonID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::LogCardImpression(System.String)
extern "C"  void AppboyBinding_LogCardImpression_m1341050895 (Il2CppObject * __this /* static, unused */, String_t* ___cardJSONString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::LogCardClicked(System.String)
extern "C"  void AppboyBinding_LogCardClicked_m3225333347 (Il2CppObject * __this /* static, unused */, String_t* ___cardJSONString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::RequestFeedRefresh()
extern "C"  void AppboyBinding_RequestFeedRefresh_m3158152954 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::RequestFeedRefreshFromCache()
extern "C"  void AppboyBinding_RequestFeedRefreshFromCache_m1947830016 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::LogFeedDisplayed()
extern "C"  void AppboyBinding_LogFeedDisplayed_m2372940843 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.AppboyBinding::LogFeedbackDisplayed()
extern "C"  void AppboyBinding_LogFeedbackDisplayed_m123890788 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
