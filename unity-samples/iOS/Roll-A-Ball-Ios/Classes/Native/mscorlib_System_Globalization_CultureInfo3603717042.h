#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile)
struct CultureInfo_t3603717042;
// System.Object
struct Il2CppObject;
// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile)
struct NumberFormatInfo_t3411951076;
// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile)
struct DateTimeFormatInfo_t2504543158;
// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile)
struct TextInfo_t1829318641;
// System.String
struct String_t;
// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile)
struct CompareInfo_t4023832425;
// System.Globalization.Calendar[]
struct CalendarU5BU5D_t1613826813;
// System.Globalization.CultureInfo
struct CultureInfo_t3603717042;
// System.Globalization.Calendar
struct Calendar_t2654956468;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Collections.Hashtable
struct Hashtable_t3875263730;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t190145395;

#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Void2779279689.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CultureInfo
struct  CultureInfo_t3603717042  : public Il2CppObject
{
public:
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
	NumberFormatInfo_t3411951076 * ___numInfo_14;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t2504543158 * ___dateTimeInfo_15;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_t1829318641 * ___textInfo_16;
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
	CompareInfo_t4023832425 * ___compareInfo_26;
	// System.Int32* System.Globalization.CultureInfo::calendar_data
	int32_t* ___calendar_data_27;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_28;
	// System.Globalization.Calendar[] System.Globalization.CultureInfo::optional_calendars
	CalendarU5BU5D_t1613826813* ___optional_calendars_29;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t3603717042 * ___parent_culture_30;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_31;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t2654956468 * ___calendar_32;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_33;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_t58506160* ___cached_serialized_form_34;

public:
	inline static int32_t get_offset_of_m_isReadOnly_7() { return static_cast<int32_t>(offsetof(CultureInfo_t3603717042, ___m_isReadOnly_7)); }
	inline bool get_m_isReadOnly_7() const { return ___m_isReadOnly_7; }
	inline bool* get_address_of_m_isReadOnly_7() { return &___m_isReadOnly_7; }
	inline void set_m_isReadOnly_7(bool value)
	{
		___m_isReadOnly_7 = value;
	}

