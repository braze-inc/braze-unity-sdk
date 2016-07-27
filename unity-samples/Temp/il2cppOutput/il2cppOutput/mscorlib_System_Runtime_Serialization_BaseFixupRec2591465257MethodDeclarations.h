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

// System.Runtime.Serialization.BaseFixupRecord
struct BaseFixupRecord_t2591465257;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t3468179849;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t2776331335;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_ObjectRecord3468179849.h"
#include "mscorlib_System_Runtime_Serialization_ObjectManage2776331335.h"

// System.Void System.Runtime.Serialization.BaseFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Runtime.Serialization.ObjectRecord)
extern "C"  void BaseFixupRecord__ctor_m1604080483 (BaseFixupRecord_t2591465257 * __this, ObjectRecord_t3468179849 * ___objectToBeFixed0, ObjectRecord_t3468179849 * ___objectRequired1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.BaseFixupRecord::DoFixup(System.Runtime.Serialization.ObjectManager,System.Boolean)
extern "C"  bool BaseFixupRecord_DoFixup_m3820060226 (BaseFixupRecord_t2591465257 * __this, ObjectManager_t2776331335 * ___manager0, bool ___strict1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
