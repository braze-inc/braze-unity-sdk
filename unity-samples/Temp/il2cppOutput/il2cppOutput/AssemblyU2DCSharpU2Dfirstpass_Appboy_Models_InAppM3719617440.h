#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t2606186806;

#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Nullable_1_gen179246372.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Appboy_Models_ClickA3405174461.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Appboy_Models_Dismis1221610947.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Appboy.Models.InAppMessage.InAppMessageBase
struct  InAppMessageBase_t3719617440  : public Il2CppObject
{
public:
	// System.String Appboy.Models.InAppMessage.InAppMessageBase::_jsonString
	String_t* ____jsonString_1;
	// System.Boolean Appboy.Models.InAppMessage.InAppMessageBase::_clickLogged
	bool ____clickLogged_2;
	// System.Boolean Appboy.Models.InAppMessage.InAppMessageBase::_impressionLogged
	bool ____impressionLogged_3;
	// System.Int32 Appboy.Models.InAppMessage.InAppMessageBase::_duration
	int32_t ____duration_4;
	// System.Nullable`1<UnityEngine.Color> Appboy.Models.InAppMessage.InAppMessageBase::<BackgroundColor>k__BackingField
	Nullable_1_t179246372  ___U3CBackgroundColorU3Ek__BackingField_5;
	// System.Nullable`1<UnityEngine.Color> Appboy.Models.InAppMessage.InAppMessageBase::<TextColor>k__BackingField
	Nullable_1_t179246372  ___U3CTextColorU3Ek__BackingField_6;
	// System.String Appboy.Models.InAppMessage.InAppMessageBase::<Icon>k__BackingField
	String_t* ___U3CIconU3Ek__BackingField_7;
	// System.Nullable`1<UnityEngine.Color> Appboy.Models.InAppMessage.InAppMessageBase::<IconColor>k__BackingField
	Nullable_1_t179246372  ___U3CIconColorU3Ek__BackingField_8;
	// System.Nullable`1<UnityEngine.Color> Appboy.Models.InAppMessage.InAppMessageBase::<IconBackgroundColor>k__BackingField
	Nullable_1_t179246372  ___U3CIconBackgroundColorU3Ek__BackingField_9;
	// System.String Appboy.Models.InAppMessage.InAppMessageBase::<ImageURI>k__BackingField
	String_t* ___U3CImageURIU3Ek__BackingField_10;
	// System.String Appboy.Models.InAppMessage.InAppMessageBase::<Message>k__BackingField
	String_t* ___U3CMessageU3Ek__BackingField_11;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Appboy.Models.InAppMessage.InAppMessageBase::<Extras>k__BackingField
	Dictionary_2_t2606186806 * ___U3CExtrasU3Ek__BackingField_12;
	// Appboy.Models.ClickAction Appboy.Models.InAppMessage.InAppMessageBase::<InAppClickAction>k__BackingField
	int32_t ___U3CInAppClickActionU3Ek__BackingField_13;
	// System.String Appboy.Models.InAppMessage.InAppMessageBase::<URI>k__BackingField
	String_t* ___U3CURIU3Ek__BackingField_14;
	// Appboy.Models.DismissType Appboy.Models.InAppMessage.InAppMessageBase::<InAppDismissType>k__BackingField
	int32_t ___U3CInAppDismissTypeU3Ek__BackingField_15;

public:
	inline static int32_t get_offset_of__jsonString_1() { return static_cast<int32_t>(offsetof(InAppMessageBase_t3719617440, ____jsonString_1)); }
	inline String_t* get__jsonString_1() const { return ____jsonString_1; }
	inline String_t** get_address_of__jsonString_1() { return &____jsonString_1; }
	inline void set__jsonString_1(String_t* value)
	{
		____jsonString_1 = value;
		Il2CppCodeGenWriteBarrier(&____jsonString_1, value);
	}

