#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t141;
// System.String
struct String_t;

#include "mscorlib_System_Object.h"

// ReceiverItem
struct  ReceiverItem_t386  : public Object_t
{
	// UnityEngine.GameObject ReceiverItem::receiver
	GameObject_t141 * ___receiver_0;
	// System.String ReceiverItem::action
	String_t* ___action_1;
	// System.Single ReceiverItem::delay
	float ___delay_2;
};
