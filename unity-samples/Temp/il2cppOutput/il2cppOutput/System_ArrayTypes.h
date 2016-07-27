#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// System.Text.RegularExpressions.Capture
struct Capture_t1645813025;
// System.Text.RegularExpressions.Group
struct Group_t3792618586;

#include "mscorlib_System_Array2840145358.h"
#include "System_System_Security_Cryptography_X509Certificat1122151684.h"
#include "System_System_Text_RegularExpressions_Capture1645813025.h"
#include "System_System_Text_RegularExpressions_Group3792618586.h"
#include "System_System_Text_RegularExpressions_Mark3725932776.h"
#include "System_System_Uri_UriScheme3266528785.h"

#pragma once
// System.Security.Cryptography.X509Certificates.X509ChainStatus[]
struct X509ChainStatusU5BU5D_t256805485  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) X509ChainStatus_t1122151684  m_Items[1];

public:
	inline X509ChainStatus_t1122151684  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline X509ChainStatus_t1122151684 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, X509ChainStatus_t1122151684  value)
	{
		m_Items[index] = value;
	}
};
// System.Text.RegularExpressions.Capture[]
struct CaptureU5BU5D_t3726953788  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) Capture_t1645813025 * m_Items[1];

public:
	inline Capture_t1645813025 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Capture_t1645813025 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Capture_t1645813025 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Text.RegularExpressions.Group[]
struct GroupU5BU5D_t1388768511  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) Group_t3792618586 * m_Items[1];

public:
	inline Group_t3792618586 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Group_t3792618586 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Group_t3792618586 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Text.RegularExpressions.Mark[]
struct MarkU5BU5D_t1555725945  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) Mark_t3725932776  m_Items[1];

public:
	inline Mark_t3725932776  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Mark_t3725932776 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Mark_t3725932776  value)
	{
		m_Items[index] = value;
	}
};
// System.Uri/UriScheme[]
struct UriSchemeU5BU5D_t1246605964  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) UriScheme_t3266528785  m_Items[1];

public:
	inline UriScheme_t3266528785  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline UriScheme_t3266528785 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, UriScheme_t3266528785  value)
	{
		m_Items[index] = value;
	}
};