	inline static int32_t get_offset_of__clickLogged_2() { return static_cast<int32_t>(offsetof(InAppMessageBase_t3719617440, ____clickLogged_2)); }
	inline bool get__clickLogged_2() const { return ____clickLogged_2; }
	inline bool* get_address_of__clickLogged_2() { return &____clickLogged_2; }
	inline void set__clickLogged_2(bool value)
	{
		____clickLogged_2 = value;
	}

	inline static int32_t get_offset_of__impressionLogged_3() { return static_cast<int32_t>(offsetof(InAppMessageBase_t3719617440, ____impressionLogged_3)); }
	inline bool get__impressionLogged_3() const { return ____impressionLogged_3; }
	inline bool* get_address_of__impressionLogged_3() { return &____impressionLogged_3; }
	inline void set__impressionLogged_3(bool value)
	{
		____impressionLogged_3 = value;
	}

	inline static int32_t get_offset_of__duration_4() { return static_cast<int32_t>(offsetof(InAppMessageBase_t3719617440, ____duration_4)); }
	inline int32_t get__duration_4() const { return ____duration_4; }
	inline int32_t* get_address_of__duration_4() { return &____duration_4; }
	inline void set__duration_4(int32_t value)
	{
		____duration_4 = value;
	}

	inline static int32_t get_offset_of_U3CBackgroundColorU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(InAppMessageBase_t3719617440, ___U3CBackgroundColorU3Ek__BackingField_5)); }
	inline Nullable_1_t179246372  get_U3CBackgroundColorU3Ek__BackingField_5() const { return ___U3CBackgroundColorU3Ek__BackingField_5; }
	inline Nullable_1_t179246372 * get_address_of_U3CBackgroundColorU3Ek__BackingField_5() { return &___U3CBackgroundColorU3Ek__BackingField_5; }
	inline void set_U3CBackgroundColorU3Ek__BackingField_5(Nullable_1_t179246372  value)
	{
		___U3CBackgroundColorU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CTextColorU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(InAppMessageBase_t3719617440, ___U3CTextColorU3Ek__BackingField_6)); }
	inline Nullable_1_t179246372  get_U3CTextColorU3Ek__BackingField_6() const { return ___U3CTextColorU3Ek__BackingField_6; }
	inline Nullable_1_t179246372 * get_address_of_U3CTextColorU3Ek__BackingField_6() { return &___U3CTextColorU3Ek__BackingField_6; }
	inline void set_U3CTextColorU3Ek__BackingField_6(Nullable_1_t179246372  value)
	{
		___U3CTextColorU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CIconU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(InAppMessageBase_t3719617440, ___U3CIconU3Ek__BackingField_7)); }
	inline String_t* get_U3CIconU3Ek__BackingField_7() const { return ___U3CIconU3Ek__BackingField_7; }
	inline String_t** get_address_of_U3CIconU3Ek__BackingField_7() { return &___U3CIconU3Ek__BackingField_7; }
	inline void set_U3CIconU3Ek__BackingField_7(String_t* value)
	{
		___U3CIconU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CIconU3Ek__BackingField_7, value);
	}

	inline static int32_t get_offset_of_U3CIconColorU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(InAppMessageBase_t3719617440, ___U3CIconColorU3Ek__BackingField_8)); }
	inline Nullable_1_t179246372  get_U3CIconColorU3Ek__BackingField_8() const { return ___U3CIconColorU3Ek__BackingField_8; }
	inline Nullable_1_t179246372 * get_address_of_U3CIconColorU3Ek__BackingField_8() { return &___U3CIconColorU3Ek__BackingField_8; }
	inline void set_U3CIconColorU3Ek__BackingField_8(Nullable_1_t179246372  value)
	{
		___U3CIconColorU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CIconBackgroundColorU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(InAppMessageBase_t3719617440, ___U3CIconBackgroundColorU3Ek__BackingField_9)); }
	inline Nullable_1_t179246372  get_U3CIconBackgroundColorU3Ek__BackingField_9() const { return ___U3CIconBackgroundColorU3Ek__BackingField_9; }
	inline Nullable_1_t179246372 * get_address_of_U3CIconBackgroundColorU3Ek__BackingField_9() { return &___U3CIconBackgroundColorU3Ek__BackingField_9; }
	inline void set_U3CIconBackgroundColorU3Ek__BackingField_9(Nullable_1_t179246372  value)
	{
		___U3CIconBackgroundColorU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CImageURIU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(InAppMessageBase_t3719617440, ___U3CImageURIU3Ek__BackingField_10)); }
	inline String_t* get_U3CImageURIU3Ek__BackingField_10() const { return ___U3CImageURIU3Ek__BackingField_10; }
	inline String_t** get_address_of_U3CImageURIU3Ek__BackingField_10() { return &___U3CImageURIU3Ek__BackingField_10; }
	inline void set_U3CImageURIU3Ek__BackingField_10(String_t* value)
	{
		___U3CImageURIU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CImageURIU3Ek__BackingField_10, value);
	}

	inline static int32_t get_offset_of_U3CMessageU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(InAppMessageBase_t3719617440, ___U3CMessageU3Ek__BackingField_11)); }
	inline String_t* get_U3CMessageU3Ek__BackingField_11() const { return ___U3CMessageU3Ek__BackingField_11; }
	inline String_t** get_address_of_U3CMessageU3Ek__BackingField_11() { return &___U3CMessageU3Ek__BackingField_11; }
	inline void set_U3CMessageU3Ek__BackingField_11(String_t* value)
	{
		___U3CMessageU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CMessageU3Ek__BackingField_11, value);
	}

	inline static int32_t get_offset_of_U3CExtrasU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(InAppMessageBase_t3719617440, ___U3CExtrasU3Ek__BackingField_12)); }
	inline Dictionary_2_t2606186806 * get_U3CExtrasU3Ek__BackingField_12() const { return ___U3CExtrasU3Ek__BackingField_12; }
	inline Dictionary_2_t2606186806 ** get_address_of_U3CExtrasU3Ek__BackingField_12() { return &___U3CExtrasU3Ek__BackingField_12; }
	inline void set_U3CExtrasU3Ek__BackingField_12(Dictionary_2_t2606186806 * value)
	{
		___U3CExtrasU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3CExtrasU3Ek__BackingField_12, value);
	}

	inline static int32_t get_offset_of_U3CInAppClickActionU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(InAppMessageBase_t3719617440, ___U3CInAppClickActionU3Ek__BackingField_13)); }
	inline int32_t get_U3CInAppClickActionU3Ek__BackingField_13() const { return ___U3CInAppClickActionU3Ek__BackingField_13; }
	inline int32_t* get_address_of_U3CInAppClickActionU3Ek__BackingField_13() { return &___U3CInAppClickActionU3Ek__BackingField_13; }
	inline void set_U3CInAppClickActionU3Ek__BackingField_13(int32_t value)
	{
		___U3CInAppClickActionU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CURIU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(InAppMessageBase_t3719617440, ___U3CURIU3Ek__BackingField_14)); }
	inline String_t* get_U3CURIU3Ek__BackingField_14() const { return ___U3CURIU3Ek__BackingField_14; }
	inline String_t** get_address_of_U3CURIU3Ek__BackingField_14() { return &___U3CURIU3Ek__BackingField_14; }
	inline void set_U3CURIU3Ek__BackingField_14(String_t* value)
	{
		___U3CURIU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier(&___U3CURIU3Ek__BackingField_14, value);
	}

	inline static int32_t get_offset_of_U3CInAppDismissTypeU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(InAppMessageBase_t3719617440, ___U3CInAppDismissTypeU3Ek__BackingField_15)); }
	inline int32_t get_U3CInAppDismissTypeU3Ek__BackingField_15() const { return ___U3CInAppDismissTypeU3Ek__BackingField_15; }
	inline int32_t* get_address_of_U3CInAppDismissTypeU3Ek__BackingField_15() { return &___U3CInAppDismissTypeU3Ek__BackingField_15; }
	inline void set_U3CInAppDismissTypeU3Ek__BackingField_15(int32_t value)
	{
		___U3CInAppDismissTypeU3Ek__BackingField_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
