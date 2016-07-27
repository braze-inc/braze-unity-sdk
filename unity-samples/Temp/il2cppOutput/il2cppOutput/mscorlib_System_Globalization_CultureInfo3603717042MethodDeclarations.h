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

// System.Globalization.CultureInfo
struct CultureInfo_t3603717042;
// System.String
struct String_t;
// System.Globalization.TextInfo
struct TextInfo_t1829318641;
// System.Object
struct Il2CppObject;
// System.Globalization.CompareInfo
struct CompareInfo_t4023832425;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t3411951076;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t2504543158;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Globalization_NumberFormatInfo3411951076.h"
#include "mscorlib_System_Globalization_DateTimeFormatInfo2504543158.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Globalization_CultureInfo3603717042.h"

// System.Void System.Globalization.CultureInfo::.ctor(System.Int32)
extern "C"  void CultureInfo__ctor_m3984190515 (CultureInfo_t3603717042 * __this, int32_t ___culture0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::.ctor(System.Int32,System.Boolean)
extern "C"  void CultureInfo__ctor_m3309312746 (CultureInfo_t3603717042 * __this, int32_t ___culture0, bool ___useUserOverride1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::.ctor(System.Int32,System.Boolean,System.Boolean)
extern "C"  void CultureInfo__ctor_m501073747 (CultureInfo_t3603717042 * __this, int32_t ___culture0, bool ___useUserOverride1, bool ___read_only2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::.ctor(System.String)
extern "C"  void CultureInfo__ctor_m3707520096 (CultureInfo_t3603717042 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::.ctor(System.String,System.Boolean)
extern "C"  void CultureInfo__ctor_m1818673949 (CultureInfo_t3603717042 * __this, String_t* ___name0, bool ___useUserOverride1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::.ctor(System.String,System.Boolean,System.Boolean)
extern "C"  void CultureInfo__ctor_m799101632 (CultureInfo_t3603717042 * __this, String_t* ___name0, bool ___useUserOverride1, bool ___read_only2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::.ctor()
extern "C"  void CultureInfo__ctor_m2439903714 (CultureInfo_t3603717042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::.cctor()
extern "C"  void CultureInfo__cctor_m2140474891 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
extern "C"  CultureInfo_t3603717042 * CultureInfo_get_InvariantCulture_m764001524 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_CurrentCulture()
extern "C"  CultureInfo_t3603717042 * CultureInfo_get_CurrentCulture_m2905498779 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_CurrentUICulture()
extern "C"  CultureInfo_t3603717042 * CultureInfo_get_CurrentUICulture_m1742589319 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::ConstructCurrentCulture()
extern "C"  CultureInfo_t3603717042 * CultureInfo_ConstructCurrentCulture_m3092907025 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::ConstructCurrentUICulture()
extern "C"  CultureInfo_t3603717042 * CultureInfo_ConstructCurrentUICulture_m1453287293 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CultureInfo::get_LCID()
extern "C"  int32_t CultureInfo_get_LCID_m1645560313 (CultureInfo_t3603717042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.CultureInfo::get_Name()
extern "C"  String_t* CultureInfo_get_Name_m1067687641 (CultureInfo_t3603717042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_Parent()
extern "C"  CultureInfo_t3603717042 * CultureInfo_get_Parent_m451838736 (CultureInfo_t3603717042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.TextInfo System.Globalization.CultureInfo::get_TextInfo()
extern "C"  TextInfo_t1829318641 * CultureInfo_get_TextInfo_m3424110770 (CultureInfo_t3603717042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.CultureInfo::get_IcuName()
extern "C"  String_t* CultureInfo_get_IcuName_m794066458 (CultureInfo_t3603717042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Globalization.CultureInfo::Clone()
extern "C"  Il2CppObject * CultureInfo_Clone_m1893614152 (CultureInfo_t3603717042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::Equals(System.Object)
extern "C"  bool CultureInfo_Equals_m2811537169 (CultureInfo_t3603717042 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CultureInfo::GetHashCode()
extern "C"  int32_t CultureInfo_GetHashCode_m1389692277 (CultureInfo_t3603717042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.CultureInfo::ToString()
extern "C"  String_t* CultureInfo_ToString_m429412721 (CultureInfo_t3603717042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CompareInfo System.Globalization.CultureInfo::get_CompareInfo()
extern "C"  CompareInfo_t4023832425 * CultureInfo_get_CompareInfo_m1894655206 (CultureInfo_t3603717042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::get_IsNeutralCulture()
extern "C"  bool CultureInfo_get_IsNeutralCulture_m3281017630 (CultureInfo_t3603717042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::CheckNeutral()
extern "C"  void CultureInfo_CheckNeutral_m2341300737 (CultureInfo_t3603717042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.NumberFormatInfo System.Globalization.CultureInfo::get_NumberFormat()
extern "C"  NumberFormatInfo_t3411951076 * CultureInfo_get_NumberFormat_m149371268 (CultureInfo_t3603717042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::set_NumberFormat(System.Globalization.NumberFormatInfo)
extern "C"  void CultureInfo_set_NumberFormat_m929801593 (CultureInfo_t3603717042 * __this, NumberFormatInfo_t3411951076 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DateTimeFormatInfo System.Globalization.CultureInfo::get_DateTimeFormat()
extern "C"  DateTimeFormatInfo_t2504543158 * CultureInfo_get_DateTimeFormat_m1881597700 (CultureInfo_t3603717042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::set_DateTimeFormat(System.Globalization.DateTimeFormatInfo)
extern "C"  void CultureInfo_set_DateTimeFormat_m1095763797 (CultureInfo_t3603717042 * __this, DateTimeFormatInfo_t2504543158 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::get_IsReadOnly()
extern "C"  bool CultureInfo_get_IsReadOnly_m3153492313 (CultureInfo_t3603717042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Globalization.CultureInfo::GetFormat(System.Type)
extern "C"  Il2CppObject * CultureInfo_GetFormat_m1536954785 (CultureInfo_t3603717042 * __this, Type_t * ___formatType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::Construct()
extern "C"  void CultureInfo_Construct_m2429096343 (CultureInfo_t3603717042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::ConstructInternalLocaleFromName(System.String)
extern "C"  bool CultureInfo_ConstructInternalLocaleFromName_m3079104193 (CultureInfo_t3603717042 * __this, String_t* ___locale0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::ConstructInternalLocaleFromLcid(System.Int32)
extern "C"  bool CultureInfo_ConstructInternalLocaleFromLcid_m332238777 (CultureInfo_t3603717042 * __this, int32_t ___lcid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::ConstructInternalLocaleFromCurrentLocale(System.Globalization.CultureInfo)
extern "C"  bool CultureInfo_ConstructInternalLocaleFromCurrentLocale_m39643311 (Il2CppObject * __this /* static, unused */, CultureInfo_t3603717042 * ___ci0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::construct_internal_locale_from_lcid(System.Int32)
extern "C"  bool CultureInfo_construct_internal_locale_from_lcid_m1451282539 (CultureInfo_t3603717042 * __this, int32_t ___lcid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::construct_internal_locale_from_name(System.String)
extern "C"  bool CultureInfo_construct_internal_locale_from_name_m3409722447 (CultureInfo_t3603717042 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::construct_internal_locale_from_current_locale(System.Globalization.CultureInfo)
extern "C"  bool CultureInfo_construct_internal_locale_from_current_locale_m2579188120 (Il2CppObject * __this /* static, unused */, CultureInfo_t3603717042 * ___ci0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::construct_datetime_format()
extern "C"  void CultureInfo_construct_datetime_format_m650587571 (CultureInfo_t3603717042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::construct_number_format()
extern "C"  void CultureInfo_construct_number_format_m650450789 (CultureInfo_t3603717042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::ConstructInvariant(System.Boolean)
extern "C"  void CultureInfo_ConstructInvariant_m2998357762 (CultureInfo_t3603717042 * __this, bool ___read_only0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.TextInfo System.Globalization.CultureInfo::CreateTextInfo(System.Boolean)
extern "C"  TextInfo_t1829318641 * CultureInfo_CreateTextInfo_m2501367740 (CultureInfo_t3603717042 * __this, bool ___readOnly0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::CreateCulture(System.String,System.Boolean)
extern "C"  CultureInfo_t3603717042 * CultureInfo_CreateCulture_m4255235762 (Il2CppObject * __this /* static, unused */, String_t* ___name0, bool ___reference1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