	inline static int32_t get_offset_of_cultureID_8() { return static_cast<int32_t>(offsetof(CultureInfo_t3603717042, ___cultureID_8)); }
	inline int32_t get_cultureID_8() const { return ___cultureID_8; }
	inline int32_t* get_address_of_cultureID_8() { return &___cultureID_8; }
	inline void set_cultureID_8(int32_t value)
	{
		___cultureID_8 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_9() { return static_cast<int32_t>(offsetof(CultureInfo_t3603717042, ___parent_lcid_9)); }
	inline int32_t get_parent_lcid_9() const { return ___parent_lcid_9; }
	inline int32_t* get_address_of_parent_lcid_9() { return &___parent_lcid_9; }
	inline void set_parent_lcid_9(int32_t value)
	{
		___parent_lcid_9 = value;
	}

	inline static int32_t get_offset_of_specific_lcid_10() { return static_cast<int32_t>(offsetof(CultureInfo_t3603717042, ___specific_lcid_10)); }
	inline int32_t get_specific_lcid_10() const { return ___specific_lcid_10; }
	inline int32_t* get_address_of_specific_lcid_10() { return &___specific_lcid_10; }
	inline void set_specific_lcid_10(int32_t value)
	{
		___specific_lcid_10 = value;
	}

	inline static int32_t get_offset_of_datetime_index_11() { return static_cast<int32_t>(offsetof(CultureInfo_t3603717042, ___datetime_index_11)); }
	inline int32_t get_datetime_index_11() const { return ___datetime_index_11; }
	inline int32_t* get_address_of_datetime_index_11() { return &___datetime_index_11; }
	inline void set_datetime_index_11(int32_t value)
	{
		___datetime_index_11 = value;
	}

	inline static int32_t get_offset_of_number_index_12() { return static_cast<int32_t>(offsetof(CultureInfo_t3603717042, ___number_index_12)); }
	inline int32_t get_number_index_12() const { return ___number_index_12; }
	inline int32_t* get_address_of_number_index_12() { return &___number_index_12; }
	inline void set_number_index_12(int32_t value)
	{
		___number_index_12 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_13() { return static_cast<int32_t>(offsetof(CultureInfo_t3603717042, ___m_useUserOverride_13)); }
	inline bool get_m_useUserOverride_13() const { return ___m_useUserOverride_13; }
	inline bool* get_address_of_m_useUserOverride_13() { return &___m_useUserOverride_13; }
	inline void set_m_useUserOverride_13(bool value)
	{
		___m_useUserOverride_13 = value;
	}

	inline static int32_t get_offset_of_numInfo_14() { return static_cast<int32_t>(offsetof(CultureInfo_t3603717042, ___numInfo_14)); }
	inline NumberFormatInfo_t3411951076 * get_numInfo_14() const { return ___numInfo_14; }
	inline NumberFormatInfo_t3411951076 ** get_address_of_numInfo_14() { return &___numInfo_14; }
	inline void set_numInfo_14(NumberFormatInfo_t3411951076 * value)
	{
		___numInfo_14 = value;
		Il2CppCodeGenWriteBarrier(&___numInfo_14, value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_15() { return static_cast<int32_t>(offsetof(CultureInfo_t3603717042, ___dateTimeInfo_15)); }
	inline DateTimeFormatInfo_t2504543158 * get_dateTimeInfo_15() const { return ___dateTimeInfo_15; }
	inline DateTimeFormatInfo_t2504543158 ** get_address_of_dateTimeInfo_15() { return &___dateTimeInfo_15; }
	inline void set_dateTimeInfo_15(DateTimeFormatInfo_t2504543158 * value)
	{
		___dateTimeInfo_15 = value;
		Il2CppCodeGenWriteBarrier(&___dateTimeInfo_15, value);
	}

	inline static int32_t get_offset_of_textInfo_16() { return static_cast<int32_t>(offsetof(CultureInfo_t3603717042, ___textInfo_16)); }
	inline TextInfo_t1829318641 * get_textInfo_16() const { return ___textInfo_16; }
	inline TextInfo_t1829318641 ** get_address_of_textInfo_16() { return &___textInfo_16; }
	inline void set_textInfo_16(TextInfo_t1829318641 * value)
	{
		___textInfo_16 = value;
		Il2CppCodeGenWriteBarrier(&___textInfo_16, value);
	}

	inline static int32_t get_offset_of_m_name_17() { return static_cast<int32_t>(offsetof(CultureInfo_t3603717042, ___m_name_17)); }
	inline String_t* get_m_name_17() const { return ___m_name_17; }
	inline String_t** get_address_of_m_name_17() { return &___m_name_17; }
	inline void set_m_name_17(String_t* value)
	{
		___m_name_17 = value;
		Il2CppCodeGenWriteBarrier(&___m_name_17, value);
	}

	inline static int32_t get_offset_of_displayname_18() { return static_cast<int32_t>(offsetof(CultureInfo_t3603717042, ___displayname_18)); }
	inline String_t* get_displayname_18() const { return ___displayname_18; }
	inline String_t** get_address_of_displayname_18() { return &___displayname_18; }
	inline void set_displayname_18(String_t* value)
	{
		___displayname_18 = value;
		Il2CppCodeGenWriteBarrier(&___displayname_18, value);
	}

	inline static int32_t get_offset_of_englishname_19() { return static_cast<int32_t>(offsetof(CultureInfo_t3603717042, ___englishname_19)); }
	inline String_t* get_englishname_19() const { return ___englishname_19; }
	inline String_t** get_address_of_englishname_19() { return &___englishname_19; }
	inline void set_englishname_19(String_t* value)
	{
		___englishname_19 = value;
		Il2CppCodeGenWriteBarrier(&___englishname_19, value);
	}

	inline static int32_t get_offset_of_nativename_20() { return static_cast<int32_t>(offsetof(CultureInfo_t3603717042, ___nativename_20)); }
	inline String_t* get_nativename_20() const { return ___nativename_20; }
	inline String_t** get_address_of_nativename_20() { return &___nativename_20; }
	inline void set_nativename_20(String_t* value)
	{
		___nativename_20 = value;
		Il2CppCodeGenWriteBarrier(&___nativename_20, value);
	}

	inline static int32_t get_offset_of_iso3lang_21() { return static_cast<int32_t>(offsetof(CultureInfo_t3603717042, ___iso3lang_21)); }
	inline String_t* get_iso3lang_21() const { return ___iso3lang_21; }
	inline String_t** get_address_of_iso3lang_21() { return &___iso3lang_21; }
	inline void set_iso3lang_21(String_t* value)
	{
		___iso3lang_21 = value;
		Il2CppCodeGenWriteBarrier(&___iso3lang_21, value);
	}

	inline static int32_t get_offset_of_iso2lang_22() { return static_cast<int32_t>(offsetof(CultureInfo_t3603717042, ___iso2lang_22)); }
	inline String_t* get_iso2lang_22() const { return ___iso2lang_22; }
	inline String_t** get_address_of_iso2lang_22() { return &___iso2lang_22; }
	inline void set_iso2lang_22(String_t* value)
	{
		___iso2lang_22 = value;
		Il2CppCodeGenWriteBarrier(&___iso2lang_22, value);
	}

	inline static int32_t get_offset_of_icu_name_23() { return static_cast<int32_t>(offsetof(CultureInfo_t3603717042, ___icu_name_23)); }
	inline String_t* get_icu_name_23() const { return ___icu_name_23; }
	inline String_t** get_address_of_icu_name_23() { return &___icu_name_23; }
	inline void set_icu_name_23(String_t* value)
	{
		___icu_name_23 = value;
		Il2CppCodeGenWriteBarrier(&___icu_name_23, value);
	}

	inline static int32_t get_offset_of_win3lang_24() { return static_cast<int32_t>(offsetof(CultureInfo_t3603717042, ___win3lang_24)); }
	inline String_t* get_win3lang_24() const { return ___win3lang_24; }
	inline String_t** get_address_of_win3lang_24() { return &___win3lang_24; }
	inline void set_win3lang_24(String_t* value)
	{
		___win3lang_24 = value;
		Il2CppCodeGenWriteBarrier(&___win3lang_24, value);
	}

	inline static int32_t get_offset_of_territory_25() { return static_cast<int32_t>(offsetof(CultureInfo_t3603717042, ___territory_25)); }
	inline String_t* get_territory_25() const { return ___territory_25; }
	inline String_t** get_address_of_territory_25() { return &___territory_25; }
	inline void set_territory_25(String_t* value)
	{
		___territory_25 = value;
		Il2CppCodeGenWriteBarrier(&___territory_25, value);
	}

	inline static int32_t get_offset_of_compareInfo_26() { return static_cast<int32_t>(offsetof(CultureInfo_t3603717042, ___compareInfo_26)); }
	inline CompareInfo_t4023832425 * get_compareInfo_26() const { return ___compareInfo_26; }
	inline CompareInfo_t4023832425 ** get_address_of_compareInfo_26() { return &___compareInfo_26; }
	inline void set_compareInfo_26(CompareInfo_t4023832425 * value)
	{
		___compareInfo_26 = value;
		Il2CppCodeGenWriteBarrier(&___compareInfo_26, value);
	}

	inline static int32_t get_offset_of_calendar_data_27() { return static_cast<int32_t>(offsetof(CultureInfo_t3603717042, ___calendar_data_27)); }
	inline int32_t* get_calendar_data_27() const { return ___calendar_data_27; }
	inline int32_t** get_address_of_calendar_data_27() { return &___calendar_data_27; }
	inline void set_calendar_data_27(int32_t* value)
	{
		___calendar_data_27 = value;
	}

	inline static int32_t get_offset_of_textinfo_data_28() { return static_cast<int32_t>(offsetof(CultureInfo_t3603717042, ___textinfo_data_28)); }
	inline void* get_textinfo_data_28() const { return ___textinfo_data_28; }
	inline void** get_address_of_textinfo_data_28() { return &___textinfo_data_28; }
	inline void set_textinfo_data_28(void* value)
	{
		___textinfo_data_28 = value;
	}

	inline static int32_t get_offset_of_optional_calendars_29() { return static_cast<int32_t>(offsetof(CultureInfo_t3603717042, ___optional_calendars_29)); }
	inline CalendarU5BU5D_t1613826813* get_optional_calendars_29() const { return ___optional_calendars_29; }
	inline CalendarU5BU5D_t1613826813** get_address_of_optional_calendars_29() { return &___optional_calendars_29; }
	inline void set_optional_calendars_29(CalendarU5BU5D_t1613826813* value)
	{
		___optional_calendars_29 = value;
		Il2CppCodeGenWriteBarrier(&___optional_calendars_29, value);
	}

	inline static int32_t get_offset_of_parent_culture_30() { return static_cast<int32_t>(offsetof(CultureInfo_t3603717042, ___parent_culture_30)); }
	inline CultureInfo_t3603717042 * get_parent_culture_30() const { return ___parent_culture_30; }
	inline CultureInfo_t3603717042 ** get_address_of_parent_culture_30() { return &___parent_culture_30; }
	inline void set_parent_culture_30(CultureInfo_t3603717042 * value)
	{
		___parent_culture_30 = value;
		Il2CppCodeGenWriteBarrier(&___parent_culture_30, value);
	}

	inline static int32_t get_offset_of_m_dataItem_31() { return static_cast<int32_t>(offsetof(CultureInfo_t3603717042, ___m_dataItem_31)); }
	inline int32_t get_m_dataItem_31() const { return ___m_dataItem_31; }
	inline int32_t* get_address_of_m_dataItem_31() { return &___m_dataItem_31; }
	inline void set_m_dataItem_31(int32_t value)
	{
		___m_dataItem_31 = value;
	}

	inline static int32_t get_offset_of_calendar_32() { return static_cast<int32_t>(offsetof(CultureInfo_t3603717042, ___calendar_32)); }
	inline Calendar_t2654956468 * get_calendar_32() const { return ___calendar_32; }
	inline Calendar_t2654956468 ** get_address_of_calendar_32() { return &___calendar_32; }
	inline void set_calendar_32(Calendar_t2654956468 * value)
	{
		___calendar_32 = value;
		Il2CppCodeGenWriteBarrier(&___calendar_32, value);
	}

	inline static int32_t get_offset_of_constructed_33() { return static_cast<int32_t>(offsetof(CultureInfo_t3603717042, ___constructed_33)); }
	inline bool get_constructed_33() const { return ___constructed_33; }
	inline bool* get_address_of_constructed_33() { return &___constructed_33; }
	inline void set_constructed_33(bool value)
	{
		___constructed_33 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_34() { return static_cast<int32_t>(offsetof(CultureInfo_t3603717042, ___cached_serialized_form_34)); }
	inline ByteU5BU5D_t58506160* get_cached_serialized_form_34() const { return ___cached_serialized_form_34; }
	inline ByteU5BU5D_t58506160** get_address_of_cached_serialized_form_34() { return &___cached_serialized_form_34; }
	inline void set_cached_serialized_form_34(ByteU5BU5D_t58506160* value)
	{
		___cached_serialized_form_34 = value;
		Il2CppCodeGenWriteBarrier(&___cached_serialized_form_34, value);
	}
};

struct CultureInfo_t3603717042_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t3603717042 * ___invariant_culture_info_4;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	Il2CppObject * ___shared_table_lock_5;
	// System.Int32 System.Globalization.CultureInfo::BootstrapCultureID
	int32_t ___BootstrapCultureID_6;
	// System.String System.Globalization.CultureInfo::MSG_READONLY
	String_t* ___MSG_READONLY_35;
	// System.Collections.Hashtable System.Globalization.CultureInfo::shared_by_number
	Hashtable_t3875263730 * ___shared_by_number_36;
	// System.Collections.Hashtable System.Globalization.CultureInfo::shared_by_name
	Hashtable_t3875263730 * ___shared_by_name_37;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Globalization.CultureInfo::<>f__switch$map19
	Dictionary_2_t190145395 * ___U3CU3Ef__switchU24map19_38;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Globalization.CultureInfo::<>f__switch$map1A
	Dictionary_2_t190145395 * ___U3CU3Ef__switchU24map1A_39;

public:
	inline static int32_t get_offset_of_invariant_culture_info_4() { return static_cast<int32_t>(offsetof(CultureInfo_t3603717042_StaticFields, ___invariant_culture_info_4)); }
	inline CultureInfo_t3603717042 * get_invariant_culture_info_4() const { return ___invariant_culture_info_4; }
	inline CultureInfo_t3603717042 ** get_address_of_invariant_culture_info_4() { return &___invariant_culture_info_4; }
	inline void set_invariant_culture_info_4(CultureInfo_t3603717042 * value)
	{
		___invariant_culture_info_4 = value;
		Il2CppCodeGenWriteBarrier(&___invariant_culture_info_4, value);
	}

	inline static int32_t get_offset_of_shared_table_lock_5() { return static_cast<int32_t>(offsetof(CultureInfo_t3603717042_StaticFields, ___shared_table_lock_5)); }
	inline Il2CppObject * get_shared_table_lock_5() const { return ___shared_table_lock_5; }
	inline Il2CppObject ** get_address_of_shared_table_lock_5() { return &___shared_table_lock_5; }
	inline void set_shared_table_lock_5(Il2CppObject * value)
	{
		___shared_table_lock_5 = value;
		Il2CppCodeGenWriteBarrier(&___shared_table_lock_5, value);
	}

	inline static int32_t get_offset_of_BootstrapCultureID_6() { return static_cast<int32_t>(offsetof(CultureInfo_t3603717042_StaticFields, ___BootstrapCultureID_6)); }
	inline int32_t get_BootstrapCultureID_6() const { return ___BootstrapCultureID_6; }
	inline int32_t* get_address_of_BootstrapCultureID_6() { return &___BootstrapCultureID_6; }
	inline void set_BootstrapCultureID_6(int32_t value)
	{
		___BootstrapCultureID_6 = value;
	}

	inline static int32_t get_offset_of_MSG_READONLY_35() { return static_cast<int32_t>(offsetof(CultureInfo_t3603717042_StaticFields, ___MSG_READONLY_35)); }
	inline String_t* get_MSG_READONLY_35() const { return ___MSG_READONLY_35; }
	inline String_t** get_address_of_MSG_READONLY_35() { return &___MSG_READONLY_35; }
	inline void set_MSG_READONLY_35(String_t* value)
	{
		___MSG_READONLY_35 = value;
		Il2CppCodeGenWriteBarrier(&___MSG_READONLY_35, value);
	}

	inline static int32_t get_offset_of_shared_by_number_36() { return static_cast<int32_t>(offsetof(CultureInfo_t3603717042_StaticFields, ___shared_by_number_36)); }
	inline Hashtable_t3875263730 * get_shared_by_number_36() const { return ___shared_by_number_36; }
	inline Hashtable_t3875263730 ** get_address_of_shared_by_number_36() { return &___shared_by_number_36; }
	inline void set_shared_by_number_36(Hashtable_t3875263730 * value)
	{
		___shared_by_number_36 = value;
		Il2CppCodeGenWriteBarrier(&___shared_by_number_36, value);
	}

	inline static int32_t get_offset_of_shared_by_name_37() { return static_cast<int32_t>(offsetof(CultureInfo_t3603717042_StaticFields, ___shared_by_name_37)); }
	inline Hashtable_t3875263730 * get_shared_by_name_37() const { return ___shared_by_name_37; }
	inline Hashtable_t3875263730 ** get_address_of_shared_by_name_37() { return &___shared_by_name_37; }
	inline void set_shared_by_name_37(Hashtable_t3875263730 * value)
	{
		___shared_by_name_37 = value;
		Il2CppCodeGenWriteBarrier(&___shared_by_name_37, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map19_38() { return static_cast<int32_t>(offsetof(CultureInfo_t3603717042_StaticFields, ___U3CU3Ef__switchU24map19_38)); }
	inline Dictionary_2_t190145395 * get_U3CU3Ef__switchU24map19_38() const { return ___U3CU3Ef__switchU24map19_38; }
	inline Dictionary_2_t190145395 ** get_address_of_U3CU3Ef__switchU24map19_38() { return &___U3CU3Ef__switchU24map19_38; }
	inline void set_U3CU3Ef__switchU24map19_38(Dictionary_2_t190145395 * value)
	{
		___U3CU3Ef__switchU24map19_38 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map19_38, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1A_39() { return static_cast<int32_t>(offsetof(CultureInfo_t3603717042_StaticFields, ___U3CU3Ef__switchU24map1A_39)); }
	inline Dictionary_2_t190145395 * get_U3CU3Ef__switchU24map1A_39() const { return ___U3CU3Ef__switchU24map1A_39; }
	inline Dictionary_2_t190145395 ** get_address_of_U3CU3Ef__switchU24map1A_39() { return &___U3CU3Ef__switchU24map1A_39; }
	inline void set_U3CU3Ef__switchU24map1A_39(Dictionary_2_t190145395 * value)
	{
		___U3CU3Ef__switchU24map1A_39 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map1A_39, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
