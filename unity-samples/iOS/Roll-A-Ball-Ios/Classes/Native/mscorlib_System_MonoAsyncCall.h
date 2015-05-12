#pragma once
#include <stdint.h>
// System.Object
struct Object_t;
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.MonoAsyncCall
struct MonoAsyncCall_t2273  : public Object_t
{
	// System.Object System.MonoAsyncCall::msg
	Object_t * ___msg_0;
	// System.IntPtr System.MonoAsyncCall::cb_method
	IntPtr_t107 ___cb_method_1;
	// System.Object System.MonoAsyncCall::cb_target
	Object_t * ___cb_target_2;
	// System.Object System.MonoAsyncCall::state
	Object_t * ___state_3;
	// System.Object System.MonoAsyncCall::res
	Object_t * ___res_4;
	// System.Object System.MonoAsyncCall::out_args
	Object_t * ___out_args_5;
	// System.Int64 System.MonoAsyncCall::wait_event
	int64_t ___wait_event_6;
};
