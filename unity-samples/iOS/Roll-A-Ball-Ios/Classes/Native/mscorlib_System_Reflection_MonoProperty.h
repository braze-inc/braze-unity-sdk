#pragma once
#include <stdint.h>
// System.Reflection.MonoProperty/GetterAdapter
struct GetterAdapter_t1990;
// System.Reflection.PropertyInfo
#include "mscorlib_System_Reflection_PropertyInfo.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Reflection.MonoPropertyInfo
#include "mscorlib_System_Reflection_MonoPropertyInfo.h"
// System.Reflection.PInfo
#include "mscorlib_System_Reflection_PInfo.h"
// System.Reflection.MonoProperty
struct MonoProperty_t1988  : public PropertyInfo_t197
{
	// System.IntPtr System.Reflection.MonoProperty::klass
	IntPtr_t107 ___klass_0;
	// System.IntPtr System.Reflection.MonoProperty::prop
	IntPtr_t107 ___prop_1;
	// System.Reflection.MonoPropertyInfo System.Reflection.MonoProperty::info
	MonoPropertyInfo_t1987  ___info_2;
	// System.Reflection.PInfo System.Reflection.MonoProperty::cached
	int32_t ___cached_3;
	// System.Reflection.MonoProperty/GetterAdapter System.Reflection.MonoProperty::cached_getter
	GetterAdapter_t1990 * ___cached_getter_4;
};
