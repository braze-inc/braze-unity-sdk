#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Globalization.CultureInfo
struct CultureInfo_t1065;
// System.Object
#include "mscorlib_System_Object.h"
// System.Globalization.TextInfo/Data
#include "mscorlib_System_Globalization_TextInfo_Data.h"
// System.Globalization.TextInfo
struct TextInfo_t1794  : public Object_t
{
	// System.Boolean System.Globalization.TextInfo::m_isReadOnly
	bool ___m_isReadOnly_0;
	// System.String System.Globalization.TextInfo::customCultureName
	String_t* ___customCultureName_1;
	// System.Int32 System.Globalization.TextInfo::m_win32LangID
	int32_t ___m_win32LangID_2;
	// System.Globalization.CultureInfo System.Globalization.TextInfo::ci
	CultureInfo_t1065 * ___ci_3;
	// System.Boolean System.Globalization.TextInfo::handleDotI
	bool ___handleDotI_4;
	// System.Globalization.TextInfo/Data System.Globalization.TextInfo::data
	Data_t1908  ___data_5;
};
