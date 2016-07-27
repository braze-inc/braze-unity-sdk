#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// Appboy.Models.InAppMessage.InAppMessageButton
struct InAppMessageButton_t2191953217;
// Appboy.Models.Cards.Card
struct Card_t3418548774;
// Appboy.Utilities.JSONNode
struct JSONNode_t1834608295;

#include "mscorlib_System_Array2840145358.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Appboy_Models_InAppM2191953217.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Appboy_Models_Cards_3418548774.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Appboy_Utilities_JSO1834608295.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Appboy_Models_CardCa1604199757.h"

#pragma once
// Appboy.Models.InAppMessage.InAppMessageButton[]
struct InAppMessageButtonU5BU5D_t928512156  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) InAppMessageButton_t2191953217 * m_Items[1];

public:
	inline InAppMessageButton_t2191953217 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline InAppMessageButton_t2191953217 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, InAppMessageButton_t2191953217 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Appboy.Models.Cards.Card[]
struct CardU5BU5D_t2030459523  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) Card_t3418548774 * m_Items[1];

public:
	inline Card_t3418548774 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Card_t3418548774 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Card_t3418548774 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Appboy.Utilities.JSONNode[]
struct JSONNodeU5BU5D_t4076076766  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) JSONNode_t1834608295 * m_Items[1];

public:
	inline JSONNode_t1834608295 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline JSONNode_t1834608295 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, JSONNode_t1834608295 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Appboy.Models.CardCategory[]
struct CardCategoryU5BU5D_t3105268448  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline int32_t* GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
