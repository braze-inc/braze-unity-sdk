#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object[]
struct ObjectU5BU5D_t11523773;
// System.Type
struct Type_t;
// Boo.Lang.Runtime.DynamicDispatching.DispatcherCache
struct DispatcherCache_t1616774716;
// Boo.Lang.Runtime.ExtensionRegistry
struct ExtensionRegistry_t1860696520;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Boo.Lang.Runtime.RuntimeServices
struct  RuntimeServices_t2273795202  : public Il2CppObject
{
public:

public:
};

struct RuntimeServices_t2273795202_StaticFields
{
public:
	// System.Object[] Boo.Lang.Runtime.RuntimeServices::NoArguments
	ObjectU5BU5D_t11523773* ___NoArguments_0;
	// System.Type Boo.Lang.Runtime.RuntimeServices::RuntimeServicesType
	Type_t * ___RuntimeServicesType_1;
	// Boo.Lang.Runtime.DynamicDispatching.DispatcherCache Boo.Lang.Runtime.RuntimeServices::_cache
	DispatcherCache_t1616774716 * ____cache_2;
	// Boo.Lang.Runtime.ExtensionRegistry Boo.Lang.Runtime.RuntimeServices::_extensions
	ExtensionRegistry_t1860696520 * ____extensions_3;
	// System.Object Boo.Lang.Runtime.RuntimeServices::True
	Il2CppObject * ___True_4;

public:
	inline static int32_t get_offset_of_NoArguments_0() { return static_cast<int32_t>(offsetof(RuntimeServices_t2273795202_StaticFields, ___NoArguments_0)); }
	inline ObjectU5BU5D_t11523773* get_NoArguments_0() const { return ___NoArguments_0; }
	inline ObjectU5BU5D_t11523773** get_address_of_NoArguments_0() { return &___NoArguments_0; }
	inline void set_NoArguments_0(ObjectU5BU5D_t11523773* value)
	{
		___NoArguments_0 = value;
		Il2CppCodeGenWriteBarrier(&___NoArguments_0, value);
	}

	inline static int32_t get_offset_of_RuntimeServicesType_1() { return static_cast<int32_t>(offsetof(RuntimeServices_t2273795202_StaticFields, ___RuntimeServicesType_1)); }
	inline Type_t * get_RuntimeServicesType_1() const { return ___RuntimeServicesType_1; }
	inline Type_t ** get_address_of_RuntimeServicesType_1() { return &___RuntimeServicesType_1; }
	inline void set_RuntimeServicesType_1(Type_t * value)
	{
		___RuntimeServicesType_1 = value;
		Il2CppCodeGenWriteBarrier(&___RuntimeServicesType_1, value);
	}

	inline static int32_t get_offset_of__cache_2() { return static_cast<int32_t>(offsetof(RuntimeServices_t2273795202_StaticFields, ____cache_2)); }
	inline DispatcherCache_t1616774716 * get__cache_2() const { return ____cache_2; }
	inline DispatcherCache_t1616774716 ** get_address_of__cache_2() { return &____cache_2; }
	inline void set__cache_2(DispatcherCache_t1616774716 * value)
	{
		____cache_2 = value;
		Il2CppCodeGenWriteBarrier(&____cache_2, value);
	}

	inline static int32_t get_offset_of__extensions_3() { return static_cast<int32_t>(offsetof(RuntimeServices_t2273795202_StaticFields, ____extensions_3)); }
	inline ExtensionRegistry_t1860696520 * get__extensions_3() const { return ____extensions_3; }
	inline ExtensionRegistry_t1860696520 ** get_address_of__extensions_3() { return &____extensions_3; }
	inline void set__extensions_3(ExtensionRegistry_t1860696520 * value)
	{
		____extensions_3 = value;
		Il2CppCodeGenWriteBarrier(&____extensions_3, value);
	}

	inline static int32_t get_offset_of_True_4() { return static_cast<int32_t>(offsetof(RuntimeServices_t2273795202_StaticFields, ___True_4)); }
	inline Il2CppObject * get_True_4() const { return ___True_4; }
	inline Il2CppObject ** get_address_of_True_4() { return &___True_4; }
	inline void set_True_4(Il2CppObject * value)
	{
		___True_4 = value;
		Il2CppCodeGenWriteBarrier(&___True_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
