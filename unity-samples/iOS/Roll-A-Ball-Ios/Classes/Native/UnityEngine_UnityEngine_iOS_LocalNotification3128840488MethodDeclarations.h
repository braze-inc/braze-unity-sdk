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

// UnityEngine.iOS.LocalNotification
struct LocalNotification_t3128840488;
// System.String
struct String_t;
// System.Collections.IDictionary
struct IDictionary_t1654916945;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime339033936.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_iOS_CalendarUnit3441945428.h"
#include "UnityEngine_UnityEngine_iOS_CalendarIdentifier4278446073.h"

// System.Void UnityEngine.iOS.LocalNotification::.ctor()
extern "C"  void LocalNotification__ctor_m2361357092 (LocalNotification_t3128840488 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.LocalNotification::.cctor()
extern "C"  void LocalNotification__cctor_m4000496905 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double UnityEngine.iOS.LocalNotification::GetFireDate()
extern "C"  double LocalNotification_GetFireDate_m3226659871 (LocalNotification_t3128840488 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.LocalNotification::SetFireDate(System.Double)
extern "C"  void LocalNotification_SetFireDate_m1553477818 (LocalNotification_t3128840488 * __this, double ___dt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime UnityEngine.iOS.LocalNotification::get_fireDate()
extern "C"  DateTime_t339033936  LocalNotification_get_fireDate_m2185968852 (LocalNotification_t3128840488 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.LocalNotification::set_fireDate(System.DateTime)
extern "C"  void LocalNotification_set_fireDate_m3705017239 (LocalNotification_t3128840488 * __this, DateTime_t339033936  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.iOS.LocalNotification::get_timeZone()
extern "C"  String_t* LocalNotification_get_timeZone_m2940284639 (LocalNotification_t3128840488 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.LocalNotification::set_timeZone(System.String)
extern "C"  void LocalNotification_set_timeZone_m2670784108 (LocalNotification_t3128840488 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.iOS.CalendarUnit UnityEngine.iOS.LocalNotification::get_repeatInterval()
extern "C"  int32_t LocalNotification_get_repeatInterval_m2938542676 (LocalNotification_t3128840488 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.LocalNotification::set_repeatInterval(UnityEngine.iOS.CalendarUnit)
extern "C"  void LocalNotification_set_repeatInterval_m2284412131 (LocalNotification_t3128840488 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.iOS.CalendarIdentifier UnityEngine.iOS.LocalNotification::get_repeatCalendar()
extern "C"  int32_t LocalNotification_get_repeatCalendar_m916891826 (LocalNotification_t3128840488 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.LocalNotification::set_repeatCalendar(UnityEngine.iOS.CalendarIdentifier)
extern "C"  void LocalNotification_set_repeatCalendar_m599340503 (LocalNotification_t3128840488 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.iOS.LocalNotification::get_alertBody()
extern "C"  String_t* LocalNotification_get_alertBody_m3216658234 (LocalNotification_t3128840488 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.LocalNotification::set_alertBody(System.String)
extern "C"  void LocalNotification_set_alertBody_m3334455103 (LocalNotification_t3128840488 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.iOS.LocalNotification::get_alertAction()
extern "C"  String_t* LocalNotification_get_alertAction_m4064597262 (LocalNotification_t3128840488 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.LocalNotification::set_alertAction(System.String)
extern "C"  void LocalNotification_set_alertAction_m860676139 (LocalNotification_t3128840488 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.iOS.LocalNotification::get_hasAction()
extern "C"  bool LocalNotification_get_hasAction_m3802604239 (LocalNotification_t3128840488 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.LocalNotification::set_hasAction(System.Boolean)
extern "C"  void LocalNotification_set_hasAction_m3331895596 (LocalNotification_t3128840488 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.iOS.LocalNotification::get_alertLaunchImage()
extern "C"  String_t* LocalNotification_get_alertLaunchImage_m3685756786 (LocalNotification_t3128840488 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.LocalNotification::set_alertLaunchImage(System.String)
extern "C"  void LocalNotification_set_alertLaunchImage_m2289744825 (LocalNotification_t3128840488 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.iOS.LocalNotification::get_applicationIconBadgeNumber()
extern "C"  int32_t LocalNotification_get_applicationIconBadgeNumber_m598051564 (LocalNotification_t3128840488 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.LocalNotification::set_applicationIconBadgeNumber(System.Int32)
extern "C"  void LocalNotification_set_applicationIconBadgeNumber_m4106546993 (LocalNotification_t3128840488 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.iOS.LocalNotification::get_soundName()
extern "C"  String_t* LocalNotification_get_soundName_m2126669654 (LocalNotification_t3128840488 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.LocalNotification::set_soundName(System.String)
extern "C"  void LocalNotification_set_soundName_m870364323 (LocalNotification_t3128840488 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.iOS.LocalNotification::get_defaultSoundName()
extern "C"  String_t* LocalNotification_get_defaultSoundName_m2358493375 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary UnityEngine.iOS.LocalNotification::get_userInfo()
extern "C"  Il2CppObject * LocalNotification_get_userInfo_m4128471802 (LocalNotification_t3128840488 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.LocalNotification::set_userInfo(System.Collections.IDictionary)
extern "C"  void LocalNotification_set_userInfo_m3850714959 (LocalNotification_t3128840488 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.LocalNotification::Destroy()
extern "C"  void LocalNotification_Destroy_m3155596668 (LocalNotification_t3128840488 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.LocalNotification::Finalize()
extern "C"  void LocalNotification_Finalize_m22293182 (LocalNotification_t3128840488 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.LocalNotification::InitWrapper()
extern "C"  void LocalNotification_InitWrapper_m910277669 (LocalNotification_t3128840488 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
