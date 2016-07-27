#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// Boo.Lang.Runtime.DynamicDispatching.DispatcherKey
struct DispatcherKey_t3258056537;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher
struct Dispatcher_t1056575496;

#include "mscorlib_System_Array2840145358.h"
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_Dispa3258056537.h"
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_Dispa1056575496.h"

#pragma once
// Boo.Lang.Runtime.DynamicDispatching.DispatcherKey[]
struct DispatcherKeyU5BU5D_t3712336676  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) DispatcherKey_t3258056537 * m_Items[1];

public:
	inline DispatcherKey_t3258056537 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline DispatcherKey_t3258056537 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, DispatcherKey_t3258056537 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher[]
struct DispatcherU5BU5D_t2782971609  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) Dispatcher_t1056575496 * m_Items[1];

public:
	inline Dispatcher_t1056575496 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Dispatcher_t1056575496 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Dispatcher_t1056575496 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
