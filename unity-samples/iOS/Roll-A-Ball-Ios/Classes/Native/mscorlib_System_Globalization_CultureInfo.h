#pragma once
#include <stdint.h>
// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile)
struct CultureInfo_t1065;
// System.Object
struct Object_t;
// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile)
struct NumberFormatInfo_t1737;
// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile)
struct DateTimeFormatInfo_t1900;
// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile)
struct TextInfo_t1794;
// System.String
struct String_t;
// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile)
struct CompareInfo_t1532;
// System.Globalization.Calendar[]
struct CalendarU5BU5D_t1901;
// System.Globalization.CultureInfo
struct CultureInfo_t1065;
// System.Globalization.Calendar
struct Calendar_t1896;
// System.Byte[]
struct ByteU5BU5D_t97;
// System.Collections.Hashtable
struct Hashtable_t414;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t56;
// System.Object
#include "mscorlib_System_Object.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.Globalization.CultureInfo
struct CultureInfo_t1065  : public Object_t
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_7;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_8;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_9;
	// System.Int32 System.Globalization.CultureInfo::specific_lcid
	int32_t ___specific_lcid_10;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_11;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_12;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_13;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t1737 * ___numInfo_14;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t1900 * ___dateTimeInfo_15;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_t1794 * ___textInfo_16;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_17;
	// System.String System.Globalization.CultureInfo::displayname
	String_t* ___displayname_18;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_19;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_20;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_21;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_22;
	// System.String System.Globalization.CultureInfo::icu_name
	String_t* ___icu_name_23;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_24;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_25;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1532 * ___compareInfo_26;
	// System.Int32* System.Globalization.CultureInfo::calendar_data
	int32_t* ___calendar_data_27;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_28;
	// System.Globalization.Calendar[] System.Globalization.CultureInfo::optional_calendars
	CalendarU5BU5D_t1901* ___optional_calendars_29;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t1065 * ___parent_culture_30;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_31;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t1896 * ___calendar_32;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_33;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_t97* ___cached_serialized_form_34;
};
struct CultureInfo_t1065_StaticFields{
	// System.Int32 System.Globalization.CultureInfo::NumOptionalCalendars
	int32_t ___NumOptionalCalendars_0;
	// System.Int32 System.Globalization.CultureInfo::GregorianTypeMask
	int32_t ___GregorianTypeMask_1;
	// System.Int32 System.Globalization.CultureInfo::CalendarTypeBits
	int32_t ___CalendarTypeBits_2;
	// System.Int32 System.Globalization.CultureInfo::InvariantCultureId
	int32_t ___InvariantCultureId_3;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t1065 * ___invariant_culture_info_4;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	Object_t * ___shared_table_lock_5;
	// System.Int32 System.Globalization.CultureInfo::BootstrapCultureID
	int32_t ___BootstrapCultureID_6;
	// System.String System.Globalization.CultureInfo::MSG_READONLY
	String_t* ___MSG_READONLY_35;
	// System.Collections.Hashtable System.Globalization.CultureInfo::shared_by_number
	Hashtable_t414 * ___shared_by_number_36;
	// System.Collections.Hashtable System.Globalization.CultureInfo::shared_by_name
	Hashtable_t414 * ___shared_by_name_37;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Globalization.CultureInfo::<>f__switch$map19
	Dictionary_2_t56 * ___U3CU3Ef__switch$map19_38;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Globalization.CultureInfo::<>f__switch$map1A
	Dictionary_2_t56 * ___U3CU3Ef__switch$map1A_39;
};
