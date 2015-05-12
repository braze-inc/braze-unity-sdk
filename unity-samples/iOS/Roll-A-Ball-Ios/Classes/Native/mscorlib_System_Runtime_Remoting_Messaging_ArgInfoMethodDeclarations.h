#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Messaging.ArgInfo
struct ArgInfo_t2050;
// System.Reflection.MethodBase
struct MethodBase_t307;
// System.Object[]
struct ObjectU5BU5D_t112;
// System.Runtime.Remoting.Messaging.ArgInfoType
#include "mscorlib_System_Runtime_Remoting_Messaging_ArgInfoType.h"

// System.Void System.Runtime.Remoting.Messaging.ArgInfo::.ctor(System.Reflection.MethodBase,System.Runtime.Remoting.Messaging.ArgInfoType)
 void ArgInfo__ctor_m10228 (ArgInfo_t2050 * __this, MethodBase_t307 * ___method, uint8_t ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Remoting.Messaging.ArgInfo::GetInOutArgs(System.Object[])
 ObjectU5BU5D_t112* ArgInfo_GetInOutArgs_m10229 (ArgInfo_t2050 * __this, ObjectU5BU5D_t112* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
