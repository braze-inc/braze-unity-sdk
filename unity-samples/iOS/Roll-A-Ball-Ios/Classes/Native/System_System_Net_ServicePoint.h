#pragma once
#include <stdint.h>
// System.Uri
struct Uri_t61;
// System.Object
struct Object_t;
// System.Object
#include "mscorlib_System_Object.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Net.ServicePoint
struct ServicePoint_t1536  : public Object_t
{
	// System.Uri System.Net.ServicePoint::uri
	Uri_t61 * ___uri_0;
	// System.Int32 System.Net.ServicePoint::connectionLimit
	int32_t ___connectionLimit_1;
	// System.Int32 System.Net.ServicePoint::maxIdleTime
	int32_t ___maxIdleTime_2;
	// System.Int32 System.Net.ServicePoint::currentConnections
	int32_t ___currentConnections_3;
	// System.DateTime System.Net.ServicePoint::idleSince
	DateTime_t837  ___idleSince_4;
	// System.Boolean System.Net.ServicePoint::usesProxy
	bool ___usesProxy_5;
	// System.Boolean System.Net.ServicePoint::sendContinue
	bool ___sendContinue_6;
	// System.Boolean System.Net.ServicePoint::useConnect
	bool ___useConnect_7;
	// System.Object System.Net.ServicePoint::locker
	Object_t * ___locker_8;
	// System.Object System.Net.ServicePoint::hostE
	Object_t * ___hostE_9;
	// System.Boolean System.Net.ServicePoint::useNagle
	bool ___useNagle_10;
};
