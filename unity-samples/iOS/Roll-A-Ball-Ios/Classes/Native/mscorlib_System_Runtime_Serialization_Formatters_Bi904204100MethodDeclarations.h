#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Object
struct Il2CppObject;
// System.IO.BinaryReader
struct BinaryReader_t2158806251;
// System.Runtime.Remoting.Messaging.HeaderHandler
struct HeaderHandler_t379822999;
// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct BinaryFormatter_t341659722;
// System.Runtime.Remoting.Messaging.IMethodCallMessage
struct IMethodCallMessage_t2352624281;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_B2264754748.h"
#include "mscorlib_System_IO_BinaryReader2158806251.h"
#include "mscorlib_System_Runtime_Remoting_Messaging_HeaderHa379822999.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_Bi341659722.h"

// System.Object System.Runtime.Serialization.Formatters.Binary.MessageFormatter::ReadMethodCall(System.Runtime.Serialization.Formatters.Binary.BinaryElement,System.IO.BinaryReader,System.Boolean,System.Runtime.Remoting.Messaging.HeaderHandler,System.Runtime.Serialization.Formatters.Binary.BinaryFormatter)
extern "C"  Il2CppObject * MessageFormatter_ReadMethodCall_m3773075223 (Il2CppObject * __this /* static, unused */, uint8_t ___elem, BinaryReader_t2158806251 * ___reader, bool ___hasHeaders, HeaderHandler_t379822999 * ___headerHandler, BinaryFormatter_t341659722 * ___formatter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.Formatters.Binary.MessageFormatter::ReadMethodResponse(System.Runtime.Serialization.Formatters.Binary.BinaryElement,System.IO.BinaryReader,System.Boolean,System.Runtime.Remoting.Messaging.HeaderHandler,System.Runtime.Remoting.Messaging.IMethodCallMessage,System.Runtime.Serialization.Formatters.Binary.BinaryFormatter)
extern "C"  Il2CppObject * MessageFormatter_ReadMethodResponse_m1841037205 (Il2CppObject * __this /* static, unused */, uint8_t ___elem, BinaryReader_t2158806251 * ___reader, bool ___hasHeaders, HeaderHandler_t379822999 * ___headerHandler, Il2CppObject * ___methodCallMessage, BinaryFormatter_t341659722 * ___formatter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
