#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Stack`1<UnityEngine.UI.LayoutRebuilder>
struct Stack_1_t2557;
// UnityEngine.Events.UnityAction`1<UnityEngine.UI.LayoutRebuilder>
struct UnityAction_1_t626;

#include "mscorlib_System_Object.h"

// UnityEngine.UI.ObjectPool`1<UnityEngine.UI.LayoutRebuilder>
struct  ObjectPool_1_t625  : public Object_t
{
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1<UnityEngine.UI.LayoutRebuilder>::m_Stack
	Stack_1_t2557 * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1<UnityEngine.UI.LayoutRebuilder>::m_ActionOnGet
	UnityAction_1_t626 * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1<UnityEngine.UI.LayoutRebuilder>::m_ActionOnRelease
	UnityAction_1_t626 * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1<UnityEngine.UI.LayoutRebuilder>::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;
};
