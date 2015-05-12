#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Globalization.CultureInfo
struct CultureInfo_t1065;
// System.String
struct String_t;
// System.Globalization.TextInfo
struct TextInfo_t1794;
// System.Globalization.CompareInfo
struct CompareInfo_t1532;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t1737;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t1900;
// System.Object
struct Object_t;
// System.Type
struct Type_t;

// System.Void System.Globalization.CultureInfo::.ctor(System.Int32)
 void CultureInfo__ctor_m9240 (CultureInfo_t1065 * __this, int32_t ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::.ctor(System.Int32,System.Boolean)
 void CultureInfo__ctor_m9241 (CultureInfo_t1065 * __this, int32_t ___culture, bool ___useUserOverride, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::.ctor(System.Int32,System.Boolean,System.Boolean)
 void CultureInfo__ctor_m9242 (CultureInfo_t1065 * __this, int32_t ___culture, bool ___useUserOverride, bool ___read_only, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::.ctor(System.String,System.Boolean,System.Boolean)
 void CultureInfo__ctor_m9243 (CultureInfo_t1065 * __this, String_t* ___name, bool ___useUserOverride, bool ___read_only, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::.ctor()
 void CultureInfo__ctor_m9244 (CultureInfo_t1065 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::.cctor()
 void CultureInfo__cctor_m9245 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
 CultureInfo_t1065 * CultureInfo_get_InvariantCulture_m6403 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_CurrentCulture()
 CultureInfo_t1065 * CultureInfo_get_CurrentCulture_m6559 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_CurrentUICulture()
 CultureInfo_t1065 * CultureInfo_get_CurrentUICulture_m6563 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::ConstructCurrentCulture()
 CultureInfo_t1065 * CultureInfo_ConstructCurrentCulture_m9246 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::ConstructCurrentUICulture()
 CultureInfo_t1065 * CultureInfo_ConstructCurrentUICulture_m9247 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CultureInfo::get_LCID()
 int32_t CultureInfo_get_LCID_m9248 (CultureInfo_t1065 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.CultureInfo::get_Name()
 String_t* CultureInfo_get_Name_m9249 (CultureInfo_t1065 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_Parent()
 CultureInfo_t1065 * CultureInfo_get_Parent_m9250 (CultureInfo_t1065 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.TextInfo System.Globalization.CultureInfo::get_TextInfo()
 TextInfo_t1794 * CultureInfo_get_TextInfo_m9251 (CultureInfo_t1065 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.CultureInfo::get_IcuName()
 String_t* CultureInfo_get_IcuName_m9252 (CultureInfo_t1065 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::Equals(System.Object)
 bool CultureInfo_Equals_m9253 (CultureInfo_t1065 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CultureInfo::GetHashCode()
 int32_t CultureInfo_GetHashCode_m9254 (CultureInfo_t1065 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.CultureInfo::ToString()
 String_t* CultureInfo_ToString_m9255 (CultureInfo_t1065 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CompareInfo System.Globalization.CultureInfo::get_CompareInfo()
 CompareInfo_t1532 * CultureInfo_get_CompareInfo_m6560 (CultureInfo_t1065 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::get_IsNeutralCulture()
 bool CultureInfo_get_IsNeutralCulture_m9256 (CultureInfo_t1065 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::CheckNeutral()
 void CultureInfo_CheckNeutral_m9257 (CultureInfo_t1065 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.NumberFormatInfo System.Globalization.CultureInfo::get_NumberFormat()
 NumberFormatInfo_t1737 * CultureInfo_get_NumberFormat_m9258 (CultureInfo_t1065 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DateTimeFormatInfo System.Globalization.CultureInfo::get_DateTimeFormat()
 DateTimeFormatInfo_t1900 * CultureInfo_get_DateTimeFormat_m9259 (CultureInfo_t1065 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::get_IsReadOnly()
 bool CultureInfo_get_IsReadOnly_m9260 (CultureInfo_t1065 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Globalization.CultureInfo::GetFormat(System.Type)
 Object_t * CultureInfo_GetFormat_m9261 (CultureInfo_t1065 * __this, Type_t * ___formatType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::Construct()
 void CultureInfo_Construct_m9262 (CultureInfo_t1065 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::ConstructInternalLocaleFromName(System.String)
 bool CultureInfo_ConstructInternalLocaleFromName_m9263 (CultureInfo_t1065 * __this, String_t* ___locale, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::ConstructInternalLocaleFromLcid(System.Int32)
 bool CultureInfo_ConstructInternalLocaleFromLcid_m9264 (CultureInfo_t1065 * __this, int32_t ___lcid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::ConstructInternalLocaleFromCurrentLocale(System.Globalization.CultureInfo)
 bool CultureInfo_ConstructInternalLocaleFromCurrentLocale_m9265 (Object_t * __this/* static, unused */, CultureInfo_t1065 * ___ci, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::construct_internal_locale_from_lcid(System.Int32)
 bool CultureInfo_construct_internal_locale_from_lcid_m9266 (CultureInfo_t1065 * __this, int32_t ___lcid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::construct_internal_locale_from_name(System.String)
 bool CultureInfo_construct_internal_locale_from_name_m9267 (CultureInfo_t1065 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::construct_internal_locale_from_current_locale(System.Globalization.CultureInfo)
 bool CultureInfo_construct_internal_locale_from_current_locale_m9268 (Object_t * __this/* static, unused */, CultureInfo_t1065 * ___ci, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::construct_datetime_format()
 void CultureInfo_construct_datetime_format_m9269 (CultureInfo_t1065 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::construct_number_format()
 void CultureInfo_construct_number_format_m9270 (CultureInfo_t1065 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::ConstructInvariant(System.Boolean)
 void CultureInfo_ConstructInvariant_m9271 (CultureInfo_t1065 * __this, bool ___read_only, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.TextInfo System.Globalization.CultureInfo::CreateTextInfo(System.Boolean)
 TextInfo_t1794 * CultureInfo_CreateTextInfo_m9272 (CultureInfo_t1065 * __this, bool ___readOnly, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::CreateCulture(System.String,System.Boolean)
 CultureInfo_t1065 * CultureInfo_CreateCulture_m9273 (Object_t * __this/* static, unused */, String_t* ___name, bool ___reference, MethodInfo* method) IL2CPP_METHOD_ATTR;
