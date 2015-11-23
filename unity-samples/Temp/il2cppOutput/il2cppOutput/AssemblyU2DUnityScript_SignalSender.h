#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ReceiverItem[]
struct ReceiverItemU5BU5D_t388;

#include "mscorlib_System_Object.h"

// SignalSender
struct  SignalSender_t361  : public Object_t
{
	// System.Boolean SignalSender::onlyOnce
	bool ___onlyOnce_0;
	// ReceiverItem[] SignalSender::receivers
	ReceiverItemU5BU5D_t388* ___receivers_1;
	// System.Boolean SignalSender::hasFired
	bool ___hasFired_2;
};
