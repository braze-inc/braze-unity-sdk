#pragma once
#include <stdint.h>
// ReceiverItem[]
struct ReceiverItemU5BU5D_t433;
// System.Object
#include "mscorlib_System_Object.h"
// SignalSender
struct SignalSender_t404  : public Object_t
{
	// System.Boolean SignalSender::onlyOnce
	bool ___onlyOnce_0;
	// ReceiverItem[] SignalSender::receivers
	ReceiverItemU5BU5D_t433* ___receivers_1;
	// System.Boolean SignalSender::hasFired
	bool ___hasFired_2;
};
