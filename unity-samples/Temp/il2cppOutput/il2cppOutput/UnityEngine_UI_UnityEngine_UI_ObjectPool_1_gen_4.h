#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
struct Stack_1_t2450;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
struct UnityAction_1_t2449;

#include "mscorlib_System_Object.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
struct  ObjectPool_1_t2448  : public Object_t
{
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::m_Stack
	Stack_1_t2450 * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::m_ActionOnGet
	UnityAction_1_t2449 * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::m_ActionOnRelease
	UnityAction_1_t2449 * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;
};
