#pragma once
#include <stdint.h>
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t211;
// System.DelegateData
struct DelegateData_t1754;
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Delegate
struct Delegate_t743  : public Object_t
{
	// System.IntPtr System.Delegate::method_ptr
	void (*___method_ptr_0)();
	// System.IntPtr System.Delegate::invoke_impl
	IntPtr_t120 ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	Object_t * ___m_target_2;
	// System.IntPtr System.Delegate::method
	IntPtr_t120 ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	IntPtr_t120 ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	IntPtr_t120 ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t211 * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t211 * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1754 * ___data_8;
};
